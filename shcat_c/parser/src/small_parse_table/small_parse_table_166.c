/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_166.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_830(t_small_parse_table_array *v)
{
	v->a[16600] = sym_test_operator;
	v->a[16601] = state(703);
	v->a[16602] = 1;
	v->a[16603] = aux_sym_command_repeat2;
	v->a[16604] = state(1321);
	v->a[16605] = 1;
	v->a[16606] = aux_sym__literal_repeat1;
	v->a[16607] = state(1712);
	v->a[16608] = 1;
	v->a[16609] = sym_herestring_redirect;
	v->a[16610] = state(1716);
	v->a[16611] = 1;
	v->a[16612] = sym_concatenation;
	v->a[16613] = actions(1862);
	v->a[16614] = 2;
	v->a[16615] = anon_sym_LPAREN_LPAREN;
	v->a[16616] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16617] = actions(1901);
	v->a[16618] = 2;
	v->a[16619] = anon_sym_LT_LPAREN;
	small_parse_table_831(v);
}

void	small_parse_table_831(t_small_parse_table_array *v)
{
	v->a[16620] = anon_sym_GT_LPAREN;
	v->a[16621] = actions(3502);
	v->a[16622] = 2;
	v->a[16623] = anon_sym_EQ_EQ;
	v->a[16624] = anon_sym_EQ_TILDE;
	v->a[16625] = actions(3499);
	v->a[16626] = 3;
	v->a[16627] = sym_raw_string;
	v->a[16628] = sym_ansi_c_string;
	v->a[16629] = sym_word;
	v->a[16630] = state(1794);
	v->a[16631] = 9;
	v->a[16632] = sym_arithmetic_expansion;
	v->a[16633] = sym_brace_expression;
	v->a[16634] = sym_string;
	v->a[16635] = sym_translated_string;
	v->a[16636] = sym_number;
	v->a[16637] = sym_simple_expansion;
	v->a[16638] = sym_expansion;
	v->a[16639] = sym_command_substitution;
	small_parse_table_832(v);
}

void	small_parse_table_832(t_small_parse_table_array *v)
{
	v->a[16640] = sym_process_substitution;
	v->a[16641] = actions(1486);
	v->a[16642] = 16;
	v->a[16643] = anon_sym_PIPE_PIPE;
	v->a[16644] = anon_sym_AMP_AMP;
	v->a[16645] = anon_sym_PIPE;
	v->a[16646] = anon_sym_LT;
	v->a[16647] = anon_sym_GT;
	v->a[16648] = anon_sym_LT_LT;
	v->a[16649] = anon_sym_GT_GT;
	v->a[16650] = anon_sym_PIPE_AMP;
	v->a[16651] = anon_sym_AMP_GT;
	v->a[16652] = anon_sym_AMP_GT_GT;
	v->a[16653] = anon_sym_LT_AMP;
	v->a[16654] = anon_sym_GT_AMP;
	v->a[16655] = anon_sym_GT_PIPE;
	v->a[16656] = anon_sym_LT_AMP_DASH;
	v->a[16657] = anon_sym_GT_AMP_DASH;
	v->a[16658] = anon_sym_LT_LT_DASH;
	v->a[16659] = 21;
	small_parse_table_833(v);
}

void	small_parse_table_833(t_small_parse_table_array *v)
{
	v->a[16660] = actions(3);
	v->a[16661] = 1;
	v->a[16662] = sym_comment;
	v->a[16663] = actions(2735);
	v->a[16664] = 1;
	v->a[16665] = anon_sym_DOLLAR_LBRACK;
	v->a[16666] = actions(2738);
	v->a[16667] = 1;
	v->a[16668] = anon_sym_DOLLAR;
	v->a[16669] = actions(2744);
	v->a[16670] = 1;
	v->a[16671] = anon_sym_DQUOTE;
	v->a[16672] = actions(2747);
	v->a[16673] = 1;
	v->a[16674] = aux_sym_number_token1;
	v->a[16675] = actions(2750);
	v->a[16676] = 1;
	v->a[16677] = aux_sym_number_token2;
	v->a[16678] = actions(2753);
	v->a[16679] = 1;
	small_parse_table_834(v);
}

void	small_parse_table_834(t_small_parse_table_array *v)
{
	v->a[16680] = anon_sym_DOLLAR_LBRACE;
	v->a[16681] = actions(2756);
	v->a[16682] = 1;
	v->a[16683] = anon_sym_DOLLAR_LPAREN;
	v->a[16684] = actions(2759);
	v->a[16685] = 1;
	v->a[16686] = anon_sym_BQUOTE;
	v->a[16687] = actions(2762);
	v->a[16688] = 1;
	v->a[16689] = anon_sym_DOLLAR_BQUOTE;
	v->a[16690] = actions(2771);
	v->a[16691] = 1;
	v->a[16692] = sym__brace_start;
	v->a[16693] = actions(3520);
	v->a[16694] = 1;
	v->a[16695] = sym__special_character;
	v->a[16696] = actions(3523);
	v->a[16697] = 1;
	v->a[16698] = sym_test_operator;
	v->a[16699] = state(1744);
	small_parse_table_835(v);
}

/* EOF small_parse_table_166.c */
