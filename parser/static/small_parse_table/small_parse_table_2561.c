/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2561.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12805(t_small_parse_table_array *v)
{
	v->a[256100] = anon_sym_LT_AMP_DASH;
	v->a[256101] = anon_sym_GT_AMP_DASH;
	v->a[256102] = anon_sym_LT_LT_DASH;
	v->a[256103] = anon_sym_BQUOTE;
	v->a[256104] = 16;
	v->a[256105] = actions(3);
	v->a[256106] = 1;
	v->a[256107] = sym_comment;
	v->a[256108] = actions(11760);
	v->a[256109] = 1;
	v->a[256110] = anon_sym_BANG2;
	v->a[256111] = actions(11764);
	v->a[256112] = 1;
	v->a[256113] = anon_sym_DOLLAR_LPAREN;
	v->a[256114] = actions(11766);
	v->a[256115] = 1;
	v->a[256116] = anon_sym_BQUOTE;
	v->a[256117] = actions(11768);
	v->a[256118] = 1;
	v->a[256119] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_12806(v);
}

void	small_parse_table_12806(t_small_parse_table_array *v)
{
	v->a[256120] = actions(11770);
	v->a[256121] = 1;
	v->a[256122] = aux_sym__simple_variable_name_token1;
	v->a[256123] = actions(11772);
	v->a[256124] = 1;
	v->a[256125] = sym_variable_name;
	v->a[256126] = actions(11788);
	v->a[256127] = 1;
	v->a[256128] = anon_sym_RBRACE3;
	v->a[256129] = state(3532);
	v->a[256130] = 1;
	v->a[256131] = sym_subscript;
	v->a[256132] = state(6428);
	v->a[256133] = 1;
	v->a[256134] = aux_sym__expansion_body_repeat1;
	v->a[256135] = state(6472);
	v->a[256136] = 1;
	v->a[256137] = sym_command_substitution;
	v->a[256138] = state(6810);
	v->a[256139] = 1;
	small_parse_table_12807(v);
}

void	small_parse_table_12807(t_small_parse_table_array *v)
{
	v->a[256140] = sym__expansion_body;
	v->a[256141] = actions(11762);
	v->a[256142] = 2;
	v->a[256143] = anon_sym_POUND2;
	v->a[256144] = anon_sym_EQ2;
	v->a[256145] = actions(8050);
	v->a[256146] = 3;
	v->a[256147] = sym__external_expansion_sym_hash;
	v->a[256148] = sym__external_expansion_sym_bang;
	v->a[256149] = sym__external_expansion_sym_equal;
	v->a[256150] = actions(11754);
	v->a[256151] = 4;
	v->a[256152] = anon_sym_DASH;
	v->a[256153] = anon_sym_STAR;
	v->a[256154] = anon_sym_QMARK;
	v->a[256155] = anon_sym_AT2;
	v->a[256156] = actions(11756);
	v->a[256157] = 5;
	v->a[256158] = anon_sym_BANG;
	v->a[256159] = anon_sym_DOLLAR;
	small_parse_table_12808(v);
}

void	small_parse_table_12808(t_small_parse_table_array *v)
{
	v->a[256160] = anon_sym_POUND;
	v->a[256161] = anon_sym_0;
	v->a[256162] = anon_sym__;
	v->a[256163] = 3;
	v->a[256164] = actions(3);
	v->a[256165] = 1;
	v->a[256166] = sym_comment;
	v->a[256167] = actions(11790);
	v->a[256168] = 3;
	v->a[256169] = sym_file_descriptor;
	v->a[256170] = ts_builtin_sym_end;
	v->a[256171] = aux_sym_heredoc_redirect_token1;
	v->a[256172] = actions(11792);
	v->a[256173] = 22;
	v->a[256174] = anon_sym_SEMI;
	v->a[256175] = anon_sym_PIPE_PIPE;
	v->a[256176] = anon_sym_AMP_AMP;
	v->a[256177] = anon_sym_PIPE;
	v->a[256178] = anon_sym_AMP;
	v->a[256179] = anon_sym_LT;
	small_parse_table_12809(v);
}

void	small_parse_table_12809(t_small_parse_table_array *v)
{
	v->a[256180] = anon_sym_GT;
	v->a[256181] = anon_sym_LT_LT;
	v->a[256182] = anon_sym_GT_GT;
	v->a[256183] = anon_sym_RPAREN;
	v->a[256184] = anon_sym_SEMI_SEMI;
	v->a[256185] = anon_sym_PIPE_AMP;
	v->a[256186] = anon_sym_AMP_GT;
	v->a[256187] = anon_sym_AMP_GT_GT;
	v->a[256188] = anon_sym_LT_AMP;
	v->a[256189] = anon_sym_GT_AMP;
	v->a[256190] = anon_sym_GT_PIPE;
	v->a[256191] = anon_sym_LT_AMP_DASH;
	v->a[256192] = anon_sym_GT_AMP_DASH;
	v->a[256193] = anon_sym_LT_LT_DASH;
	v->a[256194] = anon_sym_LT_LT_LT;
	v->a[256195] = anon_sym_BQUOTE;
	v->a[256196] = 3;
	v->a[256197] = actions(3);
	v->a[256198] = 1;
	v->a[256199] = sym_comment;
	small_parse_table_12810(v);
}

/* EOF small_parse_table_2561.c */
