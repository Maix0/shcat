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
	field_arg = 1,
	field_args = 2,
	field_body = 3,
	field_cases = 4,
	field_cmd = 5,
	field_cond = 6,
	field_dest = 7,
	field_elif = 8,
	field_else = 9,
	field_fd = 10,
	field_len = 11,
	field_lhs = 12,
	field_name = 13,
	field_op = 14,
	field_redr = 15,
	field_rhs = 16,
	field_stmt = 17,
	field_term = 18,
	field_then = 19,
	field_value = 20,
	field_var = 21,
};

#endif // FIELD_IDENTIFIERS_H
