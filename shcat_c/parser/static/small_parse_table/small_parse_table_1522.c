/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1522.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_7610(t_small_parse_table_array *v)
{
	v->a[152200] = anon_sym_GT;
	v->a[152201] = anon_sym_LT_LT;
	v->a[152202] = anon_sym_AMP_GT;
	v->a[152203] = anon_sym_LT_AMP;
	v->a[152204] = anon_sym_GT_AMP;
	v->a[152205] = anon_sym_DOLLAR;
	v->a[152206] = aux_sym_number_token1;
	v->a[152207] = aux_sym_number_token2;
	v->a[152208] = anon_sym_DOLLAR_LPAREN;
	v->a[152209] = anon_sym_BQUOTE;
	v->a[152210] = sym_word;
	v->a[152211] = actions(1346);
	v->a[152212] = 25;
	v->a[152213] = sym_file_descriptor;
	v->a[152214] = sym__concat;
	v->a[152215] = sym_test_operator;
	v->a[152216] = sym__brace_start;
	v->a[152217] = anon_sym_LPAREN_LPAREN;
	v->a[152218] = anon_sym_PIPE_PIPE;
	v->a[152219] = anon_sym_AMP_AMP;
	small_parse_table_7611(v);
}

void	small_parse_table_7611(t_small_parse_table_array *v)
{
	v->a[152220] = anon_sym_GT_GT;
	v->a[152221] = anon_sym_PIPE_AMP;
	v->a[152222] = anon_sym_AMP_GT_GT;
	v->a[152223] = anon_sym_GT_PIPE;
	v->a[152224] = anon_sym_LT_AMP_DASH;
	v->a[152225] = anon_sym_GT_AMP_DASH;
	v->a[152226] = anon_sym_LT_LT_DASH;
	v->a[152227] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[152228] = anon_sym_DOLLAR_LBRACK;
	v->a[152229] = aux_sym_concatenation_token1;
	v->a[152230] = sym__special_character;
	v->a[152231] = anon_sym_DQUOTE;
	v->a[152232] = sym_raw_string;
	v->a[152233] = sym_ansi_c_string;
	v->a[152234] = anon_sym_DOLLAR_LBRACE;
	v->a[152235] = anon_sym_DOLLAR_BQUOTE;
	v->a[152236] = anon_sym_LT_LPAREN;
	v->a[152237] = anon_sym_GT_LPAREN;
	v->a[152238] = 21;
	v->a[152239] = actions(71);
	small_parse_table_7612(v);
}

void	small_parse_table_7612(t_small_parse_table_array *v)
{
	v->a[152240] = 1;
	v->a[152241] = sym_comment;
	v->a[152242] = actions(6881);
	v->a[152243] = 1;
	v->a[152244] = anon_sym_COMMA;
	v->a[152245] = actions(6883);
	v->a[152246] = 1;
	v->a[152247] = anon_sym_EQ;
	v->a[152248] = actions(6889);
	v->a[152249] = 1;
	v->a[152250] = anon_sym_PIPE_PIPE;
	v->a[152251] = actions(6891);
	v->a[152252] = 1;
	v->a[152253] = anon_sym_AMP_AMP;
	v->a[152254] = actions(6893);
	v->a[152255] = 1;
	v->a[152256] = anon_sym_PIPE;
	v->a[152257] = actions(6895);
	v->a[152258] = 1;
	v->a[152259] = anon_sym_CARET;
	small_parse_table_7613(v);
}

void	small_parse_table_7613(t_small_parse_table_array *v)
{
	v->a[152260] = actions(6897);
	v->a[152261] = 1;
	v->a[152262] = anon_sym_AMP;
	v->a[152263] = actions(6911);
	v->a[152264] = 1;
	v->a[152265] = anon_sym_STAR_STAR;
	v->a[152266] = actions(6913);
	v->a[152267] = 1;
	v->a[152268] = anon_sym_EQ_TILDE;
	v->a[152269] = actions(6915);
	v->a[152270] = 1;
	v->a[152271] = anon_sym_QMARK;
	v->a[152272] = actions(7129);
	v->a[152273] = 1;
	v->a[152274] = anon_sym_RPAREN_RPAREN;
	v->a[152275] = state(6574);
	v->a[152276] = 1;
	v->a[152277] = aux_sym_arithmetic_expansion_repeat1;
	v->a[152278] = actions(6885);
	v->a[152279] = 2;
	small_parse_table_7614(v);
}

void	small_parse_table_7614(t_small_parse_table_array *v)
{
	v->a[152280] = anon_sym_PLUS_PLUS;
	v->a[152281] = anon_sym_DASH_DASH;
	v->a[152282] = actions(6899);
	v->a[152283] = 2;
	v->a[152284] = anon_sym_EQ_EQ;
	v->a[152285] = anon_sym_BANG_EQ;
	v->a[152286] = actions(6901);
	v->a[152287] = 2;
	v->a[152288] = anon_sym_LT;
	v->a[152289] = anon_sym_GT;
	v->a[152290] = actions(6903);
	v->a[152291] = 2;
	v->a[152292] = anon_sym_LT_EQ;
	v->a[152293] = anon_sym_GT_EQ;
	v->a[152294] = actions(6905);
	v->a[152295] = 2;
	v->a[152296] = anon_sym_LT_LT;
	v->a[152297] = anon_sym_GT_GT;
	v->a[152298] = actions(6907);
	v->a[152299] = 2;
	small_parse_table_7615(v);
}

/* EOF small_parse_table_1522.c */
