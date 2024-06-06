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
	v->a[22500] = sym__brace_start;
	v->a[22501] = aux_sym_heredoc_redirect_token1;
	v->a[22502] = actions(3104);
	v->a[22503] = 35;
	v->a[22504] = anon_sym_esac;
	v->a[22505] = anon_sym_PIPE;
	v->a[22506] = anon_sym_SEMI_SEMI;
	v->a[22507] = anon_sym_SEMI_AMP;
	v->a[22508] = anon_sym_SEMI_SEMI_AMP;
	v->a[22509] = anon_sym_PIPE_AMP;
	v->a[22510] = anon_sym_AMP_AMP;
	v->a[22511] = anon_sym_PIPE_PIPE;
	v->a[22512] = anon_sym_LT;
	v->a[22513] = anon_sym_GT;
	v->a[22514] = anon_sym_GT_GT;
	v->a[22515] = anon_sym_AMP_GT;
	v->a[22516] = anon_sym_AMP_GT_GT;
	v->a[22517] = anon_sym_LT_AMP;
	v->a[22518] = anon_sym_GT_AMP;
	v->a[22519] = anon_sym_GT_PIPE;
	small_parse_table_1126(v);
}

void	small_parse_table_1126(t_small_parse_table_array *v)
{
	v->a[22520] = anon_sym_LT_AMP_DASH;
	v->a[22521] = anon_sym_GT_AMP_DASH;
	v->a[22522] = anon_sym_LT_LT;
	v->a[22523] = anon_sym_LT_LT_DASH;
	v->a[22524] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22525] = anon_sym_AMP;
	v->a[22526] = anon_sym_DOLLAR;
	v->a[22527] = sym__special_character;
	v->a[22528] = anon_sym_DQUOTE;
	v->a[22529] = sym_raw_string;
	v->a[22530] = aux_sym_number_token1;
	v->a[22531] = aux_sym_number_token2;
	v->a[22532] = anon_sym_DOLLAR_LBRACE;
	v->a[22533] = anon_sym_DOLLAR_LPAREN;
	v->a[22534] = anon_sym_BQUOTE;
	v->a[22535] = anon_sym_DOLLAR_BQUOTE;
	v->a[22536] = aux_sym__simple_variable_name_token1;
	v->a[22537] = sym_word;
	v->a[22538] = anon_sym_SEMI;
	v->a[22539] = 6;
	small_parse_table_1127(v);
}

void	small_parse_table_1127(t_small_parse_table_array *v)
{
	v->a[22540] = actions(3);
	v->a[22541] = 1;
	v->a[22542] = sym_comment;
	v->a[22543] = actions(3056);
	v->a[22544] = 1;
	v->a[22545] = aux_sym_concatenation_token1;
	v->a[22546] = actions(3108);
	v->a[22547] = 1;
	v->a[22548] = sym__concat;
	v->a[22549] = state(515);
	v->a[22550] = 1;
	v->a[22551] = aux_sym_concatenation_repeat1;
	v->a[22552] = actions(2690);
	v->a[22553] = 5;
	v->a[22554] = sym_file_descriptor;
	v->a[22555] = sym_test_operator;
	v->a[22556] = sym__bare_dollar;
	v->a[22557] = sym__brace_start;
	v->a[22558] = aux_sym_heredoc_redirect_token1;
	v->a[22559] = actions(2688);
	small_parse_table_1128(v);
}

void	small_parse_table_1128(t_small_parse_table_array *v)
{
	v->a[22560] = 34;
	v->a[22561] = anon_sym_LPAREN;
	v->a[22562] = anon_sym_PIPE;
	v->a[22563] = anon_sym_SEMI_SEMI;
	v->a[22564] = anon_sym_SEMI_AMP;
	v->a[22565] = anon_sym_SEMI_SEMI_AMP;
	v->a[22566] = anon_sym_PIPE_AMP;
	v->a[22567] = anon_sym_AMP_AMP;
	v->a[22568] = anon_sym_PIPE_PIPE;
	v->a[22569] = anon_sym_LT;
	v->a[22570] = anon_sym_GT;
	v->a[22571] = anon_sym_GT_GT;
	v->a[22572] = anon_sym_AMP_GT;
	v->a[22573] = anon_sym_AMP_GT_GT;
	v->a[22574] = anon_sym_LT_AMP;
	v->a[22575] = anon_sym_GT_AMP;
	v->a[22576] = anon_sym_GT_PIPE;
	v->a[22577] = anon_sym_LT_AMP_DASH;
	v->a[22578] = anon_sym_GT_AMP_DASH;
	v->a[22579] = anon_sym_LT_LT;
	small_parse_table_1129(v);
}

void	small_parse_table_1129(t_small_parse_table_array *v)
{
	v->a[22580] = anon_sym_LT_LT_DASH;
	v->a[22581] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22582] = anon_sym_AMP;
	v->a[22583] = anon_sym_DOLLAR;
	v->a[22584] = sym__special_character;
	v->a[22585] = anon_sym_DQUOTE;
	v->a[22586] = sym_raw_string;
	v->a[22587] = aux_sym_number_token1;
	v->a[22588] = aux_sym_number_token2;
	v->a[22589] = anon_sym_DOLLAR_LBRACE;
	v->a[22590] = anon_sym_DOLLAR_LPAREN;
	v->a[22591] = anon_sym_BQUOTE;
	v->a[22592] = anon_sym_DOLLAR_BQUOTE;
	v->a[22593] = sym_word;
	v->a[22594] = anon_sym_SEMI;
	v->a[22595] = 7;
	v->a[22596] = actions(3);
	v->a[22597] = 1;
	v->a[22598] = sym_comment;
	v->a[22599] = actions(3056);
	small_parse_table_1130(v);
}

/* EOF small_parse_table_225.c */
