/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2635.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13175(t_small_parse_table_array *v)
{
	v->a[263500] = 1;
	v->a[263501] = aux_sym__simple_variable_name_token1;
	v->a[263502] = actions(11772);
	v->a[263503] = 1;
	v->a[263504] = sym_variable_name;
	v->a[263505] = actions(12046);
	v->a[263506] = 1;
	v->a[263507] = anon_sym_RBRACE3;
	v->a[263508] = state(3532);
	v->a[263509] = 1;
	v->a[263510] = sym_subscript;
	v->a[263511] = state(6428);
	v->a[263512] = 1;
	v->a[263513] = aux_sym__expansion_body_repeat1;
	v->a[263514] = state(6472);
	v->a[263515] = 1;
	v->a[263516] = sym_command_substitution;
	v->a[263517] = state(7533);
	v->a[263518] = 1;
	v->a[263519] = sym__expansion_body;
	small_parse_table_13176(v);
}

void	small_parse_table_13176(t_small_parse_table_array *v)
{
	v->a[263520] = actions(11762);
	v->a[263521] = 2;
	v->a[263522] = anon_sym_POUND2;
	v->a[263523] = anon_sym_EQ2;
	v->a[263524] = actions(8050);
	v->a[263525] = 3;
	v->a[263526] = sym__external_expansion_sym_hash;
	v->a[263527] = sym__external_expansion_sym_bang;
	v->a[263528] = sym__external_expansion_sym_equal;
	v->a[263529] = actions(11754);
	v->a[263530] = 4;
	v->a[263531] = anon_sym_DASH;
	v->a[263532] = anon_sym_STAR;
	v->a[263533] = anon_sym_QMARK;
	v->a[263534] = anon_sym_AT2;
	v->a[263535] = actions(11756);
	v->a[263536] = 5;
	v->a[263537] = anon_sym_BANG;
	v->a[263538] = anon_sym_DOLLAR;
	v->a[263539] = anon_sym_POUND;
	small_parse_table_13177(v);
}

void	small_parse_table_13177(t_small_parse_table_array *v)
{
	v->a[263540] = anon_sym_0;
	v->a[263541] = anon_sym__;
	v->a[263542] = 3;
	v->a[263543] = actions(3);
	v->a[263544] = 1;
	v->a[263545] = sym_comment;
	v->a[263546] = actions(1294);
	v->a[263547] = 4;
	v->a[263548] = sym__concat;
	v->a[263549] = sym_test_operator;
	v->a[263550] = sym__brace_start;
	v->a[263551] = aux_sym_heredoc_redirect_token1;
	v->a[263552] = actions(1292);
	v->a[263553] = 21;
	v->a[263554] = anon_sym_LPAREN_LPAREN;
	v->a[263555] = anon_sym_SEMI;
	v->a[263556] = anon_sym_AMP;
	v->a[263557] = anon_sym_SEMI_SEMI;
	v->a[263558] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[263559] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_13178(v);
}

void	small_parse_table_13178(t_small_parse_table_array *v)
{
	v->a[263560] = aux_sym_concatenation_token1;
	v->a[263561] = anon_sym_DOLLAR;
	v->a[263562] = sym__special_character;
	v->a[263563] = anon_sym_DQUOTE;
	v->a[263564] = sym_raw_string;
	v->a[263565] = sym_ansi_c_string;
	v->a[263566] = aux_sym_number_token1;
	v->a[263567] = aux_sym_number_token2;
	v->a[263568] = anon_sym_DOLLAR_LBRACE;
	v->a[263569] = anon_sym_DOLLAR_LPAREN;
	v->a[263570] = anon_sym_BQUOTE;
	v->a[263571] = anon_sym_DOLLAR_BQUOTE;
	v->a[263572] = anon_sym_LT_LPAREN;
	v->a[263573] = anon_sym_GT_LPAREN;
	v->a[263574] = sym_word;
	v->a[263575] = 6;
	v->a[263576] = actions(3);
	v->a[263577] = 1;
	v->a[263578] = sym_comment;
	v->a[263579] = actions(11500);
	small_parse_table_13179(v);
}

void	small_parse_table_13179(t_small_parse_table_array *v)
{
	v->a[263580] = 1;
	v->a[263581] = aux_sym_concatenation_token1;
	v->a[263582] = actions(11502);
	v->a[263583] = 1;
	v->a[263584] = sym__concat;
	v->a[263585] = state(4783);
	v->a[263586] = 1;
	v->a[263587] = aux_sym_concatenation_repeat1;
	v->a[263588] = actions(5375);
	v->a[263589] = 3;
	v->a[263590] = sym_file_descriptor;
	v->a[263591] = sym_variable_name;
	v->a[263592] = aux_sym_heredoc_redirect_token1;
	v->a[263593] = actions(5373);
	v->a[263594] = 19;
	v->a[263595] = anon_sym_SEMI;
	v->a[263596] = anon_sym_PIPE_PIPE;
	v->a[263597] = anon_sym_AMP_AMP;
	v->a[263598] = anon_sym_PIPE;
	v->a[263599] = anon_sym_AMP;
	small_parse_table_13180(v);
}

/* EOF small_parse_table_2635.c */
