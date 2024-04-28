/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1020.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5100(t_small_parse_table_array *v)
{
	v->a[102000] = aux_sym_concatenation_repeat1;
	v->a[102001] = actions(6133);
	v->a[102002] = 2;
	v->a[102003] = sym__concat;
	v->a[102004] = aux_sym_concatenation_token1;
	v->a[102005] = actions(1261);
	v->a[102006] = 15;
	v->a[102007] = anon_sym_PIPE;
	v->a[102008] = anon_sym_EQ_EQ;
	v->a[102009] = anon_sym_LT;
	v->a[102010] = anon_sym_GT;
	v->a[102011] = anon_sym_LT_LT;
	v->a[102012] = anon_sym_EQ_TILDE;
	v->a[102013] = anon_sym_AMP_GT;
	v->a[102014] = anon_sym_LT_AMP;
	v->a[102015] = anon_sym_GT_AMP;
	v->a[102016] = anon_sym_DOLLAR;
	v->a[102017] = aux_sym_number_token1;
	v->a[102018] = aux_sym_number_token2;
	v->a[102019] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_5101(v);
}

void	small_parse_table_5101(t_small_parse_table_array *v)
{
	v->a[102020] = anon_sym_BQUOTE;
	v->a[102021] = sym_word;
	v->a[102022] = actions(1263);
	v->a[102023] = 25;
	v->a[102024] = sym_file_descriptor;
	v->a[102025] = sym_test_operator;
	v->a[102026] = sym__bare_dollar;
	v->a[102027] = sym__brace_start;
	v->a[102028] = anon_sym_LPAREN_LPAREN;
	v->a[102029] = anon_sym_PIPE_PIPE;
	v->a[102030] = anon_sym_AMP_AMP;
	v->a[102031] = anon_sym_GT_GT;
	v->a[102032] = anon_sym_PIPE_AMP;
	v->a[102033] = anon_sym_AMP_GT_GT;
	v->a[102034] = anon_sym_GT_PIPE;
	v->a[102035] = anon_sym_LT_AMP_DASH;
	v->a[102036] = anon_sym_GT_AMP_DASH;
	v->a[102037] = anon_sym_LT_LT_DASH;
	v->a[102038] = anon_sym_LT_LT_LT;
	v->a[102039] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_5102(v);
}

void	small_parse_table_5102(t_small_parse_table_array *v)
{
	v->a[102040] = anon_sym_DOLLAR_LBRACK;
	v->a[102041] = sym__special_character;
	v->a[102042] = anon_sym_DQUOTE;
	v->a[102043] = sym_raw_string;
	v->a[102044] = sym_ansi_c_string;
	v->a[102045] = anon_sym_DOLLAR_LBRACE;
	v->a[102046] = anon_sym_DOLLAR_BQUOTE;
	v->a[102047] = anon_sym_LT_LPAREN;
	v->a[102048] = anon_sym_GT_LPAREN;
	v->a[102049] = 26;
	v->a[102050] = actions(71);
	v->a[102051] = 1;
	v->a[102052] = sym_comment;
	v->a[102053] = actions(363);
	v->a[102054] = 1;
	v->a[102055] = anon_sym_DOLLAR_LBRACK;
	v->a[102056] = actions(367);
	v->a[102057] = 1;
	v->a[102058] = anon_sym_DOLLAR;
	v->a[102059] = actions(371);
	small_parse_table_5103(v);
}

void	small_parse_table_5103(t_small_parse_table_array *v)
{
	v->a[102060] = 1;
	v->a[102061] = anon_sym_DQUOTE;
	v->a[102062] = actions(375);
	v->a[102063] = 1;
	v->a[102064] = aux_sym_number_token1;
	v->a[102065] = actions(377);
	v->a[102066] = 1;
	v->a[102067] = aux_sym_number_token2;
	v->a[102068] = actions(379);
	v->a[102069] = 1;
	v->a[102070] = anon_sym_DOLLAR_LBRACE;
	v->a[102071] = actions(381);
	v->a[102072] = 1;
	v->a[102073] = anon_sym_DOLLAR_LPAREN;
	v->a[102074] = actions(385);
	v->a[102075] = 1;
	v->a[102076] = anon_sym_DOLLAR_BQUOTE;
	v->a[102077] = actions(391);
	v->a[102078] = 1;
	v->a[102079] = sym__brace_start;
	small_parse_table_5104(v);
}

void	small_parse_table_5104(t_small_parse_table_array *v)
{
	v->a[102080] = actions(1091);
	v->a[102081] = 1;
	v->a[102082] = sym_word;
	v->a[102083] = actions(1093);
	v->a[102084] = 1;
	v->a[102085] = anon_sym_LPAREN;
	v->a[102086] = actions(1095);
	v->a[102087] = 1;
	v->a[102088] = anon_sym_BANG;
	v->a[102089] = actions(1103);
	v->a[102090] = 1;
	v->a[102091] = anon_sym_TILDE;
	v->a[102092] = actions(1113);
	v->a[102093] = 1;
	v->a[102094] = sym_test_operator;
	v->a[102095] = actions(5809);
	v->a[102096] = 1;
	v->a[102097] = anon_sym_BQUOTE;
	v->a[102098] = actions(5916);
	v->a[102099] = 1;
	small_parse_table_5105(v);
}

/* EOF small_parse_table_1020.c */
