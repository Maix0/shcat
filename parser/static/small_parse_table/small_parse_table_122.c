/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_122.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_610(t_small_parse_table_array *v)
{
	v->a[12200] = state(1088);
	v->a[12201] = 7;
	v->a[12202] = sym_arithmetic_expansion;
	v->a[12203] = sym_brace_expression;
	v->a[12204] = sym_string;
	v->a[12205] = sym_number;
	v->a[12206] = sym_simple_expansion;
	v->a[12207] = sym_expansion;
	v->a[12208] = sym_command_substitution;
	v->a[12209] = actions(1039);
	v->a[12210] = 20;
	v->a[12211] = anon_sym_PIPE;
	v->a[12212] = anon_sym_SEMI_SEMI;
	v->a[12213] = anon_sym_PIPE_AMP;
	v->a[12214] = anon_sym_AMP_AMP;
	v->a[12215] = anon_sym_PIPE_PIPE;
	v->a[12216] = anon_sym_LT;
	v->a[12217] = anon_sym_GT;
	v->a[12218] = anon_sym_GT_GT;
	v->a[12219] = anon_sym_AMP_GT;
	small_parse_table_611(v);
}

void	small_parse_table_611(t_small_parse_table_array *v)
{
	v->a[12220] = anon_sym_AMP_GT_GT;
	v->a[12221] = anon_sym_LT_AMP;
	v->a[12222] = anon_sym_GT_AMP;
	v->a[12223] = anon_sym_GT_PIPE;
	v->a[12224] = anon_sym_LT_AMP_DASH;
	v->a[12225] = anon_sym_GT_AMP_DASH;
	v->a[12226] = anon_sym_LT_LT;
	v->a[12227] = anon_sym_LT_LT_DASH;
	v->a[12228] = anon_sym_AMP;
	v->a[12229] = anon_sym_BQUOTE;
	v->a[12230] = anon_sym_SEMI;
	v->a[12231] = 6;
	v->a[12232] = actions(3);
	v->a[12233] = 1;
	v->a[12234] = sym_comment;
	v->a[12235] = state(1230);
	v->a[12236] = 1;
	v->a[12237] = aux_sym__literal_repeat1;
	v->a[12238] = state(1259);
	v->a[12239] = 1;
	small_parse_table_612(v);
}

void	small_parse_table_612(t_small_parse_table_array *v)
{
	v->a[12240] = sym_concatenation;
	v->a[12241] = actions(1534);
	v->a[12242] = 5;
	v->a[12243] = sym_file_descriptor;
	v->a[12244] = sym_variable_name;
	v->a[12245] = sym_test_operator;
	v->a[12246] = sym__brace_start;
	v->a[12247] = aux_sym_heredoc_redirect_token1;
	v->a[12248] = state(771);
	v->a[12249] = 7;
	v->a[12250] = sym_arithmetic_expansion;
	v->a[12251] = sym_brace_expression;
	v->a[12252] = sym_string;
	v->a[12253] = sym_number;
	v->a[12254] = sym_simple_expansion;
	v->a[12255] = sym_expansion;
	v->a[12256] = sym_command_substitution;
	v->a[12257] = actions(1532);
	v->a[12258] = 32;
	v->a[12259] = anon_sym_PIPE;
	small_parse_table_613(v);
}

void	small_parse_table_613(t_small_parse_table_array *v)
{
	v->a[12260] = anon_sym_RPAREN;
	v->a[12261] = anon_sym_SEMI_SEMI;
	v->a[12262] = anon_sym_PIPE_AMP;
	v->a[12263] = anon_sym_AMP_AMP;
	v->a[12264] = anon_sym_PIPE_PIPE;
	v->a[12265] = anon_sym_LT;
	v->a[12266] = anon_sym_GT;
	v->a[12267] = anon_sym_GT_GT;
	v->a[12268] = anon_sym_AMP_GT;
	v->a[12269] = anon_sym_AMP_GT_GT;
	v->a[12270] = anon_sym_LT_AMP;
	v->a[12271] = anon_sym_GT_AMP;
	v->a[12272] = anon_sym_GT_PIPE;
	v->a[12273] = anon_sym_LT_AMP_DASH;
	v->a[12274] = anon_sym_GT_AMP_DASH;
	v->a[12275] = anon_sym_LT_LT;
	v->a[12276] = anon_sym_LT_LT_DASH;
	v->a[12277] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[12278] = anon_sym_AMP;
	v->a[12279] = anon_sym_DOLLAR;
	small_parse_table_614(v);
}

void	small_parse_table_614(t_small_parse_table_array *v)
{
	v->a[12280] = sym__special_character;
	v->a[12281] = anon_sym_DQUOTE;
	v->a[12282] = sym_raw_string;
	v->a[12283] = aux_sym_number_token1;
	v->a[12284] = aux_sym_number_token2;
	v->a[12285] = anon_sym_DOLLAR_LBRACE;
	v->a[12286] = anon_sym_DOLLAR_LPAREN;
	v->a[12287] = anon_sym_BQUOTE;
	v->a[12288] = anon_sym_DOLLAR_BQUOTE;
	v->a[12289] = sym_word;
	v->a[12290] = anon_sym_SEMI;
	v->a[12291] = 6;
	v->a[12292] = actions(3);
	v->a[12293] = 1;
	v->a[12294] = sym_comment;
	v->a[12295] = state(1237);
	v->a[12296] = 1;
	v->a[12297] = aux_sym__literal_repeat1;
	v->a[12298] = state(410);
	v->a[12299] = 2;
	small_parse_table_615(v);
}

/* EOF small_parse_table_122.c */
