/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2167.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10835(t_small_parse_table_array *v)
{
	v->a[216700] = 2;
	v->a[216701] = anon_sym_LPAREN_LPAREN;
	v->a[216702] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[216703] = actions(9990);
	v->a[216704] = 2;
	v->a[216705] = sym_test_operator;
	v->a[216706] = sym__special_character;
	v->a[216707] = actions(10002);
	v->a[216708] = 2;
	v->a[216709] = anon_sym_LT_LPAREN;
	v->a[216710] = anon_sym_GT_LPAREN;
	v->a[216711] = actions(9994);
	v->a[216712] = 3;
	v->a[216713] = sym__bare_dollar;
	v->a[216714] = sym_raw_string;
	v->a[216715] = sym_ansi_c_string;
	v->a[216716] = state(1423);
	v->a[216717] = 9;
	v->a[216718] = sym_arithmetic_expansion;
	v->a[216719] = sym_brace_expression;
	small_parse_table_10836(v);
}

void	small_parse_table_10836(t_small_parse_table_array *v)
{
	v->a[216720] = sym_string;
	v->a[216721] = sym_translated_string;
	v->a[216722] = sym_number;
	v->a[216723] = sym_simple_expansion;
	v->a[216724] = sym_expansion;
	v->a[216725] = sym_command_substitution;
	v->a[216726] = sym_process_substitution;
	v->a[216727] = 18;
	v->a[216728] = actions(3);
	v->a[216729] = 1;
	v->a[216730] = sym_comment;
	v->a[216731] = actions(1414);
	v->a[216732] = 1;
	v->a[216733] = anon_sym_DOLLAR;
	v->a[216734] = actions(1420);
	v->a[216735] = 1;
	v->a[216736] = aux_sym_number_token1;
	v->a[216737] = actions(1422);
	v->a[216738] = 1;
	v->a[216739] = aux_sym_number_token2;
	small_parse_table_10837(v);
}

void	small_parse_table_10837(t_small_parse_table_array *v)
{
	v->a[216740] = actions(1426);
	v->a[216741] = 1;
	v->a[216742] = anon_sym_DOLLAR_LPAREN;
	v->a[216743] = actions(1438);
	v->a[216744] = 1;
	v->a[216745] = sym__brace_start;
	v->a[216746] = actions(9094);
	v->a[216747] = 1;
	v->a[216748] = anon_sym_DOLLAR_LBRACK;
	v->a[216749] = actions(9098);
	v->a[216750] = 1;
	v->a[216751] = anon_sym_DQUOTE;
	v->a[216752] = actions(9102);
	v->a[216753] = 1;
	v->a[216754] = anon_sym_DOLLAR_LBRACE;
	v->a[216755] = actions(9104);
	v->a[216756] = 1;
	v->a[216757] = anon_sym_BQUOTE;
	v->a[216758] = actions(9106);
	v->a[216759] = 1;
	small_parse_table_10838(v);
}

void	small_parse_table_10838(t_small_parse_table_array *v)
{
	v->a[216760] = anon_sym_DOLLAR_BQUOTE;
	v->a[216761] = actions(10120);
	v->a[216762] = 1;
	v->a[216763] = sym_word;
	v->a[216764] = actions(10128);
	v->a[216765] = 1;
	v->a[216766] = sym__comment_word;
	v->a[216767] = actions(9092);
	v->a[216768] = 2;
	v->a[216769] = anon_sym_LPAREN_LPAREN;
	v->a[216770] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[216771] = actions(9108);
	v->a[216772] = 2;
	v->a[216773] = anon_sym_LT_LPAREN;
	v->a[216774] = anon_sym_GT_LPAREN;
	v->a[216775] = actions(10124);
	v->a[216776] = 2;
	v->a[216777] = sym_test_operator;
	v->a[216778] = sym__special_character;
	v->a[216779] = actions(10126);
	small_parse_table_10839(v);
}

void	small_parse_table_10839(t_small_parse_table_array *v)
{
	v->a[216780] = 3;
	v->a[216781] = sym__bare_dollar;
	v->a[216782] = sym_raw_string;
	v->a[216783] = sym_ansi_c_string;
	v->a[216784] = state(910);
	v->a[216785] = 9;
	v->a[216786] = sym_arithmetic_expansion;
	v->a[216787] = sym_brace_expression;
	v->a[216788] = sym_string;
	v->a[216789] = sym_translated_string;
	v->a[216790] = sym_number;
	v->a[216791] = sym_simple_expansion;
	v->a[216792] = sym_expansion;
	v->a[216793] = sym_command_substitution;
	v->a[216794] = sym_process_substitution;
	v->a[216795] = 18;
	v->a[216796] = actions(3);
	v->a[216797] = 1;
	v->a[216798] = sym_comment;
	v->a[216799] = actions(3373);
	small_parse_table_10840(v);
}

/* EOF small_parse_table_2167.c */
