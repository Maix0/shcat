/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_311.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1555(t_small_parse_table_array *v)
{
	v->a[31100] = anon_sym_DOLLAR_LBRACE;
	v->a[31101] = actions(3197);
	v->a[31102] = 1;
	v->a[31103] = anon_sym_DOLLAR_LPAREN;
	v->a[31104] = actions(3199);
	v->a[31105] = 1;
	v->a[31106] = anon_sym_BQUOTE;
	v->a[31107] = actions(3201);
	v->a[31108] = 1;
	v->a[31109] = anon_sym_DOLLAR_BQUOTE;
	v->a[31110] = actions(3209);
	v->a[31111] = 1;
	v->a[31112] = sym__brace_start;
	v->a[31113] = actions(4492);
	v->a[31114] = 1;
	v->a[31115] = sym__special_character;
	v->a[31116] = actions(4496);
	v->a[31117] = 1;
	v->a[31118] = sym_test_operator;
	v->a[31119] = actions(4550);
	small_parse_table_1556(v);
}

void	small_parse_table_1556(t_small_parse_table_array *v)
{
	v->a[31120] = 1;
	v->a[31121] = aux_sym__simple_variable_name_token1;
	v->a[31122] = state(1966);
	v->a[31123] = 1;
	v->a[31124] = aux_sym__literal_repeat1;
	v->a[31125] = actions(2299);
	v->a[31126] = 2;
	v->a[31127] = sym_file_descriptor;
	v->a[31128] = aux_sym_heredoc_redirect_token1;
	v->a[31129] = actions(3181);
	v->a[31130] = 2;
	v->a[31131] = anon_sym_LPAREN_LPAREN;
	v->a[31132] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31133] = actions(3203);
	v->a[31134] = 2;
	v->a[31135] = anon_sym_LT_LPAREN;
	v->a[31136] = anon_sym_GT_LPAREN;
	v->a[31137] = state(865);
	v->a[31138] = 2;
	v->a[31139] = sym_concatenation;
	small_parse_table_1557(v);
}

void	small_parse_table_1557(t_small_parse_table_array *v)
{
	v->a[31140] = aux_sym_unset_command_repeat1;
	v->a[31141] = actions(4490);
	v->a[31142] = 3;
	v->a[31143] = sym_raw_string;
	v->a[31144] = sym_ansi_c_string;
	v->a[31145] = sym_word;
	v->a[31146] = state(2367);
	v->a[31147] = 9;
	v->a[31148] = sym_arithmetic_expansion;
	v->a[31149] = sym_brace_expression;
	v->a[31150] = sym_string;
	v->a[31151] = sym_translated_string;
	v->a[31152] = sym_number;
	v->a[31153] = sym_simple_expansion;
	v->a[31154] = sym_expansion;
	v->a[31155] = sym_command_substitution;
	v->a[31156] = sym_process_substitution;
	v->a[31157] = actions(2297);
	v->a[31158] = 16;
	v->a[31159] = anon_sym_PIPE_PIPE;
	small_parse_table_1558(v);
}

void	small_parse_table_1558(t_small_parse_table_array *v)
{
	v->a[31160] = anon_sym_AMP_AMP;
	v->a[31161] = anon_sym_PIPE;
	v->a[31162] = anon_sym_LT;
	v->a[31163] = anon_sym_GT;
	v->a[31164] = anon_sym_LT_LT;
	v->a[31165] = anon_sym_GT_GT;
	v->a[31166] = anon_sym_PIPE_AMP;
	v->a[31167] = anon_sym_AMP_GT;
	v->a[31168] = anon_sym_AMP_GT_GT;
	v->a[31169] = anon_sym_LT_AMP;
	v->a[31170] = anon_sym_GT_AMP;
	v->a[31171] = anon_sym_GT_PIPE;
	v->a[31172] = anon_sym_LT_AMP_DASH;
	v->a[31173] = anon_sym_GT_AMP_DASH;
	v->a[31174] = anon_sym_LT_LT_DASH;
	v->a[31175] = 22;
	v->a[31176] = actions(71);
	v->a[31177] = 1;
	v->a[31178] = sym_comment;
	v->a[31179] = actions(4498);
	small_parse_table_1559(v);
}

void	small_parse_table_1559(t_small_parse_table_array *v)
{
	v->a[31180] = 1;
	v->a[31181] = sym_word;
	v->a[31182] = actions(4502);
	v->a[31183] = 1;
	v->a[31184] = anon_sym_DOLLAR_LBRACK;
	v->a[31185] = actions(4504);
	v->a[31186] = 1;
	v->a[31187] = anon_sym_DOLLAR;
	v->a[31188] = actions(4506);
	v->a[31189] = 1;
	v->a[31190] = sym__special_character;
	v->a[31191] = actions(4508);
	v->a[31192] = 1;
	v->a[31193] = anon_sym_DQUOTE;
	v->a[31194] = actions(4512);
	v->a[31195] = 1;
	v->a[31196] = aux_sym_number_token1;
	v->a[31197] = actions(4514);
	v->a[31198] = 1;
	v->a[31199] = aux_sym_number_token2;
	small_parse_table_1560(v);
}

/* EOF small_parse_table_311.c */
