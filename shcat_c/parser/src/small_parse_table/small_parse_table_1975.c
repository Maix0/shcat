/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1975.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9875(t_small_parse_table_array *v)
{
	v->a[197500] = sym_translated_string;
	v->a[197501] = sym_number;
	v->a[197502] = sym_simple_expansion;
	v->a[197503] = sym_expansion;
	v->a[197504] = sym_command_substitution;
	v->a[197505] = sym_process_substitution;
	v->a[197506] = 20;
	v->a[197507] = actions(71);
	v->a[197508] = 1;
	v->a[197509] = sym_comment;
	v->a[197510] = actions(3471);
	v->a[197511] = 1;
	v->a[197512] = sym_word;
	v->a[197513] = actions(3477);
	v->a[197514] = 1;
	v->a[197515] = anon_sym_DOLLAR;
	v->a[197516] = actions(3481);
	v->a[197517] = 1;
	v->a[197518] = aux_sym_number_token1;
	v->a[197519] = actions(3483);
	small_parse_table_9876(v);
}

void	small_parse_table_9876(t_small_parse_table_array *v)
{
	v->a[197520] = 1;
	v->a[197521] = aux_sym_number_token2;
	v->a[197522] = actions(3487);
	v->a[197523] = 1;
	v->a[197524] = anon_sym_DOLLAR_LPAREN;
	v->a[197525] = actions(3495);
	v->a[197526] = 1;
	v->a[197527] = sym_test_operator;
	v->a[197528] = actions(3497);
	v->a[197529] = 1;
	v->a[197530] = sym__brace_start;
	v->a[197531] = actions(8906);
	v->a[197532] = 1;
	v->a[197533] = anon_sym_DOLLAR_LBRACK;
	v->a[197534] = actions(8908);
	v->a[197535] = 1;
	v->a[197536] = sym__special_character;
	v->a[197537] = actions(8910);
	v->a[197538] = 1;
	v->a[197539] = anon_sym_DQUOTE;
	small_parse_table_9877(v);
}

void	small_parse_table_9877(t_small_parse_table_array *v)
{
	v->a[197540] = actions(8914);
	v->a[197541] = 1;
	v->a[197542] = anon_sym_DOLLAR_LBRACE;
	v->a[197543] = actions(8916);
	v->a[197544] = 1;
	v->a[197545] = anon_sym_BQUOTE;
	v->a[197546] = actions(8918);
	v->a[197547] = 1;
	v->a[197548] = anon_sym_DOLLAR_BQUOTE;
	v->a[197549] = state(2024);
	v->a[197550] = 1;
	v->a[197551] = aux_sym__literal_repeat1;
	v->a[197552] = actions(8904);
	v->a[197553] = 2;
	v->a[197554] = anon_sym_LPAREN_LPAREN;
	v->a[197555] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[197556] = actions(8912);
	v->a[197557] = 2;
	v->a[197558] = sym_raw_string;
	v->a[197559] = sym_ansi_c_string;
	small_parse_table_9878(v);
}

void	small_parse_table_9878(t_small_parse_table_array *v)
{
	v->a[197560] = actions(8920);
	v->a[197561] = 2;
	v->a[197562] = anon_sym_LT_LPAREN;
	v->a[197563] = anon_sym_GT_LPAREN;
	v->a[197564] = state(705);
	v->a[197565] = 2;
	v->a[197566] = sym_concatenation;
	v->a[197567] = aux_sym_for_statement_repeat1;
	v->a[197568] = state(1630);
	v->a[197569] = 9;
	v->a[197570] = sym_arithmetic_expansion;
	v->a[197571] = sym_brace_expression;
	v->a[197572] = sym_string;
	v->a[197573] = sym_translated_string;
	v->a[197574] = sym_number;
	v->a[197575] = sym_simple_expansion;
	v->a[197576] = sym_expansion;
	v->a[197577] = sym_command_substitution;
	v->a[197578] = sym_process_substitution;
	v->a[197579] = 20;
	small_parse_table_9879(v);
}

void	small_parse_table_9879(t_small_parse_table_array *v)
{
	v->a[197580] = actions(71);
	v->a[197581] = 1;
	v->a[197582] = sym_comment;
	v->a[197583] = actions(5108);
	v->a[197584] = 1;
	v->a[197585] = sym_word;
	v->a[197586] = actions(5112);
	v->a[197587] = 1;
	v->a[197588] = anon_sym_DOLLAR_LBRACK;
	v->a[197589] = actions(5114);
	v->a[197590] = 1;
	v->a[197591] = anon_sym_DOLLAR;
	v->a[197592] = actions(5116);
	v->a[197593] = 1;
	v->a[197594] = sym__special_character;
	v->a[197595] = actions(5118);
	v->a[197596] = 1;
	v->a[197597] = anon_sym_DQUOTE;
	v->a[197598] = actions(5122);
	v->a[197599] = 1;
	small_parse_table_9880(v);
}

/* EOF small_parse_table_1975.c */
