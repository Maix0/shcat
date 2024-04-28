/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2085.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10425(t_small_parse_table_array *v)
{
	v->a[208500] = sym_comment;
	v->a[208501] = actions(1587);
	v->a[208502] = 1;
	v->a[208503] = anon_sym_DOLLAR;
	v->a[208504] = actions(1593);
	v->a[208505] = 1;
	v->a[208506] = aux_sym_number_token1;
	v->a[208507] = actions(1595);
	v->a[208508] = 1;
	v->a[208509] = aux_sym_number_token2;
	v->a[208510] = actions(1599);
	v->a[208511] = 1;
	v->a[208512] = anon_sym_DOLLAR_LPAREN;
	v->a[208513] = actions(1611);
	v->a[208514] = 1;
	v->a[208515] = sym__brace_start;
	v->a[208516] = actions(9240);
	v->a[208517] = 1;
	v->a[208518] = anon_sym_DOLLAR_LBRACK;
	v->a[208519] = actions(9242);
	small_parse_table_10426(v);
}

void	small_parse_table_10426(t_small_parse_table_array *v)
{
	v->a[208520] = 1;
	v->a[208521] = sym__special_character;
	v->a[208522] = actions(9244);
	v->a[208523] = 1;
	v->a[208524] = anon_sym_DQUOTE;
	v->a[208525] = actions(9248);
	v->a[208526] = 1;
	v->a[208527] = anon_sym_DOLLAR_LBRACE;
	v->a[208528] = actions(9250);
	v->a[208529] = 1;
	v->a[208530] = anon_sym_BQUOTE;
	v->a[208531] = actions(9252);
	v->a[208532] = 1;
	v->a[208533] = anon_sym_DOLLAR_BQUOTE;
	v->a[208534] = actions(9792);
	v->a[208535] = 1;
	v->a[208536] = sym_word;
	v->a[208537] = actions(9796);
	v->a[208538] = 1;
	v->a[208539] = sym_test_operator;
	small_parse_table_10427(v);
}

void	small_parse_table_10427(t_small_parse_table_array *v)
{
	v->a[208540] = state(1377);
	v->a[208541] = 1;
	v->a[208542] = aux_sym__literal_repeat1;
	v->a[208543] = state(1613);
	v->a[208544] = 1;
	v->a[208545] = sym_concatenation;
	v->a[208546] = actions(9238);
	v->a[208547] = 2;
	v->a[208548] = anon_sym_LPAREN_LPAREN;
	v->a[208549] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[208550] = actions(9254);
	v->a[208551] = 2;
	v->a[208552] = anon_sym_LT_LPAREN;
	v->a[208553] = anon_sym_GT_LPAREN;
	v->a[208554] = actions(9794);
	v->a[208555] = 2;
	v->a[208556] = sym_raw_string;
	v->a[208557] = sym_ansi_c_string;
	v->a[208558] = state(1076);
	v->a[208559] = 9;
	small_parse_table_10428(v);
}

void	small_parse_table_10428(t_small_parse_table_array *v)
{
	v->a[208560] = sym_arithmetic_expansion;
	v->a[208561] = sym_brace_expression;
	v->a[208562] = sym_string;
	v->a[208563] = sym_translated_string;
	v->a[208564] = sym_number;
	v->a[208565] = sym_simple_expansion;
	v->a[208566] = sym_expansion;
	v->a[208567] = sym_command_substitution;
	v->a[208568] = sym_process_substitution;
	v->a[208569] = 20;
	v->a[208570] = actions(71);
	v->a[208571] = 1;
	v->a[208572] = sym_comment;
	v->a[208573] = actions(3367);
	v->a[208574] = 1;
	v->a[208575] = anon_sym_DOLLAR;
	v->a[208576] = actions(3373);
	v->a[208577] = 1;
	v->a[208578] = aux_sym_number_token1;
	v->a[208579] = actions(3375);
	small_parse_table_10429(v);
}

void	small_parse_table_10429(t_small_parse_table_array *v)
{
	v->a[208580] = 1;
	v->a[208581] = aux_sym_number_token2;
	v->a[208582] = actions(3379);
	v->a[208583] = 1;
	v->a[208584] = anon_sym_DOLLAR_LPAREN;
	v->a[208585] = actions(3389);
	v->a[208586] = 1;
	v->a[208587] = sym__brace_start;
	v->a[208588] = actions(9798);
	v->a[208589] = 1;
	v->a[208590] = sym_word;
	v->a[208591] = actions(9802);
	v->a[208592] = 1;
	v->a[208593] = anon_sym_DOLLAR_LBRACK;
	v->a[208594] = actions(9804);
	v->a[208595] = 1;
	v->a[208596] = sym__special_character;
	v->a[208597] = actions(9806);
	v->a[208598] = 1;
	v->a[208599] = anon_sym_DQUOTE;
	small_parse_table_10430(v);
}

/* EOF small_parse_table_2085.c */
