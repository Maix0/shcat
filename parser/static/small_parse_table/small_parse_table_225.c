/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_225.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1125(t_small_parse_table_array *v)
{
	v->a[22500] = sym_variable_assignment;
	v->a[22501] = aux_sym__variable_assignments_repeat1;
	v->a[22502] = actions(688);
	v->a[22503] = 3;
	v->a[22504] = aux_sym_heredoc_redirect_token1;
	v->a[22505] = anon_sym_AMP;
	v->a[22506] = anon_sym_SEMI;
	v->a[22507] = state(1176);
	v->a[22508] = 3;
	v->a[22509] = sym_file_redirect;
	v->a[22510] = sym_heredoc_redirect;
	v->a[22511] = aux_sym_redirected_statement_repeat1;
	v->a[22512] = actions(678);
	v->a[22513] = 17;
	v->a[22514] = anon_sym_LT;
	v->a[22515] = anon_sym_GT;
	v->a[22516] = anon_sym_GT_GT;
	v->a[22517] = anon_sym_LT_AMP;
	v->a[22518] = anon_sym_GT_AMP;
	v->a[22519] = anon_sym_GT_PIPE;
	small_parse_table_1126(v);
}

void	small_parse_table_1126(t_small_parse_table_array *v)
{
	v->a[22520] = anon_sym_LT_AMP_DASH;
	v->a[22521] = anon_sym_GT_AMP_DASH;
	v->a[22522] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22523] = anon_sym_DOLLAR;
	v->a[22524] = anon_sym_DQUOTE;
	v->a[22525] = sym_raw_string;
	v->a[22526] = sym_number;
	v->a[22527] = anon_sym_DOLLAR_LBRACE;
	v->a[22528] = anon_sym_DOLLAR_LPAREN;
	v->a[22529] = anon_sym_BQUOTE;
	v->a[22530] = sym_word;
	v->a[22531] = 14;
	v->a[22532] = actions(3);
	v->a[22533] = 1;
	v->a[22534] = sym_comment;
	v->a[22535] = actions(459);
	v->a[22536] = 1;
	v->a[22537] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22538] = actions(461);
	v->a[22539] = 1;
	small_parse_table_1127(v);
}

void	small_parse_table_1127(t_small_parse_table_array *v)
{
	v->a[22540] = anon_sym_DOLLAR;
	v->a[22541] = actions(463);
	v->a[22542] = 1;
	v->a[22543] = anon_sym_DQUOTE;
	v->a[22544] = actions(465);
	v->a[22545] = 1;
	v->a[22546] = anon_sym_DOLLAR_LBRACE;
	v->a[22547] = actions(467);
	v->a[22548] = 1;
	v->a[22549] = anon_sym_DOLLAR_LPAREN;
	v->a[22550] = actions(469);
	v->a[22551] = 1;
	v->a[22552] = anon_sym_BQUOTE;
	v->a[22553] = actions(473);
	v->a[22554] = 1;
	v->a[22555] = sym__bare_dollar;
	v->a[22556] = actions(571);
	v->a[22557] = 1;
	v->a[22558] = sym_file_descriptor;
	v->a[22559] = state(224);
	small_parse_table_1128(v);
}

void	small_parse_table_1128(t_small_parse_table_array *v)
{
	v->a[22560] = 1;
	v->a[22561] = aux_sym_command_repeat2;
	v->a[22562] = state(718);
	v->a[22563] = 1;
	v->a[22564] = sym_concatenation;
	v->a[22565] = actions(511);
	v->a[22566] = 3;
	v->a[22567] = sym_raw_string;
	v->a[22568] = sym_number;
	v->a[22569] = sym_word;
	v->a[22570] = state(493);
	v->a[22571] = 5;
	v->a[22572] = sym_arithmetic_expansion;
	v->a[22573] = sym_string;
	v->a[22574] = sym_simple_expansion;
	v->a[22575] = sym_expansion;
	v->a[22576] = sym_command_substitution;
	v->a[22577] = actions(569);
	v->a[22578] = 17;
	v->a[22579] = anon_sym_PIPE;
	small_parse_table_1129(v);
}

void	small_parse_table_1129(t_small_parse_table_array *v)
{
	v->a[22580] = anon_sym_SEMI_SEMI;
	v->a[22581] = anon_sym_AMP_AMP;
	v->a[22582] = anon_sym_PIPE_PIPE;
	v->a[22583] = anon_sym_LT;
	v->a[22584] = anon_sym_GT;
	v->a[22585] = anon_sym_GT_GT;
	v->a[22586] = anon_sym_LT_AMP;
	v->a[22587] = anon_sym_GT_AMP;
	v->a[22588] = anon_sym_GT_PIPE;
	v->a[22589] = anon_sym_LT_AMP_DASH;
	v->a[22590] = anon_sym_GT_AMP_DASH;
	v->a[22591] = anon_sym_LT_LT;
	v->a[22592] = anon_sym_LT_LT_DASH;
	v->a[22593] = aux_sym_heredoc_redirect_token1;
	v->a[22594] = anon_sym_AMP;
	v->a[22595] = anon_sym_SEMI;
	v->a[22596] = 12;
	v->a[22597] = actions(3);
	v->a[22598] = 1;
	v->a[22599] = sym_comment;
	small_parse_table_1130(v);
}

/* EOF small_parse_table_225.c */
