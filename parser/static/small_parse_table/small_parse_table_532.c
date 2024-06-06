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
	v->a[53200] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[53201] = anon_sym_AMP;
	v->a[53202] = aux_sym_concatenation_token1;
	v->a[53203] = anon_sym_DOLLAR;
	v->a[53204] = sym__special_character;
	v->a[53205] = anon_sym_DQUOTE;
	v->a[53206] = sym_raw_string;
	v->a[53207] = aux_sym_number_token1;
	v->a[53208] = aux_sym_number_token2;
	v->a[53209] = anon_sym_DOLLAR_LBRACE;
	v->a[53210] = anon_sym_DOLLAR_LPAREN;
	v->a[53211] = anon_sym_BQUOTE;
	v->a[53212] = anon_sym_DOLLAR_BQUOTE;
	v->a[53213] = sym_word;
	v->a[53214] = anon_sym_SEMI;
	v->a[53215] = 19;
	v->a[53216] = actions(3);
	v->a[53217] = 1;
	v->a[53218] = sym_comment;
	v->a[53219] = actions(3718);
	small_parse_table_2661(v);
}

void	small_parse_table_2661(t_small_parse_table_array *v)
{
	v->a[53220] = 1;
	v->a[53221] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[53222] = actions(3720);
	v->a[53223] = 1;
	v->a[53224] = anon_sym_DOLLAR;
	v->a[53225] = actions(3722);
	v->a[53226] = 1;
	v->a[53227] = sym__special_character;
	v->a[53228] = actions(3724);
	v->a[53229] = 1;
	v->a[53230] = anon_sym_DQUOTE;
	v->a[53231] = actions(3726);
	v->a[53232] = 1;
	v->a[53233] = aux_sym_number_token1;
	v->a[53234] = actions(3728);
	v->a[53235] = 1;
	v->a[53236] = aux_sym_number_token2;
	v->a[53237] = actions(3730);
	v->a[53238] = 1;
	v->a[53239] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2662(v);
}

void	small_parse_table_2662(t_small_parse_table_array *v)
{
	v->a[53240] = actions(3732);
	v->a[53241] = 1;
	v->a[53242] = anon_sym_DOLLAR_LPAREN;
	v->a[53243] = actions(3734);
	v->a[53244] = 1;
	v->a[53245] = anon_sym_BQUOTE;
	v->a[53246] = actions(3736);
	v->a[53247] = 1;
	v->a[53248] = anon_sym_DOLLAR_BQUOTE;
	v->a[53249] = actions(3738);
	v->a[53250] = 1;
	v->a[53251] = sym_test_operator;
	v->a[53252] = actions(3740);
	v->a[53253] = 1;
	v->a[53254] = sym__brace_start;
	v->a[53255] = state(1824);
	v->a[53256] = 1;
	v->a[53257] = aux_sym__literal_repeat1;
	v->a[53258] = actions(1182);
	v->a[53259] = 2;
	small_parse_table_2663(v);
}

void	small_parse_table_2663(t_small_parse_table_array *v)
{
	v->a[53260] = sym_file_descriptor;
	v->a[53261] = aux_sym_heredoc_redirect_token1;
	v->a[53262] = actions(3716);
	v->a[53263] = 2;
	v->a[53264] = sym_raw_string;
	v->a[53265] = sym_word;
	v->a[53266] = state(1170);
	v->a[53267] = 2;
	v->a[53268] = sym_concatenation;
	v->a[53269] = aux_sym_for_statement_repeat1;
	v->a[53270] = state(1685);
	v->a[53271] = 7;
	v->a[53272] = sym_arithmetic_expansion;
	v->a[53273] = sym_brace_expression;
	v->a[53274] = sym_string;
	v->a[53275] = sym_number;
	v->a[53276] = sym_simple_expansion;
	v->a[53277] = sym_expansion;
	v->a[53278] = sym_command_substitution;
	v->a[53279] = actions(1180);
	small_parse_table_2664(v);
}

void	small_parse_table_2664(t_small_parse_table_array *v)
{
	v->a[53280] = 12;
	v->a[53281] = anon_sym_AMP_AMP;
	v->a[53282] = anon_sym_PIPE_PIPE;
	v->a[53283] = anon_sym_LT;
	v->a[53284] = anon_sym_GT;
	v->a[53285] = anon_sym_GT_GT;
	v->a[53286] = anon_sym_AMP_GT;
	v->a[53287] = anon_sym_AMP_GT_GT;
	v->a[53288] = anon_sym_LT_AMP;
	v->a[53289] = anon_sym_GT_AMP;
	v->a[53290] = anon_sym_GT_PIPE;
	v->a[53291] = anon_sym_LT_AMP_DASH;
	v->a[53292] = anon_sym_GT_AMP_DASH;
	v->a[53293] = 6;
	v->a[53294] = actions(3);
	v->a[53295] = 1;
	v->a[53296] = sym_comment;
	v->a[53297] = actions(3613);
	v->a[53298] = 1;
	v->a[53299] = aux_sym_concatenation_token1;
	small_parse_table_2665(v);
}

/* EOF small_parse_table_532.c */
