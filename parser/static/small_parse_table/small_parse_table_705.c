/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_705.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3525(t_small_parse_table_array *v)
{
	v->a[70500] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70501] = actions(1014);
	v->a[70502] = 1;
	v->a[70503] = anon_sym_DOLLAR;
	v->a[70504] = actions(1016);
	v->a[70505] = 1;
	v->a[70506] = anon_sym_DQUOTE;
	v->a[70507] = actions(1018);
	v->a[70508] = 1;
	v->a[70509] = anon_sym_DOLLAR_LBRACE;
	v->a[70510] = actions(1020);
	v->a[70511] = 1;
	v->a[70512] = anon_sym_DOLLAR_LPAREN;
	v->a[70513] = actions(1022);
	v->a[70514] = 1;
	v->a[70515] = anon_sym_BQUOTE;
	v->a[70516] = state(1114);
	v->a[70517] = 2;
	v->a[70518] = sym_concatenation;
	v->a[70519] = aux_sym_for_statement_repeat1;
	small_parse_table_3526(v);
}

void	small_parse_table_3526(t_small_parse_table_array *v)
{
	v->a[70520] = actions(1973);
	v->a[70521] = 3;
	v->a[70522] = sym_raw_string;
	v->a[70523] = sym_number;
	v->a[70524] = sym_word;
	v->a[70525] = state(1424);
	v->a[70526] = 5;
	v->a[70527] = sym_arithmetic_expansion;
	v->a[70528] = sym_string;
	v->a[70529] = sym_simple_expansion;
	v->a[70530] = sym_expansion;
	v->a[70531] = sym_command_substitution;
	v->a[70532] = 10;
	v->a[70533] = actions(3);
	v->a[70534] = 1;
	v->a[70535] = sym_comment;
	v->a[70536] = actions(2349);
	v->a[70537] = 1;
	v->a[70538] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70539] = actions(2351);
	small_parse_table_3527(v);
}

void	small_parse_table_3527(t_small_parse_table_array *v)
{
	v->a[70540] = 1;
	v->a[70541] = anon_sym_DOLLAR;
	v->a[70542] = actions(2353);
	v->a[70543] = 1;
	v->a[70544] = anon_sym_DQUOTE;
	v->a[70545] = actions(2355);
	v->a[70546] = 1;
	v->a[70547] = anon_sym_DOLLAR_LBRACE;
	v->a[70548] = actions(2357);
	v->a[70549] = 1;
	v->a[70550] = anon_sym_DOLLAR_LPAREN;
	v->a[70551] = actions(2359);
	v->a[70552] = 1;
	v->a[70553] = anon_sym_BQUOTE;
	v->a[70554] = state(232);
	v->a[70555] = 2;
	v->a[70556] = sym_concatenation;
	v->a[70557] = aux_sym_for_statement_repeat1;
	v->a[70558] = actions(2787);
	v->a[70559] = 3;
	small_parse_table_3528(v);
}

void	small_parse_table_3528(t_small_parse_table_array *v)
{
	v->a[70560] = sym_raw_string;
	v->a[70561] = sym_number;
	v->a[70562] = sym_word;
	v->a[70563] = state(429);
	v->a[70564] = 5;
	v->a[70565] = sym_arithmetic_expansion;
	v->a[70566] = sym_string;
	v->a[70567] = sym_simple_expansion;
	v->a[70568] = sym_expansion;
	v->a[70569] = sym_command_substitution;
	v->a[70570] = 10;
	v->a[70571] = actions(3);
	v->a[70572] = 1;
	v->a[70573] = sym_comment;
	v->a[70574] = actions(2331);
	v->a[70575] = 1;
	v->a[70576] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70577] = actions(2335);
	v->a[70578] = 1;
	v->a[70579] = anon_sym_DQUOTE;
	small_parse_table_3529(v);
}

void	small_parse_table_3529(t_small_parse_table_array *v)
{
	v->a[70580] = actions(2337);
	v->a[70581] = 1;
	v->a[70582] = anon_sym_DOLLAR_LBRACE;
	v->a[70583] = actions(2339);
	v->a[70584] = 1;
	v->a[70585] = anon_sym_DOLLAR_LPAREN;
	v->a[70586] = actions(2341);
	v->a[70587] = 1;
	v->a[70588] = anon_sym_BQUOTE;
	v->a[70589] = actions(2567);
	v->a[70590] = 1;
	v->a[70591] = anon_sym_DOLLAR;
	v->a[70592] = state(239);
	v->a[70593] = 2;
	v->a[70594] = sym_concatenation;
	v->a[70595] = aux_sym_for_statement_repeat1;
	v->a[70596] = actions(2789);
	v->a[70597] = 3;
	v->a[70598] = sym_raw_string;
	v->a[70599] = sym_number;
	small_parse_table_3530(v);
}

/* EOF small_parse_table_705.c */
