/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dollar.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/27 22:18:46 by rparodi           #+#    #+#             */
/*   Updated: 2024/09/28 14:50:56 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "me/vec/vec_token.h"
#include "parser/token.h"
#include "me/string/string.h"
#include "me/types.h"
#include <stdio.h>

// MAIX: C'est necessaire de split ca dans une fonction a par vu que ca retourne
//		la valeur de la comparaion ?
//		Ca serai pas mieux de faire une fonction du genre 
//		"bool create_single_char_token(char c, t_token *tok)" qui cree un token
//		dans `tok` et retourne true si il a match un char qui correspond 
//		a un token specific (genre $ ou parentheses par example)
/**
 * @brief boolean function that's say if it's a dollar or not
 *
 * @param c character will be checked
 * @return true if it's dollar, if not return false
 */
bool	is_dollar(char c)
{
	if (c == '$')
		return (true);
	return (false);
}
