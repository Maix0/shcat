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
	v->a[65700] = actions(2322);
	v->a[65701] = 5;
	v->a[65702] = aux_sym_concatenation_token1;
	v->a[65703] = sym_raw_string;
	v->a[65704] = sym_number;
	v->a[65705] = sym__comment_word;
	v->a[65706] = sym_word;
	v->a[65707] = state(909);
	v->a[65708] = 5;
	v->a[65709] = sym_arithmetic_expansion;
	v->a[65710] = sym_string;
	v->a[65711] = sym_simple_expansion;
	v->a[65712] = sym_expansion;
	v->a[65713] = sym_command_substitution;
	v->a[65714] = 10;
	v->a[65715] = actions(3);
	v->a[65716] = 1;
	v->a[65717] = sym_comment;
	v->a[65718] = actions(2340);
	v->a[65719] = 1;
	small_parse_table_3286(v);
}

void	small_parse_table_3286(t_small_parse_table_array *v)
{
	v->a[65720] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[65721] = actions(2342);
	v->a[65722] = 1;
	v->a[65723] = anon_sym_DOLLAR;
	v->a[65724] = actions(2344);
	v->a[65725] = 1;
	v->a[65726] = anon_sym_DQUOTE;
	v->a[65727] = actions(2346);
	v->a[65728] = 1;
	v->a[65729] = anon_sym_DOLLAR_LBRACE;
	v->a[65730] = actions(2348);
	v->a[65731] = 1;
	v->a[65732] = anon_sym_DOLLAR_LPAREN;
	v->a[65733] = actions(2350);
	v->a[65734] = 1;
	v->a[65735] = anon_sym_BQUOTE;
	v->a[65736] = actions(2352);
	v->a[65737] = 1;
	v->a[65738] = sym__bare_dollar;
	v->a[65739] = actions(2338);
	small_parse_table_3287(v);
}

void	small_parse_table_3287(t_small_parse_table_array *v)
{
	v->a[65740] = 5;
	v->a[65741] = aux_sym_concatenation_token1;
	v->a[65742] = sym_raw_string;
	v->a[65743] = sym_number;
	v->a[65744] = sym__comment_word;
	v->a[65745] = sym_word;
	v->a[65746] = state(853);
	v->a[65747] = 5;
	v->a[65748] = sym_arithmetic_expansion;
	v->a[65749] = sym_string;
	v->a[65750] = sym_simple_expansion;
	v->a[65751] = sym_expansion;
	v->a[65752] = sym_command_substitution;
	v->a[65753] = 5;
	v->a[65754] = actions(3);
	v->a[65755] = 1;
	v->a[65756] = sym_comment;
	v->a[65757] = actions(2358);
	v->a[65758] = 1;
	v->a[65759] = sym_variable_name;
	small_parse_table_3288(v);
}

void	small_parse_table_3288(t_small_parse_table_array *v)
{
	v->a[65760] = actions(2356);
	v->a[65761] = 2;
	v->a[65762] = aux_sym__simple_variable_name_token1;
	v->a[65763] = aux_sym__multiline_variable_name_token1;
	v->a[65764] = actions(361);
	v->a[65765] = 5;
	v->a[65766] = anon_sym_in;
	v->a[65767] = anon_sym_SEMI_SEMI;
	v->a[65768] = aux_sym_heredoc_redirect_token1;
	v->a[65769] = anon_sym_AMP;
	v->a[65770] = anon_sym_SEMI;
	v->a[65771] = actions(2354);
	v->a[65772] = 9;
	v->a[65773] = anon_sym_BANG;
	v->a[65774] = anon_sym_DASH;
	v->a[65775] = anon_sym_STAR;
	v->a[65776] = anon_sym_QMARK;
	v->a[65777] = anon_sym_DOLLAR;
	v->a[65778] = anon_sym_POUND;
	v->a[65779] = anon_sym_AT;
	small_parse_table_3289(v);
}

void	small_parse_table_3289(t_small_parse_table_array *v)
{
	v->a[65780] = anon_sym_0;
	v->a[65781] = anon_sym__;
	v->a[65782] = 10;
	v->a[65783] = actions(3);
	v->a[65784] = 1;
	v->a[65785] = sym_comment;
	v->a[65786] = actions(2324);
	v->a[65787] = 1;
	v->a[65788] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[65789] = actions(2328);
	v->a[65790] = 1;
	v->a[65791] = anon_sym_DQUOTE;
	v->a[65792] = actions(2330);
	v->a[65793] = 1;
	v->a[65794] = anon_sym_DOLLAR_LBRACE;
	v->a[65795] = actions(2332);
	v->a[65796] = 1;
	v->a[65797] = anon_sym_DOLLAR_LPAREN;
	v->a[65798] = actions(2334);
	v->a[65799] = 1;
	small_parse_table_3290(v);
}

/* EOF small_parse_table_657.c */
