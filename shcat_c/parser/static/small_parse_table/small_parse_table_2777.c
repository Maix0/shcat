/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2777.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13885(t_small_parse_table_array *v)
{
	v->a[277700] = actions(12177);
	v->a[277701] = 1;
	v->a[277702] = aux_sym_number_token2;
	v->a[277703] = actions(12179);
	v->a[277704] = 1;
	v->a[277705] = anon_sym_DOLLAR_LBRACE;
	v->a[277706] = actions(12181);
	v->a[277707] = 1;
	v->a[277708] = anon_sym_DOLLAR_LPAREN;
	v->a[277709] = actions(12183);
	v->a[277710] = 1;
	v->a[277711] = anon_sym_BQUOTE;
	v->a[277712] = actions(12185);
	v->a[277713] = 1;
	v->a[277714] = anon_sym_DOLLAR_BQUOTE;
	v->a[277715] = actions(12488);
	v->a[277716] = 1;
	v->a[277717] = aux_sym__c_word_token1;
	v->a[277718] = state(3442);
	v->a[277719] = 1;
	small_parse_table_13886(v);
}

void	small_parse_table_13886(t_small_parse_table_array *v)
{
	v->a[277720] = sym__c_unary_expression;
	v->a[277721] = state(3443);
	v->a[277722] = 1;
	v->a[277723] = sym__c_binary_expression;
	v->a[277724] = state(3444);
	v->a[277725] = 1;
	v->a[277726] = sym__c_postfix_expression;
	v->a[277727] = actions(12165);
	v->a[277728] = 2;
	v->a[277729] = anon_sym_PLUS_PLUS;
	v->a[277730] = anon_sym_DASH_DASH;
	v->a[277731] = state(3395);
	v->a[277732] = 7;
	v->a[277733] = sym__c_expression_not_assignment;
	v->a[277734] = sym__c_parenthesized_expression;
	v->a[277735] = sym_string;
	v->a[277736] = sym_number;
	v->a[277737] = sym_simple_expansion;
	v->a[277738] = sym_expansion;
	v->a[277739] = sym_command_substitution;
	small_parse_table_13887(v);
}

void	small_parse_table_13887(t_small_parse_table_array *v)
{
	v->a[277740] = 4;
	v->a[277741] = actions(71);
	v->a[277742] = 1;
	v->a[277743] = sym_comment;
	v->a[277744] = actions(12494);
	v->a[277745] = 1;
	v->a[277746] = anon_sym_esac;
	v->a[277747] = actions(12490);
	v->a[277748] = 6;
	v->a[277749] = anon_sym_LPAREN;
	v->a[277750] = anon_sym_DOLLAR;
	v->a[277751] = aux_sym_number_token1;
	v->a[277752] = aux_sym_number_token2;
	v->a[277753] = anon_sym_DOLLAR_LPAREN;
	v->a[277754] = sym_word;
	v->a[277755] = actions(12492);
	v->a[277756] = 15;
	v->a[277757] = sym_test_operator;
	v->a[277758] = sym_extglob_pattern;
	v->a[277759] = sym__brace_start;
	small_parse_table_13888(v);
}

void	small_parse_table_13888(t_small_parse_table_array *v)
{
	v->a[277760] = anon_sym_LPAREN_LPAREN;
	v->a[277761] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[277762] = anon_sym_DOLLAR_LBRACK;
	v->a[277763] = sym__special_character;
	v->a[277764] = anon_sym_DQUOTE;
	v->a[277765] = sym_raw_string;
	v->a[277766] = sym_ansi_c_string;
	v->a[277767] = anon_sym_DOLLAR_LBRACE;
	v->a[277768] = anon_sym_BQUOTE;
	v->a[277769] = anon_sym_DOLLAR_BQUOTE;
	v->a[277770] = anon_sym_LT_LPAREN;
	v->a[277771] = anon_sym_GT_LPAREN;
	v->a[277772] = 16;
	v->a[277773] = actions(71);
	v->a[277774] = 1;
	v->a[277775] = sym_comment;
	v->a[277776] = actions(12167);
	v->a[277777] = 1;
	v->a[277778] = anon_sym_LPAREN;
	v->a[277779] = actions(12171);
	small_parse_table_13889(v);
}

void	small_parse_table_13889(t_small_parse_table_array *v)
{
	v->a[277780] = 1;
	v->a[277781] = anon_sym_DOLLAR;
	v->a[277782] = actions(12173);
	v->a[277783] = 1;
	v->a[277784] = anon_sym_DQUOTE;
	v->a[277785] = actions(12175);
	v->a[277786] = 1;
	v->a[277787] = aux_sym_number_token1;
	v->a[277788] = actions(12177);
	v->a[277789] = 1;
	v->a[277790] = aux_sym_number_token2;
	v->a[277791] = actions(12179);
	v->a[277792] = 1;
	v->a[277793] = anon_sym_DOLLAR_LBRACE;
	v->a[277794] = actions(12181);
	v->a[277795] = 1;
	v->a[277796] = anon_sym_DOLLAR_LPAREN;
	v->a[277797] = actions(12183);
	v->a[277798] = 1;
	v->a[277799] = anon_sym_BQUOTE;
	small_parse_table_13890(v);
}

/* EOF small_parse_table_2777.c */
