/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2156.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10780(t_small_parse_table_array *v)
{
	v->a[215600] = 1;
	v->a[215601] = sym__arithmetic_postfix_expression;
	v->a[215602] = actions(9282);
	v->a[215603] = 2;
	v->a[215604] = anon_sym_PLUS_PLUS2;
	v->a[215605] = anon_sym_DASH_DASH2;
	v->a[215606] = actions(9284);
	v->a[215607] = 2;
	v->a[215608] = anon_sym_DASH2;
	v->a[215609] = anon_sym_PLUS2;
	v->a[215610] = state(2759);
	v->a[215611] = 9;
	v->a[215612] = sym_subscript;
	v->a[215613] = sym__arithmetic_expression;
	v->a[215614] = sym__arithmetic_literal;
	v->a[215615] = sym__arithmetic_parenthesized_expression;
	v->a[215616] = sym_string;
	v->a[215617] = sym_number;
	v->a[215618] = sym_simple_expansion;
	v->a[215619] = sym_expansion;
	small_parse_table_10781(v);
}

void	small_parse_table_10781(t_small_parse_table_array *v)
{
	v->a[215620] = sym_command_substitution;
	v->a[215621] = 18;
	v->a[215622] = actions(3);
	v->a[215623] = 1;
	v->a[215624] = sym_comment;
	v->a[215625] = actions(5870);
	v->a[215626] = 1;
	v->a[215627] = anon_sym_DOLLAR;
	v->a[215628] = actions(5876);
	v->a[215629] = 1;
	v->a[215630] = aux_sym_number_token1;
	v->a[215631] = actions(5878);
	v->a[215632] = 1;
	v->a[215633] = aux_sym_number_token2;
	v->a[215634] = actions(5882);
	v->a[215635] = 1;
	v->a[215636] = anon_sym_DOLLAR_LPAREN;
	v->a[215637] = actions(5892);
	v->a[215638] = 1;
	v->a[215639] = sym__brace_start;
	small_parse_table_10782(v);
}

void	small_parse_table_10782(t_small_parse_table_array *v)
{
	v->a[215640] = actions(9546);
	v->a[215641] = 1;
	v->a[215642] = anon_sym_DOLLAR_LBRACK;
	v->a[215643] = actions(9550);
	v->a[215644] = 1;
	v->a[215645] = anon_sym_DQUOTE;
	v->a[215646] = actions(9554);
	v->a[215647] = 1;
	v->a[215648] = anon_sym_DOLLAR_LBRACE;
	v->a[215649] = actions(9556);
	v->a[215650] = 1;
	v->a[215651] = anon_sym_BQUOTE;
	v->a[215652] = actions(9558);
	v->a[215653] = 1;
	v->a[215654] = anon_sym_DOLLAR_BQUOTE;
	v->a[215655] = actions(10300);
	v->a[215656] = 1;
	v->a[215657] = sym_word;
	v->a[215658] = actions(10306);
	v->a[215659] = 1;
	small_parse_table_10783(v);
}

void	small_parse_table_10783(t_small_parse_table_array *v)
{
	v->a[215660] = sym__comment_word;
	v->a[215661] = actions(9544);
	v->a[215662] = 2;
	v->a[215663] = anon_sym_LPAREN_LPAREN;
	v->a[215664] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[215665] = actions(9560);
	v->a[215666] = 2;
	v->a[215667] = anon_sym_LT_LPAREN;
	v->a[215668] = anon_sym_GT_LPAREN;
	v->a[215669] = actions(10302);
	v->a[215670] = 2;
	v->a[215671] = sym_test_operator;
	v->a[215672] = sym__special_character;
	v->a[215673] = actions(10304);
	v->a[215674] = 3;
	v->a[215675] = sym__bare_dollar;
	v->a[215676] = sym_raw_string;
	v->a[215677] = sym_ansi_c_string;
	v->a[215678] = state(5680);
	v->a[215679] = 9;
	small_parse_table_10784(v);
}

void	small_parse_table_10784(t_small_parse_table_array *v)
{
	v->a[215680] = sym_arithmetic_expansion;
	v->a[215681] = sym_brace_expression;
	v->a[215682] = sym_string;
	v->a[215683] = sym_translated_string;
	v->a[215684] = sym_number;
	v->a[215685] = sym_simple_expansion;
	v->a[215686] = sym_expansion;
	v->a[215687] = sym_command_substitution;
	v->a[215688] = sym_process_substitution;
	v->a[215689] = 18;
	v->a[215690] = actions(3);
	v->a[215691] = 1;
	v->a[215692] = sym_comment;
	v->a[215693] = actions(451);
	v->a[215694] = 1;
	v->a[215695] = anon_sym_DOLLAR_LBRACK;
	v->a[215696] = actions(453);
	v->a[215697] = 1;
	v->a[215698] = anon_sym_DOLLAR;
	v->a[215699] = actions(457);
	small_parse_table_10785(v);
}

/* EOF small_parse_table_2156.c */
