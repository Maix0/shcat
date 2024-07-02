/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_720.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3600(t_small_parse_table_array *v)
{
	v->a[72000] = anon_sym_DQUOTE;
	v->a[72001] = sym_raw_string;
	v->a[72002] = sym_number;
	v->a[72003] = anon_sym_DOLLAR_LBRACE;
	v->a[72004] = anon_sym_DOLLAR_LPAREN;
	v->a[72005] = anon_sym_BQUOTE;
	v->a[72006] = sym_word;
	v->a[72007] = anon_sym_SEMI;
	v->a[72008] = 8;
	v->a[72009] = actions(680);
	v->a[72010] = 1;
	v->a[72011] = sym_comment;
	v->a[72012] = actions(700);
	v->a[72013] = 1;
	v->a[72014] = anon_sym_LT_LT;
	v->a[72015] = actions(2604);
	v->a[72016] = 1;
	v->a[72017] = sym_file_descriptor;
	v->a[72018] = actions(2827);
	v->a[72019] = 1;
	small_parse_table_3601(v);
}

void	small_parse_table_3601(t_small_parse_table_array *v)
{
	v->a[72020] = anon_sym_LT_LT_DASH;
	v->a[72021] = actions(2600);
	v->a[72022] = 2;
	v->a[72023] = anon_sym_LT;
	v->a[72024] = anon_sym_GT;
	v->a[72025] = actions(2849);
	v->a[72026] = 2;
	v->a[72027] = anon_sym_AMP_AMP;
	v->a[72028] = anon_sym_PIPE_PIPE;
	v->a[72029] = state(1354);
	v->a[72030] = 3;
	v->a[72031] = sym_file_redirect;
	v->a[72032] = sym_heredoc_redirect;
	v->a[72033] = aux_sym_redirected_statement_repeat1;
	v->a[72034] = actions(2851);
	v->a[72035] = 5;
	v->a[72036] = anon_sym_GT_GT;
	v->a[72037] = anon_sym_LT_AMP;
	v->a[72038] = anon_sym_GT_AMP;
	v->a[72039] = anon_sym_GT_PIPE;
	small_parse_table_3602(v);
}

void	small_parse_table_3602(t_small_parse_table_array *v)
{
	v->a[72040] = anon_sym_LT_GT;
	v->a[72041] = 7;
	v->a[72042] = actions(3);
	v->a[72043] = 1;
	v->a[72044] = sym_comment;
	v->a[72045] = actions(1801);
	v->a[72046] = 1;
	v->a[72047] = anon_sym_PERCENT;
	v->a[72048] = actions(2853);
	v->a[72049] = 1;
	v->a[72050] = anon_sym_RBRACE;
	v->a[72051] = state(1928);
	v->a[72052] = 1;
	v->a[72053] = sym__expansion_expression;
	v->a[72054] = state(2033);
	v->a[72055] = 1;
	v->a[72056] = sym__expansion_regex;
	v->a[72057] = actions(1807);
	v->a[72058] = 3;
	v->a[72059] = sym__immediate_double_hash;
	small_parse_table_3603(v);
}

void	small_parse_table_3603(t_small_parse_table_array *v)
{
	v->a[72060] = anon_sym_POUND;
	v->a[72061] = anon_sym_PERCENT_PERCENT;
	v->a[72062] = actions(1805);
	v->a[72063] = 8;
	v->a[72064] = anon_sym_COLON_DASH;
	v->a[72065] = anon_sym_DASH3;
	v->a[72066] = anon_sym_COLON_EQ;
	v->a[72067] = anon_sym_EQ2;
	v->a[72068] = anon_sym_COLON_QMARK;
	v->a[72069] = anon_sym_QMARK2;
	v->a[72070] = anon_sym_COLON_PLUS;
	v->a[72071] = anon_sym_PLUS3;
	v->a[72072] = 7;
	v->a[72073] = actions(3);
	v->a[72074] = 1;
	v->a[72075] = sym_comment;
	v->a[72076] = actions(1801);
	v->a[72077] = 1;
	v->a[72078] = anon_sym_PERCENT;
	v->a[72079] = actions(2855);
	small_parse_table_3604(v);
}

void	small_parse_table_3604(t_small_parse_table_array *v)
{
	v->a[72080] = 1;
	v->a[72081] = anon_sym_RBRACE;
	v->a[72082] = state(2034);
	v->a[72083] = 1;
	v->a[72084] = sym__expansion_expression;
	v->a[72085] = state(2035);
	v->a[72086] = 1;
	v->a[72087] = sym__expansion_regex;
	v->a[72088] = actions(1807);
	v->a[72089] = 3;
	v->a[72090] = sym__immediate_double_hash;
	v->a[72091] = anon_sym_POUND;
	v->a[72092] = anon_sym_PERCENT_PERCENT;
	v->a[72093] = actions(1805);
	v->a[72094] = 8;
	v->a[72095] = anon_sym_COLON_DASH;
	v->a[72096] = anon_sym_DASH3;
	v->a[72097] = anon_sym_COLON_EQ;
	v->a[72098] = anon_sym_EQ2;
	v->a[72099] = anon_sym_COLON_QMARK;
	small_parse_table_3605(v);
}

/* EOF small_parse_table_720.c */
