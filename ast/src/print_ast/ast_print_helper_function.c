/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ast_print_helper_function.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/26 13:04:26 by rparodi           #+#    #+#             */
/*   Updated: 2024/10/12 17:51:14 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ast/_print_ast.h"

void	_print_term(t_ast_terminator_kind term)
{
	if (term == AST_TERM_NONE)
		return ;
	if (term == AST_TERM_SEMI)
		printf(";");
	if (term == AST_TERM_DOUBLE_SEMI)
		printf(";;");
	if (term == AST_TERM_NEWLINE)
		printf("\n");
}
