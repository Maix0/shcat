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
	v->a[11500] = actions(1274);
	v->a[11501] = 1;
	v->a[11502] = sym__bare_dollar;
	v->a[11503] = actions(1276);
	v->a[11504] = 1;
	v->a[11505] = sym__brace_start;
	v->a[11506] = actions(1428);
	v->a[11507] = 1;
	v->a[11508] = sym__special_character;
	v->a[11509] = actions(1430);
	v->a[11510] = 1;
	v->a[11511] = sym_test_operator;
	v->a[11512] = state(406);
	v->a[11513] = 1;
	v->a[11514] = aux_sym_command_repeat2;
	v->a[11515] = state(1232);
	v->a[11516] = 1;
	v->a[11517] = aux_sym__literal_repeat1;
	v->a[11518] = state(1293);
	v->a[11519] = 1;
	small_parse_table_576(v);
}

void	small_parse_table_576(t_small_parse_table_array *v)
{
	v->a[11520] = sym_concatenation;
	v->a[11521] = actions(1280);
	v->a[11522] = 2;
	v->a[11523] = sym_file_descriptor;
	v->a[11524] = aux_sym_heredoc_redirect_token1;
	v->a[11525] = actions(1426);
	v->a[11526] = 2;
	v->a[11527] = sym_raw_string;
	v->a[11528] = sym_word;
	v->a[11529] = state(1146);
	v->a[11530] = 7;
	v->a[11531] = sym_arithmetic_expansion;
	v->a[11532] = sym_brace_expression;
	v->a[11533] = sym_string;
	v->a[11534] = sym_number;
	v->a[11535] = sym_simple_expansion;
	v->a[11536] = sym_expansion;
	v->a[11537] = sym_command_substitution;
	v->a[11538] = actions(1278);
	v->a[11539] = 19;
	small_parse_table_577(v);
}

void	small_parse_table_577(t_small_parse_table_array *v)
{
	v->a[11540] = anon_sym_PIPE;
	v->a[11541] = anon_sym_SEMI_SEMI;
	v->a[11542] = anon_sym_PIPE_AMP;
	v->a[11543] = anon_sym_AMP_AMP;
	v->a[11544] = anon_sym_PIPE_PIPE;
	v->a[11545] = anon_sym_LT;
	v->a[11546] = anon_sym_GT;
	v->a[11547] = anon_sym_GT_GT;
	v->a[11548] = anon_sym_AMP_GT;
	v->a[11549] = anon_sym_AMP_GT_GT;
	v->a[11550] = anon_sym_LT_AMP;
	v->a[11551] = anon_sym_GT_AMP;
	v->a[11552] = anon_sym_GT_PIPE;
	v->a[11553] = anon_sym_LT_AMP_DASH;
	v->a[11554] = anon_sym_GT_AMP_DASH;
	v->a[11555] = anon_sym_LT_LT;
	v->a[11556] = anon_sym_LT_LT_DASH;
	v->a[11557] = anon_sym_AMP;
	v->a[11558] = anon_sym_SEMI;
	v->a[11559] = 19;
	small_parse_table_578(v);
}

void	small_parse_table_578(t_small_parse_table_array *v)
{
	v->a[11560] = actions(3);
	v->a[11561] = 1;
	v->a[11562] = sym_comment;
	v->a[11563] = actions(2305);
	v->a[11564] = 1;
	v->a[11565] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[11566] = actions(2307);
	v->a[11567] = 1;
	v->a[11568] = anon_sym_DOLLAR;
	v->a[11569] = actions(2309);
	v->a[11570] = 1;
	v->a[11571] = sym__special_character;
	v->a[11572] = actions(2311);
	v->a[11573] = 1;
	v->a[11574] = anon_sym_DQUOTE;
	v->a[11575] = actions(2313);
	v->a[11576] = 1;
	v->a[11577] = aux_sym_number_token1;
	v->a[11578] = actions(2315);
	v->a[11579] = 1;
	small_parse_table_579(v);
}

void	small_parse_table_579(t_small_parse_table_array *v)
{
	v->a[11580] = aux_sym_number_token2;
	v->a[11581] = actions(2317);
	v->a[11582] = 1;
	v->a[11583] = anon_sym_DOLLAR_LBRACE;
	v->a[11584] = actions(2319);
	v->a[11585] = 1;
	v->a[11586] = anon_sym_DOLLAR_LPAREN;
	v->a[11587] = actions(2321);
	v->a[11588] = 1;
	v->a[11589] = anon_sym_BQUOTE;
	v->a[11590] = actions(2323);
	v->a[11591] = 1;
	v->a[11592] = anon_sym_DOLLAR_BQUOTE;
	v->a[11593] = actions(2325);
	v->a[11594] = 1;
	v->a[11595] = sym_test_operator;
	v->a[11596] = actions(2327);
	v->a[11597] = 1;
	v->a[11598] = sym__brace_start;
	v->a[11599] = state(1321);
	small_parse_table_580(v);
}

/* EOF small_parse_table_115.c */
