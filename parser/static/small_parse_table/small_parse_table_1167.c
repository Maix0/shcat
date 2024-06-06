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
	v->a[116700] = anon_sym_DOLLAR_LBRACE;
	v->a[116701] = actions(6803);
	v->a[116702] = 1;
	v->a[116703] = anon_sym_BQUOTE;
	v->a[116704] = actions(6805);
	v->a[116705] = 1;
	v->a[116706] = anon_sym_DOLLAR_BQUOTE;
	v->a[116707] = actions(6807);
	v->a[116708] = 1;
	v->a[116709] = sym__comment_word;
	v->a[116710] = actions(6861);
	v->a[116711] = 1;
	v->a[116712] = anon_sym_DOLLAR;
	v->a[116713] = actions(6799);
	v->a[116714] = 3;
	v->a[116715] = sym_test_operator;
	v->a[116716] = sym__bare_dollar;
	v->a[116717] = sym_raw_string;
	v->a[116718] = state(1108);
	v->a[116719] = 7;
	small_parse_table_5836(v);
}

void	small_parse_table_5836(t_small_parse_table_array *v)
{
	v->a[116720] = sym_arithmetic_expansion;
	v->a[116721] = sym_brace_expression;
	v->a[116722] = sym_string;
	v->a[116723] = sym_number;
	v->a[116724] = sym_simple_expansion;
	v->a[116725] = sym_expansion;
	v->a[116726] = sym_command_substitution;
	v->a[116727] = 16;
	v->a[116728] = actions(3);
	v->a[116729] = 1;
	v->a[116730] = sym_comment;
	v->a[116731] = actions(1745);
	v->a[116732] = 1;
	v->a[116733] = aux_sym_number_token1;
	v->a[116734] = actions(1747);
	v->a[116735] = 1;
	v->a[116736] = aux_sym_number_token2;
	v->a[116737] = actions(1751);
	v->a[116738] = 1;
	v->a[116739] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_5837(v);
}

void	small_parse_table_5837(t_small_parse_table_array *v)
{
	v->a[116740] = actions(1761);
	v->a[116741] = 1;
	v->a[116742] = sym__brace_start;
	v->a[116743] = actions(6789);
	v->a[116744] = 1;
	v->a[116745] = sym_word;
	v->a[116746] = actions(6791);
	v->a[116747] = 1;
	v->a[116748] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[116749] = actions(6795);
	v->a[116750] = 1;
	v->a[116751] = sym__special_character;
	v->a[116752] = actions(6797);
	v->a[116753] = 1;
	v->a[116754] = anon_sym_DQUOTE;
	v->a[116755] = actions(6801);
	v->a[116756] = 1;
	v->a[116757] = anon_sym_DOLLAR_LBRACE;
	v->a[116758] = actions(6803);
	v->a[116759] = 1;
	small_parse_table_5838(v);
}

void	small_parse_table_5838(t_small_parse_table_array *v)
{
	v->a[116760] = anon_sym_BQUOTE;
	v->a[116761] = actions(6805);
	v->a[116762] = 1;
	v->a[116763] = anon_sym_DOLLAR_BQUOTE;
	v->a[116764] = actions(6807);
	v->a[116765] = 1;
	v->a[116766] = sym__comment_word;
	v->a[116767] = actions(6863);
	v->a[116768] = 1;
	v->a[116769] = anon_sym_DOLLAR;
	v->a[116770] = actions(6799);
	v->a[116771] = 3;
	v->a[116772] = sym_test_operator;
	v->a[116773] = sym__bare_dollar;
	v->a[116774] = sym_raw_string;
	v->a[116775] = state(1108);
	v->a[116776] = 7;
	v->a[116777] = sym_arithmetic_expansion;
	v->a[116778] = sym_brace_expression;
	v->a[116779] = sym_string;
	small_parse_table_5839(v);
}

void	small_parse_table_5839(t_small_parse_table_array *v)
{
	v->a[116780] = sym_number;
	v->a[116781] = sym_simple_expansion;
	v->a[116782] = sym_expansion;
	v->a[116783] = sym_command_substitution;
	v->a[116784] = 16;
	v->a[116785] = actions(3);
	v->a[116786] = 1;
	v->a[116787] = sym_comment;
	v->a[116788] = actions(35);
	v->a[116789] = 1;
	v->a[116790] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[116791] = actions(41);
	v->a[116792] = 1;
	v->a[116793] = anon_sym_DQUOTE;
	v->a[116794] = actions(45);
	v->a[116795] = 1;
	v->a[116796] = aux_sym_number_token1;
	v->a[116797] = actions(47);
	v->a[116798] = 1;
	v->a[116799] = aux_sym_number_token2;
	small_parse_table_5840(v);
}

/* EOF small_parse_table_1167.c */
