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
	field_arg = 2,
	field_body = 3,
	field_cases = 4,
	field_cmd = 5,
	field_condition = 6,
	field_consequence = 7,
	field_dest = 8,
	field_elif = 9,
	field_else = 10,
	field_fd = 11,
	field_left = 12,
	field_name = 13,
	field_op = 14,
	field_redirect = 15,
	field_right = 16,
	field_stmt = 17,
	field_terminator = 18,
	field_value = 19,
	field_variable = 20,
};

#endif // FIELD_IDENTIFIERS_H
