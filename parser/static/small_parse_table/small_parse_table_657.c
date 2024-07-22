/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_657.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3285(t_small_parse_table_array *v)
{
	v->a[65700] = 10;
	v->a[65701] = actions(3);
	v->a[65702] = 1;
	v->a[65703] = sym_comment;
	v->a[65704] = actions(2536);
	v->a[65705] = 1;
	v->a[65706] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[65707] = actions(2540);
	v->a[65708] = 1;
	v->a[65709] = anon_sym_DQUOTE;
	v->a[65710] = actions(2542);
	v->a[65711] = 1;
	v->a[65712] = anon_sym_DOLLAR_LBRACE;
	v->a[65713] = actions(2544);
	v->a[65714] = 1;
	v->a[65715] = anon_sym_DOLLAR_LPAREN;
	v->a[65716] = actions(2546);
	v->a[65717] = 1;
	v->a[65718] = anon_sym_BQUOTE;
	v->a[65719] = actions(2593);
	small_parse_table_3286(v);
}

void	small_parse_table_3286(t_small_parse_table_array *v)
{
	v->a[65720] = 1;
	v->a[65721] = anon_sym_DOLLAR;
	v->a[65722] = actions(2595);
	v->a[65723] = 1;
	v->a[65724] = sym__bare_dollar;
	v->a[65725] = actions(2591);
	v->a[65726] = 5;
	v->a[65727] = aux_sym_concatenation_token1;
	v->a[65728] = sym_raw_string;
	v->a[65729] = sym_number;
	v->a[65730] = sym__comment_word;
	v->a[65731] = sym_word;
	v->a[65732] = state(1064);
	v->a[65733] = 5;
	v->a[65734] = sym_arithmetic_expansion;
	v->a[65735] = sym_string;
	v->a[65736] = sym_simple_expansion;
	v->a[65737] = sym_expansion;
	v->a[65738] = sym_command_substitution;
	v->a[65739] = 11;
	small_parse_table_3287(v);
}

void	small_parse_table_3287(t_small_parse_table_array *v)
{
	v->a[65740] = actions(3);
	v->a[65741] = 1;
	v->a[65742] = sym_comment;
	v->a[65743] = actions(1724);
	v->a[65744] = 1;
	v->a[65745] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[65746] = actions(1726);
	v->a[65747] = 1;
	v->a[65748] = anon_sym_DOLLAR;
	v->a[65749] = actions(1728);
	v->a[65750] = 1;
	v->a[65751] = anon_sym_DQUOTE;
	v->a[65752] = actions(1730);
	v->a[65753] = 1;
	v->a[65754] = anon_sym_DOLLAR_LBRACE;
	v->a[65755] = actions(1732);
	v->a[65756] = 1;
	v->a[65757] = anon_sym_DOLLAR_LPAREN;
	v->a[65758] = actions(1734);
	v->a[65759] = 1;
	small_parse_table_3288(v);
}

void	small_parse_table_3288(t_small_parse_table_array *v)
{
	v->a[65760] = anon_sym_BQUOTE;
	v->a[65761] = actions(1736);
	v->a[65762] = 1;
	v->a[65763] = sym_extglob_pattern;
	v->a[65764] = state(1924);
	v->a[65765] = 2;
	v->a[65766] = sym_concatenation;
	v->a[65767] = sym__extglob_blob;
	v->a[65768] = actions(2597);
	v->a[65769] = 3;
	v->a[65770] = sym_raw_string;
	v->a[65771] = sym_number;
	v->a[65772] = sym_word;
	v->a[65773] = state(1851);
	v->a[65774] = 5;
	v->a[65775] = sym_arithmetic_expansion;
	v->a[65776] = sym_string;
	v->a[65777] = sym_simple_expansion;
	v->a[65778] = sym_expansion;
	v->a[65779] = sym_command_substitution;
	small_parse_table_3289(v);
}

void	small_parse_table_3289(t_small_parse_table_array *v)
{
	v->a[65780] = 12;
	v->a[65781] = actions(3);
	v->a[65782] = 1;
	v->a[65783] = sym_comment;
	v->a[65784] = actions(2371);
	v->a[65785] = 1;
	v->a[65786] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[65787] = actions(2373);
	v->a[65788] = 1;
	v->a[65789] = anon_sym_DOLLAR;
	v->a[65790] = actions(2375);
	v->a[65791] = 1;
	v->a[65792] = anon_sym_DQUOTE;
	v->a[65793] = actions(2377);
	v->a[65794] = 1;
	v->a[65795] = anon_sym_DOLLAR_LBRACE;
	v->a[65796] = actions(2379);
	v->a[65797] = 1;
	v->a[65798] = anon_sym_DOLLAR_LPAREN;
	v->a[65799] = actions(2381);
	small_parse_table_3290(v);
}

/* EOF small_parse_table_657.c */
