/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1006.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5030(t_small_parse_table_array *v)
{
	v->a[100600] = actions(5738);
	v->a[100601] = 1;
	v->a[100602] = anon_sym_DOLLAR_LPAREN;
	v->a[100603] = actions(5740);
	v->a[100604] = 1;
	v->a[100605] = anon_sym_BQUOTE;
	v->a[100606] = actions(5742);
	v->a[100607] = 1;
	v->a[100608] = anon_sym_DOLLAR_BQUOTE;
	v->a[100609] = actions(5744);
	v->a[100610] = 1;
	v->a[100611] = sym__comment_word;
	v->a[100612] = actions(5746);
	v->a[100613] = 1;
	v->a[100614] = sym__empty_value;
	v->a[100615] = actions(5748);
	v->a[100616] = 1;
	v->a[100617] = sym__brace_start;
	v->a[100618] = state(1965);
	v->a[100619] = 1;
	small_parse_table_5031(v);
}

void	small_parse_table_5031(t_small_parse_table_array *v)
{
	v->a[100620] = aux_sym__literal_repeat1;
	v->a[100621] = state(2181);
	v->a[100622] = 1;
	v->a[100623] = sym_concatenation;
	v->a[100624] = actions(5730);
	v->a[100625] = 2;
	v->a[100626] = sym_test_operator;
	v->a[100627] = sym_raw_string;
	v->a[100628] = state(1944);
	v->a[100629] = 7;
	v->a[100630] = sym_arithmetic_expansion;
	v->a[100631] = sym_brace_expression;
	v->a[100632] = sym_string;
	v->a[100633] = sym_number;
	v->a[100634] = sym_simple_expansion;
	v->a[100635] = sym_expansion;
	v->a[100636] = sym_command_substitution;
	v->a[100637] = 5;
	v->a[100638] = actions(3);
	v->a[100639] = 1;
	small_parse_table_5032(v);
}

void	small_parse_table_5032(t_small_parse_table_array *v)
{
	v->a[100640] = sym_comment;
	v->a[100641] = actions(5750);
	v->a[100642] = 1;
	v->a[100643] = sym_variable_name;
	v->a[100644] = state(2095);
	v->a[100645] = 2;
	v->a[100646] = sym_variable_assignment;
	v->a[100647] = aux_sym_variable_assignments_repeat1;
	v->a[100648] = actions(5183);
	v->a[100649] = 3;
	v->a[100650] = sym_file_descriptor;
	v->a[100651] = ts_builtin_sym_end;
	v->a[100652] = aux_sym_heredoc_redirect_token1;
	v->a[100653] = actions(5181);
	v->a[100654] = 19;
	v->a[100655] = anon_sym_PIPE;
	v->a[100656] = anon_sym_SEMI_SEMI;
	v->a[100657] = anon_sym_PIPE_AMP;
	v->a[100658] = anon_sym_AMP_AMP;
	v->a[100659] = anon_sym_PIPE_PIPE;
	small_parse_table_5033(v);
}

void	small_parse_table_5033(t_small_parse_table_array *v)
{
	v->a[100660] = anon_sym_LT;
	v->a[100661] = anon_sym_GT;
	v->a[100662] = anon_sym_GT_GT;
	v->a[100663] = anon_sym_AMP_GT;
	v->a[100664] = anon_sym_AMP_GT_GT;
	v->a[100665] = anon_sym_LT_AMP;
	v->a[100666] = anon_sym_GT_AMP;
	v->a[100667] = anon_sym_GT_PIPE;
	v->a[100668] = anon_sym_LT_AMP_DASH;
	v->a[100669] = anon_sym_GT_AMP_DASH;
	v->a[100670] = anon_sym_LT_LT;
	v->a[100671] = anon_sym_LT_LT_DASH;
	v->a[100672] = anon_sym_AMP;
	v->a[100673] = anon_sym_SEMI;
	v->a[100674] = 5;
	v->a[100675] = actions(3);
	v->a[100676] = 1;
	v->a[100677] = sym_comment;
	v->a[100678] = actions(5753);
	v->a[100679] = 1;
	small_parse_table_5034(v);
}

void	small_parse_table_5034(t_small_parse_table_array *v)
{
	v->a[100680] = sym__special_character;
	v->a[100681] = state(2084);
	v->a[100682] = 1;
	v->a[100683] = aux_sym__literal_repeat1;
	v->a[100684] = actions(3549);
	v->a[100685] = 2;
	v->a[100686] = sym_file_descriptor;
	v->a[100687] = aux_sym_heredoc_redirect_token1;
	v->a[100688] = actions(3547);
	v->a[100689] = 21;
	v->a[100690] = anon_sym_PIPE;
	v->a[100691] = anon_sym_SEMI_SEMI;
	v->a[100692] = anon_sym_SEMI_AMP;
	v->a[100693] = anon_sym_SEMI_SEMI_AMP;
	v->a[100694] = anon_sym_PIPE_AMP;
	v->a[100695] = anon_sym_AMP_AMP;
	v->a[100696] = anon_sym_PIPE_PIPE;
	v->a[100697] = anon_sym_LT;
	v->a[100698] = anon_sym_GT;
	v->a[100699] = anon_sym_GT_GT;
	small_parse_table_5035(v);
}

/* EOF small_parse_table_1006.c */
