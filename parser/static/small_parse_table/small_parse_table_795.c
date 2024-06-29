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
	v->a[79500] = actions(467);
	v->a[79501] = 1;
	v->a[79502] = anon_sym_DOLLAR_LBRACE;
	v->a[79503] = actions(469);
	v->a[79504] = 1;
	v->a[79505] = anon_sym_DOLLAR_LPAREN;
	v->a[79506] = actions(471);
	v->a[79507] = 1;
	v->a[79508] = anon_sym_BQUOTE;
	v->a[79509] = actions(2849);
	v->a[79510] = 1;
	v->a[79511] = sym__bare_dollar;
	v->a[79512] = actions(2935);
	v->a[79513] = 1;
	v->a[79514] = anon_sym_DOLLAR;
	v->a[79515] = actions(2847);
	v->a[79516] = 5;
	v->a[79517] = aux_sym_concatenation_token1;
	v->a[79518] = sym_raw_string;
	v->a[79519] = sym_number;
	small_parse_table_3976(v);
}

void	small_parse_table_3976(t_small_parse_table_array *v)
{
	v->a[79520] = sym__comment_word;
	v->a[79521] = sym_word;
	v->a[79522] = state(477);
	v->a[79523] = 5;
	v->a[79524] = sym_arithmetic_expansion;
	v->a[79525] = sym_string;
	v->a[79526] = sym_simple_expansion;
	v->a[79527] = sym_expansion;
	v->a[79528] = sym_command_substitution;
	v->a[79529] = 12;
	v->a[79530] = actions(3);
	v->a[79531] = 1;
	v->a[79532] = sym_comment;
	v->a[79533] = actions(2773);
	v->a[79534] = 1;
	v->a[79535] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79536] = actions(2777);
	v->a[79537] = 1;
	v->a[79538] = anon_sym_DQUOTE;
	v->a[79539] = actions(2779);
	small_parse_table_3977(v);
}

void	small_parse_table_3977(t_small_parse_table_array *v)
{
	v->a[79540] = 1;
	v->a[79541] = anon_sym_DOLLAR_LBRACE;
	v->a[79542] = actions(2781);
	v->a[79543] = 1;
	v->a[79544] = anon_sym_DOLLAR_LPAREN;
	v->a[79545] = actions(2783);
	v->a[79546] = 1;
	v->a[79547] = anon_sym_BQUOTE;
	v->a[79548] = actions(2903);
	v->a[79549] = 1;
	v->a[79550] = anon_sym_DOLLAR;
	v->a[79551] = actions(2939);
	v->a[79552] = 1;
	v->a[79553] = sym__comment_word;
	v->a[79554] = actions(2941);
	v->a[79555] = 1;
	v->a[79556] = sym__empty_value;
	v->a[79557] = state(1341);
	v->a[79558] = 1;
	v->a[79559] = sym_concatenation;
	small_parse_table_3978(v);
}

void	small_parse_table_3978(t_small_parse_table_array *v)
{
	v->a[79560] = actions(2937);
	v->a[79561] = 3;
	v->a[79562] = sym_raw_string;
	v->a[79563] = sym_number;
	v->a[79564] = sym_word;
	v->a[79565] = state(1092);
	v->a[79566] = 5;
	v->a[79567] = sym_arithmetic_expansion;
	v->a[79568] = sym_string;
	v->a[79569] = sym_simple_expansion;
	v->a[79570] = sym_expansion;
	v->a[79571] = sym_command_substitution;
	v->a[79572] = 11;
	v->a[79573] = actions(3);
	v->a[79574] = 1;
	v->a[79575] = sym_comment;
	v->a[79576] = actions(1883);
	v->a[79577] = 1;
	v->a[79578] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79579] = actions(1885);
	small_parse_table_3979(v);
}

void	small_parse_table_3979(t_small_parse_table_array *v)
{
	v->a[79580] = 1;
	v->a[79581] = anon_sym_DOLLAR;
	v->a[79582] = actions(1887);
	v->a[79583] = 1;
	v->a[79584] = anon_sym_DQUOTE;
	v->a[79585] = actions(1889);
	v->a[79586] = 1;
	v->a[79587] = anon_sym_DOLLAR_LBRACE;
	v->a[79588] = actions(1891);
	v->a[79589] = 1;
	v->a[79590] = anon_sym_DOLLAR_LPAREN;
	v->a[79591] = actions(1893);
	v->a[79592] = 1;
	v->a[79593] = anon_sym_BQUOTE;
	v->a[79594] = actions(1895);
	v->a[79595] = 1;
	v->a[79596] = sym_extglob_pattern;
	v->a[79597] = state(2075);
	v->a[79598] = 2;
	v->a[79599] = sym_concatenation;
	small_parse_table_3980(v);
}

/* EOF small_parse_table_795.c */
