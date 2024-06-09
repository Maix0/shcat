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
	v->a[22500] = anon_sym_LT_AMP_DASH;
	v->a[22501] = anon_sym_GT_AMP_DASH;
	v->a[22502] = anon_sym_LT_LT;
	v->a[22503] = anon_sym_LT_LT_DASH;
	v->a[22504] = aux_sym_heredoc_redirect_token1;
	v->a[22505] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22506] = anon_sym_AMP;
	v->a[22507] = anon_sym_DOLLAR;
	v->a[22508] = anon_sym_DQUOTE;
	v->a[22509] = sym_raw_string;
	v->a[22510] = aux_sym_number_token1;
	v->a[22511] = aux_sym_number_token2;
	v->a[22512] = anon_sym_DOLLAR_LBRACE;
	v->a[22513] = anon_sym_DOLLAR_LPAREN;
	v->a[22514] = anon_sym_BQUOTE;
	v->a[22515] = sym_word;
	v->a[22516] = anon_sym_SEMI;
	v->a[22517] = 16;
	v->a[22518] = actions(3);
	v->a[22519] = 1;
	small_parse_table_1126(v);
}

void	small_parse_table_1126(t_small_parse_table_array *v)
{
	v->a[22520] = sym_comment;
	v->a[22521] = actions(457);
	v->a[22522] = 1;
	v->a[22523] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22524] = actions(459);
	v->a[22525] = 1;
	v->a[22526] = anon_sym_DOLLAR;
	v->a[22527] = actions(461);
	v->a[22528] = 1;
	v->a[22529] = anon_sym_DQUOTE;
	v->a[22530] = actions(463);
	v->a[22531] = 1;
	v->a[22532] = aux_sym_number_token1;
	v->a[22533] = actions(465);
	v->a[22534] = 1;
	v->a[22535] = aux_sym_number_token2;
	v->a[22536] = actions(467);
	v->a[22537] = 1;
	v->a[22538] = anon_sym_DOLLAR_LBRACE;
	v->a[22539] = actions(469);
	small_parse_table_1127(v);
}

void	small_parse_table_1127(t_small_parse_table_array *v)
{
	v->a[22540] = 1;
	v->a[22541] = anon_sym_DOLLAR_LPAREN;
	v->a[22542] = actions(471);
	v->a[22543] = 1;
	v->a[22544] = anon_sym_BQUOTE;
	v->a[22545] = actions(475);
	v->a[22546] = 1;
	v->a[22547] = sym__bare_dollar;
	v->a[22548] = actions(559);
	v->a[22549] = 1;
	v->a[22550] = sym_file_descriptor;
	v->a[22551] = state(206);
	v->a[22552] = 1;
	v->a[22553] = aux_sym_command_repeat2;
	v->a[22554] = state(717);
	v->a[22555] = 1;
	v->a[22556] = sym_concatenation;
	v->a[22557] = actions(453);
	v->a[22558] = 2;
	v->a[22559] = sym_raw_string;
	small_parse_table_1128(v);
}

void	small_parse_table_1128(t_small_parse_table_array *v)
{
	v->a[22560] = sym_word;
	v->a[22561] = state(358);
	v->a[22562] = 6;
	v->a[22563] = sym_arithmetic_expansion;
	v->a[22564] = sym_string;
	v->a[22565] = sym_number;
	v->a[22566] = sym_simple_expansion;
	v->a[22567] = sym_expansion;
	v->a[22568] = sym_command_substitution;
	v->a[22569] = actions(557);
	v->a[22570] = 20;
	v->a[22571] = anon_sym_esac;
	v->a[22572] = anon_sym_PIPE;
	v->a[22573] = anon_sym_SEMI_SEMI;
	v->a[22574] = anon_sym_AMP_AMP;
	v->a[22575] = anon_sym_PIPE_PIPE;
	v->a[22576] = anon_sym_LT;
	v->a[22577] = anon_sym_GT;
	v->a[22578] = anon_sym_GT_GT;
	v->a[22579] = anon_sym_AMP_GT;
	small_parse_table_1129(v);
}

void	small_parse_table_1129(t_small_parse_table_array *v)
{
	v->a[22580] = anon_sym_AMP_GT_GT;
	v->a[22581] = anon_sym_LT_AMP;
	v->a[22582] = anon_sym_GT_AMP;
	v->a[22583] = anon_sym_GT_PIPE;
	v->a[22584] = anon_sym_LT_AMP_DASH;
	v->a[22585] = anon_sym_GT_AMP_DASH;
	v->a[22586] = anon_sym_LT_LT;
	v->a[22587] = anon_sym_LT_LT_DASH;
	v->a[22588] = aux_sym_heredoc_redirect_token1;
	v->a[22589] = anon_sym_AMP;
	v->a[22590] = anon_sym_SEMI;
	v->a[22591] = 6;
	v->a[22592] = actions(3);
	v->a[22593] = 1;
	v->a[22594] = sym_comment;
	v->a[22595] = actions(421);
	v->a[22596] = 1;
	v->a[22597] = sym_variable_name;
	v->a[22598] = actions(413);
	v->a[22599] = 2;
	small_parse_table_1130(v);
}

/* EOF small_parse_table_225.c */
