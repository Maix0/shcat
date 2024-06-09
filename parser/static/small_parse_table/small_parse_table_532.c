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
	v->a[53200] = actions(1734);
	v->a[53201] = 2;
	v->a[53202] = sym_file_descriptor;
	v->a[53203] = sym_variable_name;
	v->a[53204] = actions(1730);
	v->a[53205] = 28;
	v->a[53206] = anon_sym_for;
	v->a[53207] = anon_sym_while;
	v->a[53208] = anon_sym_until;
	v->a[53209] = anon_sym_if;
	v->a[53210] = anon_sym_case;
	v->a[53211] = anon_sym_LPAREN;
	v->a[53212] = anon_sym_LBRACE;
	v->a[53213] = anon_sym_BANG;
	v->a[53214] = anon_sym_LT;
	v->a[53215] = anon_sym_GT;
	v->a[53216] = anon_sym_GT_GT;
	v->a[53217] = anon_sym_AMP_GT;
	v->a[53218] = anon_sym_AMP_GT_GT;
	v->a[53219] = anon_sym_LT_AMP;
	small_parse_table_2661(v);
}

void	small_parse_table_2661(t_small_parse_table_array *v)
{
	v->a[53220] = anon_sym_GT_AMP;
	v->a[53221] = anon_sym_GT_PIPE;
	v->a[53222] = anon_sym_LT_AMP_DASH;
	v->a[53223] = anon_sym_GT_AMP_DASH;
	v->a[53224] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[53225] = anon_sym_DOLLAR;
	v->a[53226] = anon_sym_DQUOTE;
	v->a[53227] = sym_raw_string;
	v->a[53228] = aux_sym_number_token1;
	v->a[53229] = aux_sym_number_token2;
	v->a[53230] = anon_sym_DOLLAR_LBRACE;
	v->a[53231] = anon_sym_DOLLAR_LPAREN;
	v->a[53232] = anon_sym_BQUOTE;
	v->a[53233] = sym_word;
	v->a[53234] = 3;
	v->a[53235] = actions(3);
	v->a[53236] = 1;
	v->a[53237] = sym_comment;
	v->a[53238] = actions(1194);
	v->a[53239] = 3;
	small_parse_table_2662(v);
}

void	small_parse_table_2662(t_small_parse_table_array *v)
{
	v->a[53240] = sym_file_descriptor;
	v->a[53241] = sym__concat;
	v->a[53242] = sym__bare_dollar;
	v->a[53243] = actions(1196);
	v->a[53244] = 27;
	v->a[53245] = anon_sym_LPAREN;
	v->a[53246] = anon_sym_PIPE;
	v->a[53247] = anon_sym_AMP_AMP;
	v->a[53248] = anon_sym_PIPE_PIPE;
	v->a[53249] = anon_sym_LT;
	v->a[53250] = anon_sym_GT;
	v->a[53251] = anon_sym_GT_GT;
	v->a[53252] = anon_sym_AMP_GT;
	v->a[53253] = anon_sym_AMP_GT_GT;
	v->a[53254] = anon_sym_LT_AMP;
	v->a[53255] = anon_sym_GT_AMP;
	v->a[53256] = anon_sym_GT_PIPE;
	v->a[53257] = anon_sym_LT_AMP_DASH;
	v->a[53258] = anon_sym_GT_AMP_DASH;
	v->a[53259] = anon_sym_LT_LT;
	small_parse_table_2663(v);
}

void	small_parse_table_2663(t_small_parse_table_array *v)
{
	v->a[53260] = anon_sym_LT_LT_DASH;
	v->a[53261] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[53262] = aux_sym_concatenation_token1;
	v->a[53263] = anon_sym_DOLLAR;
	v->a[53264] = anon_sym_DQUOTE;
	v->a[53265] = sym_raw_string;
	v->a[53266] = aux_sym_number_token1;
	v->a[53267] = aux_sym_number_token2;
	v->a[53268] = anon_sym_DOLLAR_LBRACE;
	v->a[53269] = anon_sym_DOLLAR_LPAREN;
	v->a[53270] = anon_sym_BQUOTE;
	v->a[53271] = sym_word;
	v->a[53272] = 5;
	v->a[53273] = actions(3);
	v->a[53274] = 1;
	v->a[53275] = sym_comment;
	v->a[53276] = actions(555);
	v->a[53277] = 2;
	v->a[53278] = sym_file_descriptor;
	v->a[53279] = sym_variable_name;
	small_parse_table_2664(v);
}

void	small_parse_table_2664(t_small_parse_table_array *v)
{
	v->a[53280] = state(795);
	v->a[53281] = 2;
	v->a[53282] = sym_concatenation;
	v->a[53283] = aux_sym_for_statement_repeat1;
	v->a[53284] = state(985);
	v->a[53285] = 6;
	v->a[53286] = sym_arithmetic_expansion;
	v->a[53287] = sym_string;
	v->a[53288] = sym_number;
	v->a[53289] = sym_simple_expansion;
	v->a[53290] = sym_expansion;
	v->a[53291] = sym_command_substitution;
	v->a[53292] = actions(553);
	v->a[53293] = 20;
	v->a[53294] = anon_sym_LT;
	v->a[53295] = anon_sym_GT;
	v->a[53296] = anon_sym_GT_GT;
	v->a[53297] = anon_sym_AMP_GT;
	v->a[53298] = anon_sym_AMP_GT_GT;
	v->a[53299] = anon_sym_LT_AMP;
	small_parse_table_2665(v);
}

/* EOF small_parse_table_532.c */
