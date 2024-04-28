/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2137.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10685(t_small_parse_table_array *v)
{
	v->a[213700] = 1;
	v->a[213701] = anon_sym_DOLLAR;
	v->a[213702] = actions(10182);
	v->a[213703] = 1;
	v->a[213704] = sym__comment_word;
	v->a[213705] = actions(5110);
	v->a[213706] = 2;
	v->a[213707] = anon_sym_LPAREN_LPAREN;
	v->a[213708] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[213709] = actions(5134);
	v->a[213710] = 2;
	v->a[213711] = anon_sym_LT_LPAREN;
	v->a[213712] = anon_sym_GT_LPAREN;
	v->a[213713] = actions(10178);
	v->a[213714] = 2;
	v->a[213715] = sym_test_operator;
	v->a[213716] = sym__special_character;
	v->a[213717] = actions(10180);
	v->a[213718] = 3;
	v->a[213719] = sym__bare_dollar;
	small_parse_table_10686(v);
}

void	small_parse_table_10686(t_small_parse_table_array *v)
{
	v->a[213720] = sym_raw_string;
	v->a[213721] = sym_ansi_c_string;
	v->a[213722] = state(2842);
	v->a[213723] = 9;
	v->a[213724] = sym_arithmetic_expansion;
	v->a[213725] = sym_brace_expression;
	v->a[213726] = sym_string;
	v->a[213727] = sym_translated_string;
	v->a[213728] = sym_number;
	v->a[213729] = sym_simple_expansion;
	v->a[213730] = sym_expansion;
	v->a[213731] = sym_command_substitution;
	v->a[213732] = sym_process_substitution;
	v->a[213733] = 18;
	v->a[213734] = actions(3);
	v->a[213735] = 1;
	v->a[213736] = sym_comment;
	v->a[213737] = actions(8178);
	v->a[213738] = 1;
	v->a[213739] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_10687(v);
}

void	small_parse_table_10687(t_small_parse_table_array *v)
{
	v->a[213740] = actions(8180);
	v->a[213741] = 1;
	v->a[213742] = anon_sym_DOLLAR;
	v->a[213743] = actions(8184);
	v->a[213744] = 1;
	v->a[213745] = anon_sym_DQUOTE;
	v->a[213746] = actions(8188);
	v->a[213747] = 1;
	v->a[213748] = aux_sym_number_token1;
	v->a[213749] = actions(8190);
	v->a[213750] = 1;
	v->a[213751] = aux_sym_number_token2;
	v->a[213752] = actions(8192);
	v->a[213753] = 1;
	v->a[213754] = anon_sym_DOLLAR_LBRACE;
	v->a[213755] = actions(8194);
	v->a[213756] = 1;
	v->a[213757] = anon_sym_DOLLAR_LPAREN;
	v->a[213758] = actions(8196);
	v->a[213759] = 1;
	small_parse_table_10688(v);
}

void	small_parse_table_10688(t_small_parse_table_array *v)
{
	v->a[213760] = anon_sym_BQUOTE;
	v->a[213761] = actions(8198);
	v->a[213762] = 1;
	v->a[213763] = anon_sym_DOLLAR_BQUOTE;
	v->a[213764] = actions(8208);
	v->a[213765] = 1;
	v->a[213766] = sym__brace_start;
	v->a[213767] = actions(9720);
	v->a[213768] = 1;
	v->a[213769] = sym_word;
	v->a[213770] = actions(9728);
	v->a[213771] = 1;
	v->a[213772] = sym__comment_word;
	v->a[213773] = actions(8174);
	v->a[213774] = 2;
	v->a[213775] = anon_sym_LPAREN_LPAREN;
	v->a[213776] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[213777] = actions(8200);
	v->a[213778] = 2;
	v->a[213779] = anon_sym_LT_LPAREN;
	small_parse_table_10689(v);
}

void	small_parse_table_10689(t_small_parse_table_array *v)
{
	v->a[213780] = anon_sym_GT_LPAREN;
	v->a[213781] = actions(9724);
	v->a[213782] = 2;
	v->a[213783] = sym_test_operator;
	v->a[213784] = sym__special_character;
	v->a[213785] = actions(9726);
	v->a[213786] = 3;
	v->a[213787] = sym__bare_dollar;
	v->a[213788] = sym_raw_string;
	v->a[213789] = sym_ansi_c_string;
	v->a[213790] = state(1590);
	v->a[213791] = 9;
	v->a[213792] = sym_arithmetic_expansion;
	v->a[213793] = sym_brace_expression;
	v->a[213794] = sym_string;
	v->a[213795] = sym_translated_string;
	v->a[213796] = sym_number;
	v->a[213797] = sym_simple_expansion;
	v->a[213798] = sym_expansion;
	v->a[213799] = sym_command_substitution;
	small_parse_table_10690(v);
}

/* EOF small_parse_table_2137.c */
