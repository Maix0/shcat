/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_415.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2075(t_small_parse_table_array *v)
{
	v->a[41500] = anon_sym_DOLLAR_LBRACE;
	v->a[41501] = anon_sym_DOLLAR_LPAREN;
	v->a[41502] = anon_sym_BQUOTE;
	v->a[41503] = sym_word;
	v->a[41504] = 4;
	v->a[41505] = actions(3);
	v->a[41506] = 1;
	v->a[41507] = sym_comment;
	v->a[41508] = actions(1424);
	v->a[41509] = 2;
	v->a[41510] = anon_sym_esac;
	v->a[41511] = anon_sym_SEMI_SEMI;
	v->a[41512] = actions(1426);
	v->a[41513] = 2;
	v->a[41514] = sym_file_descriptor;
	v->a[41515] = sym_variable_name;
	v->a[41516] = actions(1422);
	v->a[41517] = 24;
	v->a[41518] = anon_sym_for;
	v->a[41519] = anon_sym_while;
	small_parse_table_2076(v);
}

void	small_parse_table_2076(t_small_parse_table_array *v)
{
	v->a[41520] = anon_sym_until;
	v->a[41521] = anon_sym_if;
	v->a[41522] = anon_sym_case;
	v->a[41523] = anon_sym_LPAREN;
	v->a[41524] = anon_sym_LBRACE;
	v->a[41525] = anon_sym_BANG;
	v->a[41526] = anon_sym_LT;
	v->a[41527] = anon_sym_GT;
	v->a[41528] = anon_sym_GT_GT;
	v->a[41529] = anon_sym_LT_AMP;
	v->a[41530] = anon_sym_GT_AMP;
	v->a[41531] = anon_sym_GT_PIPE;
	v->a[41532] = anon_sym_LT_GT;
	v->a[41533] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41534] = anon_sym_DOLLAR;
	v->a[41535] = anon_sym_DQUOTE;
	v->a[41536] = sym_raw_string;
	v->a[41537] = sym_number;
	v->a[41538] = anon_sym_DOLLAR_LBRACE;
	v->a[41539] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2077(v);
}

void	small_parse_table_2077(t_small_parse_table_array *v)
{
	v->a[41540] = anon_sym_BQUOTE;
	v->a[41541] = sym_word;
	v->a[41542] = 16;
	v->a[41543] = actions(3);
	v->a[41544] = 1;
	v->a[41545] = sym_comment;
	v->a[41546] = actions(329);
	v->a[41547] = 1;
	v->a[41548] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41549] = actions(331);
	v->a[41550] = 1;
	v->a[41551] = anon_sym_DOLLAR;
	v->a[41552] = actions(333);
	v->a[41553] = 1;
	v->a[41554] = anon_sym_DQUOTE;
	v->a[41555] = actions(337);
	v->a[41556] = 1;
	v->a[41557] = anon_sym_DOLLAR_LBRACE;
	v->a[41558] = actions(339);
	v->a[41559] = 1;
	small_parse_table_2078(v);
}

void	small_parse_table_2078(t_small_parse_table_array *v)
{
	v->a[41560] = anon_sym_DOLLAR_LPAREN;
	v->a[41561] = actions(341);
	v->a[41562] = 1;
	v->a[41563] = anon_sym_BQUOTE;
	v->a[41564] = actions(359);
	v->a[41565] = 1;
	v->a[41566] = sym_variable_name;
	v->a[41567] = actions(1164);
	v->a[41568] = 1;
	v->a[41569] = sym_file_descriptor;
	v->a[41570] = state(358);
	v->a[41571] = 1;
	v->a[41572] = sym_command_name;
	v->a[41573] = state(888);
	v->a[41574] = 1;
	v->a[41575] = sym_concatenation;
	v->a[41576] = state(1218);
	v->a[41577] = 1;
	v->a[41578] = sym_file_redirect;
	v->a[41579] = state(1055);
	small_parse_table_2079(v);
}

void	small_parse_table_2079(t_small_parse_table_array *v)
{
	v->a[41580] = 2;
	v->a[41581] = sym_variable_assignment;
	v->a[41582] = aux_sym_command_repeat1;
	v->a[41583] = actions(335);
	v->a[41584] = 3;
	v->a[41585] = sym_raw_string;
	v->a[41586] = sym_number;
	v->a[41587] = sym_word;
	v->a[41588] = state(721);
	v->a[41589] = 5;
	v->a[41590] = sym_arithmetic_expansion;
	v->a[41591] = sym_string;
	v->a[41592] = sym_simple_expansion;
	v->a[41593] = sym_expansion;
	v->a[41594] = sym_command_substitution;
	v->a[41595] = actions(1162);
	v->a[41596] = 7;
	v->a[41597] = anon_sym_LT;
	v->a[41598] = anon_sym_GT;
	v->a[41599] = anon_sym_GT_GT;
	small_parse_table_2080(v);
}

/* EOF small_parse_table_415.c */
