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
	v->a[22500] = anon_sym_DOLLAR_LPAREN;
	v->a[22501] = actions(651);
	v->a[22502] = 1;
	v->a[22503] = anon_sym_BQUOTE;
	v->a[22504] = actions(559);
	v->a[22505] = 2;
	v->a[22506] = sym_file_descriptor;
	v->a[22507] = sym_variable_name;
	v->a[22508] = state(207);
	v->a[22509] = 2;
	v->a[22510] = sym_concatenation;
	v->a[22511] = aux_sym_for_statement_repeat1;
	v->a[22512] = actions(633);
	v->a[22513] = 3;
	v->a[22514] = sym_raw_string;
	v->a[22515] = sym_number;
	v->a[22516] = sym_word;
	v->a[22517] = state(364);
	v->a[22518] = 5;
	v->a[22519] = sym_arithmetic_expansion;
	small_parse_table_1126(v);
}

void	small_parse_table_1126(t_small_parse_table_array *v)
{
	v->a[22520] = sym_string;
	v->a[22521] = sym_simple_expansion;
	v->a[22522] = sym_expansion;
	v->a[22523] = sym_command_substitution;
	v->a[22524] = actions(564);
	v->a[22525] = 20;
	v->a[22526] = anon_sym_esac;
	v->a[22527] = anon_sym_PIPE;
	v->a[22528] = anon_sym_SEMI_SEMI;
	v->a[22529] = anon_sym_AMP_AMP;
	v->a[22530] = anon_sym_PIPE_PIPE;
	v->a[22531] = anon_sym_LT;
	v->a[22532] = anon_sym_GT;
	v->a[22533] = anon_sym_GT_GT;
	v->a[22534] = anon_sym_AMP_GT;
	v->a[22535] = anon_sym_AMP_GT_GT;
	v->a[22536] = anon_sym_LT_AMP;
	v->a[22537] = anon_sym_GT_AMP;
	v->a[22538] = anon_sym_GT_PIPE;
	v->a[22539] = anon_sym_LT_AMP_DASH;
	small_parse_table_1127(v);
}

void	small_parse_table_1127(t_small_parse_table_array *v)
{
	v->a[22540] = anon_sym_GT_AMP_DASH;
	v->a[22541] = anon_sym_LT_LT;
	v->a[22542] = anon_sym_LT_LT_DASH;
	v->a[22543] = aux_sym_heredoc_redirect_token1;
	v->a[22544] = anon_sym_AMP;
	v->a[22545] = anon_sym_SEMI;
	v->a[22546] = 5;
	v->a[22547] = actions(3);
	v->a[22548] = 1;
	v->a[22549] = sym_comment;
	v->a[22550] = actions(608);
	v->a[22551] = 2;
	v->a[22552] = sym_file_descriptor;
	v->a[22553] = sym_variable_name;
	v->a[22554] = state(207);
	v->a[22555] = 2;
	v->a[22556] = sym_concatenation;
	v->a[22557] = aux_sym_for_statement_repeat1;
	v->a[22558] = state(364);
	v->a[22559] = 5;
	small_parse_table_1128(v);
}

void	small_parse_table_1128(t_small_parse_table_array *v)
{
	v->a[22560] = sym_arithmetic_expansion;
	v->a[22561] = sym_string;
	v->a[22562] = sym_simple_expansion;
	v->a[22563] = sym_expansion;
	v->a[22564] = sym_command_substitution;
	v->a[22565] = actions(610);
	v->a[22566] = 29;
	v->a[22567] = anon_sym_esac;
	v->a[22568] = anon_sym_PIPE;
	v->a[22569] = anon_sym_SEMI_SEMI;
	v->a[22570] = anon_sym_AMP_AMP;
	v->a[22571] = anon_sym_PIPE_PIPE;
	v->a[22572] = anon_sym_LT;
	v->a[22573] = anon_sym_GT;
	v->a[22574] = anon_sym_GT_GT;
	v->a[22575] = anon_sym_AMP_GT;
	v->a[22576] = anon_sym_AMP_GT_GT;
	v->a[22577] = anon_sym_LT_AMP;
	v->a[22578] = anon_sym_GT_AMP;
	v->a[22579] = anon_sym_GT_PIPE;
	small_parse_table_1129(v);
}

void	small_parse_table_1129(t_small_parse_table_array *v)
{
	v->a[22580] = anon_sym_LT_AMP_DASH;
	v->a[22581] = anon_sym_GT_AMP_DASH;
	v->a[22582] = anon_sym_LT_LT;
	v->a[22583] = anon_sym_LT_LT_DASH;
	v->a[22584] = aux_sym_heredoc_redirect_token1;
	v->a[22585] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22586] = anon_sym_AMP;
	v->a[22587] = anon_sym_DOLLAR;
	v->a[22588] = anon_sym_DQUOTE;
	v->a[22589] = sym_raw_string;
	v->a[22590] = sym_number;
	v->a[22591] = anon_sym_DOLLAR_LBRACE;
	v->a[22592] = anon_sym_DOLLAR_LPAREN;
	v->a[22593] = anon_sym_BQUOTE;
	v->a[22594] = sym_word;
	v->a[22595] = anon_sym_SEMI;
	v->a[22596] = 14;
	v->a[22597] = actions(3);
	v->a[22598] = 1;
	v->a[22599] = sym_comment;
	small_parse_table_1130(v);
}

/* EOF small_parse_table_225.c */
