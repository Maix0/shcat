/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   template_file.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/02 19:04:32 by maiboyer          #+#    #+#             */
/*   Updated: 2024/10/02 19:13:31 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/passes.h"
#include "me/types.h"
#include "me/vec/vec_token.h"
#include "parser/token.h"

t_error	do_fuck_all(t_vec_token input, t_vec_token *output)
{
	t_vec_token	out;
	t_usize		i;

	out = vec_token_new(input.len, token_free);
	while (i < input.len)
	{
		vec_token_push(&out, token_clone(&input.buffer[i]));
		i++;
	}
	vec_token_free(input);
	return (*output = out, NO_ERROR);
}
