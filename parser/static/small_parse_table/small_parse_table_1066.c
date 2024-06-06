/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1066.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5330(t_small_parse_table_array *v)
{
	v->a[106600] = 1;
	v->a[106601] = anon_sym_DOLLAR;
	v->a[106602] = actions(3268);
	v->a[106603] = 1;
	v->a[106604] = sym__special_character;
	v->a[106605] = actions(3270);
	v->a[106606] = 1;
	v->a[106607] = anon_sym_DQUOTE;
	v->a[106608] = actions(3274);
	v->a[106609] = 1;
	v->a[106610] = aux_sym_number_token1;
	v->a[106611] = actions(3276);
	v->a[106612] = 1;
	v->a[106613] = aux_sym_number_token2;
	v->a[106614] = actions(3278);
	v->a[106615] = 1;
	v->a[106616] = anon_sym_DOLLAR_LBRACE;
	v->a[106617] = actions(3280);
	v->a[106618] = 1;
	v->a[106619] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_5331(v);
}

void	small_parse_table_5331(t_small_parse_table_array *v)
{
	v->a[106620] = actions(3282);
	v->a[106621] = 1;
	v->a[106622] = anon_sym_BQUOTE;
	v->a[106623] = actions(3284);
	v->a[106624] = 1;
	v->a[106625] = anon_sym_DOLLAR_BQUOTE;
	v->a[106626] = actions(3286);
	v->a[106627] = 1;
	v->a[106628] = sym__brace_start;
	v->a[106629] = state(1679);
	v->a[106630] = 1;
	v->a[106631] = aux_sym__literal_repeat1;
	v->a[106632] = actions(3272);
	v->a[106633] = 2;
	v->a[106634] = sym_test_operator;
	v->a[106635] = sym_raw_string;
	v->a[106636] = state(645);
	v->a[106637] = 2;
	v->a[106638] = sym_concatenation;
	v->a[106639] = aux_sym_for_statement_repeat1;
	small_parse_table_5332(v);
}

void	small_parse_table_5332(t_small_parse_table_array *v)
{
	v->a[106640] = state(1566);
	v->a[106641] = 7;
	v->a[106642] = sym_arithmetic_expansion;
	v->a[106643] = sym_brace_expression;
	v->a[106644] = sym_string;
	v->a[106645] = sym_number;
	v->a[106646] = sym_simple_expansion;
	v->a[106647] = sym_expansion;
	v->a[106648] = sym_command_substitution;
	v->a[106649] = 17;
	v->a[106650] = actions(57);
	v->a[106651] = 1;
	v->a[106652] = sym_comment;
	v->a[106653] = actions(3262);
	v->a[106654] = 1;
	v->a[106655] = sym_word;
	v->a[106656] = actions(3264);
	v->a[106657] = 1;
	v->a[106658] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[106659] = actions(3266);
	small_parse_table_5333(v);
}

void	small_parse_table_5333(t_small_parse_table_array *v)
{
	v->a[106660] = 1;
	v->a[106661] = anon_sym_DOLLAR;
	v->a[106662] = actions(3268);
	v->a[106663] = 1;
	v->a[106664] = sym__special_character;
	v->a[106665] = actions(3270);
	v->a[106666] = 1;
	v->a[106667] = anon_sym_DQUOTE;
	v->a[106668] = actions(3274);
	v->a[106669] = 1;
	v->a[106670] = aux_sym_number_token1;
	v->a[106671] = actions(3276);
	v->a[106672] = 1;
	v->a[106673] = aux_sym_number_token2;
	v->a[106674] = actions(3278);
	v->a[106675] = 1;
	v->a[106676] = anon_sym_DOLLAR_LBRACE;
	v->a[106677] = actions(3280);
	v->a[106678] = 1;
	v->a[106679] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_5334(v);
}

void	small_parse_table_5334(t_small_parse_table_array *v)
{
	v->a[106680] = actions(3282);
	v->a[106681] = 1;
	v->a[106682] = anon_sym_BQUOTE;
	v->a[106683] = actions(3284);
	v->a[106684] = 1;
	v->a[106685] = anon_sym_DOLLAR_BQUOTE;
	v->a[106686] = actions(3286);
	v->a[106687] = 1;
	v->a[106688] = sym__brace_start;
	v->a[106689] = state(1679);
	v->a[106690] = 1;
	v->a[106691] = aux_sym__literal_repeat1;
	v->a[106692] = actions(3272);
	v->a[106693] = 2;
	v->a[106694] = sym_test_operator;
	v->a[106695] = sym_raw_string;
	v->a[106696] = state(641);
	v->a[106697] = 2;
	v->a[106698] = sym_concatenation;
	v->a[106699] = aux_sym_for_statement_repeat1;
	small_parse_table_5335(v);
}

/* EOF small_parse_table_1066.c */
