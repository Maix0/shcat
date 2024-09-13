/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser_outstanding_parse.c                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/13 13:56:59 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/13 13:57:06 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/inner/parser_inner.h"

bool	ts_parser_has_outstanding_parse(TSParser *self)
{
	return (self->external_scanner_payload || ts_stack_state(self->stack,
			0) != 1 || ts_stack_node_count_since_error(self->stack, 0) != 0);
}
