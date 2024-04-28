/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_532.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2660(t_small_parse_table_array *v)
{
	v->a[53200] = 6;
	v->a[53201] = actions(3);
	v->a[53202] = 1;
	v->a[53203] = sym_comment;
	v->a[53204] = actions(5080);
	v->a[53205] = 1;
	v->a[53206] = aux_sym_concatenation_token1;
	v->a[53207] = actions(5082);
	v->a[53208] = 1;
	v->a[53209] = sym__concat;
	v->a[53210] = state(1215);
	v->a[53211] = 1;
	v->a[53212] = aux_sym_concatenation_repeat1;
	v->a[53213] = actions(4532);
	v->a[53214] = 5;
	v->a[53215] = sym_file_descriptor;
	v->a[53216] = sym_test_operator;
	v->a[53217] = sym__bare_dollar;
	v->a[53218] = sym__brace_start;
	v->a[53219] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2661(v);
}

void	small_parse_table_2661(t_small_parse_table_array *v)
{
	v->a[53220] = actions(4530);
	v->a[53221] = 39;
	v->a[53222] = anon_sym_LPAREN_LPAREN;
	v->a[53223] = anon_sym_SEMI;
	v->a[53224] = anon_sym_PIPE_PIPE;
	v->a[53225] = anon_sym_AMP_AMP;
	v->a[53226] = anon_sym_PIPE;
	v->a[53227] = anon_sym_AMP;
	v->a[53228] = anon_sym_EQ_EQ;
	v->a[53229] = anon_sym_LT;
	v->a[53230] = anon_sym_GT;
	v->a[53231] = anon_sym_LT_LT;
	v->a[53232] = anon_sym_GT_GT;
	v->a[53233] = anon_sym_SEMI_SEMI;
	v->a[53234] = anon_sym_PIPE_AMP;
	v->a[53235] = anon_sym_EQ_TILDE;
	v->a[53236] = anon_sym_AMP_GT;
	v->a[53237] = anon_sym_AMP_GT_GT;
	v->a[53238] = anon_sym_LT_AMP;
	v->a[53239] = anon_sym_GT_AMP;
	small_parse_table_2662(v);
}

void	small_parse_table_2662(t_small_parse_table_array *v)
{
	v->a[53240] = anon_sym_GT_PIPE;
	v->a[53241] = anon_sym_LT_AMP_DASH;
	v->a[53242] = anon_sym_GT_AMP_DASH;
	v->a[53243] = anon_sym_LT_LT_DASH;
	v->a[53244] = anon_sym_LT_LT_LT;
	v->a[53245] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[53246] = anon_sym_DOLLAR_LBRACK;
	v->a[53247] = anon_sym_DOLLAR;
	v->a[53248] = sym__special_character;
	v->a[53249] = anon_sym_DQUOTE;
	v->a[53250] = sym_raw_string;
	v->a[53251] = sym_ansi_c_string;
	v->a[53252] = aux_sym_number_token1;
	v->a[53253] = aux_sym_number_token2;
	v->a[53254] = anon_sym_DOLLAR_LBRACE;
	v->a[53255] = anon_sym_DOLLAR_LPAREN;
	v->a[53256] = anon_sym_BQUOTE;
	v->a[53257] = anon_sym_DOLLAR_BQUOTE;
	v->a[53258] = anon_sym_LT_LPAREN;
	v->a[53259] = anon_sym_GT_LPAREN;
	small_parse_table_2663(v);
}

void	small_parse_table_2663(t_small_parse_table_array *v)
{
	v->a[53260] = sym_word;
	v->a[53261] = 3;
	v->a[53262] = actions(3);
	v->a[53263] = 1;
	v->a[53264] = sym_comment;
	v->a[53265] = actions(1298);
	v->a[53266] = 6;
	v->a[53267] = sym_file_descriptor;
	v->a[53268] = sym__concat;
	v->a[53269] = sym_variable_name;
	v->a[53270] = sym_test_operator;
	v->a[53271] = sym__brace_start;
	v->a[53272] = aux_sym_heredoc_redirect_token1;
	v->a[53273] = actions(1296);
	v->a[53274] = 41;
	v->a[53275] = anon_sym_LPAREN_LPAREN;
	v->a[53276] = anon_sym_SEMI;
	v->a[53277] = anon_sym_PIPE_PIPE;
	v->a[53278] = anon_sym_AMP_AMP;
	v->a[53279] = anon_sym_PIPE;
	small_parse_table_2664(v);
}

void	small_parse_table_2664(t_small_parse_table_array *v)
{
	v->a[53280] = anon_sym_AMP;
	v->a[53281] = anon_sym_LT;
	v->a[53282] = anon_sym_GT;
	v->a[53283] = anon_sym_LT_LT;
	v->a[53284] = anon_sym_GT_GT;
	v->a[53285] = anon_sym_esac;
	v->a[53286] = anon_sym_SEMI_SEMI;
	v->a[53287] = anon_sym_SEMI_AMP;
	v->a[53288] = anon_sym_SEMI_SEMI_AMP;
	v->a[53289] = anon_sym_PIPE_AMP;
	v->a[53290] = anon_sym_AMP_GT;
	v->a[53291] = anon_sym_AMP_GT_GT;
	v->a[53292] = anon_sym_LT_AMP;
	v->a[53293] = anon_sym_GT_AMP;
	v->a[53294] = anon_sym_GT_PIPE;
	v->a[53295] = anon_sym_LT_AMP_DASH;
	v->a[53296] = anon_sym_GT_AMP_DASH;
	v->a[53297] = anon_sym_LT_LT_DASH;
	v->a[53298] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[53299] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_2665(v);
}

/* EOF small_parse_table_532.c */
