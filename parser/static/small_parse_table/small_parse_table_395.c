/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_395.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1975(t_small_parse_table_array *v)
{
	v->a[39500] = actions(4705);
	v->a[39501] = 1;
	v->a[39502] = sym_variable_name;
	v->a[39503] = actions(4873);
	v->a[39504] = 1;
	v->a[39505] = sym__special_character;
	v->a[39506] = state(545);
	v->a[39507] = 1;
	v->a[39508] = sym_command_name;
	v->a[39509] = state(1267);
	v->a[39510] = 1;
	v->a[39511] = aux_sym__literal_repeat1;
	v->a[39512] = state(1376);
	v->a[39513] = 1;
	v->a[39514] = sym_concatenation;
	v->a[39515] = state(6771);
	v->a[39516] = 1;
	v->a[39517] = sym_subscript;
	v->a[39518] = actions(312);
	v->a[39519] = 2;
	small_parse_table_1976(v);
}

void	small_parse_table_1976(t_small_parse_table_array *v)
{
	v->a[39520] = anon_sym_LPAREN_LPAREN;
	v->a[39521] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39522] = actions(322);
	v->a[39523] = 2;
	v->a[39524] = sym_raw_string;
	v->a[39525] = sym_ansi_c_string;
	v->a[39526] = actions(336);
	v->a[39527] = 2;
	v->a[39528] = anon_sym_LT_LPAREN;
	v->a[39529] = anon_sym_GT_LPAREN;
	v->a[39530] = actions(1392);
	v->a[39531] = 2;
	v->a[39532] = anon_sym_LT_AMP_DASH;
	v->a[39533] = anon_sym_GT_AMP_DASH;
	v->a[39534] = state(3127);
	v->a[39535] = 2;
	v->a[39536] = sym_variable_assignment;
	v->a[39537] = aux_sym_command_repeat1;
	v->a[39538] = state(3581);
	v->a[39539] = 2;
	small_parse_table_1977(v);
}

void	small_parse_table_1977(t_small_parse_table_array *v)
{
	v->a[39540] = sym_file_redirect;
	v->a[39541] = sym_herestring_redirect;
	v->a[39542] = actions(1390);
	v->a[39543] = 3;
	v->a[39544] = anon_sym_GT_GT;
	v->a[39545] = anon_sym_AMP_GT_GT;
	v->a[39546] = anon_sym_GT_PIPE;
	v->a[39547] = actions(1388);
	v->a[39548] = 5;
	v->a[39549] = anon_sym_LT;
	v->a[39550] = anon_sym_GT;
	v->a[39551] = anon_sym_AMP_GT;
	v->a[39552] = anon_sym_LT_AMP;
	v->a[39553] = anon_sym_GT_AMP;
	v->a[39554] = state(1078);
	v->a[39555] = 9;
	v->a[39556] = sym_arithmetic_expansion;
	v->a[39557] = sym_brace_expression;
	v->a[39558] = sym_string;
	v->a[39559] = sym_translated_string;
	small_parse_table_1978(v);
}

void	small_parse_table_1978(t_small_parse_table_array *v)
{
	v->a[39560] = sym_number;
	v->a[39561] = sym_simple_expansion;
	v->a[39562] = sym_expansion;
	v->a[39563] = sym_command_substitution;
	v->a[39564] = sym_process_substitution;
	v->a[39565] = 3;
	v->a[39566] = actions(3);
	v->a[39567] = 1;
	v->a[39568] = sym_comment;
	v->a[39569] = actions(1350);
	v->a[39570] = 6;
	v->a[39571] = sym_file_descriptor;
	v->a[39572] = sym__concat;
	v->a[39573] = sym_test_operator;
	v->a[39574] = sym__bare_dollar;
	v->a[39575] = sym__brace_start;
	v->a[39576] = aux_sym_heredoc_redirect_token1;
	v->a[39577] = actions(1348);
	v->a[39578] = 43;
	v->a[39579] = anon_sym_LPAREN_LPAREN;
	small_parse_table_1979(v);
}

void	small_parse_table_1979(t_small_parse_table_array *v)
{
	v->a[39580] = anon_sym_SEMI;
	v->a[39581] = anon_sym_PIPE_PIPE;
	v->a[39582] = anon_sym_AMP_AMP;
	v->a[39583] = anon_sym_PIPE;
	v->a[39584] = anon_sym_AMP;
	v->a[39585] = anon_sym_EQ_EQ;
	v->a[39586] = anon_sym_LT;
	v->a[39587] = anon_sym_GT;
	v->a[39588] = anon_sym_LT_LT;
	v->a[39589] = anon_sym_GT_GT;
	v->a[39590] = anon_sym_LPAREN;
	v->a[39591] = anon_sym_SEMI_SEMI;
	v->a[39592] = anon_sym_SEMI_AMP;
	v->a[39593] = anon_sym_SEMI_SEMI_AMP;
	v->a[39594] = anon_sym_PIPE_AMP;
	v->a[39595] = anon_sym_EQ_TILDE;
	v->a[39596] = anon_sym_AMP_GT;
	v->a[39597] = anon_sym_AMP_GT_GT;
	v->a[39598] = anon_sym_LT_AMP;
	v->a[39599] = anon_sym_GT_AMP;
	small_parse_table_1980(v);
}

/* EOF small_parse_table_395.c */
