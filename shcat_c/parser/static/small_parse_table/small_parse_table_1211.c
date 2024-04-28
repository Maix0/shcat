/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1211.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6055(t_small_parse_table_array *v)
{
	v->a[121100] = anon_sym_BQUOTE;
	v->a[121101] = sym_word;
	v->a[121102] = actions(4372);
	v->a[121103] = 25;
	v->a[121104] = sym_file_descriptor;
	v->a[121105] = sym_variable_name;
	v->a[121106] = sym_test_operator;
	v->a[121107] = sym__brace_start;
	v->a[121108] = anon_sym_LPAREN_LPAREN;
	v->a[121109] = anon_sym_PIPE_PIPE;
	v->a[121110] = anon_sym_AMP_AMP;
	v->a[121111] = anon_sym_GT_GT;
	v->a[121112] = anon_sym_PIPE_AMP;
	v->a[121113] = anon_sym_RBRACK;
	v->a[121114] = anon_sym_AMP_GT_GT;
	v->a[121115] = anon_sym_GT_PIPE;
	v->a[121116] = anon_sym_LT_AMP_DASH;
	v->a[121117] = anon_sym_GT_AMP_DASH;
	v->a[121118] = anon_sym_LT_LT_DASH;
	v->a[121119] = anon_sym_LT_LT_LT;
	small_parse_table_6056(v);
}

void	small_parse_table_6056(t_small_parse_table_array *v)
{
	v->a[121120] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[121121] = anon_sym_DOLLAR_LBRACK;
	v->a[121122] = anon_sym_DQUOTE;
	v->a[121123] = sym_raw_string;
	v->a[121124] = sym_ansi_c_string;
	v->a[121125] = anon_sym_DOLLAR_LBRACE;
	v->a[121126] = anon_sym_DOLLAR_BQUOTE;
	v->a[121127] = anon_sym_LT_LPAREN;
	v->a[121128] = anon_sym_GT_LPAREN;
	v->a[121129] = 3;
	v->a[121130] = actions(71);
	v->a[121131] = 1;
	v->a[121132] = sym_comment;
	v->a[121133] = actions(1308);
	v->a[121134] = 14;
	v->a[121135] = anon_sym_EQ;
	v->a[121136] = anon_sym_PIPE;
	v->a[121137] = anon_sym_CARET;
	v->a[121138] = anon_sym_AMP;
	v->a[121139] = anon_sym_LT;
	small_parse_table_6057(v);
}

void	small_parse_table_6057(t_small_parse_table_array *v)
{
	v->a[121140] = anon_sym_GT;
	v->a[121141] = anon_sym_LT_LT;
	v->a[121142] = anon_sym_GT_GT;
	v->a[121143] = anon_sym_PLUS;
	v->a[121144] = anon_sym_DASH;
	v->a[121145] = anon_sym_STAR;
	v->a[121146] = anon_sym_SLASH;
	v->a[121147] = anon_sym_PERCENT;
	v->a[121148] = anon_sym_STAR_STAR;
	v->a[121149] = actions(1310);
	v->a[121150] = 28;
	v->a[121151] = sym__concat;
	v->a[121152] = sym_test_operator;
	v->a[121153] = anon_sym_RPAREN_RPAREN;
	v->a[121154] = anon_sym_COMMA;
	v->a[121155] = anon_sym_PLUS_PLUS;
	v->a[121156] = anon_sym_DASH_DASH;
	v->a[121157] = anon_sym_PLUS_EQ;
	v->a[121158] = anon_sym_DASH_EQ;
	v->a[121159] = anon_sym_STAR_EQ;
	small_parse_table_6058(v);
}

void	small_parse_table_6058(t_small_parse_table_array *v)
{
	v->a[121160] = anon_sym_SLASH_EQ;
	v->a[121161] = anon_sym_PERCENT_EQ;
	v->a[121162] = anon_sym_STAR_STAR_EQ;
	v->a[121163] = anon_sym_LT_LT_EQ;
	v->a[121164] = anon_sym_GT_GT_EQ;
	v->a[121165] = anon_sym_AMP_EQ;
	v->a[121166] = anon_sym_CARET_EQ;
	v->a[121167] = anon_sym_PIPE_EQ;
	v->a[121168] = anon_sym_PIPE_PIPE;
	v->a[121169] = anon_sym_AMP_AMP;
	v->a[121170] = anon_sym_EQ_EQ;
	v->a[121171] = anon_sym_BANG_EQ;
	v->a[121172] = anon_sym_LT_EQ;
	v->a[121173] = anon_sym_GT_EQ;
	v->a[121174] = anon_sym_RBRACK_RBRACK;
	v->a[121175] = anon_sym_EQ_TILDE;
	v->a[121176] = anon_sym_QMARK;
	v->a[121177] = anon_sym_COLON;
	v->a[121178] = aux_sym_concatenation_token1;
	v->a[121179] = 5;
	small_parse_table_6059(v);
}

void	small_parse_table_6059(t_small_parse_table_array *v)
{
	v->a[121180] = actions(3);
	v->a[121181] = 1;
	v->a[121182] = sym_comment;
	v->a[121183] = actions(6462);
	v->a[121184] = 1;
	v->a[121185] = sym__special_character;
	v->a[121186] = state(2316);
	v->a[121187] = 1;
	v->a[121188] = aux_sym__literal_repeat1;
	v->a[121189] = actions(1364);
	v->a[121190] = 5;
	v->a[121191] = sym_file_descriptor;
	v->a[121192] = sym_test_operator;
	v->a[121193] = sym__brace_start;
	v->a[121194] = ts_builtin_sym_end;
	v->a[121195] = aux_sym_heredoc_redirect_token1;
	v->a[121196] = actions(1362);
	v->a[121197] = 35;
	v->a[121198] = anon_sym_LPAREN_LPAREN;
	v->a[121199] = anon_sym_SEMI;
	small_parse_table_6060(v);
}

/* EOF small_parse_table_1211.c */
