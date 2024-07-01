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
	v->a[79500] = actions(2591);
	v->a[79501] = 1;
	v->a[79502] = anon_sym_DQUOTE;
	v->a[79503] = actions(2593);
	v->a[79504] = 1;
	v->a[79505] = anon_sym_DOLLAR_LBRACE;
	v->a[79506] = actions(2595);
	v->a[79507] = 1;
	v->a[79508] = anon_sym_DOLLAR_LPAREN;
	v->a[79509] = actions(2597);
	v->a[79510] = 1;
	v->a[79511] = anon_sym_BQUOTE;
	v->a[79512] = actions(2741);
	v->a[79513] = 1;
	v->a[79514] = anon_sym_DOLLAR;
	v->a[79515] = state(409);
	v->a[79516] = 2;
	v->a[79517] = sym_concatenation;
	v->a[79518] = aux_sym_for_statement_repeat1;
	v->a[79519] = actions(3084);
	small_parse_table_3976(v);
}

void	small_parse_table_3976(t_small_parse_table_array *v)
{
	v->a[79520] = 3;
	v->a[79521] = sym_raw_string;
	v->a[79522] = sym_number;
	v->a[79523] = sym_word;
	v->a[79524] = state(778);
	v->a[79525] = 5;
	v->a[79526] = sym_arithmetic_expansion;
	v->a[79527] = sym_string;
	v->a[79528] = sym_simple_expansion;
	v->a[79529] = sym_expansion;
	v->a[79530] = sym_command_substitution;
	v->a[79531] = 10;
	v->a[79532] = actions(3);
	v->a[79533] = 1;
	v->a[79534] = sym_comment;
	v->a[79535] = actions(699);
	v->a[79536] = 1;
	v->a[79537] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79538] = actions(701);
	v->a[79539] = 1;
	small_parse_table_3977(v);
}

void	small_parse_table_3977(t_small_parse_table_array *v)
{
	v->a[79540] = anon_sym_DOLLAR;
	v->a[79541] = actions(703);
	v->a[79542] = 1;
	v->a[79543] = anon_sym_DQUOTE;
	v->a[79544] = actions(705);
	v->a[79545] = 1;
	v->a[79546] = anon_sym_DOLLAR_LBRACE;
	v->a[79547] = actions(707);
	v->a[79548] = 1;
	v->a[79549] = anon_sym_DOLLAR_LPAREN;
	v->a[79550] = actions(709);
	v->a[79551] = 1;
	v->a[79552] = anon_sym_BQUOTE;
	v->a[79553] = state(217);
	v->a[79554] = 2;
	v->a[79555] = sym_concatenation;
	v->a[79556] = aux_sym_for_statement_repeat1;
	v->a[79557] = actions(697);
	v->a[79558] = 3;
	v->a[79559] = sym_raw_string;
	small_parse_table_3978(v);
}

void	small_parse_table_3978(t_small_parse_table_array *v)
{
	v->a[79560] = sym_number;
	v->a[79561] = sym_word;
	v->a[79562] = state(520);
	v->a[79563] = 5;
	v->a[79564] = sym_arithmetic_expansion;
	v->a[79565] = sym_string;
	v->a[79566] = sym_simple_expansion;
	v->a[79567] = sym_expansion;
	v->a[79568] = sym_command_substitution;
	v->a[79569] = 10;
	v->a[79570] = actions(3);
	v->a[79571] = 1;
	v->a[79572] = sym_comment;
	v->a[79573] = actions(699);
	v->a[79574] = 1;
	v->a[79575] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79576] = actions(701);
	v->a[79577] = 1;
	v->a[79578] = anon_sym_DOLLAR;
	v->a[79579] = actions(703);
	small_parse_table_3979(v);
}

void	small_parse_table_3979(t_small_parse_table_array *v)
{
	v->a[79580] = 1;
	v->a[79581] = anon_sym_DQUOTE;
	v->a[79582] = actions(705);
	v->a[79583] = 1;
	v->a[79584] = anon_sym_DOLLAR_LBRACE;
	v->a[79585] = actions(707);
	v->a[79586] = 1;
	v->a[79587] = anon_sym_DOLLAR_LPAREN;
	v->a[79588] = actions(709);
	v->a[79589] = 1;
	v->a[79590] = anon_sym_BQUOTE;
	v->a[79591] = state(312);
	v->a[79592] = 2;
	v->a[79593] = sym_concatenation;
	v->a[79594] = aux_sym_for_statement_repeat1;
	v->a[79595] = actions(1001);
	v->a[79596] = 3;
	v->a[79597] = sym_raw_string;
	v->a[79598] = sym_number;
	v->a[79599] = sym_word;
	small_parse_table_3980(v);
}

/* EOF small_parse_table_795.c */
