/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2376.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11880(t_small_parse_table_array *v)
{
	v->a[237600] = sym_string;
	v->a[237601] = sym_number;
	v->a[237602] = sym_simple_expansion;
	v->a[237603] = sym_expansion;
	v->a[237604] = sym_command_substitution;
	v->a[237605] = 18;
	v->a[237606] = actions(3);
	v->a[237607] = 1;
	v->a[237608] = sym_comment;
	v->a[237609] = actions(3681);
	v->a[237610] = 1;
	v->a[237611] = aux_sym_number_token1;
	v->a[237612] = actions(3683);
	v->a[237613] = 1;
	v->a[237614] = aux_sym_number_token2;
	v->a[237615] = actions(3687);
	v->a[237616] = 1;
	v->a[237617] = anon_sym_DOLLAR_LPAREN;
	v->a[237618] = actions(3697);
	v->a[237619] = 1;
	small_parse_table_11881(v);
}

void	small_parse_table_11881(t_small_parse_table_array *v)
{
	v->a[237620] = sym__brace_start;
	v->a[237621] = actions(10062);
	v->a[237622] = 1;
	v->a[237623] = anon_sym_DOLLAR_LBRACK;
	v->a[237624] = actions(10066);
	v->a[237625] = 1;
	v->a[237626] = anon_sym_DQUOTE;
	v->a[237627] = actions(10070);
	v->a[237628] = 1;
	v->a[237629] = anon_sym_DOLLAR_LBRACE;
	v->a[237630] = actions(10072);
	v->a[237631] = 1;
	v->a[237632] = anon_sym_BQUOTE;
	v->a[237633] = actions(10074);
	v->a[237634] = 1;
	v->a[237635] = anon_sym_DOLLAR_BQUOTE;
	v->a[237636] = actions(10540);
	v->a[237637] = 1;
	v->a[237638] = sym_word;
	v->a[237639] = actions(10546);
	small_parse_table_11882(v);
}

void	small_parse_table_11882(t_small_parse_table_array *v)
{
	v->a[237640] = 1;
	v->a[237641] = sym__comment_word;
	v->a[237642] = actions(11190);
	v->a[237643] = 1;
	v->a[237644] = anon_sym_DOLLAR;
	v->a[237645] = actions(10060);
	v->a[237646] = 2;
	v->a[237647] = anon_sym_LPAREN_LPAREN;
	v->a[237648] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[237649] = actions(10076);
	v->a[237650] = 2;
	v->a[237651] = anon_sym_LT_LPAREN;
	v->a[237652] = anon_sym_GT_LPAREN;
	v->a[237653] = actions(10542);
	v->a[237654] = 2;
	v->a[237655] = sym_test_operator;
	v->a[237656] = sym__special_character;
	v->a[237657] = actions(10544);
	v->a[237658] = 3;
	v->a[237659] = sym__bare_dollar;
	small_parse_table_11883(v);
}

void	small_parse_table_11883(t_small_parse_table_array *v)
{
	v->a[237660] = sym_raw_string;
	v->a[237661] = sym_ansi_c_string;
	v->a[237662] = state(4831);
	v->a[237663] = 9;
	v->a[237664] = sym_arithmetic_expansion;
	v->a[237665] = sym_brace_expression;
	v->a[237666] = sym_string;
	v->a[237667] = sym_translated_string;
	v->a[237668] = sym_number;
	v->a[237669] = sym_simple_expansion;
	v->a[237670] = sym_expansion;
	v->a[237671] = sym_command_substitution;
	v->a[237672] = sym_process_substitution;
	v->a[237673] = 21;
	v->a[237674] = actions(71);
	v->a[237675] = 1;
	v->a[237676] = sym_comment;
	v->a[237677] = actions(9364);
	v->a[237678] = 1;
	v->a[237679] = anon_sym_LPAREN;
	small_parse_table_11884(v);
}

void	small_parse_table_11884(t_small_parse_table_array *v)
{
	v->a[237680] = actions(9366);
	v->a[237681] = 1;
	v->a[237682] = anon_sym_BANG;
	v->a[237683] = actions(9372);
	v->a[237684] = 1;
	v->a[237685] = anon_sym_TILDE;
	v->a[237686] = actions(9374);
	v->a[237687] = 1;
	v->a[237688] = anon_sym_DOLLAR;
	v->a[237689] = actions(9376);
	v->a[237690] = 1;
	v->a[237691] = anon_sym_DQUOTE;
	v->a[237692] = actions(9378);
	v->a[237693] = 1;
	v->a[237694] = aux_sym_number_token1;
	v->a[237695] = actions(9380);
	v->a[237696] = 1;
	v->a[237697] = aux_sym_number_token2;
	v->a[237698] = actions(9382);
	v->a[237699] = 1;
	small_parse_table_11885(v);
}

/* EOF small_parse_table_2376.c */
