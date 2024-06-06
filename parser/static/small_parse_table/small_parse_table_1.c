/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5(t_small_parse_table_array *v)
{
	v->a[100] = actions(3);
	v->a[101] = 1;
	v->a[102] = sym_comment;
	v->a[103] = actions(729);
	v->a[104] = 1;
	v->a[105] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[106] = actions(731);
	v->a[107] = 1;
	v->a[108] = anon_sym_DOLLAR;
	v->a[109] = actions(733);
	v->a[110] = 1;
	v->a[111] = sym__special_character;
	v->a[112] = actions(735);
	v->a[113] = 1;
	v->a[114] = anon_sym_DQUOTE;
	v->a[115] = actions(737);
	v->a[116] = 1;
	v->a[117] = aux_sym_number_token1;
	v->a[118] = actions(739);
	v->a[119] = 1;
	small_parse_table_6(v);
}

void	small_parse_table_6(t_small_parse_table_array *v)
{
	v->a[120] = aux_sym_number_token2;
	v->a[121] = actions(741);
	v->a[122] = 1;
	v->a[123] = anon_sym_DOLLAR_LBRACE;
	v->a[124] = actions(743);
	v->a[125] = 1;
	v->a[126] = anon_sym_DOLLAR_LPAREN;
	v->a[127] = actions(745);
	v->a[128] = 1;
	v->a[129] = anon_sym_BQUOTE;
	v->a[130] = actions(747);
	v->a[131] = 1;
	v->a[132] = anon_sym_DOLLAR_BQUOTE;
	v->a[133] = actions(749);
	v->a[134] = 1;
	v->a[135] = aux_sym__simple_variable_name_token1;
	v->a[136] = actions(751);
	v->a[137] = 1;
	v->a[138] = sym_variable_name;
	v->a[139] = actions(753);
	small_parse_table_7(v);
}

void	small_parse_table_7(t_small_parse_table_array *v)
{
	v->a[140] = 1;
	v->a[141] = sym_test_operator;
	v->a[142] = actions(755);
	v->a[143] = 1;
	v->a[144] = sym__brace_start;
	v->a[145] = state(683);
	v->a[146] = 1;
	v->a[147] = aux_sym__literal_repeat1;
	v->a[148] = actions(723);
	v->a[149] = 2;
	v->a[150] = sym_raw_string;
	v->a[151] = sym_word;
	v->a[152] = actions(727);
	v->a[153] = 2;
	v->a[154] = sym_file_descriptor;
	v->a[155] = aux_sym_heredoc_redirect_token1;
	v->a[156] = state(260);
	v->a[157] = 3;
	v->a[158] = sym_variable_assignment;
	v->a[159] = sym_concatenation;
	small_parse_table_8(v);
}

void	small_parse_table_8(t_small_parse_table_array *v)
{
	v->a[160] = aux_sym_declaration_command_repeat1;
	v->a[161] = state(503);
	v->a[162] = 7;
	v->a[163] = sym_arithmetic_expansion;
	v->a[164] = sym_brace_expression;
	v->a[165] = sym_string;
	v->a[166] = sym_number;
	v->a[167] = sym_simple_expansion;
	v->a[168] = sym_expansion;
	v->a[169] = sym_command_substitution;
	v->a[170] = actions(725);
	v->a[171] = 22;
	v->a[172] = anon_sym_esac;
	v->a[173] = anon_sym_PIPE;
	v->a[174] = anon_sym_SEMI_SEMI;
	v->a[175] = anon_sym_SEMI_AMP;
	v->a[176] = anon_sym_SEMI_SEMI_AMP;
	v->a[177] = anon_sym_PIPE_AMP;
	v->a[178] = anon_sym_AMP_AMP;
	v->a[179] = anon_sym_PIPE_PIPE;
	small_parse_table_9(v);
}

void	small_parse_table_9(t_small_parse_table_array *v)
{
	v->a[180] = anon_sym_LT;
	v->a[181] = anon_sym_GT;
	v->a[182] = anon_sym_GT_GT;
	v->a[183] = anon_sym_AMP_GT;
	v->a[184] = anon_sym_AMP_GT_GT;
	v->a[185] = anon_sym_LT_AMP;
	v->a[186] = anon_sym_GT_AMP;
	v->a[187] = anon_sym_GT_PIPE;
	v->a[188] = anon_sym_LT_AMP_DASH;
	v->a[189] = anon_sym_GT_AMP_DASH;
	v->a[190] = anon_sym_LT_LT;
	v->a[191] = anon_sym_LT_LT_DASH;
	v->a[192] = anon_sym_AMP;
	v->a[193] = anon_sym_SEMI;
	v->a[194] = 23;
	v->a[195] = actions(3);
	v->a[196] = 1;
	v->a[197] = sym_comment;
	v->a[198] = actions(693);
	v->a[199] = 1;
	small_parse_table_10(v);
}

/* EOF small_parse_table_1.c */
