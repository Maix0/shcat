/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_886.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4430(t_small_parse_table_array *v)
{
	v->a[88600] = 2;
	v->a[88601] = sym_case_item;
	v->a[88602] = aux_sym_case_statement_repeat1;
	v->a[88603] = state(3472);
	v->a[88604] = 2;
	v->a[88605] = sym_concatenation;
	v->a[88606] = sym__extglob_blob;
	v->a[88607] = state(3295);
	v->a[88608] = 7;
	v->a[88609] = sym_arithmetic_expansion;
	v->a[88610] = sym_brace_expression;
	v->a[88611] = sym_string;
	v->a[88612] = sym_number;
	v->a[88613] = sym_simple_expansion;
	v->a[88614] = sym_expansion;
	v->a[88615] = sym_command_substitution;
	v->a[88616] = 21;
	v->a[88617] = actions(57);
	v->a[88618] = 1;
	v->a[88619] = sym_comment;
	small_parse_table_4431(v);
}

void	small_parse_table_4431(t_small_parse_table_array *v)
{
	v->a[88620] = actions(4614);
	v->a[88621] = 1;
	v->a[88622] = anon_sym_LPAREN;
	v->a[88623] = actions(4616);
	v->a[88624] = 1;
	v->a[88625] = anon_sym_BANG;
	v->a[88626] = actions(4622);
	v->a[88627] = 1;
	v->a[88628] = anon_sym_TILDE;
	v->a[88629] = actions(4624);
	v->a[88630] = 1;
	v->a[88631] = anon_sym_DOLLAR;
	v->a[88632] = actions(4626);
	v->a[88633] = 1;
	v->a[88634] = anon_sym_DQUOTE;
	v->a[88635] = actions(4628);
	v->a[88636] = 1;
	v->a[88637] = aux_sym_number_token1;
	v->a[88638] = actions(4630);
	v->a[88639] = 1;
	small_parse_table_4432(v);
}

void	small_parse_table_4432(t_small_parse_table_array *v)
{
	v->a[88640] = aux_sym_number_token2;
	v->a[88641] = actions(4632);
	v->a[88642] = 1;
	v->a[88643] = anon_sym_DOLLAR_LBRACE;
	v->a[88644] = actions(4634);
	v->a[88645] = 1;
	v->a[88646] = anon_sym_DOLLAR_LPAREN;
	v->a[88647] = actions(4636);
	v->a[88648] = 1;
	v->a[88649] = anon_sym_BQUOTE;
	v->a[88650] = actions(4638);
	v->a[88651] = 1;
	v->a[88652] = anon_sym_DOLLAR_BQUOTE;
	v->a[88653] = actions(4895);
	v->a[88654] = 1;
	v->a[88655] = aux_sym__simple_variable_name_token1;
	v->a[88656] = actions(4897);
	v->a[88657] = 1;
	v->a[88658] = sym_variable_name;
	v->a[88659] = state(1637);
	small_parse_table_4433(v);
}

void	small_parse_table_4433(t_small_parse_table_array *v)
{
	v->a[88660] = 1;
	v->a[88661] = sym__arithmetic_postfix_expression;
	v->a[88662] = state(1638);
	v->a[88663] = 1;
	v->a[88664] = sym__arithmetic_unary_expression;
	v->a[88665] = state(1640);
	v->a[88666] = 1;
	v->a[88667] = sym__arithmetic_ternary_expression;
	v->a[88668] = state(1642);
	v->a[88669] = 1;
	v->a[88670] = sym__arithmetic_binary_expression;
	v->a[88671] = actions(4618);
	v->a[88672] = 2;
	v->a[88673] = anon_sym_PLUS_PLUS;
	v->a[88674] = anon_sym_DASH_DASH;
	v->a[88675] = actions(4620);
	v->a[88676] = 2;
	v->a[88677] = anon_sym_DASH2;
	v->a[88678] = anon_sym_PLUS2;
	v->a[88679] = state(1626);
	small_parse_table_4434(v);
}

void	small_parse_table_4434(t_small_parse_table_array *v)
{
	v->a[88680] = 8;
	v->a[88681] = sym__arithmetic_expression;
	v->a[88682] = sym__arithmetic_literal;
	v->a[88683] = sym__arithmetic_parenthesized_expression;
	v->a[88684] = sym_string;
	v->a[88685] = sym_number;
	v->a[88686] = sym_simple_expansion;
	v->a[88687] = sym_expansion;
	v->a[88688] = sym_command_substitution;
	v->a[88689] = 21;
	v->a[88690] = actions(57);
	v->a[88691] = 1;
	v->a[88692] = sym_comment;
	v->a[88693] = actions(4584);
	v->a[88694] = 1;
	v->a[88695] = anon_sym_LPAREN;
	v->a[88696] = actions(4586);
	v->a[88697] = 1;
	v->a[88698] = anon_sym_BANG;
	v->a[88699] = actions(4592);
	small_parse_table_4435(v);
}

/* EOF small_parse_table_886.c */
