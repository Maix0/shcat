/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2246.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11230(t_small_parse_table_array *v)
{
	v->a[224600] = anon_sym_PLUS_PLUS2;
	v->a[224601] = anon_sym_DASH_DASH2;
	v->a[224602] = actions(9370);
	v->a[224603] = 2;
	v->a[224604] = anon_sym_DASH2;
	v->a[224605] = anon_sym_PLUS2;
	v->a[224606] = state(3302);
	v->a[224607] = 9;
	v->a[224608] = sym_subscript;
	v->a[224609] = sym__arithmetic_expression;
	v->a[224610] = sym__arithmetic_literal;
	v->a[224611] = sym__arithmetic_parenthesized_expression;
	v->a[224612] = sym_string;
	v->a[224613] = sym_number;
	v->a[224614] = sym_simple_expansion;
	v->a[224615] = sym_expansion;
	v->a[224616] = sym_command_substitution;
	v->a[224617] = 18;
	v->a[224618] = actions(3);
	v->a[224619] = 1;
	small_parse_table_11231(v);
}

void	small_parse_table_11231(t_small_parse_table_array *v)
{
	v->a[224620] = sym_comment;
	v->a[224621] = actions(2269);
	v->a[224622] = 1;
	v->a[224623] = aux_sym_number_token1;
	v->a[224624] = actions(2271);
	v->a[224625] = 1;
	v->a[224626] = aux_sym_number_token2;
	v->a[224627] = actions(2275);
	v->a[224628] = 1;
	v->a[224629] = anon_sym_DOLLAR_LPAREN;
	v->a[224630] = actions(2289);
	v->a[224631] = 1;
	v->a[224632] = sym__brace_start;
	v->a[224633] = actions(8066);
	v->a[224634] = 1;
	v->a[224635] = anon_sym_DOLLAR_LBRACK;
	v->a[224636] = actions(8070);
	v->a[224637] = 1;
	v->a[224638] = anon_sym_DQUOTE;
	v->a[224639] = actions(8074);
	small_parse_table_11232(v);
}

void	small_parse_table_11232(t_small_parse_table_array *v)
{
	v->a[224640] = 1;
	v->a[224641] = anon_sym_DOLLAR_LBRACE;
	v->a[224642] = actions(8076);
	v->a[224643] = 1;
	v->a[224644] = anon_sym_BQUOTE;
	v->a[224645] = actions(8078);
	v->a[224646] = 1;
	v->a[224647] = anon_sym_DOLLAR_BQUOTE;
	v->a[224648] = actions(9580);
	v->a[224649] = 1;
	v->a[224650] = sym_word;
	v->a[224651] = actions(9588);
	v->a[224652] = 1;
	v->a[224653] = sym__comment_word;
	v->a[224654] = actions(10690);
	v->a[224655] = 1;
	v->a[224656] = anon_sym_DOLLAR;
	v->a[224657] = actions(8062);
	v->a[224658] = 2;
	v->a[224659] = anon_sym_LPAREN_LPAREN;
	small_parse_table_11233(v);
}

void	small_parse_table_11233(t_small_parse_table_array *v)
{
	v->a[224660] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[224661] = actions(8080);
	v->a[224662] = 2;
	v->a[224663] = anon_sym_LT_LPAREN;
	v->a[224664] = anon_sym_GT_LPAREN;
	v->a[224665] = actions(9584);
	v->a[224666] = 2;
	v->a[224667] = sym_test_operator;
	v->a[224668] = sym__special_character;
	v->a[224669] = actions(9586);
	v->a[224670] = 3;
	v->a[224671] = sym__bare_dollar;
	v->a[224672] = sym_raw_string;
	v->a[224673] = sym_ansi_c_string;
	v->a[224674] = state(1623);
	v->a[224675] = 9;
	v->a[224676] = sym_arithmetic_expansion;
	v->a[224677] = sym_brace_expression;
	v->a[224678] = sym_string;
	v->a[224679] = sym_translated_string;
	small_parse_table_11234(v);
}

void	small_parse_table_11234(t_small_parse_table_array *v)
{
	v->a[224680] = sym_number;
	v->a[224681] = sym_simple_expansion;
	v->a[224682] = sym_expansion;
	v->a[224683] = sym_command_substitution;
	v->a[224684] = sym_process_substitution;
	v->a[224685] = 18;
	v->a[224686] = actions(3);
	v->a[224687] = 1;
	v->a[224688] = sym_comment;
	v->a[224689] = actions(8178);
	v->a[224690] = 1;
	v->a[224691] = anon_sym_DOLLAR_LBRACK;
	v->a[224692] = actions(8184);
	v->a[224693] = 1;
	v->a[224694] = anon_sym_DQUOTE;
	v->a[224695] = actions(8188);
	v->a[224696] = 1;
	v->a[224697] = aux_sym_number_token1;
	v->a[224698] = actions(8190);
	v->a[224699] = 1;
	small_parse_table_11235(v);
}

/* EOF small_parse_table_2246.c */
