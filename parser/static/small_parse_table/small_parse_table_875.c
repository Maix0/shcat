/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_875.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4375(t_small_parse_table_array *v)
{
	v->a[87500] = actions(3172);
	v->a[87501] = 1;
	v->a[87502] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87503] = actions(3176);
	v->a[87504] = 1;
	v->a[87505] = anon_sym_DQUOTE;
	v->a[87506] = actions(3178);
	v->a[87507] = 1;
	v->a[87508] = anon_sym_DOLLAR_LBRACE;
	v->a[87509] = actions(3180);
	v->a[87510] = 1;
	v->a[87511] = anon_sym_DOLLAR_LPAREN;
	v->a[87512] = actions(3182);
	v->a[87513] = 1;
	v->a[87514] = anon_sym_BQUOTE;
	v->a[87515] = actions(3437);
	v->a[87516] = 1;
	v->a[87517] = sym__bare_dollar;
	v->a[87518] = actions(3551);
	v->a[87519] = 1;
	small_parse_table_4376(v);
}

void	small_parse_table_4376(t_small_parse_table_array *v)
{
	v->a[87520] = anon_sym_DOLLAR;
	v->a[87521] = actions(3435);
	v->a[87522] = 5;
	v->a[87523] = aux_sym_concatenation_token1;
	v->a[87524] = sym_raw_string;
	v->a[87525] = sym_number;
	v->a[87526] = sym__comment_word;
	v->a[87527] = sym_word;
	v->a[87528] = state(460);
	v->a[87529] = 5;
	v->a[87530] = sym_arithmetic_expansion;
	v->a[87531] = sym_string;
	v->a[87532] = sym_simple_expansion;
	v->a[87533] = sym_expansion;
	v->a[87534] = sym_command_substitution;
	v->a[87535] = 8;
	v->a[87536] = actions(3);
	v->a[87537] = 1;
	v->a[87538] = sym_comment;
	v->a[87539] = actions(896);
	small_parse_table_4377(v);
}

void	small_parse_table_4377(t_small_parse_table_array *v)
{
	v->a[87540] = 1;
	v->a[87541] = sym_file_descriptor;
	v->a[87542] = actions(3553);
	v->a[87543] = 1;
	v->a[87544] = aux_sym_heredoc_redirect_token1;
	v->a[87545] = state(2419);
	v->a[87546] = 1;
	v->a[87547] = sym__heredoc_expression;
	v->a[87548] = actions(876);
	v->a[87549] = 2;
	v->a[87550] = anon_sym_AMP_AMP;
	v->a[87551] = anon_sym_PIPE_PIPE;
	v->a[87552] = actions(880);
	v->a[87553] = 2;
	v->a[87554] = anon_sym_LT_AMP_DASH;
	v->a[87555] = anon_sym_GT_AMP_DASH;
	v->a[87556] = state(1733);
	v->a[87557] = 2;
	v->a[87558] = sym_file_redirect;
	v->a[87559] = aux_sym_redirected_statement_repeat2;
	small_parse_table_4378(v);
}

void	small_parse_table_4378(t_small_parse_table_array *v)
{
	v->a[87560] = actions(878);
	v->a[87561] = 8;
	v->a[87562] = anon_sym_LT;
	v->a[87563] = anon_sym_GT;
	v->a[87564] = anon_sym_GT_GT;
	v->a[87565] = anon_sym_AMP_GT;
	v->a[87566] = anon_sym_AMP_GT_GT;
	v->a[87567] = anon_sym_LT_AMP;
	v->a[87568] = anon_sym_GT_AMP;
	v->a[87569] = anon_sym_GT_PIPE;
	v->a[87570] = 3;
	v->a[87571] = actions(1094);
	v->a[87572] = 1;
	v->a[87573] = sym_comment;
	v->a[87574] = actions(1173);
	v->a[87575] = 7;
	v->a[87576] = anon_sym_PIPE;
	v->a[87577] = anon_sym_LT;
	v->a[87578] = anon_sym_GT;
	v->a[87579] = anon_sym_AMP_GT;
	small_parse_table_4379(v);
}

void	small_parse_table_4379(t_small_parse_table_array *v)
{
	v->a[87580] = anon_sym_LT_AMP;
	v->a[87581] = anon_sym_GT_AMP;
	v->a[87582] = anon_sym_LT_LT;
	v->a[87583] = actions(1175);
	v->a[87584] = 10;
	v->a[87585] = sym_file_descriptor;
	v->a[87586] = sym_variable_name;
	v->a[87587] = anon_sym_AMP_AMP;
	v->a[87588] = anon_sym_PIPE_PIPE;
	v->a[87589] = anon_sym_GT_GT;
	v->a[87590] = anon_sym_AMP_GT_GT;
	v->a[87591] = anon_sym_GT_PIPE;
	v->a[87592] = anon_sym_LT_AMP_DASH;
	v->a[87593] = anon_sym_GT_AMP_DASH;
	v->a[87594] = anon_sym_LT_LT_DASH;
	v->a[87595] = 11;
	v->a[87596] = actions(3);
	v->a[87597] = 1;
	v->a[87598] = sym_comment;
	v->a[87599] = actions(1963);
	small_parse_table_4380(v);
}

/* EOF small_parse_table_875.c */
