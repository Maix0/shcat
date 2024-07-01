/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dumper.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/25 22:19:52 by maiboyer          #+#    #+#             */
/*   Updated: 2024/06/30 17:09:31 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "gmr/constants.h"

#include <fcntl.h>
#include <stddef.h>
#include <stdio.h>
#include <unistd.h>

#include "types/type_alias_sequences.h"
#include "types/type_external_scanner_states.h"
#include "types/type_external_scanner_symbol_map.h"
#include "types/type_field_map_entries.h"
#include "types/type_field_map_slices.h"
#include "types/type_field_names.h"
#include "types/type_lex_modes.h"
#include "types/type_lex_normal.h"
#include "types/type_non_terminal_alias_map.h"
#include "types/type_parse_actions_entries.h"
#include "types/type_parse_table.h"
#include "types/type_primary_state_ids.h"
#include "types/type_small_parse_table.h"
#include "types/type_small_parse_table_map.h"
#include "types/type_symbols_metadata.h"
#include "types/type_symbols_names.h"
#include "types/type_unique_symbols_map.h"

t_parse_table_array					*create_parse_table(void);
t_small_parse_table_array			*create_small_parse_table(void);
t_small_parse_table_map_array		*create_small_parse_table_map(void);
t_parse_actions_entries_array		*create_parse_actions_entries(void);
t_symbols_names_array				*create_symbols_names(void);
t_field_names_array					*create_field_names(void);
t_field_map_slices_array			*create_field_map_slices(void);
t_field_map_entries_array			*create_field_map_entries(void);
t_symbols_metadata_array			*create_symbols_metadata(void);
t_unique_symbols_map_array			*create_unique_symbols_map(void);
t_non_terminal_alias_map_array		*create_non_terminal_alias_map(void);
t_alias_sequences_array				*create_alias_sequences(void);
t_lex_modes_array					*create_lex_modes(void);
t_primary_state_ids_array			*create_primary_state_ids(void);
t_external_scanner_states_array		*create_external_scanner_states(void);
t_external_scanner_symbol_map_array *create_external_scanner_symbol_map(void);

void dump_to_file(const char *filename, void *data, size_t size)
{
	int file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0666);

	if (file < 0)
		return ((void)printf("[error] opening %s failed \n", filename));
	if (write(file, data, size) < size)
		printf("[error] writing to %s failed \n", filename);
	else
		printf("wrote %zu to %s!\n", size, filename);
	close(file);
}

int main(void)
{
	dump_to_file("./parse_table", (void *)create_parse_table(),
				 sizeof(*create_parse_table()));
	dump_to_file("./small_parse_table", (void *)create_small_parse_table(),
				 sizeof(*create_small_parse_table()));
	dump_to_file("./small_parse_table_map",
				 (void *)create_small_parse_table_map(),
				 sizeof(*create_small_parse_table_map()));
	dump_to_file("./parse_actions_entries",
				 (void *)create_parse_actions_entries(),
				 sizeof(*create_parse_actions_entries()));
	// dump_to_file("./symbols_names", (void *)create_symbols_names(), 0);
	// dump_to_file("./field_names", (void *)create_field_names(), 0);
	dump_to_file("./field_map_slices", (void *)create_field_map_slices(),
				 sizeof(*create_field_map_slices()));
	dump_to_file("./field_map_entries", (void *)create_field_map_entries(),
				 sizeof(*create_field_map_entries()));
	dump_to_file("./symbols_metadata", (void *)create_symbols_metadata(),
				 sizeof(*create_symbols_metadata()));
	dump_to_file("./unique_symbols_map", (void *)create_unique_symbols_map(),
				 sizeof(*create_unique_symbols_map()));
	dump_to_file("./non_terminal_alias_map",
				 (void *)create_non_terminal_alias_map(),
				 sizeof(*create_non_terminal_alias_map()));
	dump_to_file("./alias_sequences", (void *)create_alias_sequences(),
				 sizeof(*create_alias_sequences()));
	dump_to_file("./lex_modes", (void *)create_lex_modes(),
				 sizeof(*create_lex_modes()));
	dump_to_file("./primary_state_ids", (void *)create_primary_state_ids(),
				 sizeof(*create_primary_state_ids()));
	dump_to_file("./external_scanner_states",
				 (void *)create_external_scanner_states(),
				 sizeof(*create_external_scanner_states()));
	dump_to_file("./external_scanner_symbol_map",
				 (void *)create_external_scanner_symbol_map(),
				 sizeof(*create_external_scanner_symbol_map()));
}
