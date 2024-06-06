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
	v->a[18000] = actions(1753);
	v->a[18001] = 1;
	v->a[18002] = anon_sym_BQUOTE;
	v->a[18003] = actions(1755);
	v->a[18004] = 1;
	v->a[18005] = anon_sym_DOLLAR_BQUOTE;
	v->a[18006] = actions(1761);
	v->a[18007] = 1;
	v->a[18008] = sym__brace_start;
	v->a[18009] = actions(2672);
	v->a[18010] = 1;
	v->a[18011] = sym__special_character;
	v->a[18012] = actions(2676);
	v->a[18013] = 1;
	v->a[18014] = sym_test_operator;
	v->a[18015] = actions(2747);
	v->a[18016] = 1;
	v->a[18017] = aux_sym__simple_variable_name_token1;
	v->a[18018] = state(1219);
	v->a[18019] = 1;
	small_parse_table_901(v);
}

void	small_parse_table_901(t_small_parse_table_array *v)
{
	v->a[18020] = aux_sym__literal_repeat1;
	v->a[18021] = actions(1041);
	v->a[18022] = 2;
	v->a[18023] = sym_file_descriptor;
	v->a[18024] = aux_sym_heredoc_redirect_token1;
	v->a[18025] = actions(2670);
	v->a[18026] = 2;
	v->a[18027] = sym_raw_string;
	v->a[18028] = sym_word;
	v->a[18029] = state(505);
	v->a[18030] = 2;
	v->a[18031] = sym_concatenation;
	v->a[18032] = aux_sym_unset_command_repeat1;
	v->a[18033] = state(1351);
	v->a[18034] = 7;
	v->a[18035] = sym_arithmetic_expansion;
	v->a[18036] = sym_brace_expression;
	v->a[18037] = sym_string;
	v->a[18038] = sym_number;
	v->a[18039] = sym_simple_expansion;
	small_parse_table_902(v);
}

void	small_parse_table_902(t_small_parse_table_array *v)
{
	v->a[18040] = sym_expansion;
	v->a[18041] = sym_command_substitution;
	v->a[18042] = actions(1039);
	v->a[18043] = 16;
	v->a[18044] = anon_sym_PIPE;
	v->a[18045] = anon_sym_PIPE_AMP;
	v->a[18046] = anon_sym_AMP_AMP;
	v->a[18047] = anon_sym_PIPE_PIPE;
	v->a[18048] = anon_sym_LT;
	v->a[18049] = anon_sym_GT;
	v->a[18050] = anon_sym_GT_GT;
	v->a[18051] = anon_sym_AMP_GT;
	v->a[18052] = anon_sym_AMP_GT_GT;
	v->a[18053] = anon_sym_LT_AMP;
	v->a[18054] = anon_sym_GT_AMP;
	v->a[18055] = anon_sym_GT_PIPE;
	v->a[18056] = anon_sym_LT_AMP_DASH;
	v->a[18057] = anon_sym_GT_AMP_DASH;
	v->a[18058] = anon_sym_LT_LT;
	v->a[18059] = anon_sym_LT_LT_DASH;
	small_parse_table_903(v);
}

void	small_parse_table_903(t_small_parse_table_array *v)
{
	v->a[18060] = 7;
	v->a[18061] = actions(3);
	v->a[18062] = 1;
	v->a[18063] = sym_comment;
	v->a[18064] = actions(2684);
	v->a[18065] = 1;
	v->a[18066] = aux_sym_concatenation_token1;
	v->a[18067] = actions(2686);
	v->a[18068] = 1;
	v->a[18069] = sym__concat;
	v->a[18070] = actions(2751);
	v->a[18071] = 1;
	v->a[18072] = anon_sym_LPAREN;
	v->a[18073] = state(481);
	v->a[18074] = 1;
	v->a[18075] = aux_sym_concatenation_repeat1;
	v->a[18076] = actions(2754);
	v->a[18077] = 5;
	v->a[18078] = sym_file_descriptor;
	v->a[18079] = sym_test_operator;
	small_parse_table_904(v);
}

void	small_parse_table_904(t_small_parse_table_array *v)
{
	v->a[18080] = sym__bare_dollar;
	v->a[18081] = sym__brace_start;
	v->a[18082] = aux_sym_heredoc_redirect_token1;
	v->a[18083] = actions(2749);
	v->a[18084] = 34;
	v->a[18085] = anon_sym_esac;
	v->a[18086] = anon_sym_PIPE;
	v->a[18087] = anon_sym_SEMI_SEMI;
	v->a[18088] = anon_sym_SEMI_AMP;
	v->a[18089] = anon_sym_SEMI_SEMI_AMP;
	v->a[18090] = anon_sym_PIPE_AMP;
	v->a[18091] = anon_sym_AMP_AMP;
	v->a[18092] = anon_sym_PIPE_PIPE;
	v->a[18093] = anon_sym_LT;
	v->a[18094] = anon_sym_GT;
	v->a[18095] = anon_sym_GT_GT;
	v->a[18096] = anon_sym_AMP_GT;
	v->a[18097] = anon_sym_AMP_GT_GT;
	v->a[18098] = anon_sym_LT_AMP;
	v->a[18099] = anon_sym_GT_AMP;
	small_parse_table_905(v);
}

/* EOF small_parse_table_180.c */
