/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_44.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_220(t_small_parse_table_array *v)
{
	v->a[4400] = anon_sym_LPAREN_LPAREN;
	v->a[4401] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[4402] = actions(2056);
	v->a[4403] = 2;
	v->a[4404] = anon_sym_LT_LPAREN;
	v->a[4405] = anon_sym_GT_LPAREN;
	v->a[4406] = actions(1799);
	v->a[4407] = 3;
	v->a[4408] = sym_file_descriptor;
	v->a[4409] = ts_builtin_sym_end;
	v->a[4410] = aux_sym_heredoc_redirect_token1;
	v->a[4411] = actions(2032);
	v->a[4412] = 3;
	v->a[4413] = sym_raw_string;
	v->a[4414] = sym_ansi_c_string;
	v->a[4415] = sym_word;
	v->a[4416] = state(577);
	v->a[4417] = 3;
	v->a[4418] = sym_variable_assignment;
	v->a[4419] = sym_concatenation;
	small_parse_table_221(v);
}

void	small_parse_table_221(t_small_parse_table_array *v)
{
	v->a[4420] = aux_sym_declaration_command_repeat1;
	v->a[4421] = state(1322);
	v->a[4422] = 9;
	v->a[4423] = sym_arithmetic_expansion;
	v->a[4424] = sym_brace_expression;
	v->a[4425] = sym_string;
	v->a[4426] = sym_translated_string;
	v->a[4427] = sym_number;
	v->a[4428] = sym_simple_expansion;
	v->a[4429] = sym_expansion;
	v->a[4430] = sym_command_substitution;
	v->a[4431] = sym_process_substitution;
	v->a[4432] = actions(1797);
	v->a[4433] = 19;
	v->a[4434] = anon_sym_SEMI;
	v->a[4435] = anon_sym_PIPE_PIPE;
	v->a[4436] = anon_sym_AMP_AMP;
	v->a[4437] = anon_sym_PIPE;
	v->a[4438] = anon_sym_AMP;
	v->a[4439] = anon_sym_LT;
	small_parse_table_222(v);
}

void	small_parse_table_222(t_small_parse_table_array *v)
{
	v->a[4440] = anon_sym_GT;
	v->a[4441] = anon_sym_LT_LT;
	v->a[4442] = anon_sym_GT_GT;
	v->a[4443] = anon_sym_SEMI_SEMI;
	v->a[4444] = anon_sym_PIPE_AMP;
	v->a[4445] = anon_sym_AMP_GT;
	v->a[4446] = anon_sym_AMP_GT_GT;
	v->a[4447] = anon_sym_LT_AMP;
	v->a[4448] = anon_sym_GT_AMP;
	v->a[4449] = anon_sym_GT_PIPE;
	v->a[4450] = anon_sym_LT_AMP_DASH;
	v->a[4451] = anon_sym_GT_AMP_DASH;
	v->a[4452] = anon_sym_LT_LT_DASH;
	v->a[4453] = 26;
	v->a[4454] = actions(3);
	v->a[4455] = 1;
	v->a[4456] = sym_comment;
	v->a[4457] = actions(1549);
	v->a[4458] = 1;
	v->a[4459] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_223(v);
}

void	small_parse_table_223(t_small_parse_table_array *v)
{
	v->a[4460] = actions(1551);
	v->a[4461] = 1;
	v->a[4462] = anon_sym_DOLLAR;
	v->a[4463] = actions(1555);
	v->a[4464] = 1;
	v->a[4465] = anon_sym_DQUOTE;
	v->a[4466] = actions(1557);
	v->a[4467] = 1;
	v->a[4468] = aux_sym_number_token1;
	v->a[4469] = actions(1559);
	v->a[4470] = 1;
	v->a[4471] = aux_sym_number_token2;
	v->a[4472] = actions(1561);
	v->a[4473] = 1;
	v->a[4474] = anon_sym_DOLLAR_LBRACE;
	v->a[4475] = actions(1563);
	v->a[4476] = 1;
	v->a[4477] = anon_sym_DOLLAR_LPAREN;
	v->a[4478] = actions(1565);
	v->a[4479] = 1;
	small_parse_table_224(v);
}

void	small_parse_table_224(t_small_parse_table_array *v)
{
	v->a[4480] = anon_sym_BQUOTE;
	v->a[4481] = actions(1567);
	v->a[4482] = 1;
	v->a[4483] = anon_sym_DOLLAR_BQUOTE;
	v->a[4484] = actions(1573);
	v->a[4485] = 1;
	v->a[4486] = sym__bare_dollar;
	v->a[4487] = actions(1575);
	v->a[4488] = 1;
	v->a[4489] = sym__brace_start;
	v->a[4490] = actions(1690);
	v->a[4491] = 1;
	v->a[4492] = anon_sym_LT_LT_LT;
	v->a[4493] = actions(1692);
	v->a[4494] = 1;
	v->a[4495] = sym__special_character;
	v->a[4496] = actions(1694);
	v->a[4497] = 1;
	v->a[4498] = sym_test_operator;
	v->a[4499] = state(574);
	small_parse_table_225(v);
}

/* EOF small_parse_table_44.c */
