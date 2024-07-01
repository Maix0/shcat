/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_450.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2250(t_small_parse_table_array *v)
{
	v->a[45000] = anon_sym_GT_AMP;
	v->a[45001] = anon_sym_GT_PIPE;
	v->a[45002] = anon_sym_LT_GT;
	v->a[45003] = anon_sym_LT_LT;
	v->a[45004] = anon_sym_LT_LT_DASH;
	v->a[45005] = aux_sym_heredoc_redirect_token1;
	v->a[45006] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[45007] = anon_sym_DOLLAR;
	v->a[45008] = anon_sym_DQUOTE;
	v->a[45009] = sym_raw_string;
	v->a[45010] = sym_number;
	v->a[45011] = anon_sym_DOLLAR_LBRACE;
	v->a[45012] = anon_sym_DOLLAR_LPAREN;
	v->a[45013] = anon_sym_BQUOTE;
	v->a[45014] = sym_word;
	v->a[45015] = 6;
	v->a[45016] = actions(3);
	v->a[45017] = 1;
	v->a[45018] = sym_comment;
	v->a[45019] = actions(1622);
	small_parse_table_2251(v);
}

void	small_parse_table_2251(t_small_parse_table_array *v)
{
	v->a[45020] = 1;
	v->a[45021] = aux_sym_concatenation_token1;
	v->a[45022] = actions(1625);
	v->a[45023] = 1;
	v->a[45024] = sym__concat;
	v->a[45025] = state(723);
	v->a[45026] = 1;
	v->a[45027] = aux_sym_concatenation_repeat1;
	v->a[45028] = actions(1093);
	v->a[45029] = 2;
	v->a[45030] = sym_file_descriptor;
	v->a[45031] = sym__bare_dollar;
	v->a[45032] = actions(1088);
	v->a[45033] = 22;
	v->a[45034] = anon_sym_LPAREN;
	v->a[45035] = anon_sym_PIPE;
	v->a[45036] = anon_sym_AMP_AMP;
	v->a[45037] = anon_sym_PIPE_PIPE;
	v->a[45038] = anon_sym_LT;
	v->a[45039] = anon_sym_GT;
	small_parse_table_2252(v);
}

void	small_parse_table_2252(t_small_parse_table_array *v)
{
	v->a[45040] = anon_sym_GT_GT;
	v->a[45041] = anon_sym_LT_AMP;
	v->a[45042] = anon_sym_GT_AMP;
	v->a[45043] = anon_sym_GT_PIPE;
	v->a[45044] = anon_sym_LT_GT;
	v->a[45045] = anon_sym_LT_LT;
	v->a[45046] = anon_sym_LT_LT_DASH;
	v->a[45047] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[45048] = anon_sym_DOLLAR;
	v->a[45049] = anon_sym_DQUOTE;
	v->a[45050] = sym_raw_string;
	v->a[45051] = sym_number;
	v->a[45052] = anon_sym_DOLLAR_LBRACE;
	v->a[45053] = anon_sym_DOLLAR_LPAREN;
	v->a[45054] = anon_sym_BQUOTE;
	v->a[45055] = sym_word;
	v->a[45056] = 16;
	v->a[45057] = actions(664);
	v->a[45058] = 1;
	v->a[45059] = sym_comment;
	small_parse_table_2253(v);
}

void	small_parse_table_2253(t_small_parse_table_array *v)
{
	v->a[45060] = actions(1560);
	v->a[45061] = 1;
	v->a[45062] = anon_sym_LPAREN;
	v->a[45063] = actions(1562);
	v->a[45064] = 1;
	v->a[45065] = anon_sym_BANG;
	v->a[45066] = actions(1570);
	v->a[45067] = 1;
	v->a[45068] = anon_sym_TILDE;
	v->a[45069] = actions(1572);
	v->a[45070] = 1;
	v->a[45071] = anon_sym_DOLLAR;
	v->a[45072] = actions(1574);
	v->a[45073] = 1;
	v->a[45074] = anon_sym_DQUOTE;
	v->a[45075] = actions(1578);
	v->a[45076] = 1;
	v->a[45077] = anon_sym_DOLLAR_LBRACE;
	v->a[45078] = actions(1580);
	v->a[45079] = 1;
	small_parse_table_2254(v);
}

void	small_parse_table_2254(t_small_parse_table_array *v)
{
	v->a[45080] = anon_sym_DOLLAR_LPAREN;
	v->a[45081] = actions(1582);
	v->a[45082] = 1;
	v->a[45083] = anon_sym_BQUOTE;
	v->a[45084] = actions(1584);
	v->a[45085] = 1;
	v->a[45086] = sym_variable_name;
	v->a[45087] = actions(1628);
	v->a[45088] = 1;
	v->a[45089] = anon_sym_RPAREN_RPAREN;
	v->a[45090] = actions(1566);
	v->a[45091] = 2;
	v->a[45092] = anon_sym_PLUS_PLUS;
	v->a[45093] = anon_sym_DASH_DASH;
	v->a[45094] = actions(1568);
	v->a[45095] = 2;
	v->a[45096] = anon_sym_DASH2;
	v->a[45097] = anon_sym_PLUS2;
	v->a[45098] = actions(1576);
	v->a[45099] = 2;
	small_parse_table_2255(v);
}

/* EOF small_parse_table_450.c */
