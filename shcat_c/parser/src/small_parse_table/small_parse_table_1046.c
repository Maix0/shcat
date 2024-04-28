/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1046.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5230(t_small_parse_table_array *v)
{
	v->a[104600] = sym_translated_string;
	v->a[104601] = sym_number;
	v->a[104602] = sym_simple_expansion;
	v->a[104603] = sym_expansion;
	v->a[104604] = sym_command_substitution;
	v->a[104605] = sym_process_substitution;
	v->a[104606] = 26;
	v->a[104607] = actions(71);
	v->a[104608] = 1;
	v->a[104609] = sym_comment;
	v->a[104610] = actions(363);
	v->a[104611] = 1;
	v->a[104612] = anon_sym_DOLLAR_LBRACK;
	v->a[104613] = actions(367);
	v->a[104614] = 1;
	v->a[104615] = anon_sym_DOLLAR;
	v->a[104616] = actions(371);
	v->a[104617] = 1;
	v->a[104618] = anon_sym_DQUOTE;
	v->a[104619] = actions(375);
	small_parse_table_5231(v);
}

void	small_parse_table_5231(t_small_parse_table_array *v)
{
	v->a[104620] = 1;
	v->a[104621] = aux_sym_number_token1;
	v->a[104622] = actions(377);
	v->a[104623] = 1;
	v->a[104624] = aux_sym_number_token2;
	v->a[104625] = actions(379);
	v->a[104626] = 1;
	v->a[104627] = anon_sym_DOLLAR_LBRACE;
	v->a[104628] = actions(381);
	v->a[104629] = 1;
	v->a[104630] = anon_sym_DOLLAR_LPAREN;
	v->a[104631] = actions(385);
	v->a[104632] = 1;
	v->a[104633] = anon_sym_DOLLAR_BQUOTE;
	v->a[104634] = actions(391);
	v->a[104635] = 1;
	v->a[104636] = sym__brace_start;
	v->a[104637] = actions(1091);
	v->a[104638] = 1;
	v->a[104639] = sym_word;
	small_parse_table_5232(v);
}

void	small_parse_table_5232(t_small_parse_table_array *v)
{
	v->a[104640] = actions(1093);
	v->a[104641] = 1;
	v->a[104642] = anon_sym_LPAREN;
	v->a[104643] = actions(1095);
	v->a[104644] = 1;
	v->a[104645] = anon_sym_BANG;
	v->a[104646] = actions(1103);
	v->a[104647] = 1;
	v->a[104648] = anon_sym_TILDE;
	v->a[104649] = actions(1113);
	v->a[104650] = 1;
	v->a[104651] = sym_test_operator;
	v->a[104652] = actions(5809);
	v->a[104653] = 1;
	v->a[104654] = anon_sym_BQUOTE;
	v->a[104655] = actions(5916);
	v->a[104656] = 1;
	v->a[104657] = sym__special_character;
	v->a[104658] = state(2472);
	v->a[104659] = 1;
	small_parse_table_5233(v);
}

void	small_parse_table_5233(t_small_parse_table_array *v)
{
	v->a[104660] = aux_sym__literal_repeat1;
	v->a[104661] = state(2810);
	v->a[104662] = 1;
	v->a[104663] = sym__expression;
	v->a[104664] = actions(352);
	v->a[104665] = 2;
	v->a[104666] = anon_sym_LPAREN_LPAREN;
	v->a[104667] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[104668] = actions(387);
	v->a[104669] = 2;
	v->a[104670] = anon_sym_LT_LPAREN;
	v->a[104671] = anon_sym_GT_LPAREN;
	v->a[104672] = actions(1099);
	v->a[104673] = 2;
	v->a[104674] = anon_sym_PLUS_PLUS2;
	v->a[104675] = anon_sym_DASH_DASH2;
	v->a[104676] = actions(1101);
	v->a[104677] = 2;
	v->a[104678] = anon_sym_DASH2;
	v->a[104679] = anon_sym_PLUS2;
	small_parse_table_5234(v);
}

void	small_parse_table_5234(t_small_parse_table_array *v)
{
	v->a[104680] = actions(1109);
	v->a[104681] = 2;
	v->a[104682] = sym_raw_string;
	v->a[104683] = sym_ansi_c_string;
	v->a[104684] = state(2863);
	v->a[104685] = 6;
	v->a[104686] = sym_binary_expression;
	v->a[104687] = sym_ternary_expression;
	v->a[104688] = sym_unary_expression;
	v->a[104689] = sym_postfix_expression;
	v->a[104690] = sym_parenthesized_expression;
	v->a[104691] = sym_concatenation;
	v->a[104692] = state(2451);
	v->a[104693] = 9;
	v->a[104694] = sym_arithmetic_expansion;
	v->a[104695] = sym_brace_expression;
	v->a[104696] = sym_string;
	v->a[104697] = sym_translated_string;
	v->a[104698] = sym_number;
	v->a[104699] = sym_simple_expansion;
	small_parse_table_5235(v);
}

/* EOF small_parse_table_1046.c */
