/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   yarn_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/12 16:11:05 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/12 16:11:19 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/token.h"

int	_get_prec(t_token *token)
{
	if (!token)
		return (-1);
	else if (token->type == TOK_PIPE)
		return (2);
	else if (token->type == TOK_AND || token->type == TOK_OR)
		return (1);
	return (0);
}
