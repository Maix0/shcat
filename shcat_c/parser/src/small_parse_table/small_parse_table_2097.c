/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2097.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10485(t_small_parse_table_array *v)
{
	v->a[209700] = actions(3);
	v->a[209701] = 1;
	v->a[209702] = sym_comment;
	v->a[209703] = actions(4086);
	v->a[209704] = 1;
	v->a[209705] = aux_sym_number_token1;
	v->a[209706] = actions(4088);
	v->a[209707] = 1;
	v->a[209708] = aux_sym_number_token2;
	v->a[209709] = actions(4092);
	v->a[209710] = 1;
	v->a[209711] = anon_sym_DOLLAR_LPAREN;
	v->a[209712] = actions(4102);
	v->a[209713] = 1;
	v->a[209714] = sym__brace_start;
	v->a[209715] = actions(9306);
	v->a[209716] = 1;
	v->a[209717] = sym_word;
	v->a[209718] = actions(9310);
	v->a[209719] = 1;
	small_parse_table_10486(v);
}

void	small_parse_table_10486(t_small_parse_table_array *v)
{
	v->a[209720] = anon_sym_DOLLAR_LBRACK;
	v->a[209721] = actions(9316);
	v->a[209722] = 1;
	v->a[209723] = anon_sym_DQUOTE;
	v->a[209724] = actions(9320);
	v->a[209725] = 1;
	v->a[209726] = anon_sym_DOLLAR_LBRACE;
	v->a[209727] = actions(9322);
	v->a[209728] = 1;
	v->a[209729] = anon_sym_BQUOTE;
	v->a[209730] = actions(9324);
	v->a[209731] = 1;
	v->a[209732] = anon_sym_DOLLAR_BQUOTE;
	v->a[209733] = actions(9328);
	v->a[209734] = 1;
	v->a[209735] = sym__comment_word;
	v->a[209736] = actions(9888);
	v->a[209737] = 1;
	v->a[209738] = anon_sym_DOLLAR;
	v->a[209739] = actions(9308);
	small_parse_table_10487(v);
}

void	small_parse_table_10487(t_small_parse_table_array *v)
{
	v->a[209740] = 2;
	v->a[209741] = anon_sym_LPAREN_LPAREN;
	v->a[209742] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[209743] = actions(9314);
	v->a[209744] = 2;
	v->a[209745] = sym_test_operator;
	v->a[209746] = sym__special_character;
	v->a[209747] = actions(9326);
	v->a[209748] = 2;
	v->a[209749] = anon_sym_LT_LPAREN;
	v->a[209750] = anon_sym_GT_LPAREN;
	v->a[209751] = actions(9318);
	v->a[209752] = 3;
	v->a[209753] = sym__bare_dollar;
	v->a[209754] = sym_raw_string;
	v->a[209755] = sym_ansi_c_string;
	v->a[209756] = state(4566);
	v->a[209757] = 9;
	v->a[209758] = sym_arithmetic_expansion;
	v->a[209759] = sym_brace_expression;
	small_parse_table_10488(v);
}

void	small_parse_table_10488(t_small_parse_table_array *v)
{
	v->a[209760] = sym_string;
	v->a[209761] = sym_translated_string;
	v->a[209762] = sym_number;
	v->a[209763] = sym_simple_expansion;
	v->a[209764] = sym_expansion;
	v->a[209765] = sym_command_substitution;
	v->a[209766] = sym_process_substitution;
	v->a[209767] = 21;
	v->a[209768] = actions(71);
	v->a[209769] = 1;
	v->a[209770] = sym_comment;
	v->a[209771] = actions(3064);
	v->a[209772] = 1;
	v->a[209773] = sym_variable_name;
	v->a[209774] = actions(9278);
	v->a[209775] = 1;
	v->a[209776] = anon_sym_LPAREN;
	v->a[209777] = actions(9280);
	v->a[209778] = 1;
	v->a[209779] = anon_sym_BANG;
	small_parse_table_10489(v);
}

void	small_parse_table_10489(t_small_parse_table_array *v)
{
	v->a[209780] = actions(9286);
	v->a[209781] = 1;
	v->a[209782] = anon_sym_TILDE;
	v->a[209783] = actions(9288);
	v->a[209784] = 1;
	v->a[209785] = anon_sym_DOLLAR;
	v->a[209786] = actions(9290);
	v->a[209787] = 1;
	v->a[209788] = anon_sym_DQUOTE;
	v->a[209789] = actions(9292);
	v->a[209790] = 1;
	v->a[209791] = aux_sym_number_token1;
	v->a[209792] = actions(9294);
	v->a[209793] = 1;
	v->a[209794] = aux_sym_number_token2;
	v->a[209795] = actions(9296);
	v->a[209796] = 1;
	v->a[209797] = anon_sym_DOLLAR_LBRACE;
	v->a[209798] = actions(9298);
	v->a[209799] = 1;
	small_parse_table_10490(v);
}

/* EOF small_parse_table_2097.c */
