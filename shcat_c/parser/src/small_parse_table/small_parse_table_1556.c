/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1556.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_7780(t_small_parse_table_array *v)
{
	v->a[155600] = anon_sym_DASH_EQ;
	v->a[155601] = anon_sym_STAR_EQ;
	v->a[155602] = anon_sym_SLASH_EQ;
	v->a[155603] = anon_sym_PERCENT_EQ;
	v->a[155604] = anon_sym_STAR_STAR_EQ;
	v->a[155605] = anon_sym_LT_LT_EQ;
	v->a[155606] = anon_sym_GT_GT_EQ;
	v->a[155607] = anon_sym_AMP_EQ;
	v->a[155608] = anon_sym_CARET_EQ;
	v->a[155609] = anon_sym_PIPE_EQ;
	v->a[155610] = anon_sym_PIPE_PIPE;
	v->a[155611] = anon_sym_AMP_AMP;
	v->a[155612] = anon_sym_EQ_TILDE;
	v->a[155613] = anon_sym_QMARK;
	v->a[155614] = 25;
	v->a[155615] = actions(71);
	v->a[155616] = 1;
	v->a[155617] = sym_comment;
	v->a[155618] = actions(6474);
	v->a[155619] = 1;
	small_parse_table_7781(v);
}

void	small_parse_table_7781(t_small_parse_table_array *v)
{
	v->a[155620] = sym_word;
	v->a[155621] = actions(6480);
	v->a[155622] = 1;
	v->a[155623] = anon_sym_LPAREN;
	v->a[155624] = actions(6488);
	v->a[155625] = 1;
	v->a[155626] = anon_sym_DOLLAR;
	v->a[155627] = actions(6494);
	v->a[155628] = 1;
	v->a[155629] = aux_sym_number_token1;
	v->a[155630] = actions(6496);
	v->a[155631] = 1;
	v->a[155632] = aux_sym_number_token2;
	v->a[155633] = actions(6500);
	v->a[155634] = 1;
	v->a[155635] = anon_sym_DOLLAR_LPAREN;
	v->a[155636] = actions(6508);
	v->a[155637] = 1;
	v->a[155638] = sym_test_operator;
	v->a[155639] = actions(6510);
	small_parse_table_7782(v);
}

void	small_parse_table_7782(t_small_parse_table_array *v)
{
	v->a[155640] = 1;
	v->a[155641] = sym_extglob_pattern;
	v->a[155642] = actions(6512);
	v->a[155643] = 1;
	v->a[155644] = sym__brace_start;
	v->a[155645] = actions(6560);
	v->a[155646] = 1;
	v->a[155647] = anon_sym_esac;
	v->a[155648] = actions(7226);
	v->a[155649] = 1;
	v->a[155650] = anon_sym_DOLLAR_LBRACK;
	v->a[155651] = actions(7228);
	v->a[155652] = 1;
	v->a[155653] = sym__special_character;
	v->a[155654] = actions(7230);
	v->a[155655] = 1;
	v->a[155656] = anon_sym_DQUOTE;
	v->a[155657] = actions(7234);
	v->a[155658] = 1;
	v->a[155659] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_7783(v);
}

void	small_parse_table_7783(t_small_parse_table_array *v)
{
	v->a[155660] = actions(7236);
	v->a[155661] = 1;
	v->a[155662] = anon_sym_BQUOTE;
	v->a[155663] = actions(7238);
	v->a[155664] = 1;
	v->a[155665] = anon_sym_DOLLAR_BQUOTE;
	v->a[155666] = state(6426);
	v->a[155667] = 1;
	v->a[155668] = aux_sym__literal_repeat1;
	v->a[155669] = state(6851);
	v->a[155670] = 1;
	v->a[155671] = sym_last_case_item;
	v->a[155672] = actions(7224);
	v->a[155673] = 2;
	v->a[155674] = anon_sym_LPAREN_LPAREN;
	v->a[155675] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[155676] = actions(7232);
	v->a[155677] = 2;
	v->a[155678] = sym_raw_string;
	v->a[155679] = sym_ansi_c_string;
	small_parse_table_7784(v);
}

void	small_parse_table_7784(t_small_parse_table_array *v)
{
	v->a[155680] = actions(7240);
	v->a[155681] = 2;
	v->a[155682] = anon_sym_LT_LPAREN;
	v->a[155683] = anon_sym_GT_LPAREN;
	v->a[155684] = state(3377);
	v->a[155685] = 2;
	v->a[155686] = sym_case_item;
	v->a[155687] = aux_sym_case_statement_repeat1;
	v->a[155688] = state(6695);
	v->a[155689] = 2;
	v->a[155690] = sym_concatenation;
	v->a[155691] = sym__extglob_blob;
	v->a[155692] = state(6303);
	v->a[155693] = 9;
	v->a[155694] = sym_arithmetic_expansion;
	v->a[155695] = sym_brace_expression;
	v->a[155696] = sym_string;
	v->a[155697] = sym_translated_string;
	v->a[155698] = sym_number;
	v->a[155699] = sym_simple_expansion;
	small_parse_table_7785(v);
}

/* EOF small_parse_table_1556.c */
