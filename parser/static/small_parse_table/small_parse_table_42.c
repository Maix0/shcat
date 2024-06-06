/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_42.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_210(t_small_parse_table_array *v)
{
	v->a[4200] = anon_sym_LT_AMP_DASH;
	v->a[4201] = anon_sym_GT_AMP_DASH;
	v->a[4202] = anon_sym_LT_LT;
	v->a[4203] = anon_sym_LT_LT_DASH;
	v->a[4204] = aux_sym_heredoc_redirect_token1;
	v->a[4205] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[4206] = anon_sym_AMP;
	v->a[4207] = sym__special_character;
	v->a[4208] = anon_sym_DQUOTE;
	v->a[4209] = sym_raw_string;
	v->a[4210] = aux_sym_number_token1;
	v->a[4211] = aux_sym_number_token2;
	v->a[4212] = anon_sym_DOLLAR_LBRACE;
	v->a[4213] = anon_sym_DOLLAR_LPAREN;
	v->a[4214] = anon_sym_BQUOTE;
	v->a[4215] = anon_sym_DOLLAR_BQUOTE;
	v->a[4216] = sym_word;
	v->a[4217] = anon_sym_SEMI;
	v->a[4218] = 23;
	v->a[4219] = actions(3);
	small_parse_table_211(v);
}

void	small_parse_table_211(t_small_parse_table_array *v)
{
	v->a[4220] = 1;
	v->a[4221] = sym_comment;
	v->a[4222] = actions(1146);
	v->a[4223] = 1;
	v->a[4224] = anon_sym_LPAREN;
	v->a[4225] = actions(1252);
	v->a[4226] = 1;
	v->a[4227] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[4228] = actions(1254);
	v->a[4229] = 1;
	v->a[4230] = anon_sym_DOLLAR;
	v->a[4231] = actions(1258);
	v->a[4232] = 1;
	v->a[4233] = anon_sym_DQUOTE;
	v->a[4234] = actions(1260);
	v->a[4235] = 1;
	v->a[4236] = aux_sym_number_token1;
	v->a[4237] = actions(1262);
	v->a[4238] = 1;
	v->a[4239] = aux_sym_number_token2;
	small_parse_table_212(v);
}

void	small_parse_table_212(t_small_parse_table_array *v)
{
	v->a[4240] = actions(1264);
	v->a[4241] = 1;
	v->a[4242] = anon_sym_DOLLAR_LBRACE;
	v->a[4243] = actions(1266);
	v->a[4244] = 1;
	v->a[4245] = anon_sym_DOLLAR_LPAREN;
	v->a[4246] = actions(1268);
	v->a[4247] = 1;
	v->a[4248] = anon_sym_BQUOTE;
	v->a[4249] = actions(1270);
	v->a[4250] = 1;
	v->a[4251] = anon_sym_DOLLAR_BQUOTE;
	v->a[4252] = actions(1274);
	v->a[4253] = 1;
	v->a[4254] = sym__bare_dollar;
	v->a[4255] = actions(1276);
	v->a[4256] = 1;
	v->a[4257] = sym__brace_start;
	v->a[4258] = actions(1428);
	v->a[4259] = 1;
	small_parse_table_213(v);
}

void	small_parse_table_213(t_small_parse_table_array *v)
{
	v->a[4260] = sym__special_character;
	v->a[4261] = actions(1430);
	v->a[4262] = 1;
	v->a[4263] = sym_test_operator;
	v->a[4264] = state(407);
	v->a[4265] = 1;
	v->a[4266] = aux_sym_command_repeat2;
	v->a[4267] = state(1232);
	v->a[4268] = 1;
	v->a[4269] = aux_sym__literal_repeat1;
	v->a[4270] = state(1293);
	v->a[4271] = 1;
	v->a[4272] = sym_concatenation;
	v->a[4273] = state(2185);
	v->a[4274] = 1;
	v->a[4275] = sym_subshell;
	v->a[4276] = actions(695);
	v->a[4277] = 2;
	v->a[4278] = sym_file_descriptor;
	v->a[4279] = aux_sym_heredoc_redirect_token1;
	small_parse_table_214(v);
}

void	small_parse_table_214(t_small_parse_table_array *v)
{
	v->a[4280] = actions(1426);
	v->a[4281] = 2;
	v->a[4282] = sym_raw_string;
	v->a[4283] = sym_word;
	v->a[4284] = state(1146);
	v->a[4285] = 7;
	v->a[4286] = sym_arithmetic_expansion;
	v->a[4287] = sym_brace_expression;
	v->a[4288] = sym_string;
	v->a[4289] = sym_number;
	v->a[4290] = sym_simple_expansion;
	v->a[4291] = sym_expansion;
	v->a[4292] = sym_command_substitution;
	v->a[4293] = actions(691);
	v->a[4294] = 19;
	v->a[4295] = anon_sym_PIPE;
	v->a[4296] = anon_sym_SEMI_SEMI;
	v->a[4297] = anon_sym_PIPE_AMP;
	v->a[4298] = anon_sym_AMP_AMP;
	v->a[4299] = anon_sym_PIPE_PIPE;
	small_parse_table_215(v);
}

/* EOF small_parse_table_42.c */
