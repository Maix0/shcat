/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1011.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5055(t_small_parse_table_array *v)
{
	v->a[101100] = 1;
	v->a[101101] = anon_sym_DOLLAR;
	v->a[101102] = actions(4346);
	v->a[101103] = 1;
	v->a[101104] = aux_sym_number_token1;
	v->a[101105] = actions(4348);
	v->a[101106] = 1;
	v->a[101107] = aux_sym_number_token2;
	v->a[101108] = actions(4352);
	v->a[101109] = 1;
	v->a[101110] = anon_sym_DOLLAR_LPAREN;
	v->a[101111] = actions(4360);
	v->a[101112] = 1;
	v->a[101113] = sym_extglob_pattern;
	v->a[101114] = actions(4362);
	v->a[101115] = 1;
	v->a[101116] = sym__brace_start;
	v->a[101117] = actions(4550);
	v->a[101118] = 1;
	v->a[101119] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_5056(v);
}

void	small_parse_table_5056(t_small_parse_table_array *v)
{
	v->a[101120] = actions(4552);
	v->a[101121] = 1;
	v->a[101122] = sym__special_character;
	v->a[101123] = actions(4554);
	v->a[101124] = 1;
	v->a[101125] = anon_sym_DQUOTE;
	v->a[101126] = actions(4556);
	v->a[101127] = 1;
	v->a[101128] = anon_sym_DOLLAR_LBRACE;
	v->a[101129] = actions(4558);
	v->a[101130] = 1;
	v->a[101131] = anon_sym_BQUOTE;
	v->a[101132] = actions(4560);
	v->a[101133] = 1;
	v->a[101134] = anon_sym_DOLLAR_BQUOTE;
	v->a[101135] = actions(5786);
	v->a[101136] = 1;
	v->a[101137] = sym_word;
	v->a[101138] = state(3418);
	v->a[101139] = 1;
	small_parse_table_5057(v);
}

void	small_parse_table_5057(t_small_parse_table_array *v)
{
	v->a[101140] = aux_sym__literal_repeat1;
	v->a[101141] = actions(5788);
	v->a[101142] = 2;
	v->a[101143] = sym_test_operator;
	v->a[101144] = sym_raw_string;
	v->a[101145] = state(3483);
	v->a[101146] = 2;
	v->a[101147] = sym_concatenation;
	v->a[101148] = sym__extglob_blob;
	v->a[101149] = state(3312);
	v->a[101150] = 7;
	v->a[101151] = sym_arithmetic_expansion;
	v->a[101152] = sym_brace_expression;
	v->a[101153] = sym_string;
	v->a[101154] = sym_number;
	v->a[101155] = sym_simple_expansion;
	v->a[101156] = sym_expansion;
	v->a[101157] = sym_command_substitution;
	v->a[101158] = 6;
	v->a[101159] = actions(3);
	small_parse_table_5058(v);
}

void	small_parse_table_5058(t_small_parse_table_array *v)
{
	v->a[101160] = 1;
	v->a[101161] = sym_comment;
	v->a[101162] = actions(5161);
	v->a[101163] = 1;
	v->a[101164] = aux_sym_concatenation_token1;
	v->a[101165] = actions(5790);
	v->a[101166] = 1;
	v->a[101167] = sym__concat;
	v->a[101168] = state(1853);
	v->a[101169] = 1;
	v->a[101170] = aux_sym_concatenation_repeat1;
	v->a[101171] = actions(2696);
	v->a[101172] = 3;
	v->a[101173] = sym_file_descriptor;
	v->a[101174] = sym_variable_name;
	v->a[101175] = aux_sym_heredoc_redirect_token1;
	v->a[101176] = actions(2694);
	v->a[101177] = 19;
	v->a[101178] = anon_sym_PIPE;
	v->a[101179] = anon_sym_SEMI_SEMI;
	small_parse_table_5059(v);
}

void	small_parse_table_5059(t_small_parse_table_array *v)
{
	v->a[101180] = anon_sym_PIPE_AMP;
	v->a[101181] = anon_sym_AMP_AMP;
	v->a[101182] = anon_sym_PIPE_PIPE;
	v->a[101183] = anon_sym_LT;
	v->a[101184] = anon_sym_GT;
	v->a[101185] = anon_sym_GT_GT;
	v->a[101186] = anon_sym_AMP_GT;
	v->a[101187] = anon_sym_AMP_GT_GT;
	v->a[101188] = anon_sym_LT_AMP;
	v->a[101189] = anon_sym_GT_AMP;
	v->a[101190] = anon_sym_GT_PIPE;
	v->a[101191] = anon_sym_LT_AMP_DASH;
	v->a[101192] = anon_sym_GT_AMP_DASH;
	v->a[101193] = anon_sym_LT_LT;
	v->a[101194] = anon_sym_LT_LT_DASH;
	v->a[101195] = anon_sym_AMP;
	v->a[101196] = anon_sym_SEMI;
	v->a[101197] = 6;
	v->a[101198] = actions(3);
	v->a[101199] = 1;
	small_parse_table_5060(v);
}

/* EOF small_parse_table_1011.c */
