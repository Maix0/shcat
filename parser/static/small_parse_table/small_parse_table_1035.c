/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1035.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5175(t_small_parse_table_array *v)
{
	v->a[103500] = anon_sym_LT_AMP;
	v->a[103501] = anon_sym_GT_AMP;
	v->a[103502] = anon_sym_GT_PIPE;
	v->a[103503] = anon_sym_LT_AMP_DASH;
	v->a[103504] = anon_sym_GT_AMP_DASH;
	v->a[103505] = anon_sym_LT_LT;
	v->a[103506] = anon_sym_LT_LT_DASH;
	v->a[103507] = anon_sym_AMP;
	v->a[103508] = anon_sym_SEMI;
	v->a[103509] = 17;
	v->a[103510] = actions(57);
	v->a[103511] = 1;
	v->a[103512] = sym_comment;
	v->a[103513] = actions(5453);
	v->a[103514] = 1;
	v->a[103515] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[103516] = actions(5455);
	v->a[103517] = 1;
	v->a[103518] = anon_sym_DOLLAR;
	v->a[103519] = actions(5457);
	small_parse_table_5176(v);
}

void	small_parse_table_5176(t_small_parse_table_array *v)
{
	v->a[103520] = 1;
	v->a[103521] = sym__special_character;
	v->a[103522] = actions(5459);
	v->a[103523] = 1;
	v->a[103524] = anon_sym_DQUOTE;
	v->a[103525] = actions(5463);
	v->a[103526] = 1;
	v->a[103527] = aux_sym_number_token1;
	v->a[103528] = actions(5465);
	v->a[103529] = 1;
	v->a[103530] = aux_sym_number_token2;
	v->a[103531] = actions(5467);
	v->a[103532] = 1;
	v->a[103533] = anon_sym_DOLLAR_LBRACE;
	v->a[103534] = actions(5469);
	v->a[103535] = 1;
	v->a[103536] = anon_sym_DOLLAR_LPAREN;
	v->a[103537] = actions(5471);
	v->a[103538] = 1;
	v->a[103539] = anon_sym_BQUOTE;
	small_parse_table_5177(v);
}

void	small_parse_table_5177(t_small_parse_table_array *v)
{
	v->a[103540] = actions(5473);
	v->a[103541] = 1;
	v->a[103542] = anon_sym_DOLLAR_BQUOTE;
	v->a[103543] = actions(5479);
	v->a[103544] = 1;
	v->a[103545] = sym__brace_start;
	v->a[103546] = actions(5948);
	v->a[103547] = 1;
	v->a[103548] = sym_word;
	v->a[103549] = state(1240);
	v->a[103550] = 1;
	v->a[103551] = aux_sym__literal_repeat1;
	v->a[103552] = actions(5950);
	v->a[103553] = 2;
	v->a[103554] = sym_test_operator;
	v->a[103555] = sym_raw_string;
	v->a[103556] = state(386);
	v->a[103557] = 2;
	v->a[103558] = sym_concatenation;
	v->a[103559] = aux_sym_for_statement_repeat1;
	small_parse_table_5178(v);
}

void	small_parse_table_5178(t_small_parse_table_array *v)
{
	v->a[103560] = state(776);
	v->a[103561] = 7;
	v->a[103562] = sym_arithmetic_expansion;
	v->a[103563] = sym_brace_expression;
	v->a[103564] = sym_string;
	v->a[103565] = sym_number;
	v->a[103566] = sym_simple_expansion;
	v->a[103567] = sym_expansion;
	v->a[103568] = sym_command_substitution;
	v->a[103569] = 7;
	v->a[103570] = actions(3);
	v->a[103571] = 1;
	v->a[103572] = sym_comment;
	v->a[103573] = actions(5952);
	v->a[103574] = 1;
	v->a[103575] = sym_file_descriptor;
	v->a[103576] = actions(5256);
	v->a[103577] = 2;
	v->a[103578] = ts_builtin_sym_end;
	v->a[103579] = aux_sym_heredoc_redirect_token1;
	small_parse_table_5179(v);
}

void	small_parse_table_5179(t_small_parse_table_array *v)
{
	v->a[103580] = actions(5602);
	v->a[103581] = 2;
	v->a[103582] = anon_sym_LT_AMP_DASH;
	v->a[103583] = anon_sym_GT_AMP_DASH;
	v->a[103584] = state(2189);
	v->a[103585] = 2;
	v->a[103586] = sym_file_redirect;
	v->a[103587] = aux_sym_redirected_statement_repeat2;
	v->a[103588] = actions(5600);
	v->a[103589] = 8;
	v->a[103590] = anon_sym_LT;
	v->a[103591] = anon_sym_GT;
	v->a[103592] = anon_sym_GT_GT;
	v->a[103593] = anon_sym_AMP_GT;
	v->a[103594] = anon_sym_AMP_GT_GT;
	v->a[103595] = anon_sym_LT_AMP;
	v->a[103596] = anon_sym_GT_AMP;
	v->a[103597] = anon_sym_GT_PIPE;
	v->a[103598] = actions(5254);
	v->a[103599] = 9;
	small_parse_table_5180(v);
}

/* EOF small_parse_table_1035.c */
