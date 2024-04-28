/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1722.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8610(t_small_parse_table_array *v)
{
	v->a[172200] = anon_sym_PLUS_EQ;
	v->a[172201] = anon_sym_DASH_EQ;
	v->a[172202] = anon_sym_STAR_EQ;
	v->a[172203] = anon_sym_SLASH_EQ;
	v->a[172204] = anon_sym_PERCENT_EQ;
	v->a[172205] = anon_sym_STAR_STAR_EQ;
	v->a[172206] = anon_sym_LT_LT_EQ;
	v->a[172207] = anon_sym_GT_GT_EQ;
	v->a[172208] = anon_sym_AMP_EQ;
	v->a[172209] = anon_sym_CARET_EQ;
	v->a[172210] = anon_sym_PIPE_EQ;
	v->a[172211] = 3;
	v->a[172212] = actions(71);
	v->a[172213] = 1;
	v->a[172214] = sym_comment;
	v->a[172215] = actions(6829);
	v->a[172216] = 14;
	v->a[172217] = anon_sym_EQ;
	v->a[172218] = anon_sym_PIPE;
	v->a[172219] = anon_sym_CARET;
	small_parse_table_8611(v);
}

void	small_parse_table_8611(t_small_parse_table_array *v)
{
	v->a[172220] = anon_sym_AMP;
	v->a[172221] = anon_sym_LT;
	v->a[172222] = anon_sym_GT;
	v->a[172223] = anon_sym_LT_LT;
	v->a[172224] = anon_sym_GT_GT;
	v->a[172225] = anon_sym_PLUS;
	v->a[172226] = anon_sym_DASH;
	v->a[172227] = anon_sym_STAR;
	v->a[172228] = anon_sym_SLASH;
	v->a[172229] = anon_sym_PERCENT;
	v->a[172230] = anon_sym_STAR_STAR;
	v->a[172231] = actions(6827);
	v->a[172232] = 22;
	v->a[172233] = anon_sym_PLUS_PLUS;
	v->a[172234] = anon_sym_DASH_DASH;
	v->a[172235] = anon_sym_PLUS_EQ;
	v->a[172236] = anon_sym_DASH_EQ;
	v->a[172237] = anon_sym_STAR_EQ;
	v->a[172238] = anon_sym_SLASH_EQ;
	v->a[172239] = anon_sym_PERCENT_EQ;
	small_parse_table_8612(v);
}

void	small_parse_table_8612(t_small_parse_table_array *v)
{
	v->a[172240] = anon_sym_STAR_STAR_EQ;
	v->a[172241] = anon_sym_LT_LT_EQ;
	v->a[172242] = anon_sym_GT_GT_EQ;
	v->a[172243] = anon_sym_AMP_EQ;
	v->a[172244] = anon_sym_CARET_EQ;
	v->a[172245] = anon_sym_PIPE_EQ;
	v->a[172246] = anon_sym_PIPE_PIPE;
	v->a[172247] = anon_sym_AMP_AMP;
	v->a[172248] = anon_sym_EQ_EQ;
	v->a[172249] = anon_sym_BANG_EQ;
	v->a[172250] = anon_sym_LT_EQ;
	v->a[172251] = anon_sym_GT_EQ;
	v->a[172252] = anon_sym_RPAREN;
	v->a[172253] = anon_sym_EQ_TILDE;
	v->a[172254] = anon_sym_QMARK;
	v->a[172255] = 3;
	v->a[172256] = actions(3);
	v->a[172257] = 1;
	v->a[172258] = sym_comment;
	v->a[172259] = actions(1322);
	small_parse_table_8613(v);
}

void	small_parse_table_8613(t_small_parse_table_array *v)
{
	v->a[172260] = 5;
	v->a[172261] = sym_file_descriptor;
	v->a[172262] = sym__concat;
	v->a[172263] = sym_test_operator;
	v->a[172264] = sym__brace_start;
	v->a[172265] = aux_sym_heredoc_redirect_token1;
	v->a[172266] = actions(1320);
	v->a[172267] = 31;
	v->a[172268] = anon_sym_LPAREN_LPAREN;
	v->a[172269] = anon_sym_PIPE_PIPE;
	v->a[172270] = anon_sym_AMP_AMP;
	v->a[172271] = anon_sym_LT;
	v->a[172272] = anon_sym_GT;
	v->a[172273] = anon_sym_GT_GT;
	v->a[172274] = anon_sym_AMP_GT;
	v->a[172275] = anon_sym_AMP_GT_GT;
	v->a[172276] = anon_sym_LT_AMP;
	v->a[172277] = anon_sym_GT_AMP;
	v->a[172278] = anon_sym_GT_PIPE;
	v->a[172279] = anon_sym_LT_AMP_DASH;
	small_parse_table_8614(v);
}

void	small_parse_table_8614(t_small_parse_table_array *v)
{
	v->a[172280] = anon_sym_GT_AMP_DASH;
	v->a[172281] = anon_sym_LT_LT_LT;
	v->a[172282] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[172283] = anon_sym_DOLLAR_LBRACK;
	v->a[172284] = aux_sym_concatenation_token1;
	v->a[172285] = anon_sym_DOLLAR;
	v->a[172286] = sym__special_character;
	v->a[172287] = anon_sym_DQUOTE;
	v->a[172288] = sym_raw_string;
	v->a[172289] = sym_ansi_c_string;
	v->a[172290] = aux_sym_number_token1;
	v->a[172291] = aux_sym_number_token2;
	v->a[172292] = anon_sym_DOLLAR_LBRACE;
	v->a[172293] = anon_sym_DOLLAR_LPAREN;
	v->a[172294] = anon_sym_BQUOTE;
	v->a[172295] = anon_sym_DOLLAR_BQUOTE;
	v->a[172296] = anon_sym_LT_LPAREN;
	v->a[172297] = anon_sym_GT_LPAREN;
	v->a[172298] = sym_word;
	v->a[172299] = 3;
	small_parse_table_8615(v);
}

/* EOF small_parse_table_1722.c */
