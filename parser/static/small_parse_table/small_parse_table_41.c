/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_41.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_205(t_small_parse_table_array *v)
{
	v->a[4100] = sym_variable_name;
	v->a[4101] = actions(1422);
	v->a[4102] = 2;
	v->a[4103] = aux_sym__simple_variable_name_token1;
	v->a[4104] = aux_sym__multiline_variable_name_token1;
	v->a[4105] = actions(828);
	v->a[4106] = 4;
	v->a[4107] = sym_file_descriptor;
	v->a[4108] = sym_test_operator;
	v->a[4109] = sym__bare_dollar;
	v->a[4110] = sym__brace_start;
	v->a[4111] = actions(1420);
	v->a[4112] = 9;
	v->a[4113] = anon_sym_BANG;
	v->a[4114] = anon_sym_DASH;
	v->a[4115] = anon_sym_STAR;
	v->a[4116] = anon_sym_QMARK;
	v->a[4117] = anon_sym_DOLLAR;
	v->a[4118] = anon_sym_POUND;
	v->a[4119] = anon_sym_AT;
	small_parse_table_206(v);
}

void	small_parse_table_206(t_small_parse_table_array *v)
{
	v->a[4120] = anon_sym_0;
	v->a[4121] = anon_sym__;
	v->a[4122] = actions(826);
	v->a[4123] = 32;
	v->a[4124] = anon_sym_PIPE;
	v->a[4125] = anon_sym_RPAREN;
	v->a[4126] = anon_sym_SEMI_SEMI;
	v->a[4127] = anon_sym_PIPE_AMP;
	v->a[4128] = anon_sym_AMP_AMP;
	v->a[4129] = anon_sym_PIPE_PIPE;
	v->a[4130] = anon_sym_LT;
	v->a[4131] = anon_sym_GT;
	v->a[4132] = anon_sym_GT_GT;
	v->a[4133] = anon_sym_AMP_GT;
	v->a[4134] = anon_sym_AMP_GT_GT;
	v->a[4135] = anon_sym_LT_AMP;
	v->a[4136] = anon_sym_GT_AMP;
	v->a[4137] = anon_sym_GT_PIPE;
	v->a[4138] = anon_sym_LT_AMP_DASH;
	v->a[4139] = anon_sym_GT_AMP_DASH;
	small_parse_table_207(v);
}

void	small_parse_table_207(t_small_parse_table_array *v)
{
	v->a[4140] = anon_sym_LT_LT;
	v->a[4141] = anon_sym_LT_LT_DASH;
	v->a[4142] = aux_sym_heredoc_redirect_token1;
	v->a[4143] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[4144] = anon_sym_AMP;
	v->a[4145] = sym__special_character;
	v->a[4146] = anon_sym_DQUOTE;
	v->a[4147] = sym_raw_string;
	v->a[4148] = aux_sym_number_token1;
	v->a[4149] = aux_sym_number_token2;
	v->a[4150] = anon_sym_DOLLAR_LBRACE;
	v->a[4151] = anon_sym_DOLLAR_LPAREN;
	v->a[4152] = anon_sym_BQUOTE;
	v->a[4153] = anon_sym_DOLLAR_BQUOTE;
	v->a[4154] = sym_word;
	v->a[4155] = anon_sym_SEMI;
	v->a[4156] = 6;
	v->a[4157] = actions(3);
	v->a[4158] = 1;
	v->a[4159] = sym_comment;
	small_parse_table_208(v);
}

void	small_parse_table_208(t_small_parse_table_array *v)
{
	v->a[4160] = actions(1424);
	v->a[4161] = 1;
	v->a[4162] = sym_variable_name;
	v->a[4163] = actions(1422);
	v->a[4164] = 2;
	v->a[4165] = aux_sym__simple_variable_name_token1;
	v->a[4166] = aux_sym__multiline_variable_name_token1;
	v->a[4167] = actions(816);
	v->a[4168] = 4;
	v->a[4169] = sym_file_descriptor;
	v->a[4170] = sym_test_operator;
	v->a[4171] = sym__bare_dollar;
	v->a[4172] = sym__brace_start;
	v->a[4173] = actions(1420);
	v->a[4174] = 9;
	v->a[4175] = anon_sym_BANG;
	v->a[4176] = anon_sym_DASH;
	v->a[4177] = anon_sym_STAR;
	v->a[4178] = anon_sym_QMARK;
	v->a[4179] = anon_sym_DOLLAR;
	small_parse_table_209(v);
}

void	small_parse_table_209(t_small_parse_table_array *v)
{
	v->a[4180] = anon_sym_POUND;
	v->a[4181] = anon_sym_AT;
	v->a[4182] = anon_sym_0;
	v->a[4183] = anon_sym__;
	v->a[4184] = actions(810);
	v->a[4185] = 32;
	v->a[4186] = anon_sym_PIPE;
	v->a[4187] = anon_sym_RPAREN;
	v->a[4188] = anon_sym_SEMI_SEMI;
	v->a[4189] = anon_sym_PIPE_AMP;
	v->a[4190] = anon_sym_AMP_AMP;
	v->a[4191] = anon_sym_PIPE_PIPE;
	v->a[4192] = anon_sym_LT;
	v->a[4193] = anon_sym_GT;
	v->a[4194] = anon_sym_GT_GT;
	v->a[4195] = anon_sym_AMP_GT;
	v->a[4196] = anon_sym_AMP_GT_GT;
	v->a[4197] = anon_sym_LT_AMP;
	v->a[4198] = anon_sym_GT_AMP;
	v->a[4199] = anon_sym_GT_PIPE;
	small_parse_table_210(v);
}

/* EOF small_parse_table_41.c */
