/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1167.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5835(t_small_parse_table_array *v)
{
	v->a[116700] = actions(1075);
	v->a[116701] = 1;
	v->a[116702] = anon_sym_DOLLAR_LBRACK;
	v->a[116703] = actions(1079);
	v->a[116704] = 1;
	v->a[116705] = sym__special_character;
	v->a[116706] = actions(1081);
	v->a[116707] = 1;
	v->a[116708] = anon_sym_DQUOTE;
	v->a[116709] = actions(1085);
	v->a[116710] = 1;
	v->a[116711] = anon_sym_DOLLAR_LBRACE;
	v->a[116712] = actions(1087);
	v->a[116713] = 1;
	v->a[116714] = anon_sym_DOLLAR_BQUOTE;
	v->a[116715] = actions(3598);
	v->a[116716] = 1;
	v->a[116717] = anon_sym_BQUOTE;
	v->a[116718] = state(2690);
	v->a[116719] = 1;
	small_parse_table_5836(v);
}

void	small_parse_table_5836(t_small_parse_table_array *v)
{
	v->a[116720] = aux_sym__literal_repeat1;
	v->a[116721] = state(3142);
	v->a[116722] = 1;
	v->a[116723] = sym__expression;
	v->a[116724] = actions(103);
	v->a[116725] = 2;
	v->a[116726] = anon_sym_PLUS_PLUS2;
	v->a[116727] = anon_sym_DASH_DASH2;
	v->a[116728] = actions(105);
	v->a[116729] = 2;
	v->a[116730] = anon_sym_DASH2;
	v->a[116731] = anon_sym_PLUS2;
	v->a[116732] = actions(1073);
	v->a[116733] = 2;
	v->a[116734] = anon_sym_LPAREN_LPAREN;
	v->a[116735] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[116736] = actions(1083);
	v->a[116737] = 2;
	v->a[116738] = sym_raw_string;
	v->a[116739] = sym_ansi_c_string;
	small_parse_table_5837(v);
}

void	small_parse_table_5837(t_small_parse_table_array *v)
{
	v->a[116740] = actions(1089);
	v->a[116741] = 2;
	v->a[116742] = anon_sym_LT_LPAREN;
	v->a[116743] = anon_sym_GT_LPAREN;
	v->a[116744] = state(3053);
	v->a[116745] = 6;
	v->a[116746] = sym_binary_expression;
	v->a[116747] = sym_ternary_expression;
	v->a[116748] = sym_unary_expression;
	v->a[116749] = sym_postfix_expression;
	v->a[116750] = sym_parenthesized_expression;
	v->a[116751] = sym_concatenation;
	v->a[116752] = state(2500);
	v->a[116753] = 9;
	v->a[116754] = sym_arithmetic_expansion;
	v->a[116755] = sym_brace_expression;
	v->a[116756] = sym_string;
	v->a[116757] = sym_translated_string;
	v->a[116758] = sym_number;
	v->a[116759] = sym_simple_expansion;
	small_parse_table_5838(v);
}

void	small_parse_table_5838(t_small_parse_table_array *v)
{
	v->a[116760] = sym_expansion;
	v->a[116761] = sym_command_substitution;
	v->a[116762] = sym_process_substitution;
	v->a[116763] = 27;
	v->a[116764] = actions(71);
	v->a[116765] = 1;
	v->a[116766] = sym_comment;
	v->a[116767] = actions(363);
	v->a[116768] = 1;
	v->a[116769] = anon_sym_DOLLAR_LBRACK;
	v->a[116770] = actions(367);
	v->a[116771] = 1;
	v->a[116772] = anon_sym_DOLLAR;
	v->a[116773] = actions(371);
	v->a[116774] = 1;
	v->a[116775] = anon_sym_DQUOTE;
	v->a[116776] = actions(375);
	v->a[116777] = 1;
	v->a[116778] = aux_sym_number_token1;
	v->a[116779] = actions(377);
	small_parse_table_5839(v);
}

void	small_parse_table_5839(t_small_parse_table_array *v)
{
	v->a[116780] = 1;
	v->a[116781] = aux_sym_number_token2;
	v->a[116782] = actions(379);
	v->a[116783] = 1;
	v->a[116784] = anon_sym_DOLLAR_LBRACE;
	v->a[116785] = actions(381);
	v->a[116786] = 1;
	v->a[116787] = anon_sym_DOLLAR_LPAREN;
	v->a[116788] = actions(385);
	v->a[116789] = 1;
	v->a[116790] = anon_sym_DOLLAR_BQUOTE;
	v->a[116791] = actions(391);
	v->a[116792] = 1;
	v->a[116793] = sym__brace_start;
	v->a[116794] = actions(1093);
	v->a[116795] = 1;
	v->a[116796] = anon_sym_LPAREN;
	v->a[116797] = actions(1095);
	v->a[116798] = 1;
	v->a[116799] = anon_sym_BANG;
	small_parse_table_5840(v);
}

/* EOF small_parse_table_1167.c */
