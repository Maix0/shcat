/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_391.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1955(t_small_parse_table_array *v)
{
	v->a[39100] = 3;
	v->a[39101] = anon_sym_SEMI;
	v->a[39102] = anon_sym_AMP;
	v->a[39103] = anon_sym_SEMI_SEMI;
	v->a[39104] = state(4650);
	v->a[39105] = 3;
	v->a[39106] = sym_file_redirect;
	v->a[39107] = sym_heredoc_redirect;
	v->a[39108] = aux_sym_redirected_statement_repeat1;
	v->a[39109] = actions(4247);
	v->a[39110] = 28;
	v->a[39111] = anon_sym_LPAREN_LPAREN;
	v->a[39112] = anon_sym_LT;
	v->a[39113] = anon_sym_GT;
	v->a[39114] = anon_sym_GT_GT;
	v->a[39115] = anon_sym_AMP_GT;
	v->a[39116] = anon_sym_AMP_GT_GT;
	v->a[39117] = anon_sym_LT_AMP;
	v->a[39118] = anon_sym_GT_AMP;
	v->a[39119] = anon_sym_GT_PIPE;
	small_parse_table_1956(v);
}

void	small_parse_table_1956(t_small_parse_table_array *v)
{
	v->a[39120] = anon_sym_LT_AMP_DASH;
	v->a[39121] = anon_sym_GT_AMP_DASH;
	v->a[39122] = anon_sym_LT_LT_LT;
	v->a[39123] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39124] = anon_sym_DOLLAR_LBRACK;
	v->a[39125] = anon_sym_DOLLAR;
	v->a[39126] = sym__special_character;
	v->a[39127] = anon_sym_DQUOTE;
	v->a[39128] = sym_raw_string;
	v->a[39129] = sym_ansi_c_string;
	v->a[39130] = aux_sym_number_token1;
	v->a[39131] = aux_sym_number_token2;
	v->a[39132] = anon_sym_DOLLAR_LBRACE;
	v->a[39133] = anon_sym_DOLLAR_LPAREN;
	v->a[39134] = anon_sym_BQUOTE;
	v->a[39135] = anon_sym_DOLLAR_BQUOTE;
	v->a[39136] = anon_sym_LT_LPAREN;
	v->a[39137] = anon_sym_GT_LPAREN;
	v->a[39138] = sym_word;
	v->a[39139] = 6;
	small_parse_table_1957(v);
}

void	small_parse_table_1957(t_small_parse_table_array *v)
{
	v->a[39140] = actions(3);
	v->a[39141] = 1;
	v->a[39142] = sym_comment;
	v->a[39143] = actions(4933);
	v->a[39144] = 1;
	v->a[39145] = aux_sym_concatenation_token1;
	v->a[39146] = actions(4935);
	v->a[39147] = 1;
	v->a[39148] = sym__concat;
	v->a[39149] = state(978);
	v->a[39150] = 1;
	v->a[39151] = aux_sym_concatenation_repeat1;
	v->a[39152] = actions(4469);
	v->a[39153] = 5;
	v->a[39154] = sym_file_descriptor;
	v->a[39155] = sym_test_operator;
	v->a[39156] = sym__bare_dollar;
	v->a[39157] = sym__brace_start;
	v->a[39158] = aux_sym_heredoc_redirect_token1;
	v->a[39159] = actions(4467);
	small_parse_table_1958(v);
}

void	small_parse_table_1958(t_small_parse_table_array *v)
{
	v->a[39160] = 41;
	v->a[39161] = anon_sym_LPAREN_LPAREN;
	v->a[39162] = anon_sym_SEMI;
	v->a[39163] = anon_sym_PIPE_PIPE;
	v->a[39164] = anon_sym_AMP_AMP;
	v->a[39165] = anon_sym_PIPE;
	v->a[39166] = anon_sym_AMP;
	v->a[39167] = anon_sym_EQ_EQ;
	v->a[39168] = anon_sym_LT;
	v->a[39169] = anon_sym_GT;
	v->a[39170] = anon_sym_LT_LT;
	v->a[39171] = anon_sym_GT_GT;
	v->a[39172] = anon_sym_SEMI_SEMI;
	v->a[39173] = anon_sym_SEMI_AMP;
	v->a[39174] = anon_sym_SEMI_SEMI_AMP;
	v->a[39175] = anon_sym_PIPE_AMP;
	v->a[39176] = anon_sym_EQ_TILDE;
	v->a[39177] = anon_sym_AMP_GT;
	v->a[39178] = anon_sym_AMP_GT_GT;
	v->a[39179] = anon_sym_LT_AMP;
	small_parse_table_1959(v);
}

void	small_parse_table_1959(t_small_parse_table_array *v)
{
	v->a[39180] = anon_sym_GT_AMP;
	v->a[39181] = anon_sym_GT_PIPE;
	v->a[39182] = anon_sym_LT_AMP_DASH;
	v->a[39183] = anon_sym_GT_AMP_DASH;
	v->a[39184] = anon_sym_LT_LT_DASH;
	v->a[39185] = anon_sym_LT_LT_LT;
	v->a[39186] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39187] = anon_sym_DOLLAR_LBRACK;
	v->a[39188] = anon_sym_DOLLAR;
	v->a[39189] = sym__special_character;
	v->a[39190] = anon_sym_DQUOTE;
	v->a[39191] = sym_raw_string;
	v->a[39192] = sym_ansi_c_string;
	v->a[39193] = aux_sym_number_token1;
	v->a[39194] = aux_sym_number_token2;
	v->a[39195] = anon_sym_DOLLAR_LBRACE;
	v->a[39196] = anon_sym_DOLLAR_LPAREN;
	v->a[39197] = anon_sym_BQUOTE;
	v->a[39198] = anon_sym_DOLLAR_BQUOTE;
	v->a[39199] = anon_sym_LT_LPAREN;
	small_parse_table_1960(v);
}

/* EOF small_parse_table_391.c */
