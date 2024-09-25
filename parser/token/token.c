/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   token.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:27:03 by rparodi           #+#    #+#             */
/*   Updated: 2024/09/25 16:54:08 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/token/token.h"
#include "me/string/string.h"
#include "me/types.h"

t_error	handle_quote(t_string raw, enum e_token actual, int *output);
t_error	handle_arithmetic(t_string raw, enum e_token actual, int *output);

t_error	tokeniser(t_string raw, enum e_token actual, int *output)
{
	if (!raw.buf || raw.len == 0 || raw.capacity == 0)
		return (ERROR);
	if (handle_quote(raw, actual, output))
		return (ERROR);
	else if (handle_arithmetic(raw, actual, output))
		return (ERROR);
	return (NO_ERROR);
}
