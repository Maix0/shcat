/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2317.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11585(t_small_parse_table_array *v)
{
	v->a[231700] = aux_sym_number_token2;
	v->a[231701] = actions(9296);
	v->a[231702] = 1;
	v->a[231703] = anon_sym_DOLLAR_LBRACE;
	v->a[231704] = actions(9298);
	v->a[231705] = 1;
	v->a[231706] = anon_sym_DOLLAR_LPAREN;
	v->a[231707] = actions(9300);
	v->a[231708] = 1;
	v->a[231709] = anon_sym_BQUOTE;
	v->a[231710] = actions(9302);
	v->a[231711] = 1;
	v->a[231712] = anon_sym_DOLLAR_BQUOTE;
	v->a[231713] = actions(10960);
	v->a[231714] = 1;
	v->a[231715] = aux_sym__simple_variable_name_token1;
	v->a[231716] = state(2801);
	v->a[231717] = 1;
	v->a[231718] = sym__arithmetic_binary_expression;
	v->a[231719] = state(2803);
	small_parse_table_11586(v);
}

void	small_parse_table_11586(t_small_parse_table_array *v)
{
	v->a[231720] = 1;
	v->a[231721] = sym__arithmetic_ternary_expression;
	v->a[231722] = state(2809);
	v->a[231723] = 1;
	v->a[231724] = sym__arithmetic_unary_expression;
	v->a[231725] = state(2825);
	v->a[231726] = 1;
	v->a[231727] = sym__arithmetic_postfix_expression;
	v->a[231728] = actions(9282);
	v->a[231729] = 2;
	v->a[231730] = anon_sym_PLUS_PLUS2;
	v->a[231731] = anon_sym_DASH_DASH2;
	v->a[231732] = actions(9284);
	v->a[231733] = 2;
	v->a[231734] = anon_sym_DASH2;
	v->a[231735] = anon_sym_PLUS2;
	v->a[231736] = state(3017);
	v->a[231737] = 9;
	v->a[231738] = sym_subscript;
	v->a[231739] = sym__arithmetic_expression;
	small_parse_table_11587(v);
}

void	small_parse_table_11587(t_small_parse_table_array *v)
{
	v->a[231740] = sym__arithmetic_literal;
	v->a[231741] = sym__arithmetic_parenthesized_expression;
	v->a[231742] = sym_string;
	v->a[231743] = sym_number;
	v->a[231744] = sym_simple_expansion;
	v->a[231745] = sym_expansion;
	v->a[231746] = sym_command_substitution;
	v->a[231747] = 20;
	v->a[231748] = actions(71);
	v->a[231749] = 1;
	v->a[231750] = sym_comment;
	v->a[231751] = actions(8178);
	v->a[231752] = 1;
	v->a[231753] = anon_sym_DOLLAR_LBRACK;
	v->a[231754] = actions(8180);
	v->a[231755] = 1;
	v->a[231756] = anon_sym_DOLLAR;
	v->a[231757] = actions(8184);
	v->a[231758] = 1;
	v->a[231759] = anon_sym_DQUOTE;
	small_parse_table_11588(v);
}

void	small_parse_table_11588(t_small_parse_table_array *v)
{
	v->a[231760] = actions(8188);
	v->a[231761] = 1;
	v->a[231762] = aux_sym_number_token1;
	v->a[231763] = actions(8190);
	v->a[231764] = 1;
	v->a[231765] = aux_sym_number_token2;
	v->a[231766] = actions(8192);
	v->a[231767] = 1;
	v->a[231768] = anon_sym_DOLLAR_LBRACE;
	v->a[231769] = actions(8194);
	v->a[231770] = 1;
	v->a[231771] = anon_sym_DOLLAR_LPAREN;
	v->a[231772] = actions(8196);
	v->a[231773] = 1;
	v->a[231774] = anon_sym_BQUOTE;
	v->a[231775] = actions(8198);
	v->a[231776] = 1;
	v->a[231777] = anon_sym_DOLLAR_BQUOTE;
	v->a[231778] = actions(8208);
	v->a[231779] = 1;
	small_parse_table_11589(v);
}

void	small_parse_table_11589(t_small_parse_table_array *v)
{
	v->a[231780] = sym__brace_start;
	v->a[231781] = actions(8220);
	v->a[231782] = 1;
	v->a[231783] = sym__special_character;
	v->a[231784] = actions(10962);
	v->a[231785] = 1;
	v->a[231786] = sym_word;
	v->a[231787] = actions(10966);
	v->a[231788] = 1;
	v->a[231789] = sym_test_operator;
	v->a[231790] = state(1741);
	v->a[231791] = 1;
	v->a[231792] = aux_sym__literal_repeat1;
	v->a[231793] = state(1958);
	v->a[231794] = 1;
	v->a[231795] = sym_concatenation;
	v->a[231796] = actions(8174);
	v->a[231797] = 2;
	v->a[231798] = anon_sym_LPAREN_LPAREN;
	v->a[231799] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_11590(v);
}

/* EOF small_parse_table_2317.c */
