/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2256.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11280(t_small_parse_table_array *v)
{
	v->a[225600] = aux_sym_number_token2;
	v->a[225601] = actions(8488);
	v->a[225602] = 1;
	v->a[225603] = anon_sym_DOLLAR_LBRACE;
	v->a[225604] = actions(8490);
	v->a[225605] = 1;
	v->a[225606] = anon_sym_DOLLAR_LPAREN;
	v->a[225607] = actions(8492);
	v->a[225608] = 1;
	v->a[225609] = anon_sym_BQUOTE;
	v->a[225610] = actions(8494);
	v->a[225611] = 1;
	v->a[225612] = anon_sym_DOLLAR_BQUOTE;
	v->a[225613] = actions(8504);
	v->a[225614] = 1;
	v->a[225615] = sym__brace_start;
	v->a[225616] = actions(10720);
	v->a[225617] = 1;
	v->a[225618] = sym_word;
	v->a[225619] = actions(10722);
	small_parse_table_11281(v);
}

void	small_parse_table_11281(t_small_parse_table_array *v)
{
	v->a[225620] = 1;
	v->a[225621] = anon_sym_DOLLAR;
	v->a[225622] = actions(10728);
	v->a[225623] = 1;
	v->a[225624] = sym__comment_word;
	v->a[225625] = actions(8470);
	v->a[225626] = 2;
	v->a[225627] = anon_sym_LPAREN_LPAREN;
	v->a[225628] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[225629] = actions(8496);
	v->a[225630] = 2;
	v->a[225631] = anon_sym_LT_LPAREN;
	v->a[225632] = anon_sym_GT_LPAREN;
	v->a[225633] = actions(10724);
	v->a[225634] = 2;
	v->a[225635] = sym_test_operator;
	v->a[225636] = sym__special_character;
	v->a[225637] = actions(10726);
	v->a[225638] = 3;
	v->a[225639] = sym__bare_dollar;
	small_parse_table_11282(v);
}

void	small_parse_table_11282(t_small_parse_table_array *v)
{
	v->a[225640] = sym_raw_string;
	v->a[225641] = sym_ansi_c_string;
	v->a[225642] = state(1625);
	v->a[225643] = 9;
	v->a[225644] = sym_arithmetic_expansion;
	v->a[225645] = sym_brace_expression;
	v->a[225646] = sym_string;
	v->a[225647] = sym_translated_string;
	v->a[225648] = sym_number;
	v->a[225649] = sym_simple_expansion;
	v->a[225650] = sym_expansion;
	v->a[225651] = sym_command_substitution;
	v->a[225652] = sym_process_substitution;
	v->a[225653] = 20;
	v->a[225654] = actions(71);
	v->a[225655] = 1;
	v->a[225656] = sym_comment;
	v->a[225657] = actions(8474);
	v->a[225658] = 1;
	v->a[225659] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_11283(v);
}

void	small_parse_table_11283(t_small_parse_table_array *v)
{
	v->a[225660] = actions(8476);
	v->a[225661] = 1;
	v->a[225662] = anon_sym_DOLLAR;
	v->a[225663] = actions(8478);
	v->a[225664] = 1;
	v->a[225665] = sym__special_character;
	v->a[225666] = actions(8480);
	v->a[225667] = 1;
	v->a[225668] = anon_sym_DQUOTE;
	v->a[225669] = actions(8484);
	v->a[225670] = 1;
	v->a[225671] = aux_sym_number_token1;
	v->a[225672] = actions(8486);
	v->a[225673] = 1;
	v->a[225674] = aux_sym_number_token2;
	v->a[225675] = actions(8488);
	v->a[225676] = 1;
	v->a[225677] = anon_sym_DOLLAR_LBRACE;
	v->a[225678] = actions(8490);
	v->a[225679] = 1;
	small_parse_table_11284(v);
}

void	small_parse_table_11284(t_small_parse_table_array *v)
{
	v->a[225680] = anon_sym_DOLLAR_LPAREN;
	v->a[225681] = actions(8492);
	v->a[225682] = 1;
	v->a[225683] = anon_sym_BQUOTE;
	v->a[225684] = actions(8494);
	v->a[225685] = 1;
	v->a[225686] = anon_sym_DOLLAR_BQUOTE;
	v->a[225687] = actions(8504);
	v->a[225688] = 1;
	v->a[225689] = sym__brace_start;
	v->a[225690] = actions(10730);
	v->a[225691] = 1;
	v->a[225692] = sym_word;
	v->a[225693] = actions(10734);
	v->a[225694] = 1;
	v->a[225695] = sym_test_operator;
	v->a[225696] = state(1898);
	v->a[225697] = 1;
	v->a[225698] = aux_sym__literal_repeat1;
	v->a[225699] = state(2107);
	small_parse_table_11285(v);
}

/* EOF small_parse_table_2256.c */
