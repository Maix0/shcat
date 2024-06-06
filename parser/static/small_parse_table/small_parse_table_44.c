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
	v->a[4400] = anon_sym_LT_AMP_DASH;
	v->a[4401] = anon_sym_GT_AMP_DASH;
	v->a[4402] = anon_sym_LT_LT;
	v->a[4403] = anon_sym_LT_LT_DASH;
	v->a[4404] = anon_sym_AMP;
	v->a[4405] = anon_sym_SEMI;
	v->a[4406] = 3;
	v->a[4407] = actions(57);
	v->a[4408] = 1;
	v->a[4409] = sym_comment;
	v->a[4410] = actions(507);
	v->a[4411] = 17;
	v->a[4412] = sym_file_descriptor;
	v->a[4413] = sym_variable_name;
	v->a[4414] = sym_test_operator;
	v->a[4415] = sym__brace_start;
	v->a[4416] = anon_sym_LPAREN;
	v->a[4417] = anon_sym_LBRACE;
	v->a[4418] = anon_sym_GT_GT;
	v->a[4419] = anon_sym_AMP_GT_GT;
	small_parse_table_221(v);
}

void	small_parse_table_221(t_small_parse_table_array *v)
{
	v->a[4420] = anon_sym_GT_PIPE;
	v->a[4421] = anon_sym_LT_AMP_DASH;
	v->a[4422] = anon_sym_GT_AMP_DASH;
	v->a[4423] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[4424] = anon_sym_DQUOTE;
	v->a[4425] = sym_raw_string;
	v->a[4426] = anon_sym_DOLLAR_LBRACE;
	v->a[4427] = anon_sym_BQUOTE;
	v->a[4428] = anon_sym_DOLLAR_BQUOTE;
	v->a[4429] = actions(216);
	v->a[4430] = 31;
	v->a[4431] = anon_sym_for;
	v->a[4432] = anon_sym_select;
	v->a[4433] = anon_sym_while;
	v->a[4434] = anon_sym_until;
	v->a[4435] = anon_sym_do;
	v->a[4436] = anon_sym_if;
	v->a[4437] = anon_sym_then;
	v->a[4438] = anon_sym_fi;
	v->a[4439] = anon_sym_elif;
	small_parse_table_222(v);
}

void	small_parse_table_222(t_small_parse_table_array *v)
{
	v->a[4440] = anon_sym_else;
	v->a[4441] = anon_sym_case;
	v->a[4442] = anon_sym_function;
	v->a[4443] = anon_sym_BANG;
	v->a[4444] = anon_sym_declare;
	v->a[4445] = anon_sym_typeset;
	v->a[4446] = anon_sym_export;
	v->a[4447] = anon_sym_readonly;
	v->a[4448] = anon_sym_local;
	v->a[4449] = anon_sym_unset;
	v->a[4450] = anon_sym_unsetenv;
	v->a[4451] = anon_sym_LT;
	v->a[4452] = anon_sym_GT;
	v->a[4453] = anon_sym_AMP_GT;
	v->a[4454] = anon_sym_LT_AMP;
	v->a[4455] = anon_sym_GT_AMP;
	v->a[4456] = anon_sym_DOLLAR;
	v->a[4457] = sym__special_character;
	v->a[4458] = aux_sym_number_token1;
	v->a[4459] = aux_sym_number_token2;
	small_parse_table_223(v);
}

void	small_parse_table_223(t_small_parse_table_array *v)
{
	v->a[4460] = anon_sym_DOLLAR_LPAREN;
	v->a[4461] = sym_word;
	v->a[4462] = 6;
	v->a[4463] = actions(3);
	v->a[4464] = 1;
	v->a[4465] = sym_comment;
	v->a[4466] = actions(1478);
	v->a[4467] = 1;
	v->a[4468] = sym_variable_name;
	v->a[4469] = actions(1476);
	v->a[4470] = 2;
	v->a[4471] = aux_sym__simple_variable_name_token1;
	v->a[4472] = aux_sym__multiline_variable_name_token1;
	v->a[4473] = actions(816);
	v->a[4474] = 5;
	v->a[4475] = sym_file_descriptor;
	v->a[4476] = sym_test_operator;
	v->a[4477] = sym__bare_dollar;
	v->a[4478] = sym__brace_start;
	v->a[4479] = ts_builtin_sym_end;
	small_parse_table_224(v);
}

void	small_parse_table_224(t_small_parse_table_array *v)
{
	v->a[4480] = actions(1474);
	v->a[4481] = 9;
	v->a[4482] = anon_sym_BANG;
	v->a[4483] = anon_sym_DASH;
	v->a[4484] = anon_sym_STAR;
	v->a[4485] = anon_sym_QMARK;
	v->a[4486] = anon_sym_DOLLAR;
	v->a[4487] = anon_sym_POUND;
	v->a[4488] = anon_sym_AT;
	v->a[4489] = anon_sym_0;
	v->a[4490] = anon_sym__;
	v->a[4491] = actions(810);
	v->a[4492] = 31;
	v->a[4493] = anon_sym_PIPE;
	v->a[4494] = anon_sym_SEMI_SEMI;
	v->a[4495] = anon_sym_PIPE_AMP;
	v->a[4496] = anon_sym_AMP_AMP;
	v->a[4497] = anon_sym_PIPE_PIPE;
	v->a[4498] = anon_sym_LT;
	v->a[4499] = anon_sym_GT;
	small_parse_table_225(v);
}

/* EOF small_parse_table_44.c */
