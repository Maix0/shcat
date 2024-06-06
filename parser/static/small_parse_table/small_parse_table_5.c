/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_5.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_25(t_small_parse_table_array *v)
{
	v->a[500] = 1;
	v->a[501] = aux_sym__literal_repeat1;
	v->a[502] = actions(723);
	v->a[503] = 2;
	v->a[504] = sym_raw_string;
	v->a[505] = sym_word;
	v->a[506] = actions(822);
	v->a[507] = 2;
	v->a[508] = sym_file_descriptor;
	v->a[509] = aux_sym_heredoc_redirect_token1;
	v->a[510] = state(258);
	v->a[511] = 3;
	v->a[512] = sym_variable_assignment;
	v->a[513] = sym_concatenation;
	v->a[514] = aux_sym_declaration_command_repeat1;
	v->a[515] = state(503);
	v->a[516] = 7;
	v->a[517] = sym_arithmetic_expansion;
	v->a[518] = sym_brace_expression;
	v->a[519] = sym_string;
	small_parse_table_26(v);
}

void	small_parse_table_26(t_small_parse_table_array *v)
{
	v->a[520] = sym_number;
	v->a[521] = sym_simple_expansion;
	v->a[522] = sym_expansion;
	v->a[523] = sym_command_substitution;
	v->a[524] = actions(820);
	v->a[525] = 22;
	v->a[526] = anon_sym_esac;
	v->a[527] = anon_sym_PIPE;
	v->a[528] = anon_sym_SEMI_SEMI;
	v->a[529] = anon_sym_SEMI_AMP;
	v->a[530] = anon_sym_SEMI_SEMI_AMP;
	v->a[531] = anon_sym_PIPE_AMP;
	v->a[532] = anon_sym_AMP_AMP;
	v->a[533] = anon_sym_PIPE_PIPE;
	v->a[534] = anon_sym_LT;
	v->a[535] = anon_sym_GT;
	v->a[536] = anon_sym_GT_GT;
	v->a[537] = anon_sym_AMP_GT;
	v->a[538] = anon_sym_AMP_GT_GT;
	v->a[539] = anon_sym_LT_AMP;
	small_parse_table_27(v);
}

void	small_parse_table_27(t_small_parse_table_array *v)
{
	v->a[540] = anon_sym_GT_AMP;
	v->a[541] = anon_sym_GT_PIPE;
	v->a[542] = anon_sym_LT_AMP_DASH;
	v->a[543] = anon_sym_GT_AMP_DASH;
	v->a[544] = anon_sym_LT_LT;
	v->a[545] = anon_sym_LT_LT_DASH;
	v->a[546] = anon_sym_AMP;
	v->a[547] = anon_sym_SEMI;
	v->a[548] = 6;
	v->a[549] = actions(3);
	v->a[550] = 1;
	v->a[551] = sym_comment;
	v->a[552] = actions(818);
	v->a[553] = 1;
	v->a[554] = sym_variable_name;
	v->a[555] = actions(814);
	v->a[556] = 2;
	v->a[557] = aux_sym__simple_variable_name_token1;
	v->a[558] = aux_sym__multiline_variable_name_token1;
	v->a[559] = actions(828);
	small_parse_table_28(v);
}

void	small_parse_table_28(t_small_parse_table_array *v)
{
	v->a[560] = 4;
	v->a[561] = sym_file_descriptor;
	v->a[562] = sym_test_operator;
	v->a[563] = sym__bare_dollar;
	v->a[564] = sym__brace_start;
	v->a[565] = actions(812);
	v->a[566] = 9;
	v->a[567] = anon_sym_BANG;
	v->a[568] = anon_sym_DASH;
	v->a[569] = anon_sym_STAR;
	v->a[570] = anon_sym_QMARK;
	v->a[571] = anon_sym_DOLLAR;
	v->a[572] = anon_sym_POUND;
	v->a[573] = anon_sym_AT;
	v->a[574] = anon_sym_0;
	v->a[575] = anon_sym__;
	v->a[576] = actions(826);
	v->a[577] = 35;
	v->a[578] = anon_sym_esac;
	v->a[579] = anon_sym_LPAREN;
	small_parse_table_29(v);
}

void	small_parse_table_29(t_small_parse_table_array *v)
{
	v->a[580] = anon_sym_PIPE;
	v->a[581] = anon_sym_SEMI_SEMI;
	v->a[582] = anon_sym_SEMI_AMP;
	v->a[583] = anon_sym_SEMI_SEMI_AMP;
	v->a[584] = anon_sym_PIPE_AMP;
	v->a[585] = anon_sym_AMP_AMP;
	v->a[586] = anon_sym_PIPE_PIPE;
	v->a[587] = anon_sym_LT;
	v->a[588] = anon_sym_GT;
	v->a[589] = anon_sym_GT_GT;
	v->a[590] = anon_sym_AMP_GT;
	v->a[591] = anon_sym_AMP_GT_GT;
	v->a[592] = anon_sym_LT_AMP;
	v->a[593] = anon_sym_GT_AMP;
	v->a[594] = anon_sym_GT_PIPE;
	v->a[595] = anon_sym_LT_AMP_DASH;
	v->a[596] = anon_sym_GT_AMP_DASH;
	v->a[597] = anon_sym_LT_LT;
	v->a[598] = anon_sym_LT_LT_DASH;
	v->a[599] = aux_sym_heredoc_redirect_token1;
	small_parse_table_30(v);
}

/* EOF small_parse_table_5.c */
