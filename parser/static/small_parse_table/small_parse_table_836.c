/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_836.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4180(t_small_parse_table_array *v)
{
	v->a[83600] = 21;
	v->a[83601] = actions(57);
	v->a[83602] = 1;
	v->a[83603] = sym_comment;
	v->a[83604] = actions(4328);
	v->a[83605] = 1;
	v->a[83606] = sym_word;
	v->a[83607] = actions(4340);
	v->a[83608] = 1;
	v->a[83609] = anon_sym_DOLLAR;
	v->a[83610] = actions(4346);
	v->a[83611] = 1;
	v->a[83612] = aux_sym_number_token1;
	v->a[83613] = actions(4348);
	v->a[83614] = 1;
	v->a[83615] = aux_sym_number_token2;
	v->a[83616] = actions(4352);
	v->a[83617] = 1;
	v->a[83618] = anon_sym_DOLLAR_LPAREN;
	v->a[83619] = actions(4360);
	small_parse_table_4181(v);
}

void	small_parse_table_4181(t_small_parse_table_array *v)
{
	v->a[83620] = 1;
	v->a[83621] = sym_extglob_pattern;
	v->a[83622] = actions(4362);
	v->a[83623] = 1;
	v->a[83624] = sym__brace_start;
	v->a[83625] = actions(4548);
	v->a[83626] = 1;
	v->a[83627] = anon_sym_LPAREN;
	v->a[83628] = actions(4550);
	v->a[83629] = 1;
	v->a[83630] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[83631] = actions(4552);
	v->a[83632] = 1;
	v->a[83633] = sym__special_character;
	v->a[83634] = actions(4554);
	v->a[83635] = 1;
	v->a[83636] = anon_sym_DQUOTE;
	v->a[83637] = actions(4556);
	v->a[83638] = 1;
	v->a[83639] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_4182(v);
}

void	small_parse_table_4182(t_small_parse_table_array *v)
{
	v->a[83640] = actions(4558);
	v->a[83641] = 1;
	v->a[83642] = anon_sym_BQUOTE;
	v->a[83643] = actions(4560);
	v->a[83644] = 1;
	v->a[83645] = anon_sym_DOLLAR_BQUOTE;
	v->a[83646] = state(3393);
	v->a[83647] = 1;
	v->a[83648] = aux_sym__literal_repeat1;
	v->a[83649] = state(3821);
	v->a[83650] = 1;
	v->a[83651] = sym_last_case_item;
	v->a[83652] = actions(4358);
	v->a[83653] = 2;
	v->a[83654] = sym_test_operator;
	v->a[83655] = sym_raw_string;
	v->a[83656] = state(1881);
	v->a[83657] = 2;
	v->a[83658] = sym_case_item;
	v->a[83659] = aux_sym_case_statement_repeat1;
	small_parse_table_4183(v);
}

void	small_parse_table_4183(t_small_parse_table_array *v)
{
	v->a[83660] = state(3472);
	v->a[83661] = 2;
	v->a[83662] = sym_concatenation;
	v->a[83663] = sym__extglob_blob;
	v->a[83664] = state(3295);
	v->a[83665] = 7;
	v->a[83666] = sym_arithmetic_expansion;
	v->a[83667] = sym_brace_expression;
	v->a[83668] = sym_string;
	v->a[83669] = sym_number;
	v->a[83670] = sym_simple_expansion;
	v->a[83671] = sym_expansion;
	v->a[83672] = sym_command_substitution;
	v->a[83673] = 21;
	v->a[83674] = actions(57);
	v->a[83675] = 1;
	v->a[83676] = sym_comment;
	v->a[83677] = actions(4328);
	v->a[83678] = 1;
	v->a[83679] = sym_word;
	small_parse_table_4184(v);
}

void	small_parse_table_4184(t_small_parse_table_array *v)
{
	v->a[83680] = actions(4340);
	v->a[83681] = 1;
	v->a[83682] = anon_sym_DOLLAR;
	v->a[83683] = actions(4346);
	v->a[83684] = 1;
	v->a[83685] = aux_sym_number_token1;
	v->a[83686] = actions(4348);
	v->a[83687] = 1;
	v->a[83688] = aux_sym_number_token2;
	v->a[83689] = actions(4352);
	v->a[83690] = 1;
	v->a[83691] = anon_sym_DOLLAR_LPAREN;
	v->a[83692] = actions(4360);
	v->a[83693] = 1;
	v->a[83694] = sym_extglob_pattern;
	v->a[83695] = actions(4362);
	v->a[83696] = 1;
	v->a[83697] = sym__brace_start;
	v->a[83698] = actions(4548);
	v->a[83699] = 1;
	small_parse_table_4185(v);
}

/* EOF small_parse_table_836.c */
