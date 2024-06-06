/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   field_identifiers.h                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIELD_IDENTIFIERS_H
# define FIELD_IDENTIFIERS_H

enum e_field_identifiers {
	field_alternative = 1,
	field_argument = 2,
	field_body = 3,
	field_condition = 4,
	field_consequence = 5,
	field_descriptor = 6,
	field_destination = 7,
	field_fallthrough = 8,
	field_left = 9,
	field_name = 10,
	field_operator = 11,
	field_redirect = 12,
	field_right = 13,
	field_termination = 14,
	field_value = 15,
	field_variable = 16,
};

#endif // FIELD_IDENTIFIERS_H
