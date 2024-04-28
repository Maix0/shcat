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
	v->a[22500] = anon_sym_DOLLAR;
	v->a[22501] = actions(3789);
	v->a[22502] = 1;
	v->a[22503] = sym__special_character;
	v->a[22504] = actions(3791);
	v->a[22505] = 1;
	v->a[22506] = anon_sym_DQUOTE;
	v->a[22507] = actions(3793);
	v->a[22508] = 1;
	v->a[22509] = aux_sym_number_token1;
	v->a[22510] = actions(3795);
	v->a[22511] = 1;
	v->a[22512] = aux_sym_number_token2;
	v->a[22513] = actions(3797);
	v->a[22514] = 1;
	v->a[22515] = anon_sym_DOLLAR_LBRACE;
	v->a[22516] = actions(3799);
	v->a[22517] = 1;
	v->a[22518] = anon_sym_DOLLAR_LPAREN;
	v->a[22519] = actions(3801);
	small_parse_table_1126(v);
}

void	small_parse_table_1126(t_small_parse_table_array *v)
{
	v->a[22520] = 1;
	v->a[22521] = anon_sym_BQUOTE;
	v->a[22522] = actions(3803);
	v->a[22523] = 1;
	v->a[22524] = anon_sym_DOLLAR_BQUOTE;
	v->a[22525] = actions(3809);
	v->a[22526] = 1;
	v->a[22527] = sym__brace_start;
	v->a[22528] = actions(4052);
	v->a[22529] = 1;
	v->a[22530] = sym_test_operator;
	v->a[22531] = state(4305);
	v->a[22532] = 1;
	v->a[22533] = aux_sym__literal_repeat1;
	v->a[22534] = state(4736);
	v->a[22535] = 1;
	v->a[22536] = sym_concatenation;
	v->a[22537] = actions(2500);
	v->a[22538] = 2;
	v->a[22539] = sym_file_descriptor;
	small_parse_table_1127(v);
}

void	small_parse_table_1127(t_small_parse_table_array *v)
{
	v->a[22540] = aux_sym_heredoc_redirect_token1;
	v->a[22541] = actions(3783);
	v->a[22542] = 2;
	v->a[22543] = anon_sym_LPAREN_LPAREN;
	v->a[22544] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22545] = actions(3805);
	v->a[22546] = 2;
	v->a[22547] = anon_sym_LT_LPAREN;
	v->a[22548] = anon_sym_GT_LPAREN;
	v->a[22549] = actions(4050);
	v->a[22550] = 3;
	v->a[22551] = sym_raw_string;
	v->a[22552] = sym_ansi_c_string;
	v->a[22553] = sym_word;
	v->a[22554] = state(4582);
	v->a[22555] = 9;
	v->a[22556] = sym_arithmetic_expansion;
	v->a[22557] = sym_brace_expression;
	v->a[22558] = sym_string;
	v->a[22559] = sym_translated_string;
	small_parse_table_1128(v);
}

void	small_parse_table_1128(t_small_parse_table_array *v)
{
	v->a[22560] = sym_number;
	v->a[22561] = sym_simple_expansion;
	v->a[22562] = sym_expansion;
	v->a[22563] = sym_command_substitution;
	v->a[22564] = sym_process_substitution;
	v->a[22565] = actions(2498);
	v->a[22566] = 21;
	v->a[22567] = anon_sym_SEMI;
	v->a[22568] = anon_sym_PIPE_PIPE;
	v->a[22569] = anon_sym_AMP_AMP;
	v->a[22570] = anon_sym_PIPE;
	v->a[22571] = anon_sym_AMP;
	v->a[22572] = anon_sym_LT;
	v->a[22573] = anon_sym_GT;
	v->a[22574] = anon_sym_LT_LT;
	v->a[22575] = anon_sym_GT_GT;
	v->a[22576] = anon_sym_RPAREN;
	v->a[22577] = anon_sym_SEMI_SEMI;
	v->a[22578] = anon_sym_PIPE_AMP;
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
	v->a[22586] = anon_sym_LT_LT_DASH;
	v->a[22587] = anon_sym_LT_LT_LT;
	v->a[22588] = 8;
	v->a[22589] = actions(3);
	v->a[22590] = 1;
	v->a[22591] = sym_comment;
	v->a[22592] = actions(3189);
	v->a[22593] = 1;
	v->a[22594] = anon_sym_DQUOTE;
	v->a[22595] = actions(4058);
	v->a[22596] = 1;
	v->a[22597] = sym_variable_name;
	v->a[22598] = state(1737);
	v->a[22599] = 1;
	small_parse_table_1130(v);
}

/* EOF small_parse_table_225.c */
