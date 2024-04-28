/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2722.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13610(t_small_parse_table_array *v)
{
	v->a[272200] = anon_sym_GT_GT;
	v->a[272201] = anon_sym_SEMI_SEMI;
	v->a[272202] = anon_sym_PIPE_AMP;
	v->a[272203] = anon_sym_AMP_GT;
	v->a[272204] = anon_sym_AMP_GT_GT;
	v->a[272205] = anon_sym_LT_AMP;
	v->a[272206] = anon_sym_GT_AMP;
	v->a[272207] = anon_sym_GT_PIPE;
	v->a[272208] = anon_sym_LT_AMP_DASH;
	v->a[272209] = anon_sym_GT_AMP_DASH;
	v->a[272210] = anon_sym_LT_LT_DASH;
	v->a[272211] = 6;
	v->a[272212] = actions(3);
	v->a[272213] = 1;
	v->a[272214] = sym_comment;
	v->a[272215] = actions(11568);
	v->a[272216] = 1;
	v->a[272217] = aux_sym_concatenation_token1;
	v->a[272218] = actions(11583);
	v->a[272219] = 1;
	small_parse_table_13611(v);
}

void	small_parse_table_13611(t_small_parse_table_array *v)
{
	v->a[272220] = sym__concat;
	v->a[272221] = state(5057);
	v->a[272222] = 1;
	v->a[272223] = aux_sym_concatenation_repeat1;
	v->a[272224] = actions(1263);
	v->a[272225] = 3;
	v->a[272226] = sym_test_operator;
	v->a[272227] = sym__brace_start;
	v->a[272228] = aux_sym_heredoc_redirect_token1;
	v->a[272229] = actions(1261);
	v->a[272230] = 17;
	v->a[272231] = anon_sym_LPAREN_LPAREN;
	v->a[272232] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[272233] = anon_sym_DOLLAR_LBRACK;
	v->a[272234] = anon_sym_DOLLAR;
	v->a[272235] = sym__special_character;
	v->a[272236] = anon_sym_DQUOTE;
	v->a[272237] = sym_raw_string;
	v->a[272238] = sym_ansi_c_string;
	v->a[272239] = aux_sym_number_token1;
	small_parse_table_13612(v);
}

void	small_parse_table_13612(t_small_parse_table_array *v)
{
	v->a[272240] = aux_sym_number_token2;
	v->a[272241] = anon_sym_DOLLAR_LBRACE;
	v->a[272242] = anon_sym_DOLLAR_LPAREN;
	v->a[272243] = anon_sym_BQUOTE;
	v->a[272244] = anon_sym_DOLLAR_BQUOTE;
	v->a[272245] = anon_sym_LT_LPAREN;
	v->a[272246] = anon_sym_GT_LPAREN;
	v->a[272247] = sym_word;
	v->a[272248] = 3;
	v->a[272249] = actions(3);
	v->a[272250] = 1;
	v->a[272251] = sym_comment;
	v->a[272252] = actions(12147);
	v->a[272253] = 2;
	v->a[272254] = sym_file_descriptor;
	v->a[272255] = aux_sym_heredoc_redirect_token1;
	v->a[272256] = actions(12145);
	v->a[272257] = 21;
	v->a[272258] = anon_sym_SEMI;
	v->a[272259] = anon_sym_PIPE_PIPE;
	small_parse_table_13613(v);
}

void	small_parse_table_13613(t_small_parse_table_array *v)
{
	v->a[272260] = anon_sym_AMP_AMP;
	v->a[272261] = anon_sym_PIPE;
	v->a[272262] = anon_sym_AMP;
	v->a[272263] = anon_sym_LT;
	v->a[272264] = anon_sym_GT;
	v->a[272265] = anon_sym_LT_LT;
	v->a[272266] = anon_sym_GT_GT;
	v->a[272267] = anon_sym_SEMI_SEMI;
	v->a[272268] = anon_sym_SEMI_AMP;
	v->a[272269] = anon_sym_SEMI_SEMI_AMP;
	v->a[272270] = anon_sym_PIPE_AMP;
	v->a[272271] = anon_sym_AMP_GT;
	v->a[272272] = anon_sym_AMP_GT_GT;
	v->a[272273] = anon_sym_LT_AMP;
	v->a[272274] = anon_sym_GT_AMP;
	v->a[272275] = anon_sym_GT_PIPE;
	v->a[272276] = anon_sym_LT_AMP_DASH;
	v->a[272277] = anon_sym_GT_AMP_DASH;
	v->a[272278] = anon_sym_LT_LT_DASH;
	v->a[272279] = 5;
	small_parse_table_13614(v);
}

void	small_parse_table_13614(t_small_parse_table_array *v)
{
	v->a[272280] = actions(3);
	v->a[272281] = 1;
	v->a[272282] = sym_comment;
	v->a[272283] = state(5082);
	v->a[272284] = 1;
	v->a[272285] = aux_sym_pipeline_repeat1;
	v->a[272286] = actions(12068);
	v->a[272287] = 2;
	v->a[272288] = sym_file_descriptor;
	v->a[272289] = aux_sym_heredoc_redirect_token1;
	v->a[272290] = actions(12304);
	v->a[272291] = 2;
	v->a[272292] = anon_sym_PIPE;
	v->a[272293] = anon_sym_PIPE_AMP;
	v->a[272294] = actions(12064);
	v->a[272295] = 18;
	v->a[272296] = anon_sym_SEMI;
	v->a[272297] = anon_sym_PIPE_PIPE;
	v->a[272298] = anon_sym_AMP_AMP;
	v->a[272299] = anon_sym_AMP;
	small_parse_table_13615(v);
}

/* EOF small_parse_table_2722.c */
