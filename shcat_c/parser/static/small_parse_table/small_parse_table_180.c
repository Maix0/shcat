/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_180.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_900(t_small_parse_table_array *v)
{
	v->a[18000] = sym_word;
	v->a[18001] = 22;
	v->a[18002] = actions(3);
	v->a[18003] = 1;
	v->a[18004] = sym_comment;
	v->a[18005] = actions(3183);
	v->a[18006] = 1;
	v->a[18007] = anon_sym_DOLLAR_LBRACK;
	v->a[18008] = actions(3185);
	v->a[18009] = 1;
	v->a[18010] = anon_sym_DOLLAR;
	v->a[18011] = actions(3189);
	v->a[18012] = 1;
	v->a[18013] = anon_sym_DQUOTE;
	v->a[18014] = actions(3191);
	v->a[18015] = 1;
	v->a[18016] = aux_sym_number_token1;
	v->a[18017] = actions(3193);
	v->a[18018] = 1;
	v->a[18019] = aux_sym_number_token2;
	small_parse_table_901(v);
}

void	small_parse_table_901(t_small_parse_table_array *v)
{
	v->a[18020] = actions(3195);
	v->a[18021] = 1;
	v->a[18022] = anon_sym_DOLLAR_LBRACE;
	v->a[18023] = actions(3197);
	v->a[18024] = 1;
	v->a[18025] = anon_sym_DOLLAR_LPAREN;
	v->a[18026] = actions(3199);
	v->a[18027] = 1;
	v->a[18028] = anon_sym_BQUOTE;
	v->a[18029] = actions(3201);
	v->a[18030] = 1;
	v->a[18031] = anon_sym_DOLLAR_BQUOTE;
	v->a[18032] = actions(3209);
	v->a[18033] = 1;
	v->a[18034] = sym__brace_start;
	v->a[18035] = actions(3657);
	v->a[18036] = 1;
	v->a[18037] = sym__special_character;
	v->a[18038] = actions(3659);
	v->a[18039] = 1;
	small_parse_table_902(v);
}

void	small_parse_table_902(t_small_parse_table_array *v)
{
	v->a[18040] = aux_sym__simple_variable_name_token1;
	v->a[18041] = actions(3661);
	v->a[18042] = 1;
	v->a[18043] = sym_test_operator;
	v->a[18044] = state(1966);
	v->a[18045] = 1;
	v->a[18046] = aux_sym__literal_repeat1;
	v->a[18047] = actions(2299);
	v->a[18048] = 2;
	v->a[18049] = sym_file_descriptor;
	v->a[18050] = aux_sym_heredoc_redirect_token1;
	v->a[18051] = actions(3181);
	v->a[18052] = 2;
	v->a[18053] = anon_sym_LPAREN_LPAREN;
	v->a[18054] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18055] = actions(3203);
	v->a[18056] = 2;
	v->a[18057] = anon_sym_LT_LPAREN;
	v->a[18058] = anon_sym_GT_LPAREN;
	v->a[18059] = state(743);
	small_parse_table_903(v);
}

void	small_parse_table_903(t_small_parse_table_array *v)
{
	v->a[18060] = 2;
	v->a[18061] = sym_concatenation;
	v->a[18062] = aux_sym_unset_command_repeat1;
	v->a[18063] = actions(3655);
	v->a[18064] = 3;
	v->a[18065] = sym_raw_string;
	v->a[18066] = sym_ansi_c_string;
	v->a[18067] = sym_word;
	v->a[18068] = state(1902);
	v->a[18069] = 9;
	v->a[18070] = sym_arithmetic_expansion;
	v->a[18071] = sym_brace_expression;
	v->a[18072] = sym_string;
	v->a[18073] = sym_translated_string;
	v->a[18074] = sym_number;
	v->a[18075] = sym_simple_expansion;
	v->a[18076] = sym_expansion;
	v->a[18077] = sym_command_substitution;
	v->a[18078] = sym_process_substitution;
	v->a[18079] = actions(2297);
	small_parse_table_904(v);
}

void	small_parse_table_904(t_small_parse_table_array *v)
{
	v->a[18080] = 19;
	v->a[18081] = anon_sym_SEMI;
	v->a[18082] = anon_sym_PIPE_PIPE;
	v->a[18083] = anon_sym_AMP_AMP;
	v->a[18084] = anon_sym_PIPE;
	v->a[18085] = anon_sym_AMP;
	v->a[18086] = anon_sym_LT;
	v->a[18087] = anon_sym_GT;
	v->a[18088] = anon_sym_LT_LT;
	v->a[18089] = anon_sym_GT_GT;
	v->a[18090] = anon_sym_SEMI_SEMI;
	v->a[18091] = anon_sym_PIPE_AMP;
	v->a[18092] = anon_sym_AMP_GT;
	v->a[18093] = anon_sym_AMP_GT_GT;
	v->a[18094] = anon_sym_LT_AMP;
	v->a[18095] = anon_sym_GT_AMP;
	v->a[18096] = anon_sym_GT_PIPE;
	v->a[18097] = anon_sym_LT_AMP_DASH;
	v->a[18098] = anon_sym_GT_AMP_DASH;
	v->a[18099] = anon_sym_LT_LT_DASH;
	small_parse_table_905(v);
}

/* EOF small_parse_table_180.c */
