/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_756.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3780(t_small_parse_table_array *v)
{
	v->a[75600] = actions(183);
	v->a[75601] = 2;
	v->a[75602] = anon_sym_PLUS_PLUS2;
	v->a[75603] = anon_sym_DASH_DASH2;
	v->a[75604] = actions(185);
	v->a[75605] = 2;
	v->a[75606] = anon_sym_DASH2;
	v->a[75607] = anon_sym_PLUS2;
	v->a[75608] = actions(352);
	v->a[75609] = 2;
	v->a[75610] = anon_sym_LPAREN_LPAREN;
	v->a[75611] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[75612] = actions(373);
	v->a[75613] = 2;
	v->a[75614] = sym_raw_string;
	v->a[75615] = sym_ansi_c_string;
	v->a[75616] = actions(387);
	v->a[75617] = 2;
	v->a[75618] = anon_sym_LT_LPAREN;
	v->a[75619] = anon_sym_GT_LPAREN;
	small_parse_table_3781(v);
}

void	small_parse_table_3781(t_small_parse_table_array *v)
{
	v->a[75620] = state(3071);
	v->a[75621] = 6;
	v->a[75622] = sym_binary_expression;
	v->a[75623] = sym_ternary_expression;
	v->a[75624] = sym_unary_expression;
	v->a[75625] = sym_postfix_expression;
	v->a[75626] = sym_parenthesized_expression;
	v->a[75627] = sym_concatenation;
	v->a[75628] = state(2521);
	v->a[75629] = 9;
	v->a[75630] = sym_arithmetic_expansion;
	v->a[75631] = sym_brace_expression;
	v->a[75632] = sym_string;
	v->a[75633] = sym_translated_string;
	v->a[75634] = sym_number;
	v->a[75635] = sym_simple_expansion;
	v->a[75636] = sym_expansion;
	v->a[75637] = sym_command_substitution;
	v->a[75638] = sym_process_substitution;
	v->a[75639] = 3;
	small_parse_table_3782(v);
}

void	small_parse_table_3782(t_small_parse_table_array *v)
{
	v->a[75640] = actions(3);
	v->a[75641] = 1;
	v->a[75642] = sym_comment;
	v->a[75643] = actions(1318);
	v->a[75644] = 5;
	v->a[75645] = sym_file_descriptor;
	v->a[75646] = sym__concat;
	v->a[75647] = sym_test_operator;
	v->a[75648] = sym__brace_start;
	v->a[75649] = aux_sym_heredoc_redirect_token1;
	v->a[75650] = actions(1316);
	v->a[75651] = 40;
	v->a[75652] = anon_sym_LPAREN_LPAREN;
	v->a[75653] = anon_sym_SEMI;
	v->a[75654] = anon_sym_PIPE_PIPE;
	v->a[75655] = anon_sym_AMP_AMP;
	v->a[75656] = anon_sym_PIPE;
	v->a[75657] = anon_sym_AMP;
	v->a[75658] = anon_sym_LT;
	v->a[75659] = anon_sym_GT;
	small_parse_table_3783(v);
}

void	small_parse_table_3783(t_small_parse_table_array *v)
{
	v->a[75660] = anon_sym_LT_LT;
	v->a[75661] = anon_sym_GT_GT;
	v->a[75662] = anon_sym_SEMI_SEMI;
	v->a[75663] = anon_sym_SEMI_AMP;
	v->a[75664] = anon_sym_SEMI_SEMI_AMP;
	v->a[75665] = anon_sym_PIPE_AMP;
	v->a[75666] = anon_sym_AMP_GT;
	v->a[75667] = anon_sym_AMP_GT_GT;
	v->a[75668] = anon_sym_LT_AMP;
	v->a[75669] = anon_sym_GT_AMP;
	v->a[75670] = anon_sym_GT_PIPE;
	v->a[75671] = anon_sym_LT_AMP_DASH;
	v->a[75672] = anon_sym_GT_AMP_DASH;
	v->a[75673] = anon_sym_LT_LT_DASH;
	v->a[75674] = anon_sym_LT_LT_LT;
	v->a[75675] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[75676] = anon_sym_DOLLAR_LBRACK;
	v->a[75677] = aux_sym_concatenation_token1;
	v->a[75678] = anon_sym_DOLLAR;
	v->a[75679] = sym__special_character;
	small_parse_table_3784(v);
}

void	small_parse_table_3784(t_small_parse_table_array *v)
{
	v->a[75680] = anon_sym_DQUOTE;
	v->a[75681] = sym_raw_string;
	v->a[75682] = sym_ansi_c_string;
	v->a[75683] = aux_sym_number_token1;
	v->a[75684] = aux_sym_number_token2;
	v->a[75685] = anon_sym_DOLLAR_LBRACE;
	v->a[75686] = anon_sym_DOLLAR_LPAREN;
	v->a[75687] = anon_sym_BQUOTE;
	v->a[75688] = anon_sym_DOLLAR_BQUOTE;
	v->a[75689] = anon_sym_LT_LPAREN;
	v->a[75690] = anon_sym_GT_LPAREN;
	v->a[75691] = sym_word;
	v->a[75692] = 3;
	v->a[75693] = actions(3);
	v->a[75694] = 1;
	v->a[75695] = sym_comment;
	v->a[75696] = actions(1330);
	v->a[75697] = 5;
	v->a[75698] = sym_file_descriptor;
	v->a[75699] = sym__concat;
	small_parse_table_3785(v);
}

/* EOF small_parse_table_756.c */
