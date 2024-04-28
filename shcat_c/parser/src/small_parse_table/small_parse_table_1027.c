/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1027.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5135(t_small_parse_table_array *v)
{
	v->a[102700] = anon_sym_DOLLAR;
	v->a[102701] = actions(264);
	v->a[102702] = 1;
	v->a[102703] = aux_sym_number_token1;
	v->a[102704] = actions(266);
	v->a[102705] = 1;
	v->a[102706] = aux_sym_number_token2;
	v->a[102707] = actions(270);
	v->a[102708] = 1;
	v->a[102709] = anon_sym_DOLLAR_LPAREN;
	v->a[102710] = actions(282);
	v->a[102711] = 1;
	v->a[102712] = sym_test_operator;
	v->a[102713] = actions(284);
	v->a[102714] = 1;
	v->a[102715] = sym__brace_start;
	v->a[102716] = actions(1075);
	v->a[102717] = 1;
	v->a[102718] = anon_sym_DOLLAR_LBRACK;
	v->a[102719] = actions(1079);
	small_parse_table_5136(v);
}

void	small_parse_table_5136(t_small_parse_table_array *v)
{
	v->a[102720] = 1;
	v->a[102721] = sym__special_character;
	v->a[102722] = actions(1081);
	v->a[102723] = 1;
	v->a[102724] = anon_sym_DQUOTE;
	v->a[102725] = actions(1085);
	v->a[102726] = 1;
	v->a[102727] = anon_sym_DOLLAR_LBRACE;
	v->a[102728] = actions(1087);
	v->a[102729] = 1;
	v->a[102730] = anon_sym_DOLLAR_BQUOTE;
	v->a[102731] = actions(3598);
	v->a[102732] = 1;
	v->a[102733] = anon_sym_BQUOTE;
	v->a[102734] = state(2690);
	v->a[102735] = 1;
	v->a[102736] = aux_sym__literal_repeat1;
	v->a[102737] = state(3091);
	v->a[102738] = 1;
	v->a[102739] = sym__expression;
	small_parse_table_5137(v);
}

void	small_parse_table_5137(t_small_parse_table_array *v)
{
	v->a[102740] = actions(103);
	v->a[102741] = 2;
	v->a[102742] = anon_sym_PLUS_PLUS2;
	v->a[102743] = anon_sym_DASH_DASH2;
	v->a[102744] = actions(105);
	v->a[102745] = 2;
	v->a[102746] = anon_sym_DASH2;
	v->a[102747] = anon_sym_PLUS2;
	v->a[102748] = actions(1073);
	v->a[102749] = 2;
	v->a[102750] = anon_sym_LPAREN_LPAREN;
	v->a[102751] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[102752] = actions(1083);
	v->a[102753] = 2;
	v->a[102754] = sym_raw_string;
	v->a[102755] = sym_ansi_c_string;
	v->a[102756] = actions(1089);
	v->a[102757] = 2;
	v->a[102758] = anon_sym_LT_LPAREN;
	v->a[102759] = anon_sym_GT_LPAREN;
	small_parse_table_5138(v);
}

void	small_parse_table_5138(t_small_parse_table_array *v)
{
	v->a[102760] = state(3053);
	v->a[102761] = 6;
	v->a[102762] = sym_binary_expression;
	v->a[102763] = sym_ternary_expression;
	v->a[102764] = sym_unary_expression;
	v->a[102765] = sym_postfix_expression;
	v->a[102766] = sym_parenthesized_expression;
	v->a[102767] = sym_concatenation;
	v->a[102768] = state(2500);
	v->a[102769] = 9;
	v->a[102770] = sym_arithmetic_expansion;
	v->a[102771] = sym_brace_expression;
	v->a[102772] = sym_string;
	v->a[102773] = sym_translated_string;
	v->a[102774] = sym_number;
	v->a[102775] = sym_simple_expansion;
	v->a[102776] = sym_expansion;
	v->a[102777] = sym_command_substitution;
	v->a[102778] = sym_process_substitution;
	v->a[102779] = 26;
	small_parse_table_5139(v);
}

void	small_parse_table_5139(t_small_parse_table_array *v)
{
	v->a[102780] = actions(71);
	v->a[102781] = 1;
	v->a[102782] = sym_comment;
	v->a[102783] = actions(1131);
	v->a[102784] = 1;
	v->a[102785] = anon_sym_LPAREN;
	v->a[102786] = actions(1141);
	v->a[102787] = 1;
	v->a[102788] = anon_sym_DOLLAR_LBRACK;
	v->a[102789] = actions(1145);
	v->a[102790] = 1;
	v->a[102791] = anon_sym_DOLLAR;
	v->a[102792] = actions(1149);
	v->a[102793] = 1;
	v->a[102794] = anon_sym_DQUOTE;
	v->a[102795] = actions(1153);
	v->a[102796] = 1;
	v->a[102797] = aux_sym_number_token1;
	v->a[102798] = actions(1155);
	v->a[102799] = 1;
	small_parse_table_5140(v);
}

/* EOF small_parse_table_1027.c */
