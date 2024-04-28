/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1996.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9980(t_small_parse_table_array *v)
{
	v->a[199600] = actions(2574);
	v->a[199601] = 1;
	v->a[199602] = anon_sym_DOLLAR;
	v->a[199603] = actions(2580);
	v->a[199604] = 1;
	v->a[199605] = aux_sym_number_token1;
	v->a[199606] = actions(2582);
	v->a[199607] = 1;
	v->a[199608] = aux_sym_number_token2;
	v->a[199609] = actions(2586);
	v->a[199610] = 1;
	v->a[199611] = anon_sym_DOLLAR_LPAREN;
	v->a[199612] = actions(2594);
	v->a[199613] = 1;
	v->a[199614] = sym_test_operator;
	v->a[199615] = actions(2596);
	v->a[199616] = 1;
	v->a[199617] = sym__brace_start;
	v->a[199618] = actions(9064);
	v->a[199619] = 1;
	small_parse_table_9981(v);
}

void	small_parse_table_9981(t_small_parse_table_array *v)
{
	v->a[199620] = anon_sym_DOLLAR_LBRACK;
	v->a[199621] = actions(9066);
	v->a[199622] = 1;
	v->a[199623] = sym__special_character;
	v->a[199624] = actions(9068);
	v->a[199625] = 1;
	v->a[199626] = anon_sym_DQUOTE;
	v->a[199627] = actions(9072);
	v->a[199628] = 1;
	v->a[199629] = anon_sym_DOLLAR_LBRACE;
	v->a[199630] = actions(9074);
	v->a[199631] = 1;
	v->a[199632] = anon_sym_BQUOTE;
	v->a[199633] = actions(9076);
	v->a[199634] = 1;
	v->a[199635] = anon_sym_DOLLAR_BQUOTE;
	v->a[199636] = state(1899);
	v->a[199637] = 1;
	v->a[199638] = aux_sym__literal_repeat1;
	v->a[199639] = actions(9062);
	small_parse_table_9982(v);
}

void	small_parse_table_9982(t_small_parse_table_array *v)
{
	v->a[199640] = 2;
	v->a[199641] = anon_sym_LPAREN_LPAREN;
	v->a[199642] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[199643] = actions(9070);
	v->a[199644] = 2;
	v->a[199645] = sym_raw_string;
	v->a[199646] = sym_ansi_c_string;
	v->a[199647] = actions(9078);
	v->a[199648] = 2;
	v->a[199649] = anon_sym_LT_LPAREN;
	v->a[199650] = anon_sym_GT_LPAREN;
	v->a[199651] = state(653);
	v->a[199652] = 2;
	v->a[199653] = sym_concatenation;
	v->a[199654] = aux_sym_for_statement_repeat1;
	v->a[199655] = state(1394);
	v->a[199656] = 9;
	v->a[199657] = sym_arithmetic_expansion;
	v->a[199658] = sym_brace_expression;
	v->a[199659] = sym_string;
	small_parse_table_9983(v);
}

void	small_parse_table_9983(t_small_parse_table_array *v)
{
	v->a[199660] = sym_translated_string;
	v->a[199661] = sym_number;
	v->a[199662] = sym_simple_expansion;
	v->a[199663] = sym_expansion;
	v->a[199664] = sym_command_substitution;
	v->a[199665] = sym_process_substitution;
	v->a[199666] = 20;
	v->a[199667] = actions(71);
	v->a[199668] = 1;
	v->a[199669] = sym_comment;
	v->a[199670] = actions(2568);
	v->a[199671] = 1;
	v->a[199672] = sym_word;
	v->a[199673] = actions(2574);
	v->a[199674] = 1;
	v->a[199675] = anon_sym_DOLLAR;
	v->a[199676] = actions(2580);
	v->a[199677] = 1;
	v->a[199678] = aux_sym_number_token1;
	v->a[199679] = actions(2582);
	small_parse_table_9984(v);
}

void	small_parse_table_9984(t_small_parse_table_array *v)
{
	v->a[199680] = 1;
	v->a[199681] = aux_sym_number_token2;
	v->a[199682] = actions(2586);
	v->a[199683] = 1;
	v->a[199684] = anon_sym_DOLLAR_LPAREN;
	v->a[199685] = actions(2594);
	v->a[199686] = 1;
	v->a[199687] = sym_test_operator;
	v->a[199688] = actions(2596);
	v->a[199689] = 1;
	v->a[199690] = sym__brace_start;
	v->a[199691] = actions(9064);
	v->a[199692] = 1;
	v->a[199693] = anon_sym_DOLLAR_LBRACK;
	v->a[199694] = actions(9066);
	v->a[199695] = 1;
	v->a[199696] = sym__special_character;
	v->a[199697] = actions(9068);
	v->a[199698] = 1;
	v->a[199699] = anon_sym_DQUOTE;
	small_parse_table_9985(v);
}

/* EOF small_parse_table_1996.c */
