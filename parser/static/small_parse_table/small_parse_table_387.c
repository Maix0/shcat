/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_387.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1935(t_small_parse_table_array *v)
{
	v->a[38700] = sym_word;
	v->a[38701] = state(1011);
	v->a[38702] = 5;
	v->a[38703] = sym_arithmetic_expansion;
	v->a[38704] = sym_string;
	v->a[38705] = sym_simple_expansion;
	v->a[38706] = sym_expansion;
	v->a[38707] = sym_command_substitution;
	v->a[38708] = 10;
	v->a[38709] = actions(3);
	v->a[38710] = 1;
	v->a[38711] = sym_comment;
	v->a[38712] = actions(99);
	v->a[38713] = 1;
	v->a[38714] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38715] = actions(103);
	v->a[38716] = 1;
	v->a[38717] = anon_sym_DQUOTE;
	v->a[38718] = actions(107);
	v->a[38719] = 1;
	small_parse_table_1936(v);
}

void	small_parse_table_1936(t_small_parse_table_array *v)
{
	v->a[38720] = anon_sym_DOLLAR_LBRACE;
	v->a[38721] = actions(109);
	v->a[38722] = 1;
	v->a[38723] = anon_sym_DOLLAR_LPAREN;
	v->a[38724] = actions(111);
	v->a[38725] = 1;
	v->a[38726] = anon_sym_BQUOTE;
	v->a[38727] = actions(1717);
	v->a[38728] = 1;
	v->a[38729] = sym__bare_dollar;
	v->a[38730] = actions(1782);
	v->a[38731] = 1;
	v->a[38732] = anon_sym_DOLLAR;
	v->a[38733] = actions(1715);
	v->a[38734] = 5;
	v->a[38735] = aux_sym_concatenation_token1;
	v->a[38736] = sym_raw_string;
	v->a[38737] = sym_number;
	v->a[38738] = sym__comment_word;
	v->a[38739] = sym_word;
	small_parse_table_1937(v);
}

void	small_parse_table_1937(t_small_parse_table_array *v)
{
	v->a[38740] = state(299);
	v->a[38741] = 5;
	v->a[38742] = sym_arithmetic_expansion;
	v->a[38743] = sym_string;
	v->a[38744] = sym_simple_expansion;
	v->a[38745] = sym_expansion;
	v->a[38746] = sym_command_substitution;
	v->a[38747] = 12;
	v->a[38748] = actions(3);
	v->a[38749] = 1;
	v->a[38750] = sym_comment;
	v->a[38751] = actions(655);
	v->a[38752] = 1;
	v->a[38753] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38754] = actions(657);
	v->a[38755] = 1;
	v->a[38756] = anon_sym_DOLLAR;
	v->a[38757] = actions(659);
	v->a[38758] = 1;
	v->a[38759] = anon_sym_DQUOTE;
	small_parse_table_1938(v);
}

void	small_parse_table_1938(t_small_parse_table_array *v)
{
	v->a[38760] = actions(661);
	v->a[38761] = 1;
	v->a[38762] = anon_sym_DOLLAR_LBRACE;
	v->a[38763] = actions(663);
	v->a[38764] = 1;
	v->a[38765] = anon_sym_DOLLAR_LPAREN;
	v->a[38766] = actions(665);
	v->a[38767] = 1;
	v->a[38768] = anon_sym_BQUOTE;
	v->a[38769] = actions(1784);
	v->a[38770] = 1;
	v->a[38771] = aux_sym_heredoc_redirect_token1;
	v->a[38772] = state(742);
	v->a[38773] = 1;
	v->a[38774] = aux_sym__heredoc_command;
	v->a[38775] = state(1296);
	v->a[38776] = 1;
	v->a[38777] = sym_concatenation;
	v->a[38778] = actions(645);
	v->a[38779] = 3;
	small_parse_table_1939(v);
}

void	small_parse_table_1939(t_small_parse_table_array *v)
{
	v->a[38780] = sym_raw_string;
	v->a[38781] = sym_number;
	v->a[38782] = sym_word;
	v->a[38783] = state(1011);
	v->a[38784] = 5;
	v->a[38785] = sym_arithmetic_expansion;
	v->a[38786] = sym_string;
	v->a[38787] = sym_simple_expansion;
	v->a[38788] = sym_expansion;
	v->a[38789] = sym_command_substitution;
	v->a[38790] = 12;
	v->a[38791] = actions(3);
	v->a[38792] = 1;
	v->a[38793] = sym_comment;
	v->a[38794] = actions(655);
	v->a[38795] = 1;
	v->a[38796] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38797] = actions(657);
	v->a[38798] = 1;
	v->a[38799] = anon_sym_DOLLAR;
	small_parse_table_1940(v);
}

/* EOF small_parse_table_387.c */
