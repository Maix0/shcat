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
	v->a[43100] = actions(1435);
	v->a[43101] = 1;
	v->a[43102] = sym_file_descriptor;
	v->a[43103] = actions(1438);
	v->a[43104] = 1;
	v->a[43105] = sym_variable_name;
	v->a[43106] = actions(1513);
	v->a[43107] = 1;
	v->a[43108] = anon_sym_RPAREN;
	v->a[43109] = actions(1432);
	v->a[43110] = 7;
	v->a[43111] = anon_sym_LT;
	v->a[43112] = anon_sym_GT;
	v->a[43113] = anon_sym_GT_GT;
	v->a[43114] = anon_sym_LT_AMP;
	v->a[43115] = anon_sym_GT_AMP;
	v->a[43116] = anon_sym_GT_PIPE;
	v->a[43117] = anon_sym_LT_GT;
	v->a[43118] = actions(1428);
	v->a[43119] = 9;
	small_parse_table_2156(v);
}

void	small_parse_table_2156(t_small_parse_table_array *v)
{
	v->a[43120] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[43121] = anon_sym_DOLLAR;
	v->a[43122] = anon_sym_DQUOTE;
	v->a[43123] = sym_raw_string;
	v->a[43124] = sym_number;
	v->a[43125] = anon_sym_DOLLAR_LBRACE;
	v->a[43126] = anon_sym_DOLLAR_LPAREN;
	v->a[43127] = anon_sym_BQUOTE;
	v->a[43128] = sym_word;
	v->a[43129] = actions(1430);
	v->a[43130] = 9;
	v->a[43131] = anon_sym_PIPE;
	v->a[43132] = anon_sym_SEMI_SEMI;
	v->a[43133] = anon_sym_AMP_AMP;
	v->a[43134] = anon_sym_PIPE_PIPE;
	v->a[43135] = anon_sym_LT_LT;
	v->a[43136] = anon_sym_LT_LT_DASH;
	v->a[43137] = aux_sym_heredoc_redirect_token1;
	v->a[43138] = anon_sym_AMP;
	v->a[43139] = anon_sym_SEMI;
	small_parse_table_2157(v);
}

void	small_parse_table_2157(t_small_parse_table_array *v)
{
	v->a[43140] = 7;
	v->a[43141] = actions(3);
	v->a[43142] = 1;
	v->a[43143] = sym_comment;
	v->a[43144] = actions(1435);
	v->a[43145] = 1;
	v->a[43146] = sym_file_descriptor;
	v->a[43147] = actions(1438);
	v->a[43148] = 1;
	v->a[43149] = sym_variable_name;
	v->a[43150] = actions(1516);
	v->a[43151] = 1;
	v->a[43152] = anon_sym_RPAREN;
	v->a[43153] = actions(1432);
	v->a[43154] = 7;
	v->a[43155] = anon_sym_LT;
	v->a[43156] = anon_sym_GT;
	v->a[43157] = anon_sym_GT_GT;
	v->a[43158] = anon_sym_LT_AMP;
	v->a[43159] = anon_sym_GT_AMP;
	small_parse_table_2158(v);
}

void	small_parse_table_2158(t_small_parse_table_array *v)
{
	v->a[43160] = anon_sym_GT_PIPE;
	v->a[43161] = anon_sym_LT_GT;
	v->a[43162] = actions(1428);
	v->a[43163] = 9;
	v->a[43164] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[43165] = anon_sym_DOLLAR;
	v->a[43166] = anon_sym_DQUOTE;
	v->a[43167] = sym_raw_string;
	v->a[43168] = sym_number;
	v->a[43169] = anon_sym_DOLLAR_LBRACE;
	v->a[43170] = anon_sym_DOLLAR_LPAREN;
	v->a[43171] = anon_sym_BQUOTE;
	v->a[43172] = sym_word;
	v->a[43173] = actions(1430);
	v->a[43174] = 9;
	v->a[43175] = anon_sym_PIPE;
	v->a[43176] = anon_sym_SEMI_SEMI;
	v->a[43177] = anon_sym_AMP_AMP;
	v->a[43178] = anon_sym_PIPE_PIPE;
	v->a[43179] = anon_sym_LT_LT;
	small_parse_table_2159(v);
}

void	small_parse_table_2159(t_small_parse_table_array *v)
{
	v->a[43180] = anon_sym_LT_LT_DASH;
	v->a[43181] = aux_sym_heredoc_redirect_token1;
	v->a[43182] = anon_sym_AMP;
	v->a[43183] = anon_sym_SEMI;
	v->a[43184] = 4;
	v->a[43185] = actions(3);
	v->a[43186] = 1;
	v->a[43187] = sym_comment;
	v->a[43188] = actions(1424);
	v->a[43189] = 2;
	v->a[43190] = anon_sym_RPAREN;
	v->a[43191] = anon_sym_SEMI_SEMI;
	v->a[43192] = actions(1426);
	v->a[43193] = 2;
	v->a[43194] = sym_file_descriptor;
	v->a[43195] = sym_variable_name;
	v->a[43196] = actions(1422);
	v->a[43197] = 24;
	v->a[43198] = anon_sym_for;
	v->a[43199] = anon_sym_while;
	small_parse_table_2160(v);
}

/* EOF small_parse_table_431.c */
