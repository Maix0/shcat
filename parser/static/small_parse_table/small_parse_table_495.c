/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_495.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2475(t_small_parse_table_array *v)
{
	v->a[49500] = actions(2305);
	v->a[49501] = 1;
	v->a[49502] = anon_sym_BQUOTE;
	v->a[49503] = actions(2392);
	v->a[49504] = 1;
	v->a[49505] = anon_sym_DOLLAR;
	v->a[49506] = actions(2394);
	v->a[49507] = 1;
	v->a[49508] = anon_sym_DQUOTE;
	v->a[49509] = state(1176);
	v->a[49510] = 1;
	v->a[49511] = aux_sym_string_repeat1;
	v->a[49512] = state(1394);
	v->a[49513] = 4;
	v->a[49514] = sym_arithmetic_expansion;
	v->a[49515] = sym_simple_expansion;
	v->a[49516] = sym_expansion;
	v->a[49517] = sym_command_substitution;
	v->a[49518] = 4;
	v->a[49519] = actions(3);
	small_parse_table_2476(v);
}

void	small_parse_table_2476(t_small_parse_table_array *v)
{
	v->a[49520] = 1;
	v->a[49521] = sym_comment;
	v->a[49522] = actions(2398);
	v->a[49523] = 1;
	v->a[49524] = anon_sym_esac;
	v->a[49525] = actions(2400);
	v->a[49526] = 1;
	v->a[49527] = sym_extglob_pattern;
	v->a[49528] = actions(2396);
	v->a[49529] = 10;
	v->a[49530] = anon_sym_LPAREN;
	v->a[49531] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49532] = anon_sym_DOLLAR;
	v->a[49533] = anon_sym_DQUOTE;
	v->a[49534] = sym_raw_string;
	v->a[49535] = sym_number;
	v->a[49536] = anon_sym_DOLLAR_LBRACE;
	v->a[49537] = anon_sym_DOLLAR_LPAREN;
	v->a[49538] = anon_sym_BQUOTE;
	v->a[49539] = sym_word;
	small_parse_table_2477(v);
}

void	small_parse_table_2477(t_small_parse_table_array *v)
{
	v->a[49540] = 8;
	v->a[49541] = actions(3);
	v->a[49542] = 1;
	v->a[49543] = sym_comment;
	v->a[49544] = actions(2277);
	v->a[49545] = 1;
	v->a[49546] = anon_sym_POUND;
	v->a[49547] = actions(2279);
	v->a[49548] = 1;
	v->a[49549] = aux_sym__simple_variable_name_token1;
	v->a[49550] = actions(2281);
	v->a[49551] = 1;
	v->a[49552] = anon_sym_0;
	v->a[49553] = actions(2283);
	v->a[49554] = 1;
	v->a[49555] = sym_variable_name;
	v->a[49556] = actions(2402);
	v->a[49557] = 1;
	v->a[49558] = anon_sym_RBRACE;
	v->a[49559] = state(1695);
	small_parse_table_2478(v);
}

void	small_parse_table_2478(t_small_parse_table_array *v)
{
	v->a[49560] = 1;
	v->a[49561] = sym__expansion_body;
	v->a[49562] = actions(2275);
	v->a[49563] = 6;
	v->a[49564] = anon_sym_BANG;
	v->a[49565] = anon_sym_DASH;
	v->a[49566] = anon_sym_STAR;
	v->a[49567] = anon_sym_QMARK;
	v->a[49568] = anon_sym_DOLLAR;
	v->a[49569] = anon_sym_AT;
	v->a[49570] = 10;
	v->a[49571] = actions(3);
	v->a[49572] = 1;
	v->a[49573] = sym_comment;
	v->a[49574] = actions(2293);
	v->a[49575] = 1;
	v->a[49576] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49577] = actions(2299);
	v->a[49578] = 1;
	v->a[49579] = sym_string_content;
	small_parse_table_2479(v);
}

void	small_parse_table_2479(t_small_parse_table_array *v)
{
	v->a[49580] = actions(2301);
	v->a[49581] = 1;
	v->a[49582] = anon_sym_DOLLAR_LBRACE;
	v->a[49583] = actions(2303);
	v->a[49584] = 1;
	v->a[49585] = anon_sym_DOLLAR_LPAREN;
	v->a[49586] = actions(2305);
	v->a[49587] = 1;
	v->a[49588] = anon_sym_BQUOTE;
	v->a[49589] = actions(2404);
	v->a[49590] = 1;
	v->a[49591] = anon_sym_DOLLAR;
	v->a[49592] = actions(2406);
	v->a[49593] = 1;
	v->a[49594] = anon_sym_DQUOTE;
	v->a[49595] = state(1114);
	v->a[49596] = 1;
	v->a[49597] = aux_sym_string_repeat1;
	v->a[49598] = state(1394);
	v->a[49599] = 4;
	small_parse_table_2480(v);
}

/* EOF small_parse_table_495.c */
