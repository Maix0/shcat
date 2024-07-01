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
	v->a[86500] = 4;
	v->a[86501] = actions(3);
	v->a[86502] = 1;
	v->a[86503] = sym_comment;
	v->a[86504] = actions(1949);
	v->a[86505] = 1;
	v->a[86506] = sym_variable_name;
	v->a[86507] = actions(1947);
	v->a[86508] = 2;
	v->a[86509] = aux_sym__simple_variable_name_token1;
	v->a[86510] = aux_sym__multiline_variable_name_token1;
	v->a[86511] = actions(1945);
	v->a[86512] = 9;
	v->a[86513] = anon_sym_BANG;
	v->a[86514] = anon_sym_DASH;
	v->a[86515] = anon_sym_STAR;
	v->a[86516] = anon_sym_QMARK;
	v->a[86517] = anon_sym_DOLLAR;
	v->a[86518] = anon_sym_POUND;
	v->a[86519] = anon_sym_AT;
	small_parse_table_4326(v);
}

void	small_parse_table_4326(t_small_parse_table_array *v)
{
	v->a[86520] = anon_sym_0;
	v->a[86521] = anon_sym__;
	v->a[86522] = 4;
	v->a[86523] = actions(3);
	v->a[86524] = 1;
	v->a[86525] = sym_comment;
	v->a[86526] = actions(417);
	v->a[86527] = 1;
	v->a[86528] = sym_variable_name;
	v->a[86529] = actions(415);
	v->a[86530] = 2;
	v->a[86531] = aux_sym__simple_variable_name_token1;
	v->a[86532] = aux_sym__multiline_variable_name_token1;
	v->a[86533] = actions(413);
	v->a[86534] = 9;
	v->a[86535] = anon_sym_BANG;
	v->a[86536] = anon_sym_DASH;
	v->a[86537] = anon_sym_STAR;
	v->a[86538] = anon_sym_QMARK;
	v->a[86539] = anon_sym_DOLLAR;
	small_parse_table_4327(v);
}

void	small_parse_table_4327(t_small_parse_table_array *v)
{
	v->a[86540] = anon_sym_POUND;
	v->a[86541] = anon_sym_AT;
	v->a[86542] = anon_sym_0;
	v->a[86543] = anon_sym__;
	v->a[86544] = 10;
	v->a[86545] = actions(3);
	v->a[86546] = 1;
	v->a[86547] = sym_comment;
	v->a[86548] = actions(3414);
	v->a[86549] = 1;
	v->a[86550] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[86551] = actions(3420);
	v->a[86552] = 1;
	v->a[86553] = sym_string_content;
	v->a[86554] = actions(3422);
	v->a[86555] = 1;
	v->a[86556] = anon_sym_DOLLAR_LBRACE;
	v->a[86557] = actions(3424);
	v->a[86558] = 1;
	v->a[86559] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4328(v);
}

void	small_parse_table_4328(t_small_parse_table_array *v)
{
	v->a[86560] = actions(3426);
	v->a[86561] = 1;
	v->a[86562] = anon_sym_BQUOTE;
	v->a[86563] = actions(3480);
	v->a[86564] = 1;
	v->a[86565] = anon_sym_DOLLAR;
	v->a[86566] = actions(3482);
	v->a[86567] = 1;
	v->a[86568] = anon_sym_DQUOTE;
	v->a[86569] = state(1906);
	v->a[86570] = 1;
	v->a[86571] = aux_sym_string_repeat1;
	v->a[86572] = state(1959);
	v->a[86573] = 4;
	v->a[86574] = sym_arithmetic_expansion;
	v->a[86575] = sym_simple_expansion;
	v->a[86576] = sym_expansion;
	v->a[86577] = sym_command_substitution;
	v->a[86578] = 10;
	v->a[86579] = actions(3);
	small_parse_table_4329(v);
}

void	small_parse_table_4329(t_small_parse_table_array *v)
{
	v->a[86580] = 1;
	v->a[86581] = sym_comment;
	v->a[86582] = actions(3414);
	v->a[86583] = 1;
	v->a[86584] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[86585] = actions(3420);
	v->a[86586] = 1;
	v->a[86587] = sym_string_content;
	v->a[86588] = actions(3422);
	v->a[86589] = 1;
	v->a[86590] = anon_sym_DOLLAR_LBRACE;
	v->a[86591] = actions(3424);
	v->a[86592] = 1;
	v->a[86593] = anon_sym_DOLLAR_LPAREN;
	v->a[86594] = actions(3426);
	v->a[86595] = 1;
	v->a[86596] = anon_sym_BQUOTE;
	v->a[86597] = actions(3484);
	v->a[86598] = 1;
	v->a[86599] = anon_sym_DOLLAR;
	small_parse_table_4330(v);
}

/* EOF small_parse_table_865.c */
