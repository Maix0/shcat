/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_991.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4955(t_small_parse_table_array *v)
{
	v->a[99100] = anon_sym_DOLLAR;
	v->a[99101] = actions(1141);
	v->a[99102] = 5;
	v->a[99103] = sym_heredoc_content;
	v->a[99104] = sym_heredoc_end;
	v->a[99105] = anon_sym_DOLLAR_LBRACE;
	v->a[99106] = anon_sym_DOLLAR_LPAREN;
	v->a[99107] = anon_sym_BQUOTE;
	v->a[99108] = 3;
	v->a[99109] = actions(1074);
	v->a[99110] = 1;
	v->a[99111] = anon_sym_DOLLAR;
	v->a[99112] = actions(1094);
	v->a[99113] = 1;
	v->a[99114] = sym_comment;
	v->a[99115] = actions(1076);
	v->a[99116] = 5;
	v->a[99117] = sym_heredoc_content;
	v->a[99118] = sym_heredoc_end;
	v->a[99119] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_4956(v);
}

void	small_parse_table_4956(t_small_parse_table_array *v)
{
	v->a[99120] = anon_sym_DOLLAR_LPAREN;
	v->a[99121] = anon_sym_BQUOTE;
	v->a[99122] = 6;
	v->a[99123] = actions(1094);
	v->a[99124] = 1;
	v->a[99125] = sym_comment;
	v->a[99126] = actions(4430);
	v->a[99127] = 1;
	v->a[99128] = anon_sym_PIPE;
	v->a[99129] = actions(4432);
	v->a[99130] = 1;
	v->a[99131] = anon_sym_RPAREN;
	v->a[99132] = state(2170);
	v->a[99133] = 1;
	v->a[99134] = aux_sym_concatenation_repeat1;
	v->a[99135] = state(2231);
	v->a[99136] = 1;
	v->a[99137] = aux_sym__case_item_last_repeat1;
	v->a[99138] = actions(4434);
	v->a[99139] = 2;
	small_parse_table_4957(v);
}

void	small_parse_table_4957(t_small_parse_table_array *v)
{
	v->a[99140] = sym__concat;
	v->a[99141] = aux_sym_concatenation_token1;
	v->a[99142] = 6;
	v->a[99143] = actions(1094);
	v->a[99144] = 1;
	v->a[99145] = sym_comment;
	v->a[99146] = actions(4436);
	v->a[99147] = 1;
	v->a[99148] = anon_sym_fi;
	v->a[99149] = actions(4438);
	v->a[99150] = 1;
	v->a[99151] = anon_sym_elif;
	v->a[99152] = actions(4440);
	v->a[99153] = 1;
	v->a[99154] = anon_sym_else;
	v->a[99155] = state(2348);
	v->a[99156] = 1;
	v->a[99157] = sym_else_clause;
	v->a[99158] = state(2172);
	v->a[99159] = 2;
	small_parse_table_4958(v);
}

void	small_parse_table_4958(t_small_parse_table_array *v)
{
	v->a[99160] = sym_elif_clause;
	v->a[99161] = aux_sym_if_statement_repeat1;
	v->a[99162] = 6;
	v->a[99163] = actions(1094);
	v->a[99164] = 1;
	v->a[99165] = sym_comment;
	v->a[99166] = actions(4438);
	v->a[99167] = 1;
	v->a[99168] = anon_sym_elif;
	v->a[99169] = actions(4440);
	v->a[99170] = 1;
	v->a[99171] = anon_sym_else;
	v->a[99172] = actions(4442);
	v->a[99173] = 1;
	v->a[99174] = anon_sym_fi;
	v->a[99175] = state(2432);
	v->a[99176] = 1;
	v->a[99177] = sym_else_clause;
	v->a[99178] = state(2172);
	v->a[99179] = 2;
	small_parse_table_4959(v);
}

void	small_parse_table_4959(t_small_parse_table_array *v)
{
	v->a[99180] = sym_elif_clause;
	v->a[99181] = aux_sym_if_statement_repeat1;
	v->a[99182] = 3;
	v->a[99183] = actions(1094);
	v->a[99184] = 1;
	v->a[99185] = sym_comment;
	v->a[99186] = actions(1143);
	v->a[99187] = 1;
	v->a[99188] = anon_sym_DOLLAR;
	v->a[99189] = actions(1145);
	v->a[99190] = 5;
	v->a[99191] = sym_heredoc_content;
	v->a[99192] = sym_heredoc_end;
	v->a[99193] = anon_sym_DOLLAR_LBRACE;
	v->a[99194] = anon_sym_DOLLAR_LPAREN;
	v->a[99195] = anon_sym_BQUOTE;
	v->a[99196] = 3;
	v->a[99197] = actions(3);
	v->a[99198] = 1;
	v->a[99199] = sym_comment;
	small_parse_table_4960(v);
}

/* EOF small_parse_table_991.c */
