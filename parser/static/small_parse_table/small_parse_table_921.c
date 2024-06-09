/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_921.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4605(t_small_parse_table_array *v)
{
	v->a[92100] = 1;
	v->a[92101] = sym_comment;
	v->a[92102] = actions(4176);
	v->a[92103] = 1;
	v->a[92104] = anon_sym_elif;
	v->a[92105] = actions(4178);
	v->a[92106] = 1;
	v->a[92107] = anon_sym_else;
	v->a[92108] = actions(4198);
	v->a[92109] = 1;
	v->a[92110] = anon_sym_fi;
	v->a[92111] = state(2184);
	v->a[92112] = 1;
	v->a[92113] = sym_else_clause;
	v->a[92114] = state(1918);
	v->a[92115] = 2;
	v->a[92116] = sym_elif_clause;
	v->a[92117] = aux_sym_if_statement_repeat1;
	v->a[92118] = 3;
	v->a[92119] = actions(1299);
	small_parse_table_4606(v);
}

void	small_parse_table_4606(t_small_parse_table_array *v)
{
	v->a[92120] = 1;
	v->a[92121] = anon_sym_DOLLAR;
	v->a[92122] = actions(1404);
	v->a[92123] = 1;
	v->a[92124] = sym_comment;
	v->a[92125] = actions(1301);
	v->a[92126] = 5;
	v->a[92127] = sym_heredoc_content;
	v->a[92128] = sym_heredoc_end;
	v->a[92129] = anon_sym_DOLLAR_LBRACE;
	v->a[92130] = anon_sym_DOLLAR_LPAREN;
	v->a[92131] = anon_sym_BQUOTE;
	v->a[92132] = 3;
	v->a[92133] = actions(3);
	v->a[92134] = 1;
	v->a[92135] = sym_comment;
	v->a[92136] = actions(4202);
	v->a[92137] = 2;
	v->a[92138] = sym_regex;
	v->a[92139] = aux_sym_expansion_regex_token1;
	small_parse_table_4607(v);
}

void	small_parse_table_4607(t_small_parse_table_array *v)
{
	v->a[92140] = actions(4200);
	v->a[92141] = 4;
	v->a[92142] = anon_sym_RPAREN;
	v->a[92143] = anon_sym_RBRACE;
	v->a[92144] = anon_sym_DQUOTE;
	v->a[92145] = sym_raw_string;
	v->a[92146] = 6;
	v->a[92147] = actions(1404);
	v->a[92148] = 1;
	v->a[92149] = sym_comment;
	v->a[92150] = actions(4180);
	v->a[92151] = 1;
	v->a[92152] = anon_sym_PIPE;
	v->a[92153] = actions(4204);
	v->a[92154] = 1;
	v->a[92155] = anon_sym_RPAREN;
	v->a[92156] = state(1991);
	v->a[92157] = 1;
	v->a[92158] = aux_sym_concatenation_repeat1;
	v->a[92159] = state(2012);
	small_parse_table_4608(v);
}

void	small_parse_table_4608(t_small_parse_table_array *v)
{
	v->a[92160] = 1;
	v->a[92161] = aux_sym__case_item_last_repeat1;
	v->a[92162] = actions(4184);
	v->a[92163] = 2;
	v->a[92164] = sym__concat;
	v->a[92165] = aux_sym_concatenation_token1;
	v->a[92166] = 6;
	v->a[92167] = actions(1404);
	v->a[92168] = 1;
	v->a[92169] = sym_comment;
	v->a[92170] = actions(4206);
	v->a[92171] = 1;
	v->a[92172] = sym_simple_heredoc_body;
	v->a[92173] = actions(4208);
	v->a[92174] = 1;
	v->a[92175] = sym__heredoc_body_beginning;
	v->a[92176] = state(1146);
	v->a[92177] = 1;
	v->a[92178] = sym__heredoc_body;
	v->a[92179] = state(1150);
	small_parse_table_4609(v);
}

void	small_parse_table_4609(t_small_parse_table_array *v)
{
	v->a[92180] = 1;
	v->a[92181] = sym__simple_heredoc_body;
	v->a[92182] = state(2151);
	v->a[92183] = 1;
	v->a[92184] = sym_heredoc_body;
	v->a[92185] = 2;
	v->a[92186] = actions(1404);
	v->a[92187] = 1;
	v->a[92188] = sym_comment;
	v->a[92189] = actions(1311);
	v->a[92190] = 5;
	v->a[92191] = sym__concat;
	v->a[92192] = anon_sym_PIPE;
	v->a[92193] = anon_sym_RPAREN;
	v->a[92194] = anon_sym_RBRACE;
	v->a[92195] = aux_sym_concatenation_token1;
	v->a[92196] = 5;
	v->a[92197] = actions(1404);
	v->a[92198] = 1;
	v->a[92199] = sym_comment;
	small_parse_table_4610(v);
}

/* EOF small_parse_table_921.c */
