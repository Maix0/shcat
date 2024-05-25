/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_echo.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 21:48:04 by rparodi           #+#    #+#             */
/*   Updated: 2024/05/25 16:09:28 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minishell.h"
#include "me/str/str.h"

void	ft_echo(t_str txt, t_str flag)
{
	printf("%s", txt);
	if (!str_compare(flag, "-n"))
		printf("\n");
}
