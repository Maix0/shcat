/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_431.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2155(t_small_parse_table_array *v)
{
	v->a[43100] = sym_file_redirect;
	v->a[43101] = sym_heredoc_redirect;
	v->a[43102] = aux_sym_redirected_statement_repeat1;
	v->a[43103] = 6;
	v->a[43104] = actions(3);
	v->a[43105] = 1;
	v->a[43106] = sym_comment;
	v->a[43107] = actions(1890);
	v->a[43108] = 1;
	v->a[43109] = aux_sym_concatenation_token1;
	v->a[43110] = actions(1904);
	v->a[43111] = 1;
	v->a[43112] = sym__concat;
	v->a[43113] = state(766);
	v->a[43114] = 1;
	v->a[43115] = aux_sym_concatenation_repeat1;
	v->a[43116] = actions(921);
	v->a[43117] = 2;
	v->a[43118] = sym_variable_name;
	v->a[43119] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2156(v);
}

void	small_parse_table_2156(t_small_parse_table_array *v)
{
	v->a[43120] = actions(923);
	v->a[43121] = 10;
	v->a[43122] = anon_sym_PIPE;
	v->a[43123] = anon_sym_RPAREN;
	v->a[43124] = anon_sym_SEMI_SEMI;
	v->a[43125] = anon_sym_AMP_AMP;
	v->a[43126] = anon_sym_PIPE_PIPE;
	v->a[43127] = anon_sym_LT;
	v->a[43128] = anon_sym_GT;
	v->a[43129] = anon_sym_GT_GT;
	v->a[43130] = anon_sym_LT_LT;
	v->a[43131] = anon_sym_SEMI;
	v->a[43132] = 5;
	v->a[43133] = actions(3);
	v->a[43134] = 1;
	v->a[43135] = sym_comment;
	v->a[43136] = actions(1910);
	v->a[43137] = 1;
	v->a[43138] = sym_variable_name;
	v->a[43139] = actions(1908);
	small_parse_table_2157(v);
}

void	small_parse_table_2157(t_small_parse_table_array *v)
{
	v->a[43140] = 2;
	v->a[43141] = aux_sym__simple_variable_name_token1;
	v->a[43142] = aux_sym__multiline_variable_name_token1;
	v->a[43143] = actions(343);
	v->a[43144] = 4;
	v->a[43145] = anon_sym_in;
	v->a[43146] = anon_sym_SEMI_SEMI;
	v->a[43147] = aux_sym_heredoc_redirect_token1;
	v->a[43148] = anon_sym_SEMI;
	v->a[43149] = actions(1906);
	v->a[43150] = 8;
	v->a[43151] = anon_sym_BANG;
	v->a[43152] = anon_sym_DASH;
	v->a[43153] = anon_sym_STAR;
	v->a[43154] = anon_sym_QMARK;
	v->a[43155] = anon_sym_DOLLAR;
	v->a[43156] = anon_sym_POUND;
	v->a[43157] = anon_sym_AT;
	v->a[43158] = anon_sym_0;
	v->a[43159] = 4;
	small_parse_table_2158(v);
}

void	small_parse_table_2158(t_small_parse_table_array *v)
{
	v->a[43160] = actions(3);
	v->a[43161] = 1;
	v->a[43162] = sym_comment;
	v->a[43163] = actions(697);
	v->a[43164] = 1;
	v->a[43165] = sym_variable_name;
	v->a[43166] = state(924);
	v->a[43167] = 2;
	v->a[43168] = sym_variable_assignment;
	v->a[43169] = aux_sym__variable_assignments_repeat1;
	v->a[43170] = actions(576);
	v->a[43171] = 12;
	v->a[43172] = anon_sym_LT;
	v->a[43173] = anon_sym_GT;
	v->a[43174] = anon_sym_GT_GT;
	v->a[43175] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[43176] = anon_sym_DOLLAR;
	v->a[43177] = anon_sym_DQUOTE;
	v->a[43178] = sym_raw_string;
	v->a[43179] = sym_number;
	small_parse_table_2159(v);
}

void	small_parse_table_2159(t_small_parse_table_array *v)
{
	v->a[43180] = anon_sym_DOLLAR_LBRACE;
	v->a[43181] = anon_sym_DOLLAR_LPAREN;
	v->a[43182] = anon_sym_BQUOTE;
	v->a[43183] = sym_word;
	v->a[43184] = 10;
	v->a[43185] = actions(3);
	v->a[43186] = 1;
	v->a[43187] = sym_comment;
	v->a[43188] = actions(580);
	v->a[43189] = 1;
	v->a[43190] = anon_sym_PIPE;
	v->a[43191] = actions(584);
	v->a[43192] = 1;
	v->a[43193] = anon_sym_LT_LT;
	v->a[43194] = actions(586);
	v->a[43195] = 1;
	v->a[43196] = anon_sym_SEMI;
	v->a[43197] = actions(1878);
	v->a[43198] = 1;
	v->a[43199] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2160(v);
}

/* EOF small_parse_table_431.c */
