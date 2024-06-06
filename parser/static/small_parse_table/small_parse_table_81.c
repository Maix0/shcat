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
	v->a[8100] = anon_sym_0;
	v->a[8101] = anon_sym__;
	v->a[8102] = actions(810);
	v->a[8103] = 32;
	v->a[8104] = anon_sym_PIPE;
	v->a[8105] = anon_sym_RPAREN;
	v->a[8106] = anon_sym_SEMI_SEMI;
	v->a[8107] = anon_sym_PIPE_AMP;
	v->a[8108] = anon_sym_AMP_AMP;
	v->a[8109] = anon_sym_PIPE_PIPE;
	v->a[8110] = anon_sym_LT;
	v->a[8111] = anon_sym_GT;
	v->a[8112] = anon_sym_GT_GT;
	v->a[8113] = anon_sym_AMP_GT;
	v->a[8114] = anon_sym_AMP_GT_GT;
	v->a[8115] = anon_sym_LT_AMP;
	v->a[8116] = anon_sym_GT_AMP;
	v->a[8117] = anon_sym_GT_PIPE;
	v->a[8118] = anon_sym_LT_AMP_DASH;
	v->a[8119] = anon_sym_GT_AMP_DASH;
	small_parse_table_406(v);
}

void	small_parse_table_406(t_small_parse_table_array *v)
{
	v->a[8120] = anon_sym_LT_LT;
	v->a[8121] = anon_sym_LT_LT_DASH;
	v->a[8122] = aux_sym_heredoc_redirect_token1;
	v->a[8123] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[8124] = anon_sym_AMP;
	v->a[8125] = sym__special_character;
	v->a[8126] = anon_sym_DQUOTE;
	v->a[8127] = sym_raw_string;
	v->a[8128] = aux_sym_number_token1;
	v->a[8129] = aux_sym_number_token2;
	v->a[8130] = anon_sym_DOLLAR_LBRACE;
	v->a[8131] = anon_sym_DOLLAR_LPAREN;
	v->a[8132] = anon_sym_BQUOTE;
	v->a[8133] = anon_sym_DOLLAR_BQUOTE;
	v->a[8134] = sym_word;
	v->a[8135] = anon_sym_SEMI;
	v->a[8136] = 6;
	v->a[8137] = actions(3);
	v->a[8138] = 1;
	v->a[8139] = sym_comment;
	small_parse_table_407(v);
}

void	small_parse_table_407(t_small_parse_table_array *v)
{
	v->a[8140] = state(1240);
	v->a[8141] = 1;
	v->a[8142] = aux_sym__literal_repeat1;
	v->a[8143] = state(350);
	v->a[8144] = 2;
	v->a[8145] = sym_concatenation;
	v->a[8146] = aux_sym_for_statement_repeat1;
	v->a[8147] = actions(1182);
	v->a[8148] = 6;
	v->a[8149] = sym_file_descriptor;
	v->a[8150] = sym_variable_name;
	v->a[8151] = sym_test_operator;
	v->a[8152] = sym__brace_start;
	v->a[8153] = ts_builtin_sym_end;
	v->a[8154] = aux_sym_heredoc_redirect_token1;
	v->a[8155] = state(776);
	v->a[8156] = 7;
	v->a[8157] = sym_arithmetic_expansion;
	v->a[8158] = sym_brace_expression;
	v->a[8159] = sym_string;
	small_parse_table_408(v);
}

void	small_parse_table_408(t_small_parse_table_array *v)
{
	v->a[8160] = sym_number;
	v->a[8161] = sym_simple_expansion;
	v->a[8162] = sym_expansion;
	v->a[8163] = sym_command_substitution;
	v->a[8164] = actions(1180);
	v->a[8165] = 31;
	v->a[8166] = anon_sym_PIPE;
	v->a[8167] = anon_sym_SEMI_SEMI;
	v->a[8168] = anon_sym_PIPE_AMP;
	v->a[8169] = anon_sym_AMP_AMP;
	v->a[8170] = anon_sym_PIPE_PIPE;
	v->a[8171] = anon_sym_LT;
	v->a[8172] = anon_sym_GT;
	v->a[8173] = anon_sym_GT_GT;
	v->a[8174] = anon_sym_AMP_GT;
	v->a[8175] = anon_sym_AMP_GT_GT;
	v->a[8176] = anon_sym_LT_AMP;
	v->a[8177] = anon_sym_GT_AMP;
	v->a[8178] = anon_sym_GT_PIPE;
	v->a[8179] = anon_sym_LT_AMP_DASH;
	small_parse_table_409(v);
}

void	small_parse_table_409(t_small_parse_table_array *v)
{
	v->a[8180] = anon_sym_GT_AMP_DASH;
	v->a[8181] = anon_sym_LT_LT;
	v->a[8182] = anon_sym_LT_LT_DASH;
	v->a[8183] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[8184] = anon_sym_AMP;
	v->a[8185] = anon_sym_DOLLAR;
	v->a[8186] = sym__special_character;
	v->a[8187] = anon_sym_DQUOTE;
	v->a[8188] = sym_raw_string;
	v->a[8189] = aux_sym_number_token1;
	v->a[8190] = aux_sym_number_token2;
	v->a[8191] = anon_sym_DOLLAR_LBRACE;
	v->a[8192] = anon_sym_DOLLAR_LPAREN;
	v->a[8193] = anon_sym_BQUOTE;
	v->a[8194] = anon_sym_DOLLAR_BQUOTE;
	v->a[8195] = sym_word;
	v->a[8196] = anon_sym_SEMI;
	v->a[8197] = 20;
	v->a[8198] = actions(3);
	v->a[8199] = 1;
	small_parse_table_410(v);
}

/* EOF small_parse_table_81.c */
