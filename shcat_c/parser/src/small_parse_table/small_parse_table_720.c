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
	v->a[72000] = anon_sym_GT;
	v->a[72001] = anon_sym_LT_LT;
	v->a[72002] = anon_sym_GT_GT;
	v->a[72003] = anon_sym_esac;
	v->a[72004] = anon_sym_SEMI_SEMI;
	v->a[72005] = anon_sym_SEMI_AMP;
	v->a[72006] = anon_sym_SEMI_SEMI_AMP;
	v->a[72007] = anon_sym_PIPE_AMP;
	v->a[72008] = anon_sym_AMP_GT;
	v->a[72009] = anon_sym_AMP_GT_GT;
	v->a[72010] = anon_sym_LT_AMP;
	v->a[72011] = anon_sym_GT_AMP;
	v->a[72012] = anon_sym_GT_PIPE;
	v->a[72013] = anon_sym_LT_AMP_DASH;
	v->a[72014] = anon_sym_GT_AMP_DASH;
	v->a[72015] = anon_sym_LT_LT_DASH;
	v->a[72016] = anon_sym_LT_LT_LT;
	v->a[72017] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[72018] = anon_sym_DOLLAR_LBRACK;
	v->a[72019] = anon_sym_DOLLAR;
	small_parse_table_3601(v);
}

void	small_parse_table_3601(t_small_parse_table_array *v)
{
	v->a[72020] = sym__special_character;
	v->a[72021] = anon_sym_DQUOTE;
	v->a[72022] = sym_raw_string;
	v->a[72023] = sym_ansi_c_string;
	v->a[72024] = aux_sym_number_token1;
	v->a[72025] = aux_sym_number_token2;
	v->a[72026] = anon_sym_DOLLAR_LBRACE;
	v->a[72027] = anon_sym_DOLLAR_LPAREN;
	v->a[72028] = anon_sym_BQUOTE;
	v->a[72029] = anon_sym_DOLLAR_BQUOTE;
	v->a[72030] = anon_sym_LT_LPAREN;
	v->a[72031] = anon_sym_GT_LPAREN;
	v->a[72032] = sym_word;
	v->a[72033] = 3;
	v->a[72034] = actions(3);
	v->a[72035] = 1;
	v->a[72036] = sym_comment;
	v->a[72037] = actions(5462);
	v->a[72038] = 6;
	v->a[72039] = sym_file_descriptor;
	small_parse_table_3602(v);
}

void	small_parse_table_3602(t_small_parse_table_array *v)
{
	v->a[72040] = sym_test_operator;
	v->a[72041] = sym__bare_dollar;
	v->a[72042] = sym__brace_start;
	v->a[72043] = ts_builtin_sym_end;
	v->a[72044] = aux_sym_heredoc_redirect_token1;
	v->a[72045] = actions(5460);
	v->a[72046] = 39;
	v->a[72047] = anon_sym_LPAREN_LPAREN;
	v->a[72048] = anon_sym_SEMI;
	v->a[72049] = anon_sym_PIPE_PIPE;
	v->a[72050] = anon_sym_AMP_AMP;
	v->a[72051] = anon_sym_PIPE;
	v->a[72052] = anon_sym_AMP;
	v->a[72053] = anon_sym_EQ_EQ;
	v->a[72054] = anon_sym_LT;
	v->a[72055] = anon_sym_GT;
	v->a[72056] = anon_sym_LT_LT;
	v->a[72057] = anon_sym_GT_GT;
	v->a[72058] = anon_sym_SEMI_SEMI;
	v->a[72059] = anon_sym_PIPE_AMP;
	small_parse_table_3603(v);
}

void	small_parse_table_3603(t_small_parse_table_array *v)
{
	v->a[72060] = anon_sym_EQ_TILDE;
	v->a[72061] = anon_sym_AMP_GT;
	v->a[72062] = anon_sym_AMP_GT_GT;
	v->a[72063] = anon_sym_LT_AMP;
	v->a[72064] = anon_sym_GT_AMP;
	v->a[72065] = anon_sym_GT_PIPE;
	v->a[72066] = anon_sym_LT_AMP_DASH;
	v->a[72067] = anon_sym_GT_AMP_DASH;
	v->a[72068] = anon_sym_LT_LT_DASH;
	v->a[72069] = anon_sym_LT_LT_LT;
	v->a[72070] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[72071] = anon_sym_DOLLAR_LBRACK;
	v->a[72072] = anon_sym_DOLLAR;
	v->a[72073] = sym__special_character;
	v->a[72074] = anon_sym_DQUOTE;
	v->a[72075] = sym_raw_string;
	v->a[72076] = sym_ansi_c_string;
	v->a[72077] = aux_sym_number_token1;
	v->a[72078] = aux_sym_number_token2;
	v->a[72079] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3604(v);
}

void	small_parse_table_3604(t_small_parse_table_array *v)
{
	v->a[72080] = anon_sym_DOLLAR_LPAREN;
	v->a[72081] = anon_sym_BQUOTE;
	v->a[72082] = anon_sym_DOLLAR_BQUOTE;
	v->a[72083] = anon_sym_LT_LPAREN;
	v->a[72084] = anon_sym_GT_LPAREN;
	v->a[72085] = sym_word;
	v->a[72086] = 3;
	v->a[72087] = actions(3);
	v->a[72088] = 1;
	v->a[72089] = sym_comment;
	v->a[72090] = actions(1310);
	v->a[72091] = 7;
	v->a[72092] = sym_file_descriptor;
	v->a[72093] = sym__concat;
	v->a[72094] = sym_variable_name;
	v->a[72095] = sym_test_operator;
	v->a[72096] = sym__brace_start;
	v->a[72097] = ts_builtin_sym_end;
	v->a[72098] = aux_sym_heredoc_redirect_token1;
	v->a[72099] = actions(1308);
	small_parse_table_3605(v);
}

/* EOF small_parse_table_720.c */
