/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1024.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5120(t_small_parse_table_array *v)
{
	v->a[102400] = 1;
	v->a[102401] = anon_sym_RPAREN;
	v->a[102402] = 2;
	v->a[102403] = actions(1094);
	v->a[102404] = 1;
	v->a[102405] = sym_comment;
	v->a[102406] = actions(5012);
	v->a[102407] = 1;
	v->a[102408] = anon_sym_RBRACE;
	v->a[102409] = 2;
	v->a[102410] = actions(1094);
	v->a[102411] = 1;
	v->a[102412] = sym_comment;
	v->a[102413] = actions(5014);
	v->a[102414] = 1;
	v->a[102415] = anon_sym_SEMI_SEMI;
	v->a[102416] = 2;
	v->a[102417] = actions(1094);
	v->a[102418] = 1;
	v->a[102419] = sym_comment;
	small_parse_table_5121(v);
}

void	small_parse_table_5121(t_small_parse_table_array *v)
{
	v->a[102420] = actions(5016);
	v->a[102421] = 1;
	v->a[102422] = anon_sym_BQUOTE;
	v->a[102423] = 2;
	v->a[102424] = actions(1094);
	v->a[102425] = 1;
	v->a[102426] = sym_comment;
	v->a[102427] = actions(5018);
	v->a[102428] = 1;
	v->a[102429] = anon_sym_RPAREN;
}

/* EOF small_parse_table_1024.c */
