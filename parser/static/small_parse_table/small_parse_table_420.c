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
	v->a[42000] = 8;
	v->a[42001] = anon_sym_PIPE;
	v->a[42002] = anon_sym_SEMI_SEMI;
	v->a[42003] = anon_sym_AMP_AMP;
	v->a[42004] = anon_sym_PIPE_PIPE;
	v->a[42005] = anon_sym_LT_LT;
	v->a[42006] = anon_sym_LT_LT_DASH;
	v->a[42007] = aux_sym_heredoc_redirect_token1;
	v->a[42008] = anon_sym_SEMI;
	v->a[42009] = actions(1447);
	v->a[42010] = 9;
	v->a[42011] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42012] = anon_sym_DOLLAR;
	v->a[42013] = anon_sym_DQUOTE;
	v->a[42014] = sym_raw_string;
	v->a[42015] = sym_number;
	v->a[42016] = anon_sym_DOLLAR_LBRACE;
	v->a[42017] = anon_sym_DOLLAR_LPAREN;
	v->a[42018] = anon_sym_BQUOTE;
	v->a[42019] = sym_word;
	small_parse_table_2101(v);
}

void	small_parse_table_2101(t_small_parse_table_array *v)
{
	v->a[42020] = 7;
	v->a[42021] = actions(3);
	v->a[42022] = 1;
	v->a[42023] = sym_comment;
	v->a[42024] = actions(1462);
	v->a[42025] = 1;
	v->a[42026] = anon_sym_LPAREN;
	v->a[42027] = actions(1465);
	v->a[42028] = 1;
	v->a[42029] = aux_sym_concatenation_token1;
	v->a[42030] = actions(1467);
	v->a[42031] = 1;
	v->a[42032] = sym__concat;
	v->a[42033] = state(695);
	v->a[42034] = 1;
	v->a[42035] = aux_sym_concatenation_repeat1;
	v->a[42036] = actions(1132);
	v->a[42037] = 2;
	v->a[42038] = sym_file_descriptor;
	v->a[42039] = sym__bare_dollar;
	small_parse_table_2102(v);
}

void	small_parse_table_2102(t_small_parse_table_array *v)
{
	v->a[42040] = actions(1134);
	v->a[42041] = 21;
	v->a[42042] = anon_sym_PIPE;
	v->a[42043] = anon_sym_AMP_AMP;
	v->a[42044] = anon_sym_PIPE_PIPE;
	v->a[42045] = anon_sym_LT;
	v->a[42046] = anon_sym_GT;
	v->a[42047] = anon_sym_GT_GT;
	v->a[42048] = anon_sym_LT_AMP;
	v->a[42049] = anon_sym_GT_AMP;
	v->a[42050] = anon_sym_GT_PIPE;
	v->a[42051] = anon_sym_LT_GT;
	v->a[42052] = anon_sym_LT_LT;
	v->a[42053] = anon_sym_LT_LT_DASH;
	v->a[42054] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42055] = anon_sym_DOLLAR;
	v->a[42056] = anon_sym_DQUOTE;
	v->a[42057] = sym_raw_string;
	v->a[42058] = sym_number;
	v->a[42059] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2103(v);
}

void	small_parse_table_2103(t_small_parse_table_array *v)
{
	v->a[42060] = anon_sym_DOLLAR_LPAREN;
	v->a[42061] = anon_sym_BQUOTE;
	v->a[42062] = sym_word;
	v->a[42063] = 6;
	v->a[42064] = actions(3);
	v->a[42065] = 1;
	v->a[42066] = sym_comment;
	v->a[42067] = actions(1457);
	v->a[42068] = 1;
	v->a[42069] = sym_file_descriptor;
	v->a[42070] = actions(1460);
	v->a[42071] = 1;
	v->a[42072] = sym_variable_name;
	v->a[42073] = actions(1454);
	v->a[42074] = 7;
	v->a[42075] = anon_sym_LT;
	v->a[42076] = anon_sym_GT;
	v->a[42077] = anon_sym_GT_GT;
	v->a[42078] = anon_sym_LT_AMP;
	v->a[42079] = anon_sym_GT_AMP;
	small_parse_table_2104(v);
}

void	small_parse_table_2104(t_small_parse_table_array *v)
{
	v->a[42080] = anon_sym_GT_PIPE;
	v->a[42081] = anon_sym_LT_GT;
	v->a[42082] = actions(1447);
	v->a[42083] = 9;
	v->a[42084] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42085] = anon_sym_DOLLAR;
	v->a[42086] = anon_sym_DQUOTE;
	v->a[42087] = sym_raw_string;
	v->a[42088] = sym_number;
	v->a[42089] = anon_sym_DOLLAR_LBRACE;
	v->a[42090] = anon_sym_DOLLAR_LPAREN;
	v->a[42091] = anon_sym_BQUOTE;
	v->a[42092] = sym_word;
	v->a[42093] = actions(1449);
	v->a[42094] = 9;
	v->a[42095] = anon_sym_PIPE;
	v->a[42096] = anon_sym_RPAREN;
	v->a[42097] = anon_sym_SEMI_SEMI;
	v->a[42098] = anon_sym_AMP_AMP;
	v->a[42099] = anon_sym_PIPE_PIPE;
	small_parse_table_2105(v);
}

/* EOF small_parse_table_420.c */
