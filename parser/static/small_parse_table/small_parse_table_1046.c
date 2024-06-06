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
	v->a[104600] = anon_sym_AMP_AMP;
	v->a[104601] = anon_sym_PIPE_PIPE;
	v->a[104602] = anon_sym_LT_LT;
	v->a[104603] = anon_sym_LT_LT_DASH;
	v->a[104604] = anon_sym_AMP;
	v->a[104605] = anon_sym_BQUOTE;
	v->a[104606] = anon_sym_SEMI;
	v->a[104607] = 17;
	v->a[104608] = actions(57);
	v->a[104609] = 1;
	v->a[104610] = sym_comment;
	v->a[104611] = actions(2154);
	v->a[104612] = 1;
	v->a[104613] = anon_sym_DOLLAR;
	v->a[104614] = actions(2160);
	v->a[104615] = 1;
	v->a[104616] = aux_sym_number_token1;
	v->a[104617] = actions(2162);
	v->a[104618] = 1;
	v->a[104619] = aux_sym_number_token2;
	small_parse_table_5231(v);
}

void	small_parse_table_5231(t_small_parse_table_array *v)
{
	v->a[104620] = actions(2166);
	v->a[104621] = 1;
	v->a[104622] = anon_sym_DOLLAR_LPAREN;
	v->a[104623] = actions(2174);
	v->a[104624] = 1;
	v->a[104625] = sym__brace_start;
	v->a[104626] = actions(2384);
	v->a[104627] = 1;
	v->a[104628] = sym_word;
	v->a[104629] = actions(5989);
	v->a[104630] = 1;
	v->a[104631] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[104632] = actions(5993);
	v->a[104633] = 1;
	v->a[104634] = anon_sym_DQUOTE;
	v->a[104635] = actions(5995);
	v->a[104636] = 1;
	v->a[104637] = anon_sym_DOLLAR_LBRACE;
	v->a[104638] = actions(5997);
	v->a[104639] = 1;
	small_parse_table_5232(v);
}

void	small_parse_table_5232(t_small_parse_table_array *v)
{
	v->a[104640] = anon_sym_BQUOTE;
	v->a[104641] = actions(5999);
	v->a[104642] = 1;
	v->a[104643] = anon_sym_DOLLAR_BQUOTE;
	v->a[104644] = actions(6001);
	v->a[104645] = 1;
	v->a[104646] = sym__special_character;
	v->a[104647] = state(1270);
	v->a[104648] = 1;
	v->a[104649] = aux_sym__literal_repeat1;
	v->a[104650] = actions(2388);
	v->a[104651] = 2;
	v->a[104652] = sym_test_operator;
	v->a[104653] = sym_raw_string;
	v->a[104654] = state(441);
	v->a[104655] = 2;
	v->a[104656] = sym_concatenation;
	v->a[104657] = aux_sym_for_statement_repeat1;
	v->a[104658] = state(1222);
	v->a[104659] = 7;
	small_parse_table_5233(v);
}

void	small_parse_table_5233(t_small_parse_table_array *v)
{
	v->a[104660] = sym_arithmetic_expansion;
	v->a[104661] = sym_brace_expression;
	v->a[104662] = sym_string;
	v->a[104663] = sym_number;
	v->a[104664] = sym_simple_expansion;
	v->a[104665] = sym_expansion;
	v->a[104666] = sym_command_substitution;
	v->a[104667] = 17;
	v->a[104668] = actions(57);
	v->a[104669] = 1;
	v->a[104670] = sym_comment;
	v->a[104671] = actions(2154);
	v->a[104672] = 1;
	v->a[104673] = anon_sym_DOLLAR;
	v->a[104674] = actions(2160);
	v->a[104675] = 1;
	v->a[104676] = aux_sym_number_token1;
	v->a[104677] = actions(2162);
	v->a[104678] = 1;
	v->a[104679] = aux_sym_number_token2;
	small_parse_table_5234(v);
}

void	small_parse_table_5234(t_small_parse_table_array *v)
{
	v->a[104680] = actions(2166);
	v->a[104681] = 1;
	v->a[104682] = anon_sym_DOLLAR_LPAREN;
	v->a[104683] = actions(2174);
	v->a[104684] = 1;
	v->a[104685] = sym__brace_start;
	v->a[104686] = actions(2384);
	v->a[104687] = 1;
	v->a[104688] = sym_word;
	v->a[104689] = actions(5989);
	v->a[104690] = 1;
	v->a[104691] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[104692] = actions(5993);
	v->a[104693] = 1;
	v->a[104694] = anon_sym_DQUOTE;
	v->a[104695] = actions(5995);
	v->a[104696] = 1;
	v->a[104697] = anon_sym_DOLLAR_LBRACE;
	v->a[104698] = actions(5997);
	v->a[104699] = 1;
	small_parse_table_5235(v);
}

/* EOF small_parse_table_1046.c */
