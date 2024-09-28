/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   token.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/25 16:27:03 by rparodi           #+#    #+#             */
/*   Updated: 2024/09/28 14:48:31 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "parser/token.h"
#include "me/string/string.h"
#include "me/types.h"
#include "me/vec/vec_token.h"
#include <stdio.h>
#include <stdbool.h>
#include "me/mem/mem.h"


// MAIX: attention les whitespace peuvent aussi etre des tab. de memoire il y a 
// une fonction "me_isspace" qui check ce qu'on veut dans "me/char/char.h"
/**
 * @brief boolean function that's say if it's a space or not
 *
 * @param c character will be checked
 * @return true if it's space, if not return false
 */
bool	is_space(char c)
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

	i = 0;
	while (raw[i] != '\0')
	{
		if (is_space(raw[i]))
			token = token_new(WHITESPACE);
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
