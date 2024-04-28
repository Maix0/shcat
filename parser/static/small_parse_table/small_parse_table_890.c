/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_890.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4450(t_small_parse_table_array *v)
{
	v->a[89000] = sym_raw_string;
	v->a[89001] = sym_ansi_c_string;
	v->a[89002] = aux_sym_number_token1;
	v->a[89003] = aux_sym_number_token2;
	v->a[89004] = anon_sym_DOLLAR_LBRACE;
	v->a[89005] = anon_sym_DOLLAR_LPAREN;
	v->a[89006] = anon_sym_BQUOTE;
	v->a[89007] = anon_sym_DOLLAR_BQUOTE;
	v->a[89008] = anon_sym_LT_LPAREN;
	v->a[89009] = anon_sym_GT_LPAREN;
	v->a[89010] = sym_word;
	v->a[89011] = 6;
	v->a[89012] = actions(3);
	v->a[89013] = 1;
	v->a[89014] = sym_comment;
	v->a[89015] = actions(6017);
	v->a[89016] = 1;
	v->a[89017] = aux_sym_concatenation_token1;
	v->a[89018] = actions(6019);
	v->a[89019] = 1;
	small_parse_table_4451(v);
}

void	small_parse_table_4451(t_small_parse_table_array *v)
{
	v->a[89020] = sym__concat;
	v->a[89021] = state(1910);
	v->a[89022] = 1;
	v->a[89023] = aux_sym_concatenation_repeat1;
	v->a[89024] = actions(5391);
	v->a[89025] = 5;
	v->a[89026] = sym_file_descriptor;
	v->a[89027] = sym_test_operator;
	v->a[89028] = sym__brace_start;
	v->a[89029] = ts_builtin_sym_end;
	v->a[89030] = aux_sym_heredoc_redirect_token1;
	v->a[89031] = actions(5389);
	v->a[89032] = 36;
	v->a[89033] = anon_sym_LPAREN_LPAREN;
	v->a[89034] = anon_sym_SEMI;
	v->a[89035] = anon_sym_PIPE_PIPE;
	v->a[89036] = anon_sym_AMP_AMP;
	v->a[89037] = anon_sym_PIPE;
	v->a[89038] = anon_sym_AMP;
	v->a[89039] = anon_sym_LT;
	small_parse_table_4452(v);
}

void	small_parse_table_4452(t_small_parse_table_array *v)
{
	v->a[89040] = anon_sym_GT;
	v->a[89041] = anon_sym_LT_LT;
	v->a[89042] = anon_sym_GT_GT;
	v->a[89043] = anon_sym_SEMI_SEMI;
	v->a[89044] = anon_sym_PIPE_AMP;
	v->a[89045] = anon_sym_AMP_GT;
	v->a[89046] = anon_sym_AMP_GT_GT;
	v->a[89047] = anon_sym_LT_AMP;
	v->a[89048] = anon_sym_GT_AMP;
	v->a[89049] = anon_sym_GT_PIPE;
	v->a[89050] = anon_sym_LT_AMP_DASH;
	v->a[89051] = anon_sym_GT_AMP_DASH;
	v->a[89052] = anon_sym_LT_LT_DASH;
	v->a[89053] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[89054] = anon_sym_DOLLAR_LBRACK;
	v->a[89055] = anon_sym_DOLLAR;
	v->a[89056] = sym__special_character;
	v->a[89057] = anon_sym_DQUOTE;
	v->a[89058] = sym_raw_string;
	v->a[89059] = sym_ansi_c_string;
	small_parse_table_4453(v);
}

void	small_parse_table_4453(t_small_parse_table_array *v)
{
	v->a[89060] = aux_sym_number_token1;
	v->a[89061] = aux_sym_number_token2;
	v->a[89062] = anon_sym_DOLLAR_LBRACE;
	v->a[89063] = anon_sym_DOLLAR_LPAREN;
	v->a[89064] = anon_sym_BQUOTE;
	v->a[89065] = anon_sym_DOLLAR_BQUOTE;
	v->a[89066] = anon_sym_LT_LPAREN;
	v->a[89067] = anon_sym_GT_LPAREN;
	v->a[89068] = sym_word;
	v->a[89069] = 3;
	v->a[89070] = actions(3);
	v->a[89071] = 1;
	v->a[89072] = sym_comment;
	v->a[89073] = actions(1302);
	v->a[89074] = 6;
	v->a[89075] = sym_file_descriptor;
	v->a[89076] = sym__concat;
	v->a[89077] = sym_test_operator;
	v->a[89078] = sym__brace_start;
	v->a[89079] = ts_builtin_sym_end;
	small_parse_table_4454(v);
}

void	small_parse_table_4454(t_small_parse_table_array *v)
{
	v->a[89080] = aux_sym_heredoc_redirect_token1;
	v->a[89081] = actions(1300);
	v->a[89082] = 38;
	v->a[89083] = anon_sym_LPAREN_LPAREN;
	v->a[89084] = anon_sym_SEMI;
	v->a[89085] = anon_sym_PIPE_PIPE;
	v->a[89086] = anon_sym_AMP_AMP;
	v->a[89087] = anon_sym_PIPE;
	v->a[89088] = anon_sym_AMP;
	v->a[89089] = anon_sym_LT;
	v->a[89090] = anon_sym_GT;
	v->a[89091] = anon_sym_LT_LT;
	v->a[89092] = anon_sym_GT_GT;
	v->a[89093] = anon_sym_SEMI_SEMI;
	v->a[89094] = anon_sym_PIPE_AMP;
	v->a[89095] = anon_sym_AMP_GT;
	v->a[89096] = anon_sym_AMP_GT_GT;
	v->a[89097] = anon_sym_LT_AMP;
	v->a[89098] = anon_sym_GT_AMP;
	v->a[89099] = anon_sym_GT_PIPE;
	small_parse_table_4455(v);
}

/* EOF small_parse_table_890.c */
