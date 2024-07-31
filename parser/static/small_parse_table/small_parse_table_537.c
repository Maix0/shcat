/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_537.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2685(t_small_parse_table_array *v)
{
	v->a[53700] = actions(1343);
	v->a[53701] = 1;
	v->a[53702] = anon_sym_DOLLAR;
	v->a[53703] = actions(1345);
	v->a[53704] = 1;
	v->a[53705] = anon_sym_DQUOTE;
	v->a[53706] = actions(1347);
	v->a[53707] = 1;
	v->a[53708] = anon_sym_DOLLAR_LBRACE;
	v->a[53709] = actions(1349);
	v->a[53710] = 1;
	v->a[53711] = anon_sym_DOLLAR_LPAREN;
	v->a[53712] = actions(1351);
	v->a[53713] = 1;
	v->a[53714] = anon_sym_BQUOTE;
	v->a[53715] = actions(1353);
	v->a[53716] = 1;
	v->a[53717] = sym_extglob_pattern;
	v->a[53718] = state(1615);
	v->a[53719] = 2;
	small_parse_table_2686(v);
}

void	small_parse_table_2686(t_small_parse_table_array *v)
{
	v->a[53720] = sym_concatenation;
	v->a[53721] = sym__extglob_blob;
	v->a[53722] = actions(2011);
	v->a[53723] = 3;
	v->a[53724] = sym_raw_string;
	v->a[53725] = sym_number;
	v->a[53726] = sym_word;
	v->a[53727] = state(1546);
	v->a[53728] = 5;
	v->a[53729] = sym_arithmetic_expansion;
	v->a[53730] = sym_string;
	v->a[53731] = sym_simple_expansion;
	v->a[53732] = sym_expansion;
	v->a[53733] = sym_command_substitution;
	v->a[53734] = 10;
	v->a[53735] = actions(3);
	v->a[53736] = 1;
	v->a[53737] = sym_comment;
	v->a[53738] = actions(2015);
	v->a[53739] = 1;
	small_parse_table_2687(v);
}

void	small_parse_table_2687(t_small_parse_table_array *v)
{
	v->a[53740] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[53741] = actions(2017);
	v->a[53742] = 1;
	v->a[53743] = anon_sym_DOLLAR;
	v->a[53744] = actions(2019);
	v->a[53745] = 1;
	v->a[53746] = anon_sym_DQUOTE;
	v->a[53747] = actions(2021);
	v->a[53748] = 1;
	v->a[53749] = anon_sym_DOLLAR_LBRACE;
	v->a[53750] = actions(2023);
	v->a[53751] = 1;
	v->a[53752] = anon_sym_DOLLAR_LPAREN;
	v->a[53753] = actions(2025);
	v->a[53754] = 1;
	v->a[53755] = anon_sym_BQUOTE;
	v->a[53756] = actions(2027);
	v->a[53757] = 1;
	v->a[53758] = sym__bare_dollar;
	v->a[53759] = actions(2013);
	small_parse_table_2688(v);
}

void	small_parse_table_2688(t_small_parse_table_array *v)
{
	v->a[53760] = 5;
	v->a[53761] = aux_sym_concatenation_token1;
	v->a[53762] = sym_raw_string;
	v->a[53763] = sym_number;
	v->a[53764] = sym__comment_word;
	v->a[53765] = sym_word;
	v->a[53766] = state(395);
	v->a[53767] = 5;
	v->a[53768] = sym_arithmetic_expansion;
	v->a[53769] = sym_string;
	v->a[53770] = sym_simple_expansion;
	v->a[53771] = sym_expansion;
	v->a[53772] = sym_command_substitution;
	v->a[53773] = 10;
	v->a[53774] = actions(3);
	v->a[53775] = 1;
	v->a[53776] = sym_comment;
	v->a[53777] = actions(2031);
	v->a[53778] = 1;
	v->a[53779] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2689(v);
}

void	small_parse_table_2689(t_small_parse_table_array *v)
{
	v->a[53780] = actions(2033);
	v->a[53781] = 1;
	v->a[53782] = anon_sym_DOLLAR;
	v->a[53783] = actions(2035);
	v->a[53784] = 1;
	v->a[53785] = anon_sym_DQUOTE;
	v->a[53786] = actions(2037);
	v->a[53787] = 1;
	v->a[53788] = anon_sym_DOLLAR_LBRACE;
	v->a[53789] = actions(2039);
	v->a[53790] = 1;
	v->a[53791] = anon_sym_DOLLAR_LPAREN;
	v->a[53792] = actions(2041);
	v->a[53793] = 1;
	v->a[53794] = anon_sym_BQUOTE;
	v->a[53795] = actions(2043);
	v->a[53796] = 1;
	v->a[53797] = sym__bare_dollar;
	v->a[53798] = actions(2029);
	v->a[53799] = 5;
	small_parse_table_2690(v);
}

/* EOF small_parse_table_537.c */
