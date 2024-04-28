/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_115.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_575(t_small_parse_table_array *v)
{
	v->a[11500] = 2;
	v->a[11501] = aux_sym__simple_variable_name_token1;
	v->a[11502] = aux_sym__multiline_variable_name_token1;
	v->a[11503] = actions(1241);
	v->a[11504] = 3;
	v->a[11505] = sym_file_descriptor;
	v->a[11506] = sym_test_operator;
	v->a[11507] = sym__brace_start;
	v->a[11508] = actions(2963);
	v->a[11509] = 9;
	v->a[11510] = anon_sym_DASH;
	v->a[11511] = anon_sym_STAR;
	v->a[11512] = anon_sym_BANG;
	v->a[11513] = anon_sym_QMARK;
	v->a[11514] = anon_sym_DOLLAR;
	v->a[11515] = anon_sym_POUND;
	v->a[11516] = anon_sym_AT2;
	v->a[11517] = anon_sym_0;
	v->a[11518] = anon_sym__;
	v->a[11519] = actions(1239);
	small_parse_table_576(v);
}

void	small_parse_table_576(t_small_parse_table_array *v)
{
	v->a[11520] = 38;
	v->a[11521] = anon_sym_LPAREN_LPAREN;
	v->a[11522] = anon_sym_SEMI;
	v->a[11523] = anon_sym_PIPE_PIPE;
	v->a[11524] = anon_sym_AMP_AMP;
	v->a[11525] = anon_sym_PIPE;
	v->a[11526] = anon_sym_AMP;
	v->a[11527] = anon_sym_LT;
	v->a[11528] = anon_sym_GT;
	v->a[11529] = anon_sym_LT_LT;
	v->a[11530] = anon_sym_GT_GT;
	v->a[11531] = anon_sym_SEMI_SEMI;
	v->a[11532] = anon_sym_SEMI_AMP;
	v->a[11533] = anon_sym_SEMI_SEMI_AMP;
	v->a[11534] = anon_sym_PIPE_AMP;
	v->a[11535] = anon_sym_AMP_GT;
	v->a[11536] = anon_sym_AMP_GT_GT;
	v->a[11537] = anon_sym_LT_AMP;
	v->a[11538] = anon_sym_GT_AMP;
	v->a[11539] = anon_sym_GT_PIPE;
	small_parse_table_577(v);
}

void	small_parse_table_577(t_small_parse_table_array *v)
{
	v->a[11540] = anon_sym_LT_AMP_DASH;
	v->a[11541] = anon_sym_GT_AMP_DASH;
	v->a[11542] = anon_sym_LT_LT_DASH;
	v->a[11543] = aux_sym_heredoc_redirect_token1;
	v->a[11544] = anon_sym_LT_LT_LT;
	v->a[11545] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[11546] = anon_sym_DOLLAR_LBRACK;
	v->a[11547] = sym__special_character;
	v->a[11548] = sym_raw_string;
	v->a[11549] = sym_ansi_c_string;
	v->a[11550] = aux_sym_number_token1;
	v->a[11551] = aux_sym_number_token2;
	v->a[11552] = anon_sym_DOLLAR_LBRACE;
	v->a[11553] = anon_sym_DOLLAR_LPAREN;
	v->a[11554] = anon_sym_BQUOTE;
	v->a[11555] = anon_sym_DOLLAR_BQUOTE;
	v->a[11556] = anon_sym_LT_LPAREN;
	v->a[11557] = anon_sym_GT_LPAREN;
	v->a[11558] = sym_word;
	v->a[11559] = 6;
	small_parse_table_578(v);
}

void	small_parse_table_578(t_small_parse_table_array *v)
{
	v->a[11560] = actions(3);
	v->a[11561] = 1;
	v->a[11562] = sym_comment;
	v->a[11563] = state(1606);
	v->a[11564] = 1;
	v->a[11565] = aux_sym__literal_repeat1;
	v->a[11566] = state(1767);
	v->a[11567] = 1;
	v->a[11568] = sym_concatenation;
	v->a[11569] = actions(2496);
	v->a[11570] = 5;
	v->a[11571] = sym_file_descriptor;
	v->a[11572] = sym_variable_name;
	v->a[11573] = sym_test_operator;
	v->a[11574] = sym__brace_start;
	v->a[11575] = aux_sym_heredoc_redirect_token1;
	v->a[11576] = state(1275);
	v->a[11577] = 9;
	v->a[11578] = sym_arithmetic_expansion;
	v->a[11579] = sym_brace_expression;
	small_parse_table_579(v);
}

void	small_parse_table_579(t_small_parse_table_array *v)
{
	v->a[11580] = sym_string;
	v->a[11581] = sym_translated_string;
	v->a[11582] = sym_number;
	v->a[11583] = sym_simple_expansion;
	v->a[11584] = sym_expansion;
	v->a[11585] = sym_command_substitution;
	v->a[11586] = sym_process_substitution;
	v->a[11587] = actions(2494);
	v->a[11588] = 39;
	v->a[11589] = anon_sym_LPAREN_LPAREN;
	v->a[11590] = anon_sym_SEMI;
	v->a[11591] = anon_sym_PIPE_PIPE;
	v->a[11592] = anon_sym_AMP_AMP;
	v->a[11593] = anon_sym_PIPE;
	v->a[11594] = anon_sym_AMP;
	v->a[11595] = anon_sym_LT;
	v->a[11596] = anon_sym_GT;
	v->a[11597] = anon_sym_LT_LT;
	v->a[11598] = anon_sym_GT_GT;
	v->a[11599] = anon_sym_SEMI_SEMI;
	small_parse_table_580(v);
}

/* EOF small_parse_table_115.c */
