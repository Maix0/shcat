/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1661.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8305(t_small_parse_table_array *v)
{
	v->a[166100] = anon_sym_EQ_EQ;
	v->a[166101] = anon_sym_BANG_EQ;
	v->a[166102] = actions(7266);
	v->a[166103] = 2;
	v->a[166104] = anon_sym_LT_LT;
	v->a[166105] = anon_sym_GT_GT;
	v->a[166106] = actions(7268);
	v->a[166107] = 2;
	v->a[166108] = anon_sym_PLUS;
	v->a[166109] = anon_sym_DASH;
	v->a[166110] = actions(7507);
	v->a[166111] = 2;
	v->a[166112] = anon_sym_SEMI;
	v->a[166113] = anon_sym_COMMA;
	v->a[166114] = actions(7270);
	v->a[166115] = 3;
	v->a[166116] = anon_sym_STAR;
	v->a[166117] = anon_sym_SLASH;
	v->a[166118] = anon_sym_PERCENT;
	v->a[166119] = actions(7264);
	small_parse_table_8306(v);
}

void	small_parse_table_8306(t_small_parse_table_array *v)
{
	v->a[166120] = 4;
	v->a[166121] = anon_sym_LT;
	v->a[166122] = anon_sym_GT;
	v->a[166123] = anon_sym_LT_EQ;
	v->a[166124] = anon_sym_GT_EQ;
	v->a[166125] = actions(7509);
	v->a[166126] = 11;
	v->a[166127] = anon_sym_PLUS_EQ;
	v->a[166128] = anon_sym_DASH_EQ;
	v->a[166129] = anon_sym_STAR_EQ;
	v->a[166130] = anon_sym_SLASH_EQ;
	v->a[166131] = anon_sym_PERCENT_EQ;
	v->a[166132] = anon_sym_STAR_STAR_EQ;
	v->a[166133] = anon_sym_LT_LT_EQ;
	v->a[166134] = anon_sym_GT_GT_EQ;
	v->a[166135] = anon_sym_AMP_EQ;
	v->a[166136] = anon_sym_CARET_EQ;
	v->a[166137] = anon_sym_PIPE_EQ;
	v->a[166138] = 6;
	v->a[166139] = actions(3);
	small_parse_table_8307(v);
}

void	small_parse_table_8307(t_small_parse_table_array *v)
{
	v->a[166140] = 1;
	v->a[166141] = sym_comment;
	v->a[166142] = actions(7475);
	v->a[166143] = 1;
	v->a[166144] = aux_sym_concatenation_token1;
	v->a[166145] = actions(7513);
	v->a[166146] = 1;
	v->a[166147] = sym__concat;
	v->a[166148] = state(3115);
	v->a[166149] = 1;
	v->a[166150] = aux_sym_concatenation_repeat1;
	v->a[166151] = actions(1267);
	v->a[166152] = 4;
	v->a[166153] = sym_file_descriptor;
	v->a[166154] = sym_test_operator;
	v->a[166155] = sym__brace_start;
	v->a[166156] = aux_sym_heredoc_redirect_token1;
	v->a[166157] = actions(1265);
	v->a[166158] = 30;
	v->a[166159] = anon_sym_LPAREN_LPAREN;
	small_parse_table_8308(v);
}

void	small_parse_table_8308(t_small_parse_table_array *v)
{
	v->a[166160] = anon_sym_PIPE_PIPE;
	v->a[166161] = anon_sym_AMP_AMP;
	v->a[166162] = anon_sym_LT;
	v->a[166163] = anon_sym_GT;
	v->a[166164] = anon_sym_GT_GT;
	v->a[166165] = anon_sym_AMP_GT;
	v->a[166166] = anon_sym_AMP_GT_GT;
	v->a[166167] = anon_sym_LT_AMP;
	v->a[166168] = anon_sym_GT_AMP;
	v->a[166169] = anon_sym_GT_PIPE;
	v->a[166170] = anon_sym_LT_AMP_DASH;
	v->a[166171] = anon_sym_GT_AMP_DASH;
	v->a[166172] = anon_sym_LT_LT_LT;
	v->a[166173] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[166174] = anon_sym_DOLLAR_LBRACK;
	v->a[166175] = anon_sym_DOLLAR;
	v->a[166176] = sym__special_character;
	v->a[166177] = anon_sym_DQUOTE;
	v->a[166178] = sym_raw_string;
	v->a[166179] = sym_ansi_c_string;
	small_parse_table_8309(v);
}

void	small_parse_table_8309(t_small_parse_table_array *v)
{
	v->a[166180] = aux_sym_number_token1;
	v->a[166181] = aux_sym_number_token2;
	v->a[166182] = anon_sym_DOLLAR_LBRACE;
	v->a[166183] = anon_sym_DOLLAR_LPAREN;
	v->a[166184] = anon_sym_BQUOTE;
	v->a[166185] = anon_sym_DOLLAR_BQUOTE;
	v->a[166186] = anon_sym_LT_LPAREN;
	v->a[166187] = anon_sym_GT_LPAREN;
	v->a[166188] = sym_word;
	v->a[166189] = 3;
	v->a[166190] = actions(71);
	v->a[166191] = 1;
	v->a[166192] = sym_comment;
	v->a[166193] = actions(6801);
	v->a[166194] = 14;
	v->a[166195] = anon_sym_EQ;
	v->a[166196] = anon_sym_PIPE;
	v->a[166197] = anon_sym_CARET;
	v->a[166198] = anon_sym_AMP;
	v->a[166199] = anon_sym_LT;
	small_parse_table_8310(v);
}

/* EOF small_parse_table_1661.c */
