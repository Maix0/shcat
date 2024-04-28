/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1987.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9935(t_small_parse_table_array *v)
{
	v->a[198700] = sym_raw_string;
	v->a[198701] = sym_ansi_c_string;
	v->a[198702] = actions(9006);
	v->a[198703] = 2;
	v->a[198704] = anon_sym_LT_LPAREN;
	v->a[198705] = anon_sym_GT_LPAREN;
	v->a[198706] = state(757);
	v->a[198707] = 2;
	v->a[198708] = sym_concatenation;
	v->a[198709] = aux_sym_for_statement_repeat1;
	v->a[198710] = state(1846);
	v->a[198711] = 9;
	v->a[198712] = sym_arithmetic_expansion;
	v->a[198713] = sym_brace_expression;
	v->a[198714] = sym_string;
	v->a[198715] = sym_translated_string;
	v->a[198716] = sym_number;
	v->a[198717] = sym_simple_expansion;
	v->a[198718] = sym_expansion;
	v->a[198719] = sym_command_substitution;
	small_parse_table_9936(v);
}

void	small_parse_table_9936(t_small_parse_table_array *v)
{
	v->a[198720] = sym_process_substitution;
	v->a[198721] = 20;
	v->a[198722] = actions(71);
	v->a[198723] = 1;
	v->a[198724] = sym_comment;
	v->a[198725] = actions(2329);
	v->a[198726] = 1;
	v->a[198727] = sym_word;
	v->a[198728] = actions(2335);
	v->a[198729] = 1;
	v->a[198730] = anon_sym_DOLLAR;
	v->a[198731] = actions(2341);
	v->a[198732] = 1;
	v->a[198733] = aux_sym_number_token1;
	v->a[198734] = actions(2343);
	v->a[198735] = 1;
	v->a[198736] = aux_sym_number_token2;
	v->a[198737] = actions(2347);
	v->a[198738] = 1;
	v->a[198739] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_9937(v);
}

void	small_parse_table_9937(t_small_parse_table_array *v)
{
	v->a[198740] = actions(2355);
	v->a[198741] = 1;
	v->a[198742] = sym_test_operator;
	v->a[198743] = actions(2357);
	v->a[198744] = 1;
	v->a[198745] = sym__brace_start;
	v->a[198746] = actions(9010);
	v->a[198747] = 1;
	v->a[198748] = anon_sym_DOLLAR_LBRACK;
	v->a[198749] = actions(9012);
	v->a[198750] = 1;
	v->a[198751] = sym__special_character;
	v->a[198752] = actions(9014);
	v->a[198753] = 1;
	v->a[198754] = anon_sym_DQUOTE;
	v->a[198755] = actions(9018);
	v->a[198756] = 1;
	v->a[198757] = anon_sym_DOLLAR_LBRACE;
	v->a[198758] = actions(9020);
	v->a[198759] = 1;
	small_parse_table_9938(v);
}

void	small_parse_table_9938(t_small_parse_table_array *v)
{
	v->a[198760] = anon_sym_BQUOTE;
	v->a[198761] = actions(9022);
	v->a[198762] = 1;
	v->a[198763] = anon_sym_DOLLAR_BQUOTE;
	v->a[198764] = state(1658);
	v->a[198765] = 1;
	v->a[198766] = aux_sym__literal_repeat1;
	v->a[198767] = actions(9008);
	v->a[198768] = 2;
	v->a[198769] = anon_sym_LPAREN_LPAREN;
	v->a[198770] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[198771] = actions(9016);
	v->a[198772] = 2;
	v->a[198773] = sym_raw_string;
	v->a[198774] = sym_ansi_c_string;
	v->a[198775] = actions(9024);
	v->a[198776] = 2;
	v->a[198777] = anon_sym_LT_LPAREN;
	v->a[198778] = anon_sym_GT_LPAREN;
	v->a[198779] = state(591);
	small_parse_table_9939(v);
}

void	small_parse_table_9939(t_small_parse_table_array *v)
{
	v->a[198780] = 2;
	v->a[198781] = sym_concatenation;
	v->a[198782] = aux_sym_for_statement_repeat1;
	v->a[198783] = state(1290);
	v->a[198784] = 9;
	v->a[198785] = sym_arithmetic_expansion;
	v->a[198786] = sym_brace_expression;
	v->a[198787] = sym_string;
	v->a[198788] = sym_translated_string;
	v->a[198789] = sym_number;
	v->a[198790] = sym_simple_expansion;
	v->a[198791] = sym_expansion;
	v->a[198792] = sym_command_substitution;
	v->a[198793] = sym_process_substitution;
	v->a[198794] = 19;
	v->a[198795] = actions(3);
	v->a[198796] = 1;
	v->a[198797] = sym_comment;
	v->a[198798] = actions(363);
	v->a[198799] = 1;
	small_parse_table_9940(v);
}

/* EOF small_parse_table_1987.c */
