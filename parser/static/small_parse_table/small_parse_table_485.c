/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_485.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2425(t_small_parse_table_array *v)
{
	v->a[48500] = anon_sym_LT_AMP;
	v->a[48501] = anon_sym_GT_AMP;
	v->a[48502] = anon_sym_GT_PIPE;
	v->a[48503] = anon_sym_LT_AMP_DASH;
	v->a[48504] = anon_sym_GT_AMP_DASH;
	v->a[48505] = anon_sym_LT_LT_DASH;
	v->a[48506] = anon_sym_LT_LT_LT;
	v->a[48507] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48508] = anon_sym_DOLLAR_LBRACK;
	v->a[48509] = anon_sym_DOLLAR;
	v->a[48510] = sym__special_character;
	v->a[48511] = anon_sym_DQUOTE;
	v->a[48512] = sym_raw_string;
	v->a[48513] = sym_ansi_c_string;
	v->a[48514] = aux_sym_number_token1;
	v->a[48515] = aux_sym_number_token2;
	v->a[48516] = anon_sym_DOLLAR_LBRACE;
	v->a[48517] = anon_sym_DOLLAR_LPAREN;
	v->a[48518] = anon_sym_BQUOTE;
	v->a[48519] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_2426(v);
}

void	small_parse_table_2426(t_small_parse_table_array *v)
{
	v->a[48520] = anon_sym_LT_LPAREN;
	v->a[48521] = anon_sym_GT_LPAREN;
	v->a[48522] = sym_word;
	v->a[48523] = 8;
	v->a[48524] = actions(3);
	v->a[48525] = 1;
	v->a[48526] = sym_comment;
	v->a[48527] = actions(5361);
	v->a[48528] = 1;
	v->a[48529] = anon_sym_DQUOTE;
	v->a[48530] = actions(5365);
	v->a[48531] = 1;
	v->a[48532] = sym_variable_name;
	v->a[48533] = state(2850);
	v->a[48534] = 1;
	v->a[48535] = sym_string;
	v->a[48536] = actions(5363);
	v->a[48537] = 2;
	v->a[48538] = aux_sym__simple_variable_name_token1;
	v->a[48539] = aux_sym__multiline_variable_name_token1;
	small_parse_table_2427(v);
}

void	small_parse_table_2427(t_small_parse_table_array *v)
{
	v->a[48540] = actions(1235);
	v->a[48541] = 3;
	v->a[48542] = sym_file_descriptor;
	v->a[48543] = sym_test_operator;
	v->a[48544] = sym__brace_start;
	v->a[48545] = actions(5359);
	v->a[48546] = 9;
	v->a[48547] = anon_sym_DASH;
	v->a[48548] = anon_sym_STAR;
	v->a[48549] = anon_sym_BANG;
	v->a[48550] = anon_sym_QMARK;
	v->a[48551] = anon_sym_DOLLAR;
	v->a[48552] = anon_sym_POUND;
	v->a[48553] = anon_sym_AT2;
	v->a[48554] = anon_sym_0;
	v->a[48555] = anon_sym__;
	v->a[48556] = actions(1227);
	v->a[48557] = 31;
	v->a[48558] = anon_sym_LPAREN_LPAREN;
	v->a[48559] = anon_sym_PIPE_PIPE;
	small_parse_table_2428(v);
}

void	small_parse_table_2428(t_small_parse_table_array *v)
{
	v->a[48560] = anon_sym_AMP_AMP;
	v->a[48561] = anon_sym_PIPE;
	v->a[48562] = anon_sym_LT;
	v->a[48563] = anon_sym_GT;
	v->a[48564] = anon_sym_LT_LT;
	v->a[48565] = anon_sym_GT_GT;
	v->a[48566] = anon_sym_PIPE_AMP;
	v->a[48567] = anon_sym_AMP_GT;
	v->a[48568] = anon_sym_AMP_GT_GT;
	v->a[48569] = anon_sym_LT_AMP;
	v->a[48570] = anon_sym_GT_AMP;
	v->a[48571] = anon_sym_GT_PIPE;
	v->a[48572] = anon_sym_LT_AMP_DASH;
	v->a[48573] = anon_sym_GT_AMP_DASH;
	v->a[48574] = anon_sym_LT_LT_DASH;
	v->a[48575] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48576] = anon_sym_DOLLAR_LBRACK;
	v->a[48577] = sym__special_character;
	v->a[48578] = sym_raw_string;
	v->a[48579] = sym_ansi_c_string;
	small_parse_table_2429(v);
}

void	small_parse_table_2429(t_small_parse_table_array *v)
{
	v->a[48580] = aux_sym_number_token1;
	v->a[48581] = aux_sym_number_token2;
	v->a[48582] = anon_sym_DOLLAR_LBRACE;
	v->a[48583] = anon_sym_DOLLAR_LPAREN;
	v->a[48584] = anon_sym_BQUOTE;
	v->a[48585] = anon_sym_DOLLAR_BQUOTE;
	v->a[48586] = anon_sym_LT_LPAREN;
	v->a[48587] = anon_sym_GT_LPAREN;
	v->a[48588] = sym_word;
	v->a[48589] = 3;
	v->a[48590] = actions(3);
	v->a[48591] = 1;
	v->a[48592] = sym_comment;
	v->a[48593] = actions(1302);
	v->a[48594] = 6;
	v->a[48595] = sym_file_descriptor;
	v->a[48596] = sym__concat;
	v->a[48597] = sym_test_operator;
	v->a[48598] = sym__bare_dollar;
	v->a[48599] = sym__brace_start;
	small_parse_table_2430(v);
}

/* EOF small_parse_table_485.c */
