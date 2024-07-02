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
	v->a[22500] = sym_heredoc_redirect;
	v->a[22501] = aux_sym_redirected_statement_repeat1;
	v->a[22502] = actions(690);
	v->a[22503] = 16;
	v->a[22504] = anon_sym_LT;
	v->a[22505] = anon_sym_GT;
	v->a[22506] = anon_sym_GT_GT;
	v->a[22507] = anon_sym_LT_AMP;
	v->a[22508] = anon_sym_GT_AMP;
	v->a[22509] = anon_sym_GT_PIPE;
	v->a[22510] = anon_sym_LT_GT;
	v->a[22511] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22512] = anon_sym_DOLLAR;
	v->a[22513] = anon_sym_DQUOTE;
	v->a[22514] = sym_raw_string;
	v->a[22515] = sym_number;
	v->a[22516] = anon_sym_DOLLAR_LBRACE;
	v->a[22517] = anon_sym_DOLLAR_LPAREN;
	v->a[22518] = anon_sym_BQUOTE;
	v->a[22519] = sym_word;
	small_parse_table_1126(v);
}

void	small_parse_table_1126(t_small_parse_table_array *v)
{
	v->a[22520] = 12;
	v->a[22521] = actions(3);
	v->a[22522] = 1;
	v->a[22523] = sym_comment;
	v->a[22524] = actions(770);
	v->a[22525] = 1;
	v->a[22526] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22527] = actions(772);
	v->a[22528] = 1;
	v->a[22529] = anon_sym_DOLLAR;
	v->a[22530] = actions(774);
	v->a[22531] = 1;
	v->a[22532] = anon_sym_DQUOTE;
	v->a[22533] = actions(776);
	v->a[22534] = 1;
	v->a[22535] = anon_sym_DOLLAR_LBRACE;
	v->a[22536] = actions(778);
	v->a[22537] = 1;
	v->a[22538] = anon_sym_DOLLAR_LPAREN;
	v->a[22539] = actions(780);
	small_parse_table_1127(v);
}

void	small_parse_table_1127(t_small_parse_table_array *v)
{
	v->a[22540] = 1;
	v->a[22541] = anon_sym_BQUOTE;
	v->a[22542] = actions(511);
	v->a[22543] = 2;
	v->a[22544] = sym_file_descriptor;
	v->a[22545] = ts_builtin_sym_end;
	v->a[22546] = state(259);
	v->a[22547] = 2;
	v->a[22548] = sym_concatenation;
	v->a[22549] = aux_sym_for_statement_repeat1;
	v->a[22550] = actions(768);
	v->a[22551] = 3;
	v->a[22552] = sym_raw_string;
	v->a[22553] = sym_number;
	v->a[22554] = sym_word;
	v->a[22555] = state(525);
	v->a[22556] = 5;
	v->a[22557] = sym_arithmetic_expansion;
	v->a[22558] = sym_string;
	v->a[22559] = sym_simple_expansion;
	small_parse_table_1128(v);
}

void	small_parse_table_1128(t_small_parse_table_array *v)
{
	v->a[22560] = sym_expansion;
	v->a[22561] = sym_command_substitution;
	v->a[22562] = actions(509);
	v->a[22563] = 16;
	v->a[22564] = anon_sym_PIPE;
	v->a[22565] = anon_sym_SEMI_SEMI;
	v->a[22566] = anon_sym_AMP_AMP;
	v->a[22567] = anon_sym_PIPE_PIPE;
	v->a[22568] = anon_sym_LT;
	v->a[22569] = anon_sym_GT;
	v->a[22570] = anon_sym_GT_GT;
	v->a[22571] = anon_sym_LT_AMP;
	v->a[22572] = anon_sym_GT_AMP;
	v->a[22573] = anon_sym_GT_PIPE;
	v->a[22574] = anon_sym_LT_GT;
	v->a[22575] = anon_sym_LT_LT;
	v->a[22576] = anon_sym_LT_LT_DASH;
	v->a[22577] = aux_sym_heredoc_redirect_token1;
	v->a[22578] = anon_sym_AMP;
	v->a[22579] = anon_sym_SEMI;
	small_parse_table_1129(v);
}

void	small_parse_table_1129(t_small_parse_table_array *v)
{
	v->a[22580] = 3;
	v->a[22581] = actions(680);
	v->a[22582] = 1;
	v->a[22583] = sym_comment;
	v->a[22584] = actions(782);
	v->a[22585] = 13;
	v->a[22586] = anon_sym_PIPE;
	v->a[22587] = anon_sym_EQ;
	v->a[22588] = anon_sym_LT;
	v->a[22589] = anon_sym_GT;
	v->a[22590] = anon_sym_GT_GT;
	v->a[22591] = anon_sym_LT_LT;
	v->a[22592] = anon_sym_CARET;
	v->a[22593] = anon_sym_AMP;
	v->a[22594] = anon_sym_PLUS;
	v->a[22595] = anon_sym_DASH;
	v->a[22596] = anon_sym_STAR;
	v->a[22597] = anon_sym_SLASH;
	v->a[22598] = anon_sym_PERCENT;
	v->a[22599] = actions(784);
	small_parse_table_1130(v);
}

/* EOF small_parse_table_225.c */
