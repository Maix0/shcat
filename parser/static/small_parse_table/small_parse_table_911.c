/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_911.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4555(t_small_parse_table_array *v)
{
	v->a[91100] = anon_sym_LT_LT;
	v->a[91101] = anon_sym_LT_LT_DASH;
	v->a[91102] = anon_sym_AMP;
	v->a[91103] = sym__special_character;
	v->a[91104] = anon_sym_SEMI;
	v->a[91105] = 19;
	v->a[91106] = actions(3);
	v->a[91107] = 1;
	v->a[91108] = sym_comment;
	v->a[91109] = actions(2458);
	v->a[91110] = 1;
	v->a[91111] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[91112] = actions(2460);
	v->a[91113] = 1;
	v->a[91114] = anon_sym_DOLLAR;
	v->a[91115] = actions(2464);
	v->a[91116] = 1;
	v->a[91117] = anon_sym_DQUOTE;
	v->a[91118] = actions(2466);
	v->a[91119] = 1;
	small_parse_table_4556(v);
}

void	small_parse_table_4556(t_small_parse_table_array *v)
{
	v->a[91120] = aux_sym_number_token1;
	v->a[91121] = actions(2468);
	v->a[91122] = 1;
	v->a[91123] = aux_sym_number_token2;
	v->a[91124] = actions(2470);
	v->a[91125] = 1;
	v->a[91126] = anon_sym_DOLLAR_LBRACE;
	v->a[91127] = actions(2472);
	v->a[91128] = 1;
	v->a[91129] = anon_sym_DOLLAR_LPAREN;
	v->a[91130] = actions(2474);
	v->a[91131] = 1;
	v->a[91132] = anon_sym_BQUOTE;
	v->a[91133] = actions(2476);
	v->a[91134] = 1;
	v->a[91135] = anon_sym_DOLLAR_BQUOTE;
	v->a[91136] = actions(2482);
	v->a[91137] = 1;
	v->a[91138] = sym__brace_start;
	v->a[91139] = actions(5070);
	small_parse_table_4557(v);
}

void	small_parse_table_4557(t_small_parse_table_array *v)
{
	v->a[91140] = 1;
	v->a[91141] = aux_sym_heredoc_redirect_token1;
	v->a[91142] = actions(5072);
	v->a[91143] = 1;
	v->a[91144] = sym__special_character;
	v->a[91145] = actions(5074);
	v->a[91146] = 1;
	v->a[91147] = sym_test_operator;
	v->a[91148] = state(2666);
	v->a[91149] = 1;
	v->a[91150] = aux_sym__literal_repeat1;
	v->a[91151] = actions(5066);
	v->a[91152] = 2;
	v->a[91153] = sym_raw_string;
	v->a[91154] = sym_word;
	v->a[91155] = state(1852);
	v->a[91156] = 2;
	v->a[91157] = sym_concatenation;
	v->a[91158] = aux_sym_for_statement_repeat1;
	v->a[91159] = actions(5068);
	small_parse_table_4558(v);
}

void	small_parse_table_4558(t_small_parse_table_array *v)
{
	v->a[91160] = 3;
	v->a[91161] = anon_sym_SEMI_SEMI;
	v->a[91162] = anon_sym_AMP;
	v->a[91163] = anon_sym_SEMI;
	v->a[91164] = state(2609);
	v->a[91165] = 7;
	v->a[91166] = sym_arithmetic_expansion;
	v->a[91167] = sym_brace_expression;
	v->a[91168] = sym_string;
	v->a[91169] = sym_number;
	v->a[91170] = sym_simple_expansion;
	v->a[91171] = sym_expansion;
	v->a[91172] = sym_command_substitution;
	v->a[91173] = 6;
	v->a[91174] = actions(3);
	v->a[91175] = 1;
	v->a[91176] = sym_comment;
	v->a[91177] = actions(5076);
	v->a[91178] = 1;
	v->a[91179] = aux_sym_concatenation_token1;
	small_parse_table_4559(v);
}

void	small_parse_table_4559(t_small_parse_table_array *v)
{
	v->a[91180] = actions(5078);
	v->a[91181] = 1;
	v->a[91182] = sym__concat;
	v->a[91183] = state(1931);
	v->a[91184] = 1;
	v->a[91185] = aux_sym_concatenation_repeat1;
	v->a[91186] = actions(2664);
	v->a[91187] = 2;
	v->a[91188] = sym_file_descriptor;
	v->a[91189] = aux_sym_heredoc_redirect_token1;
	v->a[91190] = actions(2662);
	v->a[91191] = 23;
	v->a[91192] = anon_sym_esac;
	v->a[91193] = anon_sym_PIPE;
	v->a[91194] = anon_sym_SEMI_SEMI;
	v->a[91195] = anon_sym_SEMI_AMP;
	v->a[91196] = anon_sym_SEMI_SEMI_AMP;
	v->a[91197] = anon_sym_PIPE_AMP;
	v->a[91198] = anon_sym_AMP_AMP;
	v->a[91199] = anon_sym_PIPE_PIPE;
	small_parse_table_4560(v);
}

/* EOF small_parse_table_911.c */
