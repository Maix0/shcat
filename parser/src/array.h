#ifndef ARRAY_H
#define ARRAY_H
#define Array(T)                                                               \
	struct                                                                     \
	{                                                                          \
		T		*contents;                                                     \
		uint32_t size;                                                         \
		uint32_t capacity;                                                     \
	}

#ifndef inline
# define inline __inline__
#endif

/// Initialize an array.
#define array_init(self)                                                       \
	((self)->size = 0, (self)->capacity = 0, (self)->contents = NULL)

/// Create an empty array.
#define array_new()                                                            \
	{                                                                          \
		NULL, 0, 0                                                             \
	}

/// Get a pointer to the element at a given `index` in the array.
#define array_get(self, _index)                                                \
	(assert((uint32_t)(_index) < (self)->size), &(self)->contents[_index])

/// Get a pointer to the first element in the array.
#define array_front(self) array_get(self, 0)

/// Get a pointer to the last element in the array.
#define array_back(self) array_get(self, (self)->size - 1)

/// Clear the array, setting its size to zero. Note that this does not free any
/// memory allocated for the array's contents.
#define array_clear(self) ((self)->size = 0)

/// Reserve `new_capacity` elements of space in the array. If `new_capacity` is
/// less than the array's current capacity, this function has no effect.
#define array_reserve(self, new_capacity)                                      \
	_array__reserve((Array *)(self), array_elem_size(self), new_capacity)

/// Free any memory allocated for this array. Note that this does not free any
/// memory allocated for the array's contents.
#define array_delete(self) _array__delete((Array *)(self))

/// Push a new `element` onto the end of the array.
#define array_push(self, element)                                              \
	(_array__grow((Array *)(self), 1, array_elem_size(self)),                  \
	 (self)->contents[(self)->size++] = (element))

/// Increase the array's size by `count` elements.
/// New elements are zero-initialized.
#define array_grow_by(self, count)                                             \
	do                                                                         \
	{                                                                          \
		if ((count) == 0)                                                      \
			break;                                                             \
		_array__grow((Array *)(self), count, array_elem_size(self));           \
		memset((self)->contents + (self)->size, 0,                             \
			   (count) * array_elem_size(self));                               \
		(self)->size += (count);                                               \
	} while (0)

/// Append all elements from one array to the end of another.
#define array_push_all(self, other)                                            \
	array_extend((self), (other)->size, (other)->contents)

/// Append `count` elements to the end of the array, reading their values from
/// the `contents` pointer.
#define array_extend(self, count, contents)                                    \
	_array__splice((Array *)(self), array_elem_size(self), (self)->size, 0,    \
				   count, contents)

/// Remove `old_count` elements from the array starting at the given `index`. At
/// the same index, insert `new_count` new elements, reading their values from
/// the `new_contents` pointer.
#define array_splice(self, _index, old_count, new_count, new_contents)         \
	_array__splice((Array *)(self), array_elem_size(self), _index, old_count,  \
				   new_count, new_contents)

/// Insert one `element` into the array at the given `index`.
#define array_insert(self, _index, element)                                    \
	_array__splice((Array *)(self), array_elem_size(self), _index, 0, 1,       \
				   &(element))

/// Remove one element from the array at the given `index`.
#define array_erase(self, _index)                                              \
	_array__erase((Array *)(self), array_elem_size(self), _index)

/// Pop the last element off the array, returning the element by value.
#define array_pop(self) ((self)->contents[--(self)->size])

/// Assign the contents of one array to another, reallocating if necessary.
#define array_assign(self, other)                                              \
	_array__assign((Array *)(self), (const Array *)(other),                    \
				   array_elem_size(self))

/// Swap one array with another
#define array_swap(self, other) _array__swap((Array *)(self), (Array *)(other))

/// Get the size of the array contents
#define array_elem_size(self) (sizeof *(self)->contents)

/// Search a sorted array for a given `needle` value, using the given `compare`
/// callback to determine the order.
///
/// If an existing element is found to be equal to `needle`, then the `index`
/// out-parameter is set to the existing value's index, and the `exists`
/// out-parameter is set to true. Otherwise, `index` is set to an index where
/// `needle` should be inserted in order to preserve the sorting, and `exists`
/// is set to false.
#define array_search_sorted_with(self, compare, needle, _index, _exists)       \
	_array__search_sorted(self, 0, compare, , needle, _index, _exists)

/// Search a sorted array for a given `needle` value, using integer comparisons
/// of a given struct field (specified with a leading dot) to determine the
/// order.
///
/// See also `array_search_sorted_with`.
#define array_search_sorted_by(self, field, needle, _index, _exists)           \
	_array__search_sorted(self, 0, _compare_int, field, needle, _index, _exists)

/// Insert a given `value` into a sorted array, using the given `compare`
/// callback to determine the order.
#define array_insert_sorted_with(self, compare, value)                         \
	do                                                                         \
	{                                                                          \
		unsigned _index, _exists;                                              \
		array_search_sorted_with(self, compare, &(value), &_index, &_exists);  \
		if (!_exists)                                                          \
			array_insert(self, _index, value);                                 \
	} while (0)

/// Insert a given `value` into a sorted array, using integer comparisons of
/// a given struct field (specified with a leading dot) to determine the order.
///
/// See also `array_search_sorted_by`.
#define array_insert_sorted_by(self, field, value)                             \
	do                                                                         \
	{                                                                          \
		unsigned _index, _exists;                                              \
		array_search_sorted_by(self, field, (value)field, &_index, &_exists);  \
		if (!_exists)                                                          \
			array_insert(self, _index, value);                                 \
	} while (0)

#endif // ARRAY_H