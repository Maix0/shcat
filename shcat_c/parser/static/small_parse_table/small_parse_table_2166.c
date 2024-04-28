/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2166.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10830(t_small_parse_table_array *v)
{
	v->a[216600] = aux_sym_number_token1;
	v->a[216601] = actions(1769);
	v->a[216602] = 1;
	v->a[216603] = aux_sym_number_token2;
	v->a[216604] = actions(1773);
	v->a[216605] = 1;
	v->a[216606] = anon_sym_DOLLAR_LPAREN;
	v->a[216607] = actions(1787);
	v->a[216608] = 1;
	v->a[216609] = sym__brace_start;
	v->a[216610] = actions(8426);
	v->a[216611] = 1;
	v->a[216612] = anon_sym_DOLLAR_LBRACK;
	v->a[216613] = actions(8430);
	v->a[216614] = 1;
	v->a[216615] = anon_sym_DQUOTE;
	v->a[216616] = actions(8434);
	v->a[216617] = 1;
	v->a[216618] = anon_sym_DOLLAR_LBRACE;
	v->a[216619] = actions(8436);
	small_parse_table_10831(v);
}

void	small_parse_table_10831(t_small_parse_table_array *v)
{
	v->a[216620] = 1;
	v->a[216621] = anon_sym_BQUOTE;
	v->a[216622] = actions(8438);
	v->a[216623] = 1;
	v->a[216624] = anon_sym_DOLLAR_BQUOTE;
	v->a[216625] = actions(9820);
	v->a[216626] = 1;
	v->a[216627] = sym_word;
	v->a[216628] = actions(9828);
	v->a[216629] = 1;
	v->a[216630] = sym__comment_word;
	v->a[216631] = actions(8422);
	v->a[216632] = 2;
	v->a[216633] = anon_sym_LPAREN_LPAREN;
	v->a[216634] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[216635] = actions(8440);
	v->a[216636] = 2;
	v->a[216637] = anon_sym_LT_LPAREN;
	v->a[216638] = anon_sym_GT_LPAREN;
	v->a[216639] = actions(9824);
	small_parse_table_10832(v);
}

void	small_parse_table_10832(t_small_parse_table_array *v)
{
	v->a[216640] = 2;
	v->a[216641] = sym_test_operator;
	v->a[216642] = sym__special_character;
	v->a[216643] = actions(9826);
	v->a[216644] = 3;
	v->a[216645] = sym__bare_dollar;
	v->a[216646] = sym_raw_string;
	v->a[216647] = sym_ansi_c_string;
	v->a[216648] = state(1207);
	v->a[216649] = 9;
	v->a[216650] = sym_arithmetic_expansion;
	v->a[216651] = sym_brace_expression;
	v->a[216652] = sym_string;
	v->a[216653] = sym_translated_string;
	v->a[216654] = sym_number;
	v->a[216655] = sym_simple_expansion;
	v->a[216656] = sym_expansion;
	v->a[216657] = sym_command_substitution;
	v->a[216658] = sym_process_substitution;
	v->a[216659] = 18;
	small_parse_table_10833(v);
}

void	small_parse_table_10833(t_small_parse_table_array *v)
{
	v->a[216660] = actions(3);
	v->a[216661] = 1;
	v->a[216662] = sym_comment;
	v->a[216663] = actions(2303);
	v->a[216664] = 1;
	v->a[216665] = anon_sym_DOLLAR;
	v->a[216666] = actions(2309);
	v->a[216667] = 1;
	v->a[216668] = aux_sym_number_token1;
	v->a[216669] = actions(2311);
	v->a[216670] = 1;
	v->a[216671] = aux_sym_number_token2;
	v->a[216672] = actions(2315);
	v->a[216673] = 1;
	v->a[216674] = anon_sym_DOLLAR_LPAREN;
	v->a[216675] = actions(2327);
	v->a[216676] = 1;
	v->a[216677] = sym__brace_start;
	v->a[216678] = actions(9982);
	v->a[216679] = 1;
	small_parse_table_10834(v);
}

void	small_parse_table_10834(t_small_parse_table_array *v)
{
	v->a[216680] = sym_word;
	v->a[216681] = actions(9986);
	v->a[216682] = 1;
	v->a[216683] = anon_sym_DOLLAR_LBRACK;
	v->a[216684] = actions(9992);
	v->a[216685] = 1;
	v->a[216686] = anon_sym_DQUOTE;
	v->a[216687] = actions(9996);
	v->a[216688] = 1;
	v->a[216689] = anon_sym_DOLLAR_LBRACE;
	v->a[216690] = actions(9998);
	v->a[216691] = 1;
	v->a[216692] = anon_sym_BQUOTE;
	v->a[216693] = actions(10000);
	v->a[216694] = 1;
	v->a[216695] = anon_sym_DOLLAR_BQUOTE;
	v->a[216696] = actions(10004);
	v->a[216697] = 1;
	v->a[216698] = sym__comment_word;
	v->a[216699] = actions(9984);
	small_parse_table_10835(v);
}

/* EOF small_parse_table_2166.c */
