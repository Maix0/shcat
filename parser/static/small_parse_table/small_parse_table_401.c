/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_401.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2005(t_small_parse_table_array *v)
{
	v->a[40100] = sym_raw_string;
	v->a[40101] = sym_number;
	v->a[40102] = anon_sym_DOLLAR_LBRACE;
	v->a[40103] = anon_sym_DOLLAR_LPAREN;
	v->a[40104] = anon_sym_BQUOTE;
	v->a[40105] = sym_word;
	v->a[40106] = 3;
	v->a[40107] = actions(3);
	v->a[40108] = 1;
	v->a[40109] = sym_comment;
	v->a[40110] = actions(441);
	v->a[40111] = 2;
	v->a[40112] = sym__concat;
	v->a[40113] = sym__bare_dollar;
	v->a[40114] = actions(439);
	v->a[40115] = 22;
	v->a[40116] = anon_sym_PIPE;
	v->a[40117] = anon_sym_AMP_AMP;
	v->a[40118] = anon_sym_PIPE_PIPE;
	v->a[40119] = anon_sym_LT;
	small_parse_table_2006(v);
}

void	small_parse_table_2006(t_small_parse_table_array *v)
{
	v->a[40120] = anon_sym_GT;
	v->a[40121] = anon_sym_GT_GT;
	v->a[40122] = anon_sym_LT_AMP;
	v->a[40123] = anon_sym_GT_AMP;
	v->a[40124] = anon_sym_GT_PIPE;
	v->a[40125] = anon_sym_LT_GT;
	v->a[40126] = anon_sym_LT_LT;
	v->a[40127] = anon_sym_LT_LT_DASH;
	v->a[40128] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40129] = aux_sym_concatenation_token1;
	v->a[40130] = anon_sym_DOLLAR;
	v->a[40131] = anon_sym_DQUOTE;
	v->a[40132] = sym_raw_string;
	v->a[40133] = sym_number;
	v->a[40134] = anon_sym_DOLLAR_LBRACE;
	v->a[40135] = anon_sym_DOLLAR_LPAREN;
	v->a[40136] = anon_sym_BQUOTE;
	v->a[40137] = sym_word;
	v->a[40138] = 12;
	v->a[40139] = actions(3);
	small_parse_table_2007(v);
}

void	small_parse_table_2007(t_small_parse_table_array *v)
{
	v->a[40140] = 1;
	v->a[40141] = sym_comment;
	v->a[40142] = actions(1498);
	v->a[40143] = 1;
	v->a[40144] = anon_sym_RBRACE;
	v->a[40145] = actions(1504);
	v->a[40146] = 1;
	v->a[40147] = anon_sym_PERCENT;
	v->a[40148] = actions(1506);
	v->a[40149] = 1;
	v->a[40150] = anon_sym_POUND;
	v->a[40151] = actions(1512);
	v->a[40152] = 1;
	v->a[40153] = aux_sym__simple_variable_name_token1;
	v->a[40154] = actions(1514);
	v->a[40155] = 1;
	v->a[40156] = sym_variable_name;
	v->a[40157] = state(1744);
	v->a[40158] = 1;
	v->a[40159] = sym__expansion_regex;
	small_parse_table_2008(v);
}

void	small_parse_table_2008(t_small_parse_table_array *v)
{
	v->a[40160] = state(1745);
	v->a[40161] = 1;
	v->a[40162] = sym__expansion_expression;
	v->a[40163] = actions(1510);
	v->a[40164] = 2;
	v->a[40165] = sym__immediate_double_hash;
	v->a[40166] = anon_sym_PERCENT_PERCENT;
	v->a[40167] = actions(1502);
	v->a[40168] = 3;
	v->a[40169] = anon_sym_DASH;
	v->a[40170] = anon_sym_QMARK;
	v->a[40171] = anon_sym_0;
	v->a[40172] = actions(1500);
	v->a[40173] = 4;
	v->a[40174] = anon_sym_BANG;
	v->a[40175] = anon_sym_STAR;
	v->a[40176] = anon_sym_DOLLAR;
	v->a[40177] = anon_sym_AT;
	v->a[40178] = actions(1508);
	v->a[40179] = 8;
	small_parse_table_2009(v);
}

void	small_parse_table_2009(t_small_parse_table_array *v)
{
	v->a[40180] = anon_sym_COLON_DASH;
	v->a[40181] = anon_sym_DASH3;
	v->a[40182] = anon_sym_COLON_EQ;
	v->a[40183] = anon_sym_EQ2;
	v->a[40184] = anon_sym_COLON_QMARK;
	v->a[40185] = anon_sym_QMARK2;
	v->a[40186] = anon_sym_COLON_PLUS;
	v->a[40187] = anon_sym_PLUS3;
	v->a[40188] = 3;
	v->a[40189] = actions(3);
	v->a[40190] = 1;
	v->a[40191] = sym_comment;
	v->a[40192] = actions(1011);
	v->a[40193] = 2;
	v->a[40194] = sym__concat;
	v->a[40195] = sym__bare_dollar;
	v->a[40196] = actions(1003);
	v->a[40197] = 22;
	v->a[40198] = anon_sym_PIPE;
	v->a[40199] = anon_sym_AMP_AMP;
	small_parse_table_2010(v);
}

/* EOF small_parse_table_401.c */
