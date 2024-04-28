/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2115.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10575(t_small_parse_table_array *v)
{
	v->a[211500] = anon_sym_DOLLAR_LPAREN;
	v->a[211501] = actions(8286);
	v->a[211502] = 1;
	v->a[211503] = anon_sym_BQUOTE;
	v->a[211504] = actions(8288);
	v->a[211505] = 1;
	v->a[211506] = anon_sym_DOLLAR_BQUOTE;
	v->a[211507] = actions(8298);
	v->a[211508] = 1;
	v->a[211509] = sym__brace_start;
	v->a[211510] = actions(10032);
	v->a[211511] = 1;
	v->a[211512] = sym_word;
	v->a[211513] = actions(10036);
	v->a[211514] = 1;
	v->a[211515] = sym_test_operator;
	v->a[211516] = state(1539);
	v->a[211517] = 1;
	v->a[211518] = aux_sym__literal_repeat1;
	v->a[211519] = state(1872);
	small_parse_table_10576(v);
}

void	small_parse_table_10576(t_small_parse_table_array *v)
{
	v->a[211520] = 1;
	v->a[211521] = sym_concatenation;
	v->a[211522] = actions(8264);
	v->a[211523] = 2;
	v->a[211524] = anon_sym_LPAREN_LPAREN;
	v->a[211525] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[211526] = actions(8290);
	v->a[211527] = 2;
	v->a[211528] = anon_sym_LT_LPAREN;
	v->a[211529] = anon_sym_GT_LPAREN;
	v->a[211530] = actions(10034);
	v->a[211531] = 2;
	v->a[211532] = sym_raw_string;
	v->a[211533] = sym_ansi_c_string;
	v->a[211534] = state(1263);
	v->a[211535] = 9;
	v->a[211536] = sym_arithmetic_expansion;
	v->a[211537] = sym_brace_expression;
	v->a[211538] = sym_string;
	v->a[211539] = sym_translated_string;
	small_parse_table_10577(v);
}

void	small_parse_table_10577(t_small_parse_table_array *v)
{
	v->a[211540] = sym_number;
	v->a[211541] = sym_simple_expansion;
	v->a[211542] = sym_expansion;
	v->a[211543] = sym_command_substitution;
	v->a[211544] = sym_process_substitution;
	v->a[211545] = 20;
	v->a[211546] = actions(71);
	v->a[211547] = 1;
	v->a[211548] = sym_comment;
	v->a[211549] = actions(8268);
	v->a[211550] = 1;
	v->a[211551] = anon_sym_DOLLAR_LBRACK;
	v->a[211552] = actions(8270);
	v->a[211553] = 1;
	v->a[211554] = anon_sym_DOLLAR;
	v->a[211555] = actions(8272);
	v->a[211556] = 1;
	v->a[211557] = sym__special_character;
	v->a[211558] = actions(8274);
	v->a[211559] = 1;
	small_parse_table_10578(v);
}

void	small_parse_table_10578(t_small_parse_table_array *v)
{
	v->a[211560] = anon_sym_DQUOTE;
	v->a[211561] = actions(8278);
	v->a[211562] = 1;
	v->a[211563] = aux_sym_number_token1;
	v->a[211564] = actions(8280);
	v->a[211565] = 1;
	v->a[211566] = aux_sym_number_token2;
	v->a[211567] = actions(8282);
	v->a[211568] = 1;
	v->a[211569] = anon_sym_DOLLAR_LBRACE;
	v->a[211570] = actions(8284);
	v->a[211571] = 1;
	v->a[211572] = anon_sym_DOLLAR_LPAREN;
	v->a[211573] = actions(8286);
	v->a[211574] = 1;
	v->a[211575] = anon_sym_BQUOTE;
	v->a[211576] = actions(8288);
	v->a[211577] = 1;
	v->a[211578] = anon_sym_DOLLAR_BQUOTE;
	v->a[211579] = actions(8298);
	small_parse_table_10579(v);
}

void	small_parse_table_10579(t_small_parse_table_array *v)
{
	v->a[211580] = 1;
	v->a[211581] = sym__brace_start;
	v->a[211582] = actions(10038);
	v->a[211583] = 1;
	v->a[211584] = sym_word;
	v->a[211585] = actions(10042);
	v->a[211586] = 1;
	v->a[211587] = sym_test_operator;
	v->a[211588] = state(1509);
	v->a[211589] = 1;
	v->a[211590] = aux_sym__literal_repeat1;
	v->a[211591] = state(1883);
	v->a[211592] = 1;
	v->a[211593] = sym_concatenation;
	v->a[211594] = actions(8264);
	v->a[211595] = 2;
	v->a[211596] = anon_sym_LPAREN_LPAREN;
	v->a[211597] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[211598] = actions(8290);
	v->a[211599] = 2;
	small_parse_table_10580(v);
}

/* EOF small_parse_table_2115.c */
