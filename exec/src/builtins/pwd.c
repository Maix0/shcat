/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pwd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rparodi <rparodi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/07 13:58:37 by rparodi           #+#    #+#             */
/*   Updated: 2024/08/10 19:44:12 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "exec/builtins.h"
#include "me/mem/mem.h"
#include "me/string/string.h"
#include "me/types.h"

t_error builtin_pwd___(t_state *state, t_spawn_info info)
{
	t_string s;

	s = string_new(1024);
	while (getcwd(s.buf, s.capacity - 1) == NULL)
		string_reserve(&s, s.capacity * 2);
	printf("%s\n", s.buf);
	string_free(s);
	return (NO_ERROR);
}
