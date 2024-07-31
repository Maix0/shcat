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
	v->a[22500] = anon_sym_GT_AMP;
	v->a[22501] = anon_sym_GT_PIPE;
	v->a[22502] = anon_sym_LT_GT;
	v->a[22503] = anon_sym_LT_LT;
	v->a[22504] = anon_sym_LT_LT_DASH;
	v->a[22505] = aux_sym_heredoc_redirect_token1;
	v->a[22506] = anon_sym_SEMI;
	v->a[22507] = 13;
	v->a[22508] = actions(3);
	v->a[22509] = 1;
	v->a[22510] = sym_comment;
	v->a[22511] = actions(53);
	v->a[22512] = 1;
	v->a[22513] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22514] = actions(55);
	v->a[22515] = 1;
	v->a[22516] = anon_sym_DOLLAR;
	v->a[22517] = actions(57);
	v->a[22518] = 1;
	v->a[22519] = anon_sym_DQUOTE;
	small_parse_table_1126(v);
}

void	small_parse_table_1126(t_small_parse_table_array *v)
{
	v->a[22520] = actions(61);
	v->a[22521] = 1;
	v->a[22522] = anon_sym_DOLLAR_LBRACE;
	v->a[22523] = actions(63);
	v->a[22524] = 1;
	v->a[22525] = anon_sym_DOLLAR_LPAREN;
	v->a[22526] = actions(65);
	v->a[22527] = 1;
	v->a[22528] = anon_sym_BQUOTE;
	v->a[22529] = actions(535);
	v->a[22530] = 1;
	v->a[22531] = sym__bare_dollar;
	v->a[22532] = state(268);
	v->a[22533] = 1;
	v->a[22534] = aux_sym_command_repeat2;
	v->a[22535] = state(614);
	v->a[22536] = 1;
	v->a[22537] = sym_concatenation;
	v->a[22538] = actions(778);
	v->a[22539] = 3;
	small_parse_table_1127(v);
}

void	small_parse_table_1127(t_small_parse_table_array *v)
{
	v->a[22540] = sym_raw_string;
	v->a[22541] = sym_number;
	v->a[22542] = sym_word;
	v->a[22543] = state(449);
	v->a[22544] = 5;
	v->a[22545] = sym_arithmetic_expansion;
	v->a[22546] = sym_string;
	v->a[22547] = sym_simple_expansion;
	v->a[22548] = sym_expansion;
	v->a[22549] = sym_command_substitution;
	v->a[22550] = actions(533);
	v->a[22551] = 15;
	v->a[22552] = anon_sym_PIPE;
	v->a[22553] = anon_sym_SEMI_SEMI;
	v->a[22554] = anon_sym_AMP_AMP;
	v->a[22555] = anon_sym_PIPE_PIPE;
	v->a[22556] = anon_sym_LT;
	v->a[22557] = anon_sym_GT;
	v->a[22558] = anon_sym_GT_GT;
	v->a[22559] = anon_sym_LT_AMP;
	small_parse_table_1128(v);
}

void	small_parse_table_1128(t_small_parse_table_array *v)
{
	v->a[22560] = anon_sym_GT_AMP;
	v->a[22561] = anon_sym_GT_PIPE;
	v->a[22562] = anon_sym_LT_GT;
	v->a[22563] = anon_sym_LT_LT;
	v->a[22564] = anon_sym_LT_LT_DASH;
	v->a[22565] = aux_sym_heredoc_redirect_token1;
	v->a[22566] = anon_sym_SEMI;
	v->a[22567] = 12;
	v->a[22568] = actions(3);
	v->a[22569] = 1;
	v->a[22570] = sym_comment;
	v->a[22571] = actions(489);
	v->a[22572] = 1;
	v->a[22573] = ts_builtin_sym_end;
	v->a[22574] = actions(803);
	v->a[22575] = 1;
	v->a[22576] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22577] = actions(805);
	v->a[22578] = 1;
	v->a[22579] = anon_sym_DOLLAR;
	small_parse_table_1129(v);
}

void	small_parse_table_1129(t_small_parse_table_array *v)
{
	v->a[22580] = actions(807);
	v->a[22581] = 1;
	v->a[22582] = anon_sym_DQUOTE;
	v->a[22583] = actions(809);
	v->a[22584] = 1;
	v->a[22585] = anon_sym_DOLLAR_LBRACE;
	v->a[22586] = actions(811);
	v->a[22587] = 1;
	v->a[22588] = anon_sym_DOLLAR_LPAREN;
	v->a[22589] = actions(813);
	v->a[22590] = 1;
	v->a[22591] = anon_sym_BQUOTE;
	v->a[22592] = state(258);
	v->a[22593] = 2;
	v->a[22594] = sym_concatenation;
	v->a[22595] = aux_sym_for_statement_repeat1;
	v->a[22596] = actions(801);
	v->a[22597] = 3;
	v->a[22598] = sym_raw_string;
	v->a[22599] = sym_number;
	small_parse_table_1130(v);
}

/* EOF small_parse_table_225.c */
