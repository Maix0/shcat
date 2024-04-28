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
	v->a[4200] = anon_sym_GT;
	v->a[4201] = anon_sym_LT_LT;
	v->a[4202] = anon_sym_GT_GT;
	v->a[4203] = anon_sym_SEMI_SEMI;
	v->a[4204] = anon_sym_SEMI_AMP;
	v->a[4205] = anon_sym_SEMI_SEMI_AMP;
	v->a[4206] = anon_sym_PIPE_AMP;
	v->a[4207] = anon_sym_EQ_TILDE;
	v->a[4208] = anon_sym_AMP_GT;
	v->a[4209] = anon_sym_AMP_GT_GT;
	v->a[4210] = anon_sym_LT_AMP;
	v->a[4211] = anon_sym_GT_AMP;
	v->a[4212] = anon_sym_GT_PIPE;
	v->a[4213] = anon_sym_LT_AMP_DASH;
	v->a[4214] = anon_sym_GT_AMP_DASH;
	v->a[4215] = anon_sym_LT_LT_DASH;
	v->a[4216] = aux_sym_heredoc_redirect_token1;
	v->a[4217] = anon_sym_LT_LT_LT;
	v->a[4218] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[4219] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_211(v);
}

void	small_parse_table_211(t_small_parse_table_array *v)
{
	v->a[4220] = sym__special_character;
	v->a[4221] = sym_raw_string;
	v->a[4222] = sym_ansi_c_string;
	v->a[4223] = aux_sym_number_token1;
	v->a[4224] = aux_sym_number_token2;
	v->a[4225] = anon_sym_DOLLAR_LBRACE;
	v->a[4226] = anon_sym_DOLLAR_LPAREN;
	v->a[4227] = anon_sym_BQUOTE;
	v->a[4228] = anon_sym_DOLLAR_BQUOTE;
	v->a[4229] = anon_sym_LT_LPAREN;
	v->a[4230] = anon_sym_GT_LPAREN;
	v->a[4231] = sym_word;
	v->a[4232] = 27;
	v->a[4233] = actions(3);
	v->a[4234] = 1;
	v->a[4235] = sym_comment;
	v->a[4236] = actions(1984);
	v->a[4237] = 1;
	v->a[4238] = anon_sym_LT_LT_LT;
	v->a[4239] = actions(1987);
	small_parse_table_212(v);
}

void	small_parse_table_212(t_small_parse_table_array *v)
{
	v->a[4240] = 1;
	v->a[4241] = anon_sym_DOLLAR_LBRACK;
	v->a[4242] = actions(1990);
	v->a[4243] = 1;
	v->a[4244] = anon_sym_DOLLAR;
	v->a[4245] = actions(1993);
	v->a[4246] = 1;
	v->a[4247] = sym__special_character;
	v->a[4248] = actions(1996);
	v->a[4249] = 1;
	v->a[4250] = anon_sym_DQUOTE;
	v->a[4251] = actions(1999);
	v->a[4252] = 1;
	v->a[4253] = aux_sym_number_token1;
	v->a[4254] = actions(2002);
	v->a[4255] = 1;
	v->a[4256] = aux_sym_number_token2;
	v->a[4257] = actions(2005);
	v->a[4258] = 1;
	v->a[4259] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_213(v);
}

void	small_parse_table_213(t_small_parse_table_array *v)
{
	v->a[4260] = actions(2008);
	v->a[4261] = 1;
	v->a[4262] = anon_sym_DOLLAR_LPAREN;
	v->a[4263] = actions(2011);
	v->a[4264] = 1;
	v->a[4265] = anon_sym_BQUOTE;
	v->a[4266] = actions(2014);
	v->a[4267] = 1;
	v->a[4268] = anon_sym_DOLLAR_BQUOTE;
	v->a[4269] = actions(2020);
	v->a[4270] = 1;
	v->a[4271] = sym_file_descriptor;
	v->a[4272] = actions(2023);
	v->a[4273] = 1;
	v->a[4274] = sym_test_operator;
	v->a[4275] = actions(2026);
	v->a[4276] = 1;
	v->a[4277] = sym__bare_dollar;
	v->a[4278] = actions(2029);
	v->a[4279] = 1;
	small_parse_table_214(v);
}

void	small_parse_table_214(t_small_parse_table_array *v)
{
	v->a[4280] = sym__brace_start;
	v->a[4281] = state(569);
	v->a[4282] = 1;
	v->a[4283] = aux_sym_command_repeat2;
	v->a[4284] = state(1431);
	v->a[4285] = 1;
	v->a[4286] = aux_sym__literal_repeat1;
	v->a[4287] = state(1521);
	v->a[4288] = 1;
	v->a[4289] = sym_concatenation;
	v->a[4290] = state(1552);
	v->a[4291] = 1;
	v->a[4292] = sym_herestring_redirect;
	v->a[4293] = actions(1491);
	v->a[4294] = 2;
	v->a[4295] = ts_builtin_sym_end;
	v->a[4296] = aux_sym_heredoc_redirect_token1;
	v->a[4297] = actions(1978);
	v->a[4298] = 2;
	v->a[4299] = anon_sym_LPAREN_LPAREN;
	small_parse_table_215(v);
}

/* EOF small_parse_table_42.c */
