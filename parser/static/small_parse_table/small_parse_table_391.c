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
	v->a[39100] = sym_raw_string;
	v->a[39101] = sym_number;
	v->a[39102] = anon_sym_DOLLAR_LBRACE;
	v->a[39103] = anon_sym_DOLLAR_LPAREN;
	v->a[39104] = anon_sym_BQUOTE;
	v->a[39105] = sym_word;
	v->a[39106] = anon_sym_SEMI;
	v->a[39107] = 3;
	v->a[39108] = actions(3);
	v->a[39109] = 1;
	v->a[39110] = sym_comment;
	v->a[39111] = actions(753);
	v->a[39112] = 2;
	v->a[39113] = sym_file_descriptor;
	v->a[39114] = sym__concat;
	v->a[39115] = actions(751);
	v->a[39116] = 27;
	v->a[39117] = anon_sym_PIPE;
	v->a[39118] = anon_sym_RPAREN;
	v->a[39119] = anon_sym_SEMI_SEMI;
	small_parse_table_1956(v);
}

void	small_parse_table_1956(t_small_parse_table_array *v)
{
	v->a[39120] = anon_sym_AMP_AMP;
	v->a[39121] = anon_sym_PIPE_PIPE;
	v->a[39122] = anon_sym_LT;
	v->a[39123] = anon_sym_GT;
	v->a[39124] = anon_sym_GT_GT;
	v->a[39125] = anon_sym_LT_AMP;
	v->a[39126] = anon_sym_GT_AMP;
	v->a[39127] = anon_sym_GT_PIPE;
	v->a[39128] = anon_sym_LT_GT;
	v->a[39129] = anon_sym_LT_LT;
	v->a[39130] = anon_sym_LT_LT_DASH;
	v->a[39131] = aux_sym_heredoc_redirect_token1;
	v->a[39132] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39133] = anon_sym_AMP;
	v->a[39134] = aux_sym_concatenation_token1;
	v->a[39135] = anon_sym_DOLLAR;
	v->a[39136] = anon_sym_DQUOTE;
	v->a[39137] = sym_raw_string;
	v->a[39138] = sym_number;
	v->a[39139] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1957(v);
}

void	small_parse_table_1957(t_small_parse_table_array *v)
{
	v->a[39140] = anon_sym_DOLLAR_LPAREN;
	v->a[39141] = anon_sym_BQUOTE;
	v->a[39142] = sym_word;
	v->a[39143] = anon_sym_SEMI;
	v->a[39144] = 3;
	v->a[39145] = actions(3);
	v->a[39146] = 1;
	v->a[39147] = sym_comment;
	v->a[39148] = actions(662);
	v->a[39149] = 2;
	v->a[39150] = sym_file_descriptor;
	v->a[39151] = sym__concat;
	v->a[39152] = actions(660);
	v->a[39153] = 27;
	v->a[39154] = anon_sym_PIPE;
	v->a[39155] = anon_sym_RPAREN;
	v->a[39156] = anon_sym_SEMI_SEMI;
	v->a[39157] = anon_sym_AMP_AMP;
	v->a[39158] = anon_sym_PIPE_PIPE;
	v->a[39159] = anon_sym_LT;
	small_parse_table_1958(v);
}

void	small_parse_table_1958(t_small_parse_table_array *v)
{
	v->a[39160] = anon_sym_GT;
	v->a[39161] = anon_sym_GT_GT;
	v->a[39162] = anon_sym_LT_AMP;
	v->a[39163] = anon_sym_GT_AMP;
	v->a[39164] = anon_sym_GT_PIPE;
	v->a[39165] = anon_sym_LT_GT;
	v->a[39166] = anon_sym_LT_LT;
	v->a[39167] = anon_sym_LT_LT_DASH;
	v->a[39168] = aux_sym_heredoc_redirect_token1;
	v->a[39169] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39170] = anon_sym_AMP;
	v->a[39171] = aux_sym_concatenation_token1;
	v->a[39172] = anon_sym_DOLLAR;
	v->a[39173] = anon_sym_DQUOTE;
	v->a[39174] = sym_raw_string;
	v->a[39175] = sym_number;
	v->a[39176] = anon_sym_DOLLAR_LBRACE;
	v->a[39177] = anon_sym_DOLLAR_LPAREN;
	v->a[39178] = anon_sym_BQUOTE;
	v->a[39179] = sym_word;
	small_parse_table_1959(v);
}

void	small_parse_table_1959(t_small_parse_table_array *v)
{
	v->a[39180] = anon_sym_SEMI;
	v->a[39181] = 7;
	v->a[39182] = actions(3);
	v->a[39183] = 1;
	v->a[39184] = sym_comment;
	v->a[39185] = actions(949);
	v->a[39186] = 1;
	v->a[39187] = sym_file_descriptor;
	v->a[39188] = actions(1393);
	v->a[39189] = 1;
	v->a[39190] = sym_variable_name;
	v->a[39191] = state(1355);
	v->a[39192] = 2;
	v->a[39193] = sym_variable_assignment;
	v->a[39194] = aux_sym__variable_assignments_repeat1;
	v->a[39195] = state(1359);
	v->a[39196] = 3;
	v->a[39197] = sym_file_redirect;
	v->a[39198] = sym_heredoc_redirect;
	v->a[39199] = aux_sym_redirected_statement_repeat1;
	small_parse_table_1960(v);
}

/* EOF small_parse_table_391.c */
