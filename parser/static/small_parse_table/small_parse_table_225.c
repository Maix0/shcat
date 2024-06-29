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
	v->a[22500] = sym_simple_expansion;
	v->a[22501] = sym_expansion;
	v->a[22502] = sym_command_substitution;
	v->a[22503] = actions(540);
	v->a[22504] = 29;
	v->a[22505] = anon_sym_esac;
	v->a[22506] = anon_sym_PIPE;
	v->a[22507] = anon_sym_SEMI_SEMI;
	v->a[22508] = anon_sym_AMP_AMP;
	v->a[22509] = anon_sym_PIPE_PIPE;
	v->a[22510] = anon_sym_LT;
	v->a[22511] = anon_sym_GT;
	v->a[22512] = anon_sym_GT_GT;
	v->a[22513] = anon_sym_AMP_GT;
	v->a[22514] = anon_sym_AMP_GT_GT;
	v->a[22515] = anon_sym_LT_AMP;
	v->a[22516] = anon_sym_GT_AMP;
	v->a[22517] = anon_sym_GT_PIPE;
	v->a[22518] = anon_sym_LT_AMP_DASH;
	v->a[22519] = anon_sym_GT_AMP_DASH;
	small_parse_table_1126(v);
}

void	small_parse_table_1126(t_small_parse_table_array *v)
{
	v->a[22520] = anon_sym_LT_LT;
	v->a[22521] = anon_sym_LT_LT_DASH;
	v->a[22522] = aux_sym_heredoc_redirect_token1;
	v->a[22523] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22524] = anon_sym_AMP;
	v->a[22525] = anon_sym_DOLLAR;
	v->a[22526] = anon_sym_DQUOTE;
	v->a[22527] = sym_raw_string;
	v->a[22528] = sym_number;
	v->a[22529] = anon_sym_DOLLAR_LBRACE;
	v->a[22530] = anon_sym_DOLLAR_LPAREN;
	v->a[22531] = anon_sym_BQUOTE;
	v->a[22532] = sym_word;
	v->a[22533] = anon_sym_SEMI;
	v->a[22534] = 12;
	v->a[22535] = actions(3);
	v->a[22536] = 1;
	v->a[22537] = sym_comment;
	v->a[22538] = actions(609);
	v->a[22539] = 1;
	small_parse_table_1127(v);
}

void	small_parse_table_1127(t_small_parse_table_array *v)
{
	v->a[22540] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22541] = actions(612);
	v->a[22542] = 1;
	v->a[22543] = anon_sym_DOLLAR;
	v->a[22544] = actions(615);
	v->a[22545] = 1;
	v->a[22546] = anon_sym_DQUOTE;
	v->a[22547] = actions(618);
	v->a[22548] = 1;
	v->a[22549] = anon_sym_DOLLAR_LBRACE;
	v->a[22550] = actions(621);
	v->a[22551] = 1;
	v->a[22552] = anon_sym_DOLLAR_LPAREN;
	v->a[22553] = actions(624);
	v->a[22554] = 1;
	v->a[22555] = anon_sym_BQUOTE;
	v->a[22556] = state(208);
	v->a[22557] = 2;
	v->a[22558] = sym_concatenation;
	v->a[22559] = aux_sym_for_statement_repeat1;
	small_parse_table_1128(v);
}

void	small_parse_table_1128(t_small_parse_table_array *v)
{
	v->a[22560] = actions(536);
	v->a[22561] = 3;
	v->a[22562] = sym_file_descriptor;
	v->a[22563] = sym_variable_name;
	v->a[22564] = ts_builtin_sym_end;
	v->a[22565] = actions(606);
	v->a[22566] = 3;
	v->a[22567] = sym_raw_string;
	v->a[22568] = sym_number;
	v->a[22569] = sym_word;
	v->a[22570] = state(377);
	v->a[22571] = 5;
	v->a[22572] = sym_arithmetic_expansion;
	v->a[22573] = sym_string;
	v->a[22574] = sym_simple_expansion;
	v->a[22575] = sym_expansion;
	v->a[22576] = sym_command_substitution;
	v->a[22577] = actions(516);
	v->a[22578] = 19;
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
	v->a[22586] = anon_sym_AMP_GT;
	v->a[22587] = anon_sym_AMP_GT_GT;
	v->a[22588] = anon_sym_LT_AMP;
	v->a[22589] = anon_sym_GT_AMP;
	v->a[22590] = anon_sym_GT_PIPE;
	v->a[22591] = anon_sym_LT_AMP_DASH;
	v->a[22592] = anon_sym_GT_AMP_DASH;
	v->a[22593] = anon_sym_LT_LT;
	v->a[22594] = anon_sym_LT_LT_DASH;
	v->a[22595] = aux_sym_heredoc_redirect_token1;
	v->a[22596] = anon_sym_AMP;
	v->a[22597] = anon_sym_SEMI;
	v->a[22598] = 6;
	v->a[22599] = actions(3);
	small_parse_table_1130(v);
}

/* EOF small_parse_table_225.c */
