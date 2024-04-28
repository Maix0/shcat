/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2146.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10730(t_small_parse_table_array *v)
{
	v->a[214600] = 1;
	v->a[214601] = anon_sym_DOLLAR_LPAREN;
	v->a[214602] = actions(4965);
	v->a[214603] = 1;
	v->a[214604] = anon_sym_BQUOTE;
	v->a[214605] = actions(4967);
	v->a[214606] = 1;
	v->a[214607] = anon_sym_DOLLAR_BQUOTE;
	v->a[214608] = actions(4973);
	v->a[214609] = 1;
	v->a[214610] = sym__brace_start;
	v->a[214611] = actions(10228);
	v->a[214612] = 1;
	v->a[214613] = sym_word;
	v->a[214614] = actions(10234);
	v->a[214615] = 1;
	v->a[214616] = sym__comment_word;
	v->a[214617] = actions(4945);
	v->a[214618] = 2;
	v->a[214619] = anon_sym_LPAREN_LPAREN;
	small_parse_table_10731(v);
}

void	small_parse_table_10731(t_small_parse_table_array *v)
{
	v->a[214620] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[214621] = actions(4969);
	v->a[214622] = 2;
	v->a[214623] = anon_sym_LT_LPAREN;
	v->a[214624] = anon_sym_GT_LPAREN;
	v->a[214625] = actions(10230);
	v->a[214626] = 2;
	v->a[214627] = sym_test_operator;
	v->a[214628] = sym__special_character;
	v->a[214629] = actions(10232);
	v->a[214630] = 3;
	v->a[214631] = sym__bare_dollar;
	v->a[214632] = sym_raw_string;
	v->a[214633] = sym_ansi_c_string;
	v->a[214634] = state(2590);
	v->a[214635] = 9;
	v->a[214636] = sym_arithmetic_expansion;
	v->a[214637] = sym_brace_expression;
	v->a[214638] = sym_string;
	v->a[214639] = sym_translated_string;
	small_parse_table_10732(v);
}

void	small_parse_table_10732(t_small_parse_table_array *v)
{
	v->a[214640] = sym_number;
	v->a[214641] = sym_simple_expansion;
	v->a[214642] = sym_expansion;
	v->a[214643] = sym_command_substitution;
	v->a[214644] = sym_process_substitution;
	v->a[214645] = 18;
	v->a[214646] = actions(3);
	v->a[214647] = 1;
	v->a[214648] = sym_comment;
	v->a[214649] = actions(5315);
	v->a[214650] = 1;
	v->a[214651] = anon_sym_DOLLAR_LBRACK;
	v->a[214652] = actions(5317);
	v->a[214653] = 1;
	v->a[214654] = anon_sym_DOLLAR;
	v->a[214655] = actions(5321);
	v->a[214656] = 1;
	v->a[214657] = anon_sym_DQUOTE;
	v->a[214658] = actions(5325);
	v->a[214659] = 1;
	small_parse_table_10733(v);
}

void	small_parse_table_10733(t_small_parse_table_array *v)
{
	v->a[214660] = aux_sym_number_token1;
	v->a[214661] = actions(5327);
	v->a[214662] = 1;
	v->a[214663] = aux_sym_number_token2;
	v->a[214664] = actions(5329);
	v->a[214665] = 1;
	v->a[214666] = anon_sym_DOLLAR_LBRACE;
	v->a[214667] = actions(5331);
	v->a[214668] = 1;
	v->a[214669] = anon_sym_DOLLAR_LPAREN;
	v->a[214670] = actions(5333);
	v->a[214671] = 1;
	v->a[214672] = anon_sym_BQUOTE;
	v->a[214673] = actions(5335);
	v->a[214674] = 1;
	v->a[214675] = anon_sym_DOLLAR_BQUOTE;
	v->a[214676] = actions(5341);
	v->a[214677] = 1;
	v->a[214678] = sym__brace_start;
	v->a[214679] = actions(10236);
	small_parse_table_10734(v);
}

void	small_parse_table_10734(t_small_parse_table_array *v)
{
	v->a[214680] = 1;
	v->a[214681] = sym_word;
	v->a[214682] = actions(10242);
	v->a[214683] = 1;
	v->a[214684] = sym__comment_word;
	v->a[214685] = actions(5313);
	v->a[214686] = 2;
	v->a[214687] = anon_sym_LPAREN_LPAREN;
	v->a[214688] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[214689] = actions(5337);
	v->a[214690] = 2;
	v->a[214691] = anon_sym_LT_LPAREN;
	v->a[214692] = anon_sym_GT_LPAREN;
	v->a[214693] = actions(10238);
	v->a[214694] = 2;
	v->a[214695] = sym_test_operator;
	v->a[214696] = sym__special_character;
	v->a[214697] = actions(10240);
	v->a[214698] = 3;
	v->a[214699] = sym__bare_dollar;
	small_parse_table_10735(v);
}

/* EOF small_parse_table_2146.c */
