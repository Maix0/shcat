/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   _not_done_function.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/17 13:04:32 by maiboyer          #+#    #+#             */
/*   Updated: 2024/09/19 16:47:11 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/inner/ptypes.h"
#include "parser/inner/node.h"
#include "ast/ast.h"
#include "gmr/symbols.h"
#include "me/types.h"
#include <stdio.h>

t_error	_build_not_finished(t_node self, t_const_str i, t_ast_node *out)
{
	(void)(self);
	(void)(out);
	(void)(i);
	printf("building undefined symbol '%s'\n", ts_node_type(self));
	return (ERROR);
}
