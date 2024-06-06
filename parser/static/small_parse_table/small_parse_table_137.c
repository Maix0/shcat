/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_137.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_685(t_small_parse_table_array *v)
{
	v->a[13700] = actions(2154);
	v->a[13701] = 1;
	v->a[13702] = anon_sym_DOLLAR;
	v->a[13703] = actions(2158);
	v->a[13704] = 1;
	v->a[13705] = anon_sym_DQUOTE;
	v->a[13706] = actions(2160);
	v->a[13707] = 1;
	v->a[13708] = aux_sym_number_token1;
	v->a[13709] = actions(2162);
	v->a[13710] = 1;
	v->a[13711] = aux_sym_number_token2;
	v->a[13712] = actions(2164);
	v->a[13713] = 1;
	v->a[13714] = anon_sym_DOLLAR_LBRACE;
	v->a[13715] = actions(2166);
	v->a[13716] = 1;
	v->a[13717] = anon_sym_DOLLAR_LPAREN;
	v->a[13718] = actions(2168);
	v->a[13719] = 1;
	small_parse_table_686(v);
}

void	small_parse_table_686(t_small_parse_table_array *v)
{
	v->a[13720] = anon_sym_BQUOTE;
	v->a[13721] = actions(2170);
	v->a[13722] = 1;
	v->a[13723] = anon_sym_DOLLAR_BQUOTE;
	v->a[13724] = actions(2174);
	v->a[13725] = 1;
	v->a[13726] = sym__brace_start;
	v->a[13727] = actions(2386);
	v->a[13728] = 1;
	v->a[13729] = sym__special_character;
	v->a[13730] = actions(2388);
	v->a[13731] = 1;
	v->a[13732] = sym_test_operator;
	v->a[13733] = state(1270);
	v->a[13734] = 1;
	v->a[13735] = aux_sym__literal_repeat1;
	v->a[13736] = actions(1390);
	v->a[13737] = 2;
	v->a[13738] = sym_file_descriptor;
	v->a[13739] = aux_sym_heredoc_redirect_token1;
	small_parse_table_687(v);
}

void	small_parse_table_687(t_small_parse_table_array *v)
{
	v->a[13740] = actions(2384);
	v->a[13741] = 2;
	v->a[13742] = sym_raw_string;
	v->a[13743] = sym_word;
	v->a[13744] = state(428);
	v->a[13745] = 2;
	v->a[13746] = sym_concatenation;
	v->a[13747] = aux_sym_for_statement_repeat1;
	v->a[13748] = state(1222);
	v->a[13749] = 7;
	v->a[13750] = sym_arithmetic_expansion;
	v->a[13751] = sym_brace_expression;
	v->a[13752] = sym_string;
	v->a[13753] = sym_number;
	v->a[13754] = sym_simple_expansion;
	v->a[13755] = sym_expansion;
	v->a[13756] = sym_command_substitution;
	v->a[13757] = actions(1388);
	v->a[13758] = 19;
	v->a[13759] = anon_sym_PIPE;
	small_parse_table_688(v);
}

void	small_parse_table_688(t_small_parse_table_array *v)
{
	v->a[13760] = anon_sym_SEMI_SEMI;
	v->a[13761] = anon_sym_PIPE_AMP;
	v->a[13762] = anon_sym_AMP_AMP;
	v->a[13763] = anon_sym_PIPE_PIPE;
	v->a[13764] = anon_sym_LT;
	v->a[13765] = anon_sym_GT;
	v->a[13766] = anon_sym_GT_GT;
	v->a[13767] = anon_sym_AMP_GT;
	v->a[13768] = anon_sym_AMP_GT_GT;
	v->a[13769] = anon_sym_LT_AMP;
	v->a[13770] = anon_sym_GT_AMP;
	v->a[13771] = anon_sym_GT_PIPE;
	v->a[13772] = anon_sym_LT_AMP_DASH;
	v->a[13773] = anon_sym_GT_AMP_DASH;
	v->a[13774] = anon_sym_LT_LT;
	v->a[13775] = anon_sym_LT_LT_DASH;
	v->a[13776] = anon_sym_AMP;
	v->a[13777] = anon_sym_SEMI;
	v->a[13778] = 6;
	v->a[13779] = actions(3);
	small_parse_table_689(v);
}

void	small_parse_table_689(t_small_parse_table_array *v)
{
	v->a[13780] = 1;
	v->a[13781] = sym_comment;
	v->a[13782] = state(1217);
	v->a[13783] = 1;
	v->a[13784] = aux_sym__literal_repeat1;
	v->a[13785] = state(1289);
	v->a[13786] = 1;
	v->a[13787] = sym_concatenation;
	v->a[13788] = actions(1530);
	v->a[13789] = 5;
	v->a[13790] = sym_file_descriptor;
	v->a[13791] = sym_variable_name;
	v->a[13792] = sym_test_operator;
	v->a[13793] = sym__brace_start;
	v->a[13794] = aux_sym_heredoc_redirect_token1;
	v->a[13795] = state(1140);
	v->a[13796] = 7;
	v->a[13797] = sym_arithmetic_expansion;
	v->a[13798] = sym_brace_expression;
	v->a[13799] = sym_string;
	small_parse_table_690(v);
}

/* EOF small_parse_table_137.c */
