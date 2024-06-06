/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1225.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6125(t_small_parse_table_array *v)
{
	v->a[122500] = actions(5407);
	v->a[122501] = 1;
	v->a[122502] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[122503] = actions(5413);
	v->a[122504] = 1;
	v->a[122505] = anon_sym_DQUOTE;
	v->a[122506] = actions(5417);
	v->a[122507] = 1;
	v->a[122508] = aux_sym_number_token1;
	v->a[122509] = actions(5419);
	v->a[122510] = 1;
	v->a[122511] = aux_sym_number_token2;
	v->a[122512] = actions(5421);
	v->a[122513] = 1;
	v->a[122514] = anon_sym_DOLLAR_LBRACE;
	v->a[122515] = actions(5423);
	v->a[122516] = 1;
	v->a[122517] = anon_sym_DOLLAR_LPAREN;
	v->a[122518] = actions(5425);
	v->a[122519] = 1;
	small_parse_table_6126(v);
}

void	small_parse_table_6126(t_small_parse_table_array *v)
{
	v->a[122520] = anon_sym_BQUOTE;
	v->a[122521] = actions(5427);
	v->a[122522] = 1;
	v->a[122523] = anon_sym_DOLLAR_BQUOTE;
	v->a[122524] = actions(5433);
	v->a[122525] = 1;
	v->a[122526] = sym__brace_start;
	v->a[122527] = actions(6625);
	v->a[122528] = 1;
	v->a[122529] = sym_word;
	v->a[122530] = actions(6627);
	v->a[122531] = 1;
	v->a[122532] = sym__special_character;
	v->a[122533] = actions(6631);
	v->a[122534] = 1;
	v->a[122535] = sym__comment_word;
	v->a[122536] = actions(7068);
	v->a[122537] = 1;
	v->a[122538] = anon_sym_DOLLAR;
	v->a[122539] = actions(6629);
	small_parse_table_6127(v);
}

void	small_parse_table_6127(t_small_parse_table_array *v)
{
	v->a[122540] = 3;
	v->a[122541] = sym_test_operator;
	v->a[122542] = sym__bare_dollar;
	v->a[122543] = sym_raw_string;
	v->a[122544] = state(1903);
	v->a[122545] = 7;
	v->a[122546] = sym_arithmetic_expansion;
	v->a[122547] = sym_brace_expression;
	v->a[122548] = sym_string;
	v->a[122549] = sym_number;
	v->a[122550] = sym_simple_expansion;
	v->a[122551] = sym_expansion;
	v->a[122552] = sym_command_substitution;
	v->a[122553] = 16;
	v->a[122554] = actions(3);
	v->a[122555] = 1;
	v->a[122556] = sym_comment;
	v->a[122557] = actions(35);
	v->a[122558] = 1;
	v->a[122559] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_6128(v);
}

void	small_parse_table_6128(t_small_parse_table_array *v)
{
	v->a[122560] = actions(37);
	v->a[122561] = 1;
	v->a[122562] = anon_sym_DOLLAR;
	v->a[122563] = actions(41);
	v->a[122564] = 1;
	v->a[122565] = anon_sym_DQUOTE;
	v->a[122566] = actions(45);
	v->a[122567] = 1;
	v->a[122568] = aux_sym_number_token1;
	v->a[122569] = actions(47);
	v->a[122570] = 1;
	v->a[122571] = aux_sym_number_token2;
	v->a[122572] = actions(49);
	v->a[122573] = 1;
	v->a[122574] = anon_sym_DOLLAR_LBRACE;
	v->a[122575] = actions(51);
	v->a[122576] = 1;
	v->a[122577] = anon_sym_DOLLAR_LPAREN;
	v->a[122578] = actions(53);
	v->a[122579] = 1;
	small_parse_table_6129(v);
}

void	small_parse_table_6129(t_small_parse_table_array *v)
{
	v->a[122580] = anon_sym_BQUOTE;
	v->a[122581] = actions(55);
	v->a[122582] = 1;
	v->a[122583] = anon_sym_DOLLAR_BQUOTE;
	v->a[122584] = actions(63);
	v->a[122585] = 1;
	v->a[122586] = sym__brace_start;
	v->a[122587] = actions(6605);
	v->a[122588] = 1;
	v->a[122589] = sym_word;
	v->a[122590] = actions(6609);
	v->a[122591] = 1;
	v->a[122592] = sym__special_character;
	v->a[122593] = actions(6613);
	v->a[122594] = 1;
	v->a[122595] = sym__comment_word;
	v->a[122596] = actions(6611);
	v->a[122597] = 3;
	v->a[122598] = sym_test_operator;
	v->a[122599] = sym__bare_dollar;
	small_parse_table_6130(v);
}

/* EOF small_parse_table_1225.c */
