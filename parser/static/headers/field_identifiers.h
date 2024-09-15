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
	field_cmd = 4,
	field_cond = 5,
	field_del = 6,
	field_dest = 7,
	field_else = 8,
	field_len = 9,
	field_lhs = 10,
	field_name = 11,
	field_op = 12,
	field_redr = 13,
	field_rhs = 14,
	field_stmt = 15,
	field_term = 16,
	field_then = 17,
	field_value = 18,
};

#endif // FIELD_IDENTIFIERS_H
