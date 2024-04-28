/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2327.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11635(t_small_parse_table_array *v)
{
	v->a[232700] = actions(9772);
	v->a[232701] = 1;
	v->a[232702] = anon_sym_DOLLAR_LBRACE;
	v->a[232703] = actions(9774);
	v->a[232704] = 1;
	v->a[232705] = anon_sym_DOLLAR_LPAREN;
	v->a[232706] = actions(9776);
	v->a[232707] = 1;
	v->a[232708] = anon_sym_BQUOTE;
	v->a[232709] = actions(9778);
	v->a[232710] = 1;
	v->a[232711] = anon_sym_DOLLAR_BQUOTE;
	v->a[232712] = actions(9784);
	v->a[232713] = 1;
	v->a[232714] = sym__brace_start;
	v->a[232715] = actions(10052);
	v->a[232716] = 1;
	v->a[232717] = sym__special_character;
	v->a[232718] = actions(11004);
	v->a[232719] = 1;
	small_parse_table_11636(v);
}

void	small_parse_table_11636(t_small_parse_table_array *v)
{
	v->a[232720] = sym_word;
	v->a[232721] = actions(11008);
	v->a[232722] = 1;
	v->a[232723] = sym_test_operator;
	v->a[232724] = state(6220);
	v->a[232725] = 1;
	v->a[232726] = aux_sym__literal_repeat1;
	v->a[232727] = state(6376);
	v->a[232728] = 1;
	v->a[232729] = sym_concatenation;
	v->a[232730] = actions(9756);
	v->a[232731] = 2;
	v->a[232732] = anon_sym_LPAREN_LPAREN;
	v->a[232733] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[232734] = actions(9780);
	v->a[232735] = 2;
	v->a[232736] = anon_sym_LT_LPAREN;
	v->a[232737] = anon_sym_GT_LPAREN;
	v->a[232738] = actions(11006);
	v->a[232739] = 2;
	small_parse_table_11637(v);
}

void	small_parse_table_11637(t_small_parse_table_array *v)
{
	v->a[232740] = sym_raw_string;
	v->a[232741] = sym_ansi_c_string;
	v->a[232742] = state(6198);
	v->a[232743] = 9;
	v->a[232744] = sym_arithmetic_expansion;
	v->a[232745] = sym_brace_expression;
	v->a[232746] = sym_string;
	v->a[232747] = sym_translated_string;
	v->a[232748] = sym_number;
	v->a[232749] = sym_simple_expansion;
	v->a[232750] = sym_expansion;
	v->a[232751] = sym_command_substitution;
	v->a[232752] = sym_process_substitution;
	v->a[232753] = 21;
	v->a[232754] = actions(71);
	v->a[232755] = 1;
	v->a[232756] = sym_comment;
	v->a[232757] = actions(3602);
	v->a[232758] = 1;
	v->a[232759] = sym_variable_name;
	small_parse_table_11638(v);
}

void	small_parse_table_11638(t_small_parse_table_array *v)
{
	v->a[232760] = actions(3604);
	v->a[232761] = 1;
	v->a[232762] = aux_sym__simple_variable_name_token1;
	v->a[232763] = actions(9898);
	v->a[232764] = 1;
	v->a[232765] = anon_sym_LPAREN;
	v->a[232766] = actions(9900);
	v->a[232767] = 1;
	v->a[232768] = anon_sym_BANG;
	v->a[232769] = actions(9906);
	v->a[232770] = 1;
	v->a[232771] = anon_sym_TILDE;
	v->a[232772] = actions(9908);
	v->a[232773] = 1;
	v->a[232774] = anon_sym_DOLLAR;
	v->a[232775] = actions(9910);
	v->a[232776] = 1;
	v->a[232777] = anon_sym_DQUOTE;
	v->a[232778] = actions(9912);
	v->a[232779] = 1;
	small_parse_table_11639(v);
}

void	small_parse_table_11639(t_small_parse_table_array *v)
{
	v->a[232780] = aux_sym_number_token1;
	v->a[232781] = actions(9914);
	v->a[232782] = 1;
	v->a[232783] = aux_sym_number_token2;
	v->a[232784] = actions(9916);
	v->a[232785] = 1;
	v->a[232786] = anon_sym_DOLLAR_LBRACE;
	v->a[232787] = actions(9918);
	v->a[232788] = 1;
	v->a[232789] = anon_sym_DOLLAR_LPAREN;
	v->a[232790] = actions(9920);
	v->a[232791] = 1;
	v->a[232792] = anon_sym_BQUOTE;
	v->a[232793] = actions(9922);
	v->a[232794] = 1;
	v->a[232795] = anon_sym_DOLLAR_BQUOTE;
	v->a[232796] = state(3359);
	v->a[232797] = 1;
	v->a[232798] = sym__arithmetic_postfix_expression;
	v->a[232799] = state(3361);
	small_parse_table_11640(v);
}

/* EOF small_parse_table_2327.c */
