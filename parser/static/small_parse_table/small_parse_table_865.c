/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_865.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4325(t_small_parse_table_array *v)
{
	v->a[86500] = sym_comment;
	v->a[86501] = actions(3590);
	v->a[86502] = 1;
	v->a[86503] = aux_sym__simple_variable_name_token1;
	v->a[86504] = actions(3594);
	v->a[86505] = 1;
	v->a[86506] = sym_variable_name;
	v->a[86507] = actions(3638);
	v->a[86508] = 1;
	v->a[86509] = anon_sym_RBRACE;
	v->a[86510] = state(2245);
	v->a[86511] = 1;
	v->a[86512] = sym__expansion_body;
	v->a[86513] = actions(3592);
	v->a[86514] = 2;
	v->a[86515] = anon_sym_0;
	v->a[86516] = anon_sym__;
	v->a[86517] = actions(3588);
	v->a[86518] = 7;
	v->a[86519] = anon_sym_BANG;
	small_parse_table_4326(v);
}

void	small_parse_table_4326(t_small_parse_table_array *v)
{
	v->a[86520] = anon_sym_DASH;
	v->a[86521] = anon_sym_STAR;
	v->a[86522] = anon_sym_QMARK;
	v->a[86523] = anon_sym_DOLLAR;
	v->a[86524] = anon_sym_POUND;
	v->a[86525] = anon_sym_AT;
	v->a[86526] = 4;
	v->a[86527] = actions(3);
	v->a[86528] = 1;
	v->a[86529] = sym_comment;
	v->a[86530] = actions(3632);
	v->a[86531] = 1;
	v->a[86532] = anon_sym_esac;
	v->a[86533] = actions(3634);
	v->a[86534] = 1;
	v->a[86535] = sym_extglob_pattern;
	v->a[86536] = actions(3630);
	v->a[86537] = 11;
	v->a[86538] = anon_sym_LPAREN;
	v->a[86539] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_4327(v);
}

void	small_parse_table_4327(t_small_parse_table_array *v)
{
	v->a[86540] = anon_sym_DOLLAR;
	v->a[86541] = anon_sym_DQUOTE;
	v->a[86542] = sym_raw_string;
	v->a[86543] = aux_sym_number_token1;
	v->a[86544] = aux_sym_number_token2;
	v->a[86545] = anon_sym_DOLLAR_LBRACE;
	v->a[86546] = anon_sym_DOLLAR_LPAREN;
	v->a[86547] = anon_sym_BQUOTE;
	v->a[86548] = sym_word;
	v->a[86549] = 7;
	v->a[86550] = actions(3);
	v->a[86551] = 1;
	v->a[86552] = sym_comment;
	v->a[86553] = actions(3590);
	v->a[86554] = 1;
	v->a[86555] = aux_sym__simple_variable_name_token1;
	v->a[86556] = actions(3594);
	v->a[86557] = 1;
	v->a[86558] = sym_variable_name;
	v->a[86559] = actions(3640);
	small_parse_table_4328(v);
}

void	small_parse_table_4328(t_small_parse_table_array *v)
{
	v->a[86560] = 1;
	v->a[86561] = anon_sym_RBRACE;
	v->a[86562] = state(2200);
	v->a[86563] = 1;
	v->a[86564] = sym__expansion_body;
	v->a[86565] = actions(3592);
	v->a[86566] = 2;
	v->a[86567] = anon_sym_0;
	v->a[86568] = anon_sym__;
	v->a[86569] = actions(3588);
	v->a[86570] = 7;
	v->a[86571] = anon_sym_BANG;
	v->a[86572] = anon_sym_DASH;
	v->a[86573] = anon_sym_STAR;
	v->a[86574] = anon_sym_QMARK;
	v->a[86575] = anon_sym_DOLLAR;
	v->a[86576] = anon_sym_POUND;
	v->a[86577] = anon_sym_AT;
	v->a[86578] = 5;
	v->a[86579] = actions(3);
	small_parse_table_4329(v);
}

void	small_parse_table_4329(t_small_parse_table_array *v)
{
	v->a[86580] = 1;
	v->a[86581] = sym_comment;
	v->a[86582] = actions(3444);
	v->a[86583] = 1;
	v->a[86584] = sym_string_content;
	v->a[86585] = actions(3448);
	v->a[86586] = 1;
	v->a[86587] = sym_variable_name;
	v->a[86588] = actions(3446);
	v->a[86589] = 2;
	v->a[86590] = aux_sym__simple_variable_name_token1;
	v->a[86591] = aux_sym__multiline_variable_name_token1;
	v->a[86592] = actions(3440);
	v->a[86593] = 9;
	v->a[86594] = anon_sym_BANG;
	v->a[86595] = anon_sym_DASH;
	v->a[86596] = anon_sym_STAR;
	v->a[86597] = anon_sym_QMARK;
	v->a[86598] = anon_sym_DOLLAR;
	v->a[86599] = anon_sym_POUND;
	small_parse_table_4330(v);
}

/* EOF small_parse_table_865.c */
