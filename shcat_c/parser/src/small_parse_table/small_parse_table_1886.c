/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1886.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9430(t_small_parse_table_array *v)
{
	v->a[188600] = actions(7962);
	v->a[188601] = 1;
	v->a[188602] = sym__special_character;
	v->a[188603] = actions(7964);
	v->a[188604] = 1;
	v->a[188605] = anon_sym_DQUOTE;
	v->a[188606] = actions(7968);
	v->a[188607] = 1;
	v->a[188608] = aux_sym_number_token1;
	v->a[188609] = actions(7970);
	v->a[188610] = 1;
	v->a[188611] = aux_sym_number_token2;
	v->a[188612] = actions(7972);
	v->a[188613] = 1;
	v->a[188614] = anon_sym_DOLLAR_LBRACE;
	v->a[188615] = actions(7974);
	v->a[188616] = 1;
	v->a[188617] = anon_sym_DOLLAR_LPAREN;
	v->a[188618] = actions(7976);
	v->a[188619] = 1;
	small_parse_table_9431(v);
}

void	small_parse_table_9431(t_small_parse_table_array *v)
{
	v->a[188620] = anon_sym_BQUOTE;
	v->a[188621] = actions(7978);
	v->a[188622] = 1;
	v->a[188623] = anon_sym_DOLLAR_BQUOTE;
	v->a[188624] = actions(7982);
	v->a[188625] = 1;
	v->a[188626] = sym__comment_word;
	v->a[188627] = actions(7984);
	v->a[188628] = 1;
	v->a[188629] = sym__empty_value;
	v->a[188630] = actions(7986);
	v->a[188631] = 1;
	v->a[188632] = sym_test_operator;
	v->a[188633] = actions(7988);
	v->a[188634] = 1;
	v->a[188635] = sym__brace_start;
	v->a[188636] = state(4287);
	v->a[188637] = 1;
	v->a[188638] = aux_sym__literal_repeat1;
	v->a[188639] = actions(7954);
	small_parse_table_9432(v);
}

void	small_parse_table_9432(t_small_parse_table_array *v)
{
	v->a[188640] = 2;
	v->a[188641] = anon_sym_LPAREN_LPAREN;
	v->a[188642] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[188643] = actions(7966);
	v->a[188644] = 2;
	v->a[188645] = sym_raw_string;
	v->a[188646] = sym_ansi_c_string;
	v->a[188647] = actions(7980);
	v->a[188648] = 2;
	v->a[188649] = anon_sym_LT_LPAREN;
	v->a[188650] = anon_sym_GT_LPAREN;
	v->a[188651] = state(4759);
	v->a[188652] = 2;
	v->a[188653] = sym_concatenation;
	v->a[188654] = sym_array;
	v->a[188655] = state(5137);
	v->a[188656] = 9;
	v->a[188657] = sym_arithmetic_expansion;
	v->a[188658] = sym_brace_expression;
	v->a[188659] = sym_string;
	small_parse_table_9433(v);
}

void	small_parse_table_9433(t_small_parse_table_array *v)
{
	v->a[188660] = sym_translated_string;
	v->a[188661] = sym_number;
	v->a[188662] = sym_simple_expansion;
	v->a[188663] = sym_expansion;
	v->a[188664] = sym_command_substitution;
	v->a[188665] = sym_process_substitution;
	v->a[188666] = 3;
	v->a[188667] = actions(71);
	v->a[188668] = 1;
	v->a[188669] = sym_comment;
	v->a[188670] = actions(1320);
	v->a[188671] = 11;
	v->a[188672] = anon_sym_LT;
	v->a[188673] = anon_sym_GT;
	v->a[188674] = anon_sym_AMP_GT;
	v->a[188675] = anon_sym_LT_AMP;
	v->a[188676] = anon_sym_GT_AMP;
	v->a[188677] = anon_sym_DOLLAR;
	v->a[188678] = aux_sym_number_token1;
	v->a[188679] = aux_sym_number_token2;
	small_parse_table_9434(v);
}

void	small_parse_table_9434(t_small_parse_table_array *v)
{
	v->a[188680] = anon_sym_DOLLAR_LPAREN;
	v->a[188681] = anon_sym_BQUOTE;
	v->a[188682] = sym_word;
	v->a[188683] = actions(1322);
	v->a[188684] = 23;
	v->a[188685] = sym_file_descriptor;
	v->a[188686] = sym__concat;
	v->a[188687] = sym_variable_name;
	v->a[188688] = sym_test_operator;
	v->a[188689] = sym__brace_start;
	v->a[188690] = anon_sym_LPAREN_LPAREN;
	v->a[188691] = anon_sym_GT_GT;
	v->a[188692] = anon_sym_AMP_GT_GT;
	v->a[188693] = anon_sym_GT_PIPE;
	v->a[188694] = anon_sym_LT_AMP_DASH;
	v->a[188695] = anon_sym_GT_AMP_DASH;
	v->a[188696] = anon_sym_LT_LT_LT;
	v->a[188697] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[188698] = anon_sym_DOLLAR_LBRACK;
	v->a[188699] = aux_sym_concatenation_token1;
	small_parse_table_9435(v);
}

/* EOF small_parse_table_1886.c */
