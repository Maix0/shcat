/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1040.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5200(t_small_parse_table_array *v)
{
	v->a[104000] = sym_file_descriptor;
	v->a[104001] = actions(5826);
	v->a[104002] = 2;
	v->a[104003] = ts_builtin_sym_end;
	v->a[104004] = aux_sym_heredoc_redirect_token1;
	v->a[104005] = actions(5831);
	v->a[104006] = 3;
	v->a[104007] = sym_variable_name;
	v->a[104008] = sym_test_operator;
	v->a[104009] = sym__brace_start;
	v->a[104010] = actions(5821);
	v->a[104011] = 9;
	v->a[104012] = anon_sym_SEMI;
	v->a[104013] = anon_sym_PIPE_PIPE;
	v->a[104014] = anon_sym_AMP_AMP;
	v->a[104015] = anon_sym_PIPE;
	v->a[104016] = anon_sym_AMP;
	v->a[104017] = anon_sym_LT_LT;
	v->a[104018] = anon_sym_SEMI_SEMI;
	v->a[104019] = anon_sym_PIPE_AMP;
	small_parse_table_5201(v);
}

void	small_parse_table_5201(t_small_parse_table_array *v)
{
	v->a[104020] = anon_sym_LT_LT_DASH;
	v->a[104021] = actions(5823);
	v->a[104022] = 11;
	v->a[104023] = anon_sym_LT;
	v->a[104024] = anon_sym_GT;
	v->a[104025] = anon_sym_GT_GT;
	v->a[104026] = anon_sym_AMP_GT;
	v->a[104027] = anon_sym_AMP_GT_GT;
	v->a[104028] = anon_sym_LT_AMP;
	v->a[104029] = anon_sym_GT_AMP;
	v->a[104030] = anon_sym_GT_PIPE;
	v->a[104031] = anon_sym_LT_AMP_DASH;
	v->a[104032] = anon_sym_GT_AMP_DASH;
	v->a[104033] = anon_sym_LT_LT_LT;
	v->a[104034] = actions(5819);
	v->a[104035] = 17;
	v->a[104036] = anon_sym_LPAREN_LPAREN;
	v->a[104037] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[104038] = anon_sym_DOLLAR_LBRACK;
	v->a[104039] = anon_sym_DOLLAR;
	small_parse_table_5202(v);
}

void	small_parse_table_5202(t_small_parse_table_array *v)
{
	v->a[104040] = sym__special_character;
	v->a[104041] = anon_sym_DQUOTE;
	v->a[104042] = sym_raw_string;
	v->a[104043] = sym_ansi_c_string;
	v->a[104044] = aux_sym_number_token1;
	v->a[104045] = aux_sym_number_token2;
	v->a[104046] = anon_sym_DOLLAR_LBRACE;
	v->a[104047] = anon_sym_DOLLAR_LPAREN;
	v->a[104048] = anon_sym_BQUOTE;
	v->a[104049] = anon_sym_DOLLAR_BQUOTE;
	v->a[104050] = anon_sym_LT_LPAREN;
	v->a[104051] = anon_sym_GT_LPAREN;
	v->a[104052] = sym_word;
	v->a[104053] = 26;
	v->a[104054] = actions(71);
	v->a[104055] = 1;
	v->a[104056] = sym_comment;
	v->a[104057] = actions(1127);
	v->a[104058] = 1;
	v->a[104059] = sym_word;
	small_parse_table_5203(v);
}

void	small_parse_table_5203(t_small_parse_table_array *v)
{
	v->a[104060] = actions(1131);
	v->a[104061] = 1;
	v->a[104062] = anon_sym_LPAREN;
	v->a[104063] = actions(1133);
	v->a[104064] = 1;
	v->a[104065] = anon_sym_BANG;
	v->a[104066] = actions(1139);
	v->a[104067] = 1;
	v->a[104068] = anon_sym_TILDE;
	v->a[104069] = actions(1141);
	v->a[104070] = 1;
	v->a[104071] = anon_sym_DOLLAR_LBRACK;
	v->a[104072] = actions(1145);
	v->a[104073] = 1;
	v->a[104074] = anon_sym_DOLLAR;
	v->a[104075] = actions(1147);
	v->a[104076] = 1;
	v->a[104077] = sym__special_character;
	v->a[104078] = actions(1149);
	v->a[104079] = 1;
	small_parse_table_5204(v);
}

void	small_parse_table_5204(t_small_parse_table_array *v)
{
	v->a[104080] = anon_sym_DQUOTE;
	v->a[104081] = actions(1153);
	v->a[104082] = 1;
	v->a[104083] = aux_sym_number_token1;
	v->a[104084] = actions(1155);
	v->a[104085] = 1;
	v->a[104086] = aux_sym_number_token2;
	v->a[104087] = actions(1157);
	v->a[104088] = 1;
	v->a[104089] = anon_sym_DOLLAR_LBRACE;
	v->a[104090] = actions(1159);
	v->a[104091] = 1;
	v->a[104092] = anon_sym_DOLLAR_LPAREN;
	v->a[104093] = actions(1163);
	v->a[104094] = 1;
	v->a[104095] = anon_sym_DOLLAR_BQUOTE;
	v->a[104096] = actions(1167);
	v->a[104097] = 1;
	v->a[104098] = sym_test_operator;
	v->a[104099] = actions(1169);
	small_parse_table_5205(v);
}

/* EOF small_parse_table_1040.c */
