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
	v->a[40100] = actions(663);
	v->a[40101] = 1;
	v->a[40102] = anon_sym_DOLLAR_LPAREN;
	v->a[40103] = actions(665);
	v->a[40104] = 1;
	v->a[40105] = anon_sym_BQUOTE;
	v->a[40106] = state(603);
	v->a[40107] = 2;
	v->a[40108] = sym_concatenation;
	v->a[40109] = aux_sym_for_statement_repeat1;
	v->a[40110] = actions(1346);
	v->a[40111] = 3;
	v->a[40112] = sym_raw_string;
	v->a[40113] = sym_number;
	v->a[40114] = sym_word;
	v->a[40115] = state(857);
	v->a[40116] = 5;
	v->a[40117] = sym_arithmetic_expansion;
	v->a[40118] = sym_string;
	v->a[40119] = sym_simple_expansion;
	small_parse_table_2006(v);
}

void	small_parse_table_2006(t_small_parse_table_array *v)
{
	v->a[40120] = sym_expansion;
	v->a[40121] = sym_command_substitution;
	v->a[40122] = 3;
	v->a[40123] = actions(3);
	v->a[40124] = 1;
	v->a[40125] = sym_comment;
	v->a[40126] = actions(1046);
	v->a[40127] = 4;
	v->a[40128] = sym__concat;
	v->a[40129] = sym_variable_name;
	v->a[40130] = ts_builtin_sym_end;
	v->a[40131] = aux_sym_heredoc_redirect_token1;
	v->a[40132] = actions(1048);
	v->a[40133] = 12;
	v->a[40134] = anon_sym_PIPE;
	v->a[40135] = anon_sym_RPAREN;
	v->a[40136] = anon_sym_SEMI_SEMI;
	v->a[40137] = anon_sym_AMP_AMP;
	v->a[40138] = anon_sym_PIPE_PIPE;
	v->a[40139] = anon_sym_LT;
	small_parse_table_2007(v);
}

void	small_parse_table_2007(t_small_parse_table_array *v)
{
	v->a[40140] = anon_sym_GT;
	v->a[40141] = anon_sym_GT_GT;
	v->a[40142] = anon_sym_LT_LT;
	v->a[40143] = aux_sym_concatenation_token1;
	v->a[40144] = anon_sym_BQUOTE;
	v->a[40145] = anon_sym_SEMI;
	v->a[40146] = 3;
	v->a[40147] = actions(3);
	v->a[40148] = 1;
	v->a[40149] = sym_comment;
	v->a[40150] = actions(1126);
	v->a[40151] = 4;
	v->a[40152] = sym__concat;
	v->a[40153] = sym_variable_name;
	v->a[40154] = ts_builtin_sym_end;
	v->a[40155] = aux_sym_heredoc_redirect_token1;
	v->a[40156] = actions(1124);
	v->a[40157] = 12;
	v->a[40158] = anon_sym_PIPE;
	v->a[40159] = anon_sym_RPAREN;
	small_parse_table_2008(v);
}

void	small_parse_table_2008(t_small_parse_table_array *v)
{
	v->a[40160] = anon_sym_SEMI_SEMI;
	v->a[40161] = anon_sym_AMP_AMP;
	v->a[40162] = anon_sym_PIPE_PIPE;
	v->a[40163] = anon_sym_LT;
	v->a[40164] = anon_sym_GT;
	v->a[40165] = anon_sym_GT_GT;
	v->a[40166] = anon_sym_LT_LT;
	v->a[40167] = aux_sym_concatenation_token1;
	v->a[40168] = anon_sym_BQUOTE;
	v->a[40169] = anon_sym_SEMI;
	v->a[40170] = 10;
	v->a[40171] = actions(3);
	v->a[40172] = 1;
	v->a[40173] = sym_comment;
	v->a[40174] = actions(1479);
	v->a[40175] = 1;
	v->a[40176] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40177] = actions(1481);
	v->a[40178] = 1;
	v->a[40179] = anon_sym_DOLLAR;
	small_parse_table_2009(v);
}

void	small_parse_table_2009(t_small_parse_table_array *v)
{
	v->a[40180] = actions(1483);
	v->a[40181] = 1;
	v->a[40182] = anon_sym_DQUOTE;
	v->a[40183] = actions(1485);
	v->a[40184] = 1;
	v->a[40185] = anon_sym_DOLLAR_LBRACE;
	v->a[40186] = actions(1487);
	v->a[40187] = 1;
	v->a[40188] = anon_sym_DOLLAR_LPAREN;
	v->a[40189] = actions(1489);
	v->a[40190] = 1;
	v->a[40191] = anon_sym_BQUOTE;
	v->a[40192] = state(159);
	v->a[40193] = 2;
	v->a[40194] = sym_concatenation;
	v->a[40195] = aux_sym_for_statement_repeat1;
	v->a[40196] = actions(1856);
	v->a[40197] = 3;
	v->a[40198] = sym_raw_string;
	v->a[40199] = sym_number;
	small_parse_table_2010(v);
}

/* EOF small_parse_table_401.c */
