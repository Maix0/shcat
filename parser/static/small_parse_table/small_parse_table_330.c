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
	v->a[33000] = actions(1266);
	v->a[33001] = 1;
	v->a[33002] = aux_sym_concatenation_token1;
	v->a[33003] = actions(1269);
	v->a[33004] = 1;
	v->a[33005] = sym__concat;
	v->a[33006] = state(404);
	v->a[33007] = 1;
	v->a[33008] = aux_sym_concatenation_repeat1;
	v->a[33009] = actions(1004);
	v->a[33010] = 2;
	v->a[33011] = sym_file_descriptor;
	v->a[33012] = sym_variable_name;
	v->a[33013] = actions(999);
	v->a[33014] = 29;
	v->a[33015] = anon_sym_PIPE;
	v->a[33016] = anon_sym_RPAREN;
	v->a[33017] = anon_sym_SEMI_SEMI;
	v->a[33018] = anon_sym_AMP_AMP;
	v->a[33019] = anon_sym_PIPE_PIPE;
	small_parse_table_1651(v);
}

void	small_parse_table_1651(t_small_parse_table_array *v)
{
	v->a[33020] = anon_sym_LT;
	v->a[33021] = anon_sym_GT;
	v->a[33022] = anon_sym_GT_GT;
	v->a[33023] = anon_sym_AMP_GT;
	v->a[33024] = anon_sym_AMP_GT_GT;
	v->a[33025] = anon_sym_LT_AMP;
	v->a[33026] = anon_sym_GT_AMP;
	v->a[33027] = anon_sym_GT_PIPE;
	v->a[33028] = anon_sym_LT_AMP_DASH;
	v->a[33029] = anon_sym_GT_AMP_DASH;
	v->a[33030] = anon_sym_LT_LT;
	v->a[33031] = anon_sym_LT_LT_DASH;
	v->a[33032] = aux_sym_heredoc_redirect_token1;
	v->a[33033] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33034] = anon_sym_AMP;
	v->a[33035] = anon_sym_DOLLAR;
	v->a[33036] = anon_sym_DQUOTE;
	v->a[33037] = sym_raw_string;
	v->a[33038] = sym_number;
	v->a[33039] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1652(v);
}

void	small_parse_table_1652(t_small_parse_table_array *v)
{
	v->a[33040] = anon_sym_DOLLAR_LPAREN;
	v->a[33041] = anon_sym_BQUOTE;
	v->a[33042] = sym_word;
	v->a[33043] = anon_sym_SEMI;
	v->a[33044] = 3;
	v->a[33045] = actions(3);
	v->a[33046] = 1;
	v->a[33047] = sym_comment;
	v->a[33048] = actions(1076);
	v->a[33049] = 3;
	v->a[33050] = sym_file_descriptor;
	v->a[33051] = sym__concat;
	v->a[33052] = sym__bare_dollar;
	v->a[33053] = actions(1074);
	v->a[33054] = 31;
	v->a[33055] = anon_sym_esac;
	v->a[33056] = anon_sym_LPAREN;
	v->a[33057] = anon_sym_PIPE;
	v->a[33058] = anon_sym_SEMI_SEMI;
	v->a[33059] = anon_sym_AMP_AMP;
	small_parse_table_1653(v);
}

void	small_parse_table_1653(t_small_parse_table_array *v)
{
	v->a[33060] = anon_sym_PIPE_PIPE;
	v->a[33061] = anon_sym_LT;
	v->a[33062] = anon_sym_GT;
	v->a[33063] = anon_sym_GT_GT;
	v->a[33064] = anon_sym_AMP_GT;
	v->a[33065] = anon_sym_AMP_GT_GT;
	v->a[33066] = anon_sym_LT_AMP;
	v->a[33067] = anon_sym_GT_AMP;
	v->a[33068] = anon_sym_GT_PIPE;
	v->a[33069] = anon_sym_LT_AMP_DASH;
	v->a[33070] = anon_sym_GT_AMP_DASH;
	v->a[33071] = anon_sym_LT_LT;
	v->a[33072] = anon_sym_LT_LT_DASH;
	v->a[33073] = aux_sym_heredoc_redirect_token1;
	v->a[33074] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33075] = anon_sym_AMP;
	v->a[33076] = aux_sym_concatenation_token1;
	v->a[33077] = anon_sym_DOLLAR;
	v->a[33078] = anon_sym_DQUOTE;
	v->a[33079] = sym_raw_string;
	small_parse_table_1654(v);
}

void	small_parse_table_1654(t_small_parse_table_array *v)
{
	v->a[33080] = sym_number;
	v->a[33081] = anon_sym_DOLLAR_LBRACE;
	v->a[33082] = anon_sym_DOLLAR_LPAREN;
	v->a[33083] = anon_sym_BQUOTE;
	v->a[33084] = sym_word;
	v->a[33085] = anon_sym_SEMI;
	v->a[33086] = 21;
	v->a[33087] = actions(3);
	v->a[33088] = 1;
	v->a[33089] = sym_comment;
	v->a[33090] = actions(17);
	v->a[33091] = 1;
	v->a[33092] = anon_sym_LPAREN;
	v->a[33093] = actions(59);
	v->a[33094] = 1;
	v->a[33095] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33096] = actions(61);
	v->a[33097] = 1;
	v->a[33098] = anon_sym_DOLLAR;
	v->a[33099] = actions(63);
	small_parse_table_1655(v);
}

/* EOF small_parse_table_330.c */
