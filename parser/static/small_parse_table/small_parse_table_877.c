/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_877.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4385(t_small_parse_table_array *v)
{
	v->a[87700] = actions(3);
	v->a[87701] = 1;
	v->a[87702] = sym_comment;
	v->a[87703] = actions(1672);
	v->a[87704] = 1;
	v->a[87705] = sym_variable_name;
	v->a[87706] = actions(1670);
	v->a[87707] = 2;
	v->a[87708] = aux_sym__simple_variable_name_token1;
	v->a[87709] = aux_sym__multiline_variable_name_token1;
	v->a[87710] = actions(1668);
	v->a[87711] = 9;
	v->a[87712] = anon_sym_BANG;
	v->a[87713] = anon_sym_DASH;
	v->a[87714] = anon_sym_STAR;
	v->a[87715] = anon_sym_QMARK;
	v->a[87716] = anon_sym_DOLLAR;
	v->a[87717] = anon_sym_POUND;
	v->a[87718] = anon_sym_AT;
	v->a[87719] = anon_sym_0;
	small_parse_table_4386(v);
}

void	small_parse_table_4386(t_small_parse_table_array *v)
{
	v->a[87720] = anon_sym__;
	v->a[87721] = 10;
	v->a[87722] = actions(3);
	v->a[87723] = 1;
	v->a[87724] = sym_comment;
	v->a[87725] = actions(3712);
	v->a[87726] = 1;
	v->a[87727] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87728] = actions(3716);
	v->a[87729] = 1;
	v->a[87730] = sym_string_content;
	v->a[87731] = actions(3718);
	v->a[87732] = 1;
	v->a[87733] = anon_sym_DOLLAR_LBRACE;
	v->a[87734] = actions(3720);
	v->a[87735] = 1;
	v->a[87736] = anon_sym_DOLLAR_LPAREN;
	v->a[87737] = actions(3722);
	v->a[87738] = 1;
	v->a[87739] = anon_sym_BQUOTE;
	small_parse_table_4387(v);
}

void	small_parse_table_4387(t_small_parse_table_array *v)
{
	v->a[87740] = actions(3740);
	v->a[87741] = 1;
	v->a[87742] = anon_sym_DOLLAR;
	v->a[87743] = actions(3742);
	v->a[87744] = 1;
	v->a[87745] = anon_sym_DQUOTE;
	v->a[87746] = state(1729);
	v->a[87747] = 1;
	v->a[87748] = aux_sym_string_repeat1;
	v->a[87749] = state(1869);
	v->a[87750] = 4;
	v->a[87751] = sym_arithmetic_expansion;
	v->a[87752] = sym_simple_expansion;
	v->a[87753] = sym_expansion;
	v->a[87754] = sym_command_substitution;
	v->a[87755] = 3;
	v->a[87756] = actions(3);
	v->a[87757] = 1;
	v->a[87758] = sym_comment;
	v->a[87759] = actions(3700);
	small_parse_table_4388(v);
}

void	small_parse_table_4388(t_small_parse_table_array *v)
{
	v->a[87760] = 1;
	v->a[87761] = sym_extglob_pattern;
	v->a[87762] = actions(3696);
	v->a[87763] = 11;
	v->a[87764] = anon_sym_LPAREN;
	v->a[87765] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87766] = anon_sym_DOLLAR;
	v->a[87767] = anon_sym_DQUOTE;
	v->a[87768] = sym_raw_string;
	v->a[87769] = aux_sym_number_token1;
	v->a[87770] = aux_sym_number_token2;
	v->a[87771] = anon_sym_DOLLAR_LBRACE;
	v->a[87772] = anon_sym_DOLLAR_LPAREN;
	v->a[87773] = anon_sym_BQUOTE;
	v->a[87774] = sym_word;
	v->a[87775] = 3;
	v->a[87776] = actions(3);
	v->a[87777] = 1;
	v->a[87778] = sym_comment;
	v->a[87779] = actions(3620);
	small_parse_table_4389(v);
}

void	small_parse_table_4389(t_small_parse_table_array *v)
{
	v->a[87780] = 1;
	v->a[87781] = sym_extglob_pattern;
	v->a[87782] = actions(3616);
	v->a[87783] = 11;
	v->a[87784] = anon_sym_LPAREN;
	v->a[87785] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87786] = anon_sym_DOLLAR;
	v->a[87787] = anon_sym_DQUOTE;
	v->a[87788] = sym_raw_string;
	v->a[87789] = aux_sym_number_token1;
	v->a[87790] = aux_sym_number_token2;
	v->a[87791] = anon_sym_DOLLAR_LBRACE;
	v->a[87792] = anon_sym_DOLLAR_LPAREN;
	v->a[87793] = anon_sym_BQUOTE;
	v->a[87794] = sym_word;
	v->a[87795] = 10;
	v->a[87796] = actions(3);
	v->a[87797] = 1;
	v->a[87798] = sym_comment;
	v->a[87799] = actions(3506);
	small_parse_table_4390(v);
}

/* EOF small_parse_table_877.c */
