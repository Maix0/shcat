/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1111.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5555(t_small_parse_table_array *v)
{
	v->a[111100] = 17;
	v->a[111101] = anon_sym_LPAREN_LPAREN;
	v->a[111102] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[111103] = anon_sym_DOLLAR_LBRACK;
	v->a[111104] = anon_sym_DOLLAR;
	v->a[111105] = sym__special_character;
	v->a[111106] = anon_sym_DQUOTE;
	v->a[111107] = sym_raw_string;
	v->a[111108] = sym_ansi_c_string;
	v->a[111109] = aux_sym_number_token1;
	v->a[111110] = aux_sym_number_token2;
	v->a[111111] = anon_sym_DOLLAR_LBRACE;
	v->a[111112] = anon_sym_DOLLAR_LPAREN;
	v->a[111113] = anon_sym_BQUOTE;
	v->a[111114] = anon_sym_DOLLAR_BQUOTE;
	v->a[111115] = anon_sym_LT_LPAREN;
	v->a[111116] = anon_sym_GT_LPAREN;
	v->a[111117] = sym_word;
	v->a[111118] = 8;
	v->a[111119] = actions(3);
	small_parse_table_5556(v);
}

void	small_parse_table_5556(t_small_parse_table_array *v)
{
	v->a[111120] = 1;
	v->a[111121] = sym_comment;
	v->a[111122] = actions(5826);
	v->a[111123] = 1;
	v->a[111124] = aux_sym_heredoc_redirect_token1;
	v->a[111125] = actions(5828);
	v->a[111126] = 1;
	v->a[111127] = sym_file_descriptor;
	v->a[111128] = actions(6290);
	v->a[111129] = 1;
	v->a[111130] = anon_sym_RPAREN;
	v->a[111131] = actions(5831);
	v->a[111132] = 3;
	v->a[111133] = sym_variable_name;
	v->a[111134] = sym_test_operator;
	v->a[111135] = sym__brace_start;
	v->a[111136] = actions(5821);
	v->a[111137] = 9;
	v->a[111138] = anon_sym_SEMI;
	v->a[111139] = anon_sym_PIPE_PIPE;
	small_parse_table_5557(v);
}

void	small_parse_table_5557(t_small_parse_table_array *v)
{
	v->a[111140] = anon_sym_AMP_AMP;
	v->a[111141] = anon_sym_PIPE;
	v->a[111142] = anon_sym_AMP;
	v->a[111143] = anon_sym_LT_LT;
	v->a[111144] = anon_sym_SEMI_SEMI;
	v->a[111145] = anon_sym_PIPE_AMP;
	v->a[111146] = anon_sym_LT_LT_DASH;
	v->a[111147] = actions(5823);
	v->a[111148] = 11;
	v->a[111149] = anon_sym_LT;
	v->a[111150] = anon_sym_GT;
	v->a[111151] = anon_sym_GT_GT;
	v->a[111152] = anon_sym_AMP_GT;
	v->a[111153] = anon_sym_AMP_GT_GT;
	v->a[111154] = anon_sym_LT_AMP;
	v->a[111155] = anon_sym_GT_AMP;
	v->a[111156] = anon_sym_GT_PIPE;
	v->a[111157] = anon_sym_LT_AMP_DASH;
	v->a[111158] = anon_sym_GT_AMP_DASH;
	v->a[111159] = anon_sym_LT_LT_LT;
	small_parse_table_5558(v);
}

void	small_parse_table_5558(t_small_parse_table_array *v)
{
	v->a[111160] = actions(5819);
	v->a[111161] = 17;
	v->a[111162] = anon_sym_LPAREN_LPAREN;
	v->a[111163] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[111164] = anon_sym_DOLLAR_LBRACK;
	v->a[111165] = anon_sym_DOLLAR;
	v->a[111166] = sym__special_character;
	v->a[111167] = anon_sym_DQUOTE;
	v->a[111168] = sym_raw_string;
	v->a[111169] = sym_ansi_c_string;
	v->a[111170] = aux_sym_number_token1;
	v->a[111171] = aux_sym_number_token2;
	v->a[111172] = anon_sym_DOLLAR_LBRACE;
	v->a[111173] = anon_sym_DOLLAR_LPAREN;
	v->a[111174] = anon_sym_BQUOTE;
	v->a[111175] = anon_sym_DOLLAR_BQUOTE;
	v->a[111176] = anon_sym_LT_LPAREN;
	v->a[111177] = anon_sym_GT_LPAREN;
	v->a[111178] = sym_word;
	v->a[111179] = 27;
	small_parse_table_5559(v);
}

void	small_parse_table_5559(t_small_parse_table_array *v)
{
	v->a[111180] = actions(71);
	v->a[111181] = 1;
	v->a[111182] = sym_comment;
	v->a[111183] = actions(363);
	v->a[111184] = 1;
	v->a[111185] = anon_sym_DOLLAR_LBRACK;
	v->a[111186] = actions(367);
	v->a[111187] = 1;
	v->a[111188] = anon_sym_DOLLAR;
	v->a[111189] = actions(371);
	v->a[111190] = 1;
	v->a[111191] = anon_sym_DQUOTE;
	v->a[111192] = actions(375);
	v->a[111193] = 1;
	v->a[111194] = aux_sym_number_token1;
	v->a[111195] = actions(377);
	v->a[111196] = 1;
	v->a[111197] = aux_sym_number_token2;
	v->a[111198] = actions(379);
	v->a[111199] = 1;
	small_parse_table_5560(v);
}

/* EOF small_parse_table_1111.c */
