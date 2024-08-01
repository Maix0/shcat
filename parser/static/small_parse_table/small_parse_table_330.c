/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_330.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1650(t_small_parse_table_array *v)
{
	v->a[33000] = sym_raw_string;
	v->a[33001] = sym_number;
	v->a[33002] = sym_word;
	v->a[33003] = actions(1348);
	v->a[33004] = 3;
	v->a[33005] = anon_sym_SEMI_SEMI;
	v->a[33006] = aux_sym_heredoc_redirect_token1;
	v->a[33007] = anon_sym_SEMI;
	v->a[33008] = state(857);
	v->a[33009] = 5;
	v->a[33010] = sym_arithmetic_expansion;
	v->a[33011] = sym_string;
	v->a[33012] = sym_simple_expansion;
	v->a[33013] = sym_expansion;
	v->a[33014] = sym_command_substitution;
	v->a[33015] = 6;
	v->a[33016] = actions(3);
	v->a[33017] = 1;
	v->a[33018] = sym_comment;
	v->a[33019] = actions(917);
	small_parse_table_1651(v);
}

void	small_parse_table_1651(t_small_parse_table_array *v)
{
	v->a[33020] = 1;
	v->a[33021] = sym_variable_name;
	v->a[33022] = actions(1342);
	v->a[33023] = 1;
	v->a[33024] = aux_sym_concatenation_token1;
	v->a[33025] = actions(1344);
	v->a[33026] = 1;
	v->a[33027] = sym__concat;
	v->a[33028] = state(604);
	v->a[33029] = 1;
	v->a[33030] = aux_sym_concatenation_repeat1;
	v->a[33031] = actions(919);
	v->a[33032] = 16;
	v->a[33033] = anon_sym_PIPE;
	v->a[33034] = anon_sym_AMP_AMP;
	v->a[33035] = anon_sym_PIPE_PIPE;
	v->a[33036] = anon_sym_LT;
	v->a[33037] = anon_sym_GT;
	v->a[33038] = anon_sym_GT_GT;
	v->a[33039] = anon_sym_LT_LT;
	small_parse_table_1652(v);
}

void	small_parse_table_1652(t_small_parse_table_array *v)
{
	v->a[33040] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33041] = anon_sym_DOLLAR;
	v->a[33042] = anon_sym_DQUOTE;
	v->a[33043] = sym_raw_string;
	v->a[33044] = sym_number;
	v->a[33045] = anon_sym_DOLLAR_LBRACE;
	v->a[33046] = anon_sym_DOLLAR_LPAREN;
	v->a[33047] = anon_sym_BQUOTE;
	v->a[33048] = sym_word;
	v->a[33049] = 5;
	v->a[33050] = actions(3);
	v->a[33051] = 1;
	v->a[33052] = sym_comment;
	v->a[33053] = actions(1156);
	v->a[33054] = 1;
	v->a[33055] = aux_sym_concatenation_token1;
	v->a[33056] = actions(1168);
	v->a[33057] = 1;
	v->a[33058] = sym__concat;
	v->a[33059] = state(598);
	small_parse_table_1653(v);
}

void	small_parse_table_1653(t_small_parse_table_array *v)
{
	v->a[33060] = 1;
	v->a[33061] = aux_sym_concatenation_repeat1;
	v->a[33062] = actions(880);
	v->a[33063] = 17;
	v->a[33064] = anon_sym_PIPE;
	v->a[33065] = anon_sym_AMP_AMP;
	v->a[33066] = anon_sym_PIPE_PIPE;
	v->a[33067] = anon_sym_LT;
	v->a[33068] = anon_sym_GT;
	v->a[33069] = anon_sym_GT_GT;
	v->a[33070] = anon_sym_LT_LT;
	v->a[33071] = aux_sym_heredoc_redirect_token1;
	v->a[33072] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33073] = anon_sym_DOLLAR;
	v->a[33074] = anon_sym_DQUOTE;
	v->a[33075] = sym_raw_string;
	v->a[33076] = sym_number;
	v->a[33077] = anon_sym_DOLLAR_LBRACE;
	v->a[33078] = anon_sym_DOLLAR_LPAREN;
	v->a[33079] = anon_sym_BQUOTE;
	small_parse_table_1654(v);
}

void	small_parse_table_1654(t_small_parse_table_array *v)
{
	v->a[33080] = sym_word;
	v->a[33081] = 12;
	v->a[33082] = actions(3);
	v->a[33083] = 1;
	v->a[33084] = sym_comment;
	v->a[33085] = actions(655);
	v->a[33086] = 1;
	v->a[33087] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33088] = actions(657);
	v->a[33089] = 1;
	v->a[33090] = anon_sym_DOLLAR;
	v->a[33091] = actions(659);
	v->a[33092] = 1;
	v->a[33093] = anon_sym_DQUOTE;
	v->a[33094] = actions(661);
	v->a[33095] = 1;
	v->a[33096] = anon_sym_DOLLAR_LBRACE;
	v->a[33097] = actions(663);
	v->a[33098] = 1;
	v->a[33099] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1655(v);
}

/* EOF small_parse_table_330.c */
