/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_511.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2555(t_small_parse_table_array *v)
{
	v->a[51100] = sym_comment;
	v->a[51101] = actions(1565);
	v->a[51102] = 1;
	v->a[51103] = sym_file_descriptor;
	v->a[51104] = actions(1568);
	v->a[51105] = 1;
	v->a[51106] = sym_variable_name;
	v->a[51107] = actions(1680);
	v->a[51108] = 1;
	v->a[51109] = anon_sym_RPAREN;
	v->a[51110] = actions(1558);
	v->a[51111] = 9;
	v->a[51112] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51113] = anon_sym_DOLLAR;
	v->a[51114] = anon_sym_DQUOTE;
	v->a[51115] = sym_raw_string;
	v->a[51116] = sym_number;
	v->a[51117] = anon_sym_DOLLAR_LBRACE;
	v->a[51118] = anon_sym_DOLLAR_LPAREN;
	v->a[51119] = anon_sym_BQUOTE;
	small_parse_table_2556(v);
}

void	small_parse_table_2556(t_small_parse_table_array *v)
{
	v->a[51120] = sym_word;
	v->a[51121] = actions(1560);
	v->a[51122] = 9;
	v->a[51123] = anon_sym_PIPE;
	v->a[51124] = anon_sym_SEMI_SEMI;
	v->a[51125] = anon_sym_AMP_AMP;
	v->a[51126] = anon_sym_PIPE_PIPE;
	v->a[51127] = anon_sym_LT_LT;
	v->a[51128] = anon_sym_LT_LT_DASH;
	v->a[51129] = aux_sym_heredoc_redirect_token1;
	v->a[51130] = anon_sym_AMP;
	v->a[51131] = anon_sym_SEMI;
	v->a[51132] = actions(1562);
	v->a[51133] = 10;
	v->a[51134] = anon_sym_LT;
	v->a[51135] = anon_sym_GT;
	v->a[51136] = anon_sym_GT_GT;
	v->a[51137] = anon_sym_AMP_GT;
	v->a[51138] = anon_sym_AMP_GT_GT;
	v->a[51139] = anon_sym_LT_AMP;
	small_parse_table_2557(v);
}

void	small_parse_table_2557(t_small_parse_table_array *v)
{
	v->a[51140] = anon_sym_GT_AMP;
	v->a[51141] = anon_sym_GT_PIPE;
	v->a[51142] = anon_sym_LT_AMP_DASH;
	v->a[51143] = anon_sym_GT_AMP_DASH;
	v->a[51144] = 4;
	v->a[51145] = actions(3);
	v->a[51146] = 1;
	v->a[51147] = sym_comment;
	v->a[51148] = actions(1556);
	v->a[51149] = 2;
	v->a[51150] = sym_file_descriptor;
	v->a[51151] = sym_variable_name;
	v->a[51152] = actions(1581);
	v->a[51153] = 2;
	v->a[51154] = anon_sym_esac;
	v->a[51155] = anon_sym_SEMI_SEMI;
	v->a[51156] = actions(1552);
	v->a[51157] = 27;
	v->a[51158] = anon_sym_for;
	v->a[51159] = anon_sym_while;
	small_parse_table_2558(v);
}

void	small_parse_table_2558(t_small_parse_table_array *v)
{
	v->a[51160] = anon_sym_until;
	v->a[51161] = anon_sym_if;
	v->a[51162] = anon_sym_case;
	v->a[51163] = anon_sym_LPAREN;
	v->a[51164] = anon_sym_LBRACE;
	v->a[51165] = anon_sym_BANG;
	v->a[51166] = anon_sym_LT;
	v->a[51167] = anon_sym_GT;
	v->a[51168] = anon_sym_GT_GT;
	v->a[51169] = anon_sym_AMP_GT;
	v->a[51170] = anon_sym_AMP_GT_GT;
	v->a[51171] = anon_sym_LT_AMP;
	v->a[51172] = anon_sym_GT_AMP;
	v->a[51173] = anon_sym_GT_PIPE;
	v->a[51174] = anon_sym_LT_AMP_DASH;
	v->a[51175] = anon_sym_GT_AMP_DASH;
	v->a[51176] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51177] = anon_sym_DOLLAR;
	v->a[51178] = anon_sym_DQUOTE;
	v->a[51179] = sym_raw_string;
	small_parse_table_2559(v);
}

void	small_parse_table_2559(t_small_parse_table_array *v)
{
	v->a[51180] = sym_number;
	v->a[51181] = anon_sym_DOLLAR_LBRACE;
	v->a[51182] = anon_sym_DOLLAR_LPAREN;
	v->a[51183] = anon_sym_BQUOTE;
	v->a[51184] = sym_word;
	v->a[51185] = 4;
	v->a[51186] = actions(3);
	v->a[51187] = 1;
	v->a[51188] = sym_comment;
	v->a[51189] = actions(1554);
	v->a[51190] = 2;
	v->a[51191] = anon_sym_RPAREN;
	v->a[51192] = anon_sym_SEMI_SEMI;
	v->a[51193] = actions(1556);
	v->a[51194] = 2;
	v->a[51195] = sym_file_descriptor;
	v->a[51196] = sym_variable_name;
	v->a[51197] = actions(1552);
	v->a[51198] = 27;
	v->a[51199] = anon_sym_for;
	small_parse_table_2560(v);
}

/* EOF small_parse_table_511.c */
