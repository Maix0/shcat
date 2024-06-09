/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_795.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3975(t_small_parse_table_array *v)
{
	v->a[79500] = anon_sym_DOLLAR_LBRACE;
	v->a[79501] = actions(945);
	v->a[79502] = 1;
	v->a[79503] = anon_sym_DOLLAR_LPAREN;
	v->a[79504] = actions(947);
	v->a[79505] = 1;
	v->a[79506] = anon_sym_BQUOTE;
	v->a[79507] = actions(3286);
	v->a[79508] = 1;
	v->a[79509] = anon_sym_DOLLAR;
	v->a[79510] = actions(3288);
	v->a[79511] = 1;
	v->a[79512] = sym__bare_dollar;
	v->a[79513] = actions(3284);
	v->a[79514] = 3;
	v->a[79515] = sym_raw_string;
	v->a[79516] = sym__comment_word;
	v->a[79517] = sym_word;
	v->a[79518] = state(1552);
	v->a[79519] = 6;
	small_parse_table_3976(v);
}

void	small_parse_table_3976(t_small_parse_table_array *v)
{
	v->a[79520] = sym_arithmetic_expansion;
	v->a[79521] = sym_string;
	v->a[79522] = sym_number;
	v->a[79523] = sym_simple_expansion;
	v->a[79524] = sym_expansion;
	v->a[79525] = sym_command_substitution;
	v->a[79526] = 12;
	v->a[79527] = actions(3);
	v->a[79528] = 1;
	v->a[79529] = sym_comment;
	v->a[79530] = actions(527);
	v->a[79531] = 1;
	v->a[79532] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79533] = actions(529);
	v->a[79534] = 1;
	v->a[79535] = anon_sym_DOLLAR;
	v->a[79536] = actions(531);
	v->a[79537] = 1;
	v->a[79538] = anon_sym_DQUOTE;
	v->a[79539] = actions(533);
	small_parse_table_3977(v);
}

void	small_parse_table_3977(t_small_parse_table_array *v)
{
	v->a[79540] = 1;
	v->a[79541] = aux_sym_number_token1;
	v->a[79542] = actions(535);
	v->a[79543] = 1;
	v->a[79544] = aux_sym_number_token2;
	v->a[79545] = actions(537);
	v->a[79546] = 1;
	v->a[79547] = anon_sym_DOLLAR_LBRACE;
	v->a[79548] = actions(539);
	v->a[79549] = 1;
	v->a[79550] = anon_sym_DOLLAR_LPAREN;
	v->a[79551] = actions(541);
	v->a[79552] = 1;
	v->a[79553] = anon_sym_BQUOTE;
	v->a[79554] = actions(3292);
	v->a[79555] = 1;
	v->a[79556] = sym__bare_dollar;
	v->a[79557] = actions(3290);
	v->a[79558] = 3;
	v->a[79559] = sym_raw_string;
	small_parse_table_3978(v);
}

void	small_parse_table_3978(t_small_parse_table_array *v)
{
	v->a[79560] = sym__comment_word;
	v->a[79561] = sym_word;
	v->a[79562] = state(425);
	v->a[79563] = 6;
	v->a[79564] = sym_arithmetic_expansion;
	v->a[79565] = sym_string;
	v->a[79566] = sym_number;
	v->a[79567] = sym_simple_expansion;
	v->a[79568] = sym_expansion;
	v->a[79569] = sym_command_substitution;
	v->a[79570] = 12;
	v->a[79571] = actions(3);
	v->a[79572] = 1;
	v->a[79573] = sym_comment;
	v->a[79574] = actions(761);
	v->a[79575] = 1;
	v->a[79576] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79577] = actions(765);
	v->a[79578] = 1;
	v->a[79579] = anon_sym_DQUOTE;
	small_parse_table_3979(v);
}

void	small_parse_table_3979(t_small_parse_table_array *v)
{
	v->a[79580] = actions(767);
	v->a[79581] = 1;
	v->a[79582] = aux_sym_number_token1;
	v->a[79583] = actions(769);
	v->a[79584] = 1;
	v->a[79585] = aux_sym_number_token2;
	v->a[79586] = actions(771);
	v->a[79587] = 1;
	v->a[79588] = anon_sym_DOLLAR_LBRACE;
	v->a[79589] = actions(773);
	v->a[79590] = 1;
	v->a[79591] = anon_sym_DOLLAR_LPAREN;
	v->a[79592] = actions(775);
	v->a[79593] = 1;
	v->a[79594] = anon_sym_BQUOTE;
	v->a[79595] = actions(3126);
	v->a[79596] = 1;
	v->a[79597] = sym__bare_dollar;
	v->a[79598] = actions(3294);
	v->a[79599] = 1;
	small_parse_table_3980(v);
}

/* EOF small_parse_table_795.c */
