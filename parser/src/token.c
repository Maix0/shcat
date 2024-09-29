/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   token.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:27:03 by rparodi           #+#    #+#             */
/*   Updated: 2024/09/29 13:10:20 by rparodi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/token.h"
#include "me/string/string.h"
#include "me/types.h"
#include "me/char/char.h"
#include "me/vec/vec_token.h"
#include <stdio.h>
#include <stdbool.h>
#include "me/mem/mem.h"

// MAIX: attention les whitespace peuvent aussi etre des tab. de memoire il y a 
// une fonction "me_isspace" qui check ce qu'on veut dans "me/char/char.h"
bool	me_isspace(char c)
{
	if (c == ' ')
		return (true);
	return (false);
}

// MAIX: tu peux faire un token par character "whitespace", vu qu'on va 
// manipuler la list de token apres pour faire des truc plus simple a process 
// on se debrouillera pour plus avoir plein de token whitespace :)
t_error	start_analyse(t_const_str raw, enum e_token list, t_vec_token *output)
{
	t_usize	i;
	t_token	token;

	if (!raw || !output)
		return (ERROR);
	i = 0;
	while (raw[i] != '\0')
	{
		if (me_isspace(raw[i]))
			token = token_new(WHITESPACE);
		if (is_quote(raw[i]))
			find_end_string(raw, &i, &token);
		if (is_dollar(raw[i]))
			token = token_new(DOLLAR);
		vec_token_push(output, token);
		i++;
	}
	return (NO_ERROR);
}

// MAIX: attention tu ne fais rien avec le vec_token ici :D
//		aussi l'argument list est censer faire quoi ? 
//		c'est un reste d'une version ancienne ?
t_error	tokeniser(t_const_str raw, enum e_token list)
{
	t_vec_token	output;

	if (!raw)
		return (ERROR);
	output = vec_token_new(16, NULL);
	start_analyse(raw, list, &output);
	return (NO_ERROR);
}
