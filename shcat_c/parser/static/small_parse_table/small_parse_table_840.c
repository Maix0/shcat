/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_840.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4200(t_small_parse_table_array *v)
{
	v->a[84000] = aux_sym_heredoc_redirect_token1;
	v->a[84001] = actions(4467);
	v->a[84002] = 36;
	v->a[84003] = anon_sym_LPAREN_LPAREN;
	v->a[84004] = anon_sym_PIPE_PIPE;
	v->a[84005] = anon_sym_AMP_AMP;
	v->a[84006] = anon_sym_PIPE;
	v->a[84007] = anon_sym_EQ_EQ;
	v->a[84008] = anon_sym_LT;
	v->a[84009] = anon_sym_GT;
	v->a[84010] = anon_sym_LT_LT;
	v->a[84011] = anon_sym_GT_GT;
	v->a[84012] = anon_sym_PIPE_AMP;
	v->a[84013] = anon_sym_EQ_TILDE;
	v->a[84014] = anon_sym_AMP_GT;
	v->a[84015] = anon_sym_AMP_GT_GT;
	v->a[84016] = anon_sym_LT_AMP;
	v->a[84017] = anon_sym_GT_AMP;
	v->a[84018] = anon_sym_GT_PIPE;
	v->a[84019] = anon_sym_LT_AMP_DASH;
	small_parse_table_4201(v);
}

void	small_parse_table_4201(t_small_parse_table_array *v)
{
	v->a[84020] = anon_sym_GT_AMP_DASH;
	v->a[84021] = anon_sym_LT_LT_DASH;
	v->a[84022] = anon_sym_LT_LT_LT;
	v->a[84023] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[84024] = anon_sym_DOLLAR_LBRACK;
	v->a[84025] = anon_sym_DOLLAR;
	v->a[84026] = sym__special_character;
	v->a[84027] = anon_sym_DQUOTE;
	v->a[84028] = sym_raw_string;
	v->a[84029] = sym_ansi_c_string;
	v->a[84030] = aux_sym_number_token1;
	v->a[84031] = aux_sym_number_token2;
	v->a[84032] = anon_sym_DOLLAR_LBRACE;
	v->a[84033] = anon_sym_DOLLAR_LPAREN;
	v->a[84034] = anon_sym_BQUOTE;
	v->a[84035] = anon_sym_DOLLAR_BQUOTE;
	v->a[84036] = anon_sym_LT_LPAREN;
	v->a[84037] = anon_sym_GT_LPAREN;
	v->a[84038] = sym_word;
	v->a[84039] = 3;
	small_parse_table_4202(v);
}

void	small_parse_table_4202(t_small_parse_table_array *v)
{
	v->a[84040] = actions(3);
	v->a[84041] = 1;
	v->a[84042] = sym_comment;
	v->a[84043] = actions(5768);
	v->a[84044] = 5;
	v->a[84045] = sym_file_descriptor;
	v->a[84046] = sym_variable_name;
	v->a[84047] = sym_test_operator;
	v->a[84048] = sym__brace_start;
	v->a[84049] = aux_sym_heredoc_redirect_token1;
	v->a[84050] = actions(5766);
	v->a[84051] = 39;
	v->a[84052] = anon_sym_LPAREN_LPAREN;
	v->a[84053] = anon_sym_SEMI;
	v->a[84054] = anon_sym_PIPE_PIPE;
	v->a[84055] = anon_sym_AMP_AMP;
	v->a[84056] = anon_sym_PIPE;
	v->a[84057] = anon_sym_AMP;
	v->a[84058] = anon_sym_LT;
	v->a[84059] = anon_sym_GT;
	small_parse_table_4203(v);
}

void	small_parse_table_4203(t_small_parse_table_array *v)
{
	v->a[84060] = anon_sym_LT_LT;
	v->a[84061] = anon_sym_GT_GT;
	v->a[84062] = anon_sym_SEMI_SEMI;
	v->a[84063] = anon_sym_SEMI_AMP;
	v->a[84064] = anon_sym_SEMI_SEMI_AMP;
	v->a[84065] = anon_sym_PIPE_AMP;
	v->a[84066] = anon_sym_AMP_GT;
	v->a[84067] = anon_sym_AMP_GT_GT;
	v->a[84068] = anon_sym_LT_AMP;
	v->a[84069] = anon_sym_GT_AMP;
	v->a[84070] = anon_sym_GT_PIPE;
	v->a[84071] = anon_sym_LT_AMP_DASH;
	v->a[84072] = anon_sym_GT_AMP_DASH;
	v->a[84073] = anon_sym_LT_LT_DASH;
	v->a[84074] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[84075] = anon_sym_DOLLAR_LBRACK;
	v->a[84076] = anon_sym_DOLLAR;
	v->a[84077] = sym__special_character;
	v->a[84078] = anon_sym_DQUOTE;
	v->a[84079] = sym_raw_string;
	small_parse_table_4204(v);
}

void	small_parse_table_4204(t_small_parse_table_array *v)
{
	v->a[84080] = sym_ansi_c_string;
	v->a[84081] = aux_sym_number_token1;
	v->a[84082] = aux_sym_number_token2;
	v->a[84083] = anon_sym_DOLLAR_LBRACE;
	v->a[84084] = anon_sym_DOLLAR_LPAREN;
	v->a[84085] = anon_sym_BQUOTE;
	v->a[84086] = anon_sym_DOLLAR_BQUOTE;
	v->a[84087] = anon_sym_LT_LPAREN;
	v->a[84088] = anon_sym_GT_LPAREN;
	v->a[84089] = aux_sym__simple_variable_name_token1;
	v->a[84090] = sym_word;
	v->a[84091] = 3;
	v->a[84092] = actions(3);
	v->a[84093] = 1;
	v->a[84094] = sym_comment;
	v->a[84095] = actions(1310);
	v->a[84096] = 5;
	v->a[84097] = sym_file_descriptor;
	v->a[84098] = sym__concat;
	v->a[84099] = sym_test_operator;
	small_parse_table_4205(v);
}

/* EOF small_parse_table_840.c */
