/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_81.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_405(t_small_parse_table_array *v)
{
	v->a[8100] = sym_arithmetic_expansion;
	v->a[8101] = sym_brace_expression;
	v->a[8102] = sym_string;
	v->a[8103] = sym_translated_string;
	v->a[8104] = sym_number;
	v->a[8105] = sym_simple_expansion;
	v->a[8106] = sym_expansion;
	v->a[8107] = sym_command_substitution;
	v->a[8108] = sym_process_substitution;
	v->a[8109] = actions(1797);
	v->a[8110] = 19;
	v->a[8111] = anon_sym_SEMI;
	v->a[8112] = anon_sym_PIPE_PIPE;
	v->a[8113] = anon_sym_AMP_AMP;
	v->a[8114] = anon_sym_PIPE;
	v->a[8115] = anon_sym_AMP;
	v->a[8116] = anon_sym_LT;
	v->a[8117] = anon_sym_GT;
	v->a[8118] = anon_sym_LT_LT;
	v->a[8119] = anon_sym_GT_GT;
	small_parse_table_406(v);
}

void	small_parse_table_406(t_small_parse_table_array *v)
{
	v->a[8120] = anon_sym_SEMI_SEMI;
	v->a[8121] = anon_sym_PIPE_AMP;
	v->a[8122] = anon_sym_AMP_GT;
	v->a[8123] = anon_sym_AMP_GT_GT;
	v->a[8124] = anon_sym_LT_AMP;
	v->a[8125] = anon_sym_GT_AMP;
	v->a[8126] = anon_sym_GT_PIPE;
	v->a[8127] = anon_sym_LT_AMP_DASH;
	v->a[8128] = anon_sym_GT_AMP_DASH;
	v->a[8129] = anon_sym_LT_LT_DASH;
	v->a[8130] = 8;
	v->a[8131] = actions(3);
	v->a[8132] = 1;
	v->a[8133] = sym_comment;
	v->a[8134] = actions(2428);
	v->a[8135] = 1;
	v->a[8136] = anon_sym_DQUOTE;
	v->a[8137] = actions(2432);
	v->a[8138] = 1;
	v->a[8139] = sym_variable_name;
	small_parse_table_407(v);
}

void	small_parse_table_407(t_small_parse_table_array *v)
{
	v->a[8140] = state(1204);
	v->a[8141] = 1;
	v->a[8142] = sym_string;
	v->a[8143] = actions(2430);
	v->a[8144] = 2;
	v->a[8145] = aux_sym__simple_variable_name_token1;
	v->a[8146] = aux_sym__multiline_variable_name_token1;
	v->a[8147] = actions(1241);
	v->a[8148] = 3;
	v->a[8149] = sym_file_descriptor;
	v->a[8150] = sym_test_operator;
	v->a[8151] = sym__brace_start;
	v->a[8152] = actions(2426);
	v->a[8153] = 9;
	v->a[8154] = anon_sym_DASH;
	v->a[8155] = anon_sym_STAR;
	v->a[8156] = anon_sym_BANG;
	v->a[8157] = anon_sym_QMARK;
	v->a[8158] = anon_sym_DOLLAR;
	v->a[8159] = anon_sym_POUND;
	small_parse_table_408(v);
}

void	small_parse_table_408(t_small_parse_table_array *v)
{
	v->a[8160] = anon_sym_AT2;
	v->a[8161] = anon_sym_0;
	v->a[8162] = anon_sym__;
	v->a[8163] = actions(1239);
	v->a[8164] = 39;
	v->a[8165] = anon_sym_LPAREN_LPAREN;
	v->a[8166] = anon_sym_SEMI;
	v->a[8167] = anon_sym_PIPE_PIPE;
	v->a[8168] = anon_sym_AMP_AMP;
	v->a[8169] = anon_sym_PIPE;
	v->a[8170] = anon_sym_AMP;
	v->a[8171] = anon_sym_LT;
	v->a[8172] = anon_sym_GT;
	v->a[8173] = anon_sym_LT_LT;
	v->a[8174] = anon_sym_GT_GT;
	v->a[8175] = anon_sym_esac;
	v->a[8176] = anon_sym_SEMI_SEMI;
	v->a[8177] = anon_sym_SEMI_AMP;
	v->a[8178] = anon_sym_SEMI_SEMI_AMP;
	v->a[8179] = anon_sym_PIPE_AMP;
	small_parse_table_409(v);
}

void	small_parse_table_409(t_small_parse_table_array *v)
{
	v->a[8180] = anon_sym_AMP_GT;
	v->a[8181] = anon_sym_AMP_GT_GT;
	v->a[8182] = anon_sym_LT_AMP;
	v->a[8183] = anon_sym_GT_AMP;
	v->a[8184] = anon_sym_GT_PIPE;
	v->a[8185] = anon_sym_LT_AMP_DASH;
	v->a[8186] = anon_sym_GT_AMP_DASH;
	v->a[8187] = anon_sym_LT_LT_DASH;
	v->a[8188] = aux_sym_heredoc_redirect_token1;
	v->a[8189] = anon_sym_LT_LT_LT;
	v->a[8190] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[8191] = anon_sym_DOLLAR_LBRACK;
	v->a[8192] = sym__special_character;
	v->a[8193] = sym_raw_string;
	v->a[8194] = sym_ansi_c_string;
	v->a[8195] = aux_sym_number_token1;
	v->a[8196] = aux_sym_number_token2;
	v->a[8197] = anon_sym_DOLLAR_LBRACE;
	v->a[8198] = anon_sym_DOLLAR_LPAREN;
	v->a[8199] = anon_sym_BQUOTE;
	small_parse_table_410(v);
}

/* EOF small_parse_table_81.c */
