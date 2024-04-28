/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1967.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9835(t_small_parse_table_array *v)
{
	v->a[196700] = 1;
	v->a[196701] = aux_sym__literal_repeat1;
	v->a[196702] = actions(8567);
	v->a[196703] = 2;
	v->a[196704] = anon_sym_LPAREN_LPAREN;
	v->a[196705] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[196706] = actions(8579);
	v->a[196707] = 2;
	v->a[196708] = sym_raw_string;
	v->a[196709] = sym_ansi_c_string;
	v->a[196710] = actions(8593);
	v->a[196711] = 2;
	v->a[196712] = anon_sym_LT_LPAREN;
	v->a[196713] = anon_sym_GT_LPAREN;
	v->a[196714] = state(3604);
	v->a[196715] = 2;
	v->a[196716] = sym_concatenation;
	v->a[196717] = aux_sym_for_statement_repeat1;
	v->a[196718] = state(5045);
	v->a[196719] = 9;
	small_parse_table_9836(v);
}

void	small_parse_table_9836(t_small_parse_table_array *v)
{
	v->a[196720] = sym_arithmetic_expansion;
	v->a[196721] = sym_brace_expression;
	v->a[196722] = sym_string;
	v->a[196723] = sym_translated_string;
	v->a[196724] = sym_number;
	v->a[196725] = sym_simple_expansion;
	v->a[196726] = sym_expansion;
	v->a[196727] = sym_command_substitution;
	v->a[196728] = sym_process_substitution;
	v->a[196729] = 20;
	v->a[196730] = actions(71);
	v->a[196731] = 1;
	v->a[196732] = sym_comment;
	v->a[196733] = actions(3731);
	v->a[196734] = 1;
	v->a[196735] = anon_sym_DOLLAR;
	v->a[196736] = actions(3737);
	v->a[196737] = 1;
	v->a[196738] = aux_sym_number_token1;
	v->a[196739] = actions(3739);
	small_parse_table_9837(v);
}

void	small_parse_table_9837(t_small_parse_table_array *v)
{
	v->a[196740] = 1;
	v->a[196741] = aux_sym_number_token2;
	v->a[196742] = actions(3743);
	v->a[196743] = 1;
	v->a[196744] = anon_sym_DOLLAR_LPAREN;
	v->a[196745] = actions(3755);
	v->a[196746] = 1;
	v->a[196747] = sym__brace_start;
	v->a[196748] = actions(7759);
	v->a[196749] = 1;
	v->a[196750] = sym_word;
	v->a[196751] = actions(7767);
	v->a[196752] = 1;
	v->a[196753] = sym_test_operator;
	v->a[196754] = actions(8820);
	v->a[196755] = 1;
	v->a[196756] = anon_sym_DOLLAR_LBRACK;
	v->a[196757] = actions(8822);
	v->a[196758] = 1;
	v->a[196759] = sym__special_character;
	small_parse_table_9838(v);
}

void	small_parse_table_9838(t_small_parse_table_array *v)
{
	v->a[196760] = actions(8824);
	v->a[196761] = 1;
	v->a[196762] = anon_sym_DQUOTE;
	v->a[196763] = actions(8828);
	v->a[196764] = 1;
	v->a[196765] = anon_sym_DOLLAR_LBRACE;
	v->a[196766] = actions(8830);
	v->a[196767] = 1;
	v->a[196768] = anon_sym_BQUOTE;
	v->a[196769] = actions(8832);
	v->a[196770] = 1;
	v->a[196771] = anon_sym_DOLLAR_BQUOTE;
	v->a[196772] = state(4975);
	v->a[196773] = 1;
	v->a[196774] = aux_sym__literal_repeat1;
	v->a[196775] = actions(8818);
	v->a[196776] = 2;
	v->a[196777] = anon_sym_LPAREN_LPAREN;
	v->a[196778] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[196779] = actions(8826);
	small_parse_table_9839(v);
}

void	small_parse_table_9839(t_small_parse_table_array *v)
{
	v->a[196780] = 2;
	v->a[196781] = sym_raw_string;
	v->a[196782] = sym_ansi_c_string;
	v->a[196783] = actions(8834);
	v->a[196784] = 2;
	v->a[196785] = anon_sym_LT_LPAREN;
	v->a[196786] = anon_sym_GT_LPAREN;
	v->a[196787] = state(3484);
	v->a[196788] = 2;
	v->a[196789] = sym_concatenation;
	v->a[196790] = aux_sym_for_statement_repeat1;
	v->a[196791] = state(4460);
	v->a[196792] = 9;
	v->a[196793] = sym_arithmetic_expansion;
	v->a[196794] = sym_brace_expression;
	v->a[196795] = sym_string;
	v->a[196796] = sym_translated_string;
	v->a[196797] = sym_number;
	v->a[196798] = sym_simple_expansion;
	v->a[196799] = sym_expansion;
	small_parse_table_9840(v);
}

/* EOF small_parse_table_1967.c */
