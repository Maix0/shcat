/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_420.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2100(t_small_parse_table_array *v)
{
	v->a[42000] = anon_sym_CARET_EQ;
	v->a[42001] = anon_sym_PIPE_EQ;
	v->a[42002] = 3;
	v->a[42003] = actions(3);
	v->a[42004] = 1;
	v->a[42005] = sym_comment;
	v->a[42006] = actions(1088);
	v->a[42007] = 3;
	v->a[42008] = sym_file_descriptor;
	v->a[42009] = sym__concat;
	v->a[42010] = sym__bare_dollar;
	v->a[42011] = actions(1086);
	v->a[42012] = 30;
	v->a[42013] = anon_sym_PIPE;
	v->a[42014] = anon_sym_RPAREN;
	v->a[42015] = anon_sym_SEMI_SEMI;
	v->a[42016] = anon_sym_AMP_AMP;
	v->a[42017] = anon_sym_PIPE_PIPE;
	v->a[42018] = anon_sym_LT;
	v->a[42019] = anon_sym_GT;
	small_parse_table_2101(v);
}

void	small_parse_table_2101(t_small_parse_table_array *v)
{
	v->a[42020] = anon_sym_GT_GT;
	v->a[42021] = anon_sym_AMP_GT;
	v->a[42022] = anon_sym_AMP_GT_GT;
	v->a[42023] = anon_sym_LT_AMP;
	v->a[42024] = anon_sym_GT_AMP;
	v->a[42025] = anon_sym_GT_PIPE;
	v->a[42026] = anon_sym_LT_AMP_DASH;
	v->a[42027] = anon_sym_GT_AMP_DASH;
	v->a[42028] = anon_sym_LT_LT;
	v->a[42029] = anon_sym_LT_LT_DASH;
	v->a[42030] = aux_sym_heredoc_redirect_token1;
	v->a[42031] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42032] = anon_sym_AMP;
	v->a[42033] = aux_sym_concatenation_token1;
	v->a[42034] = anon_sym_DOLLAR;
	v->a[42035] = anon_sym_DQUOTE;
	v->a[42036] = sym_raw_string;
	v->a[42037] = sym_number;
	v->a[42038] = anon_sym_DOLLAR_LBRACE;
	v->a[42039] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2102(v);
}

void	small_parse_table_2102(t_small_parse_table_array *v)
{
	v->a[42040] = anon_sym_BQUOTE;
	v->a[42041] = sym_word;
	v->a[42042] = anon_sym_SEMI;
	v->a[42043] = 12;
	v->a[42044] = actions(3);
	v->a[42045] = 1;
	v->a[42046] = sym_comment;
	v->a[42047] = actions(1442);
	v->a[42048] = 1;
	v->a[42049] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42050] = actions(1445);
	v->a[42051] = 1;
	v->a[42052] = anon_sym_DOLLAR;
	v->a[42053] = actions(1448);
	v->a[42054] = 1;
	v->a[42055] = anon_sym_DQUOTE;
	v->a[42056] = actions(1451);
	v->a[42057] = 1;
	v->a[42058] = anon_sym_DOLLAR_LBRACE;
	v->a[42059] = actions(1454);
	small_parse_table_2103(v);
}

void	small_parse_table_2103(t_small_parse_table_array *v)
{
	v->a[42060] = 1;
	v->a[42061] = anon_sym_DOLLAR_LPAREN;
	v->a[42062] = actions(1457);
	v->a[42063] = 1;
	v->a[42064] = anon_sym_BQUOTE;
	v->a[42065] = actions(536);
	v->a[42066] = 2;
	v->a[42067] = sym_file_descriptor;
	v->a[42068] = sym_variable_name;
	v->a[42069] = state(587);
	v->a[42070] = 2;
	v->a[42071] = sym_concatenation;
	v->a[42072] = aux_sym_for_statement_repeat1;
	v->a[42073] = actions(1439);
	v->a[42074] = 3;
	v->a[42075] = sym_raw_string;
	v->a[42076] = sym_number;
	v->a[42077] = sym_word;
	v->a[42078] = state(828);
	v->a[42079] = 5;
	small_parse_table_2104(v);
}

void	small_parse_table_2104(t_small_parse_table_array *v)
{
	v->a[42080] = sym_arithmetic_expansion;
	v->a[42081] = sym_string;
	v->a[42082] = sym_simple_expansion;
	v->a[42083] = sym_expansion;
	v->a[42084] = sym_command_substitution;
	v->a[42085] = actions(516);
	v->a[42086] = 15;
	v->a[42087] = anon_sym_PIPE;
	v->a[42088] = anon_sym_AMP_AMP;
	v->a[42089] = anon_sym_PIPE_PIPE;
	v->a[42090] = anon_sym_LT;
	v->a[42091] = anon_sym_GT;
	v->a[42092] = anon_sym_GT_GT;
	v->a[42093] = anon_sym_AMP_GT;
	v->a[42094] = anon_sym_AMP_GT_GT;
	v->a[42095] = anon_sym_LT_AMP;
	v->a[42096] = anon_sym_GT_AMP;
	v->a[42097] = anon_sym_GT_PIPE;
	v->a[42098] = anon_sym_LT_AMP_DASH;
	v->a[42099] = anon_sym_GT_AMP_DASH;
	small_parse_table_2105(v);
}

/* EOF small_parse_table_420.c */
