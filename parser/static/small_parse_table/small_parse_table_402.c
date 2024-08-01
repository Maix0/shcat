/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_402.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2010(t_small_parse_table_array *v)
{
	v->a[40200] = sym_word;
	v->a[40201] = state(292);
	v->a[40202] = 5;
	v->a[40203] = sym_arithmetic_expansion;
	v->a[40204] = sym_string;
	v->a[40205] = sym_simple_expansion;
	v->a[40206] = sym_expansion;
	v->a[40207] = sym_command_substitution;
	v->a[40208] = 10;
	v->a[40209] = actions(3);
	v->a[40210] = 1;
	v->a[40211] = sym_comment;
	v->a[40212] = actions(704);
	v->a[40213] = 1;
	v->a[40214] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40215] = actions(706);
	v->a[40216] = 1;
	v->a[40217] = anon_sym_DOLLAR;
	v->a[40218] = actions(708);
	v->a[40219] = 1;
	small_parse_table_2011(v);
}

void	small_parse_table_2011(t_small_parse_table_array *v)
{
	v->a[40220] = anon_sym_DQUOTE;
	v->a[40221] = actions(710);
	v->a[40222] = 1;
	v->a[40223] = anon_sym_DOLLAR_LBRACE;
	v->a[40224] = actions(712);
	v->a[40225] = 1;
	v->a[40226] = anon_sym_DOLLAR_LPAREN;
	v->a[40227] = actions(714);
	v->a[40228] = 1;
	v->a[40229] = anon_sym_BQUOTE;
	v->a[40230] = state(195);
	v->a[40231] = 2;
	v->a[40232] = sym_concatenation;
	v->a[40233] = aux_sym_for_statement_repeat1;
	v->a[40234] = actions(702);
	v->a[40235] = 3;
	v->a[40236] = sym_raw_string;
	v->a[40237] = sym_number;
	v->a[40238] = sym_word;
	v->a[40239] = state(402);
	small_parse_table_2012(v);
}

void	small_parse_table_2012(t_small_parse_table_array *v)
{
	v->a[40240] = 5;
	v->a[40241] = sym_arithmetic_expansion;
	v->a[40242] = sym_string;
	v->a[40243] = sym_simple_expansion;
	v->a[40244] = sym_expansion;
	v->a[40245] = sym_command_substitution;
	v->a[40246] = 10;
	v->a[40247] = actions(3);
	v->a[40248] = 1;
	v->a[40249] = sym_comment;
	v->a[40250] = actions(1643);
	v->a[40251] = 1;
	v->a[40252] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40253] = actions(1645);
	v->a[40254] = 1;
	v->a[40255] = anon_sym_DOLLAR;
	v->a[40256] = actions(1647);
	v->a[40257] = 1;
	v->a[40258] = anon_sym_DQUOTE;
	v->a[40259] = actions(1649);
	small_parse_table_2013(v);
}

void	small_parse_table_2013(t_small_parse_table_array *v)
{
	v->a[40260] = 1;
	v->a[40261] = anon_sym_DOLLAR_LBRACE;
	v->a[40262] = actions(1651);
	v->a[40263] = 1;
	v->a[40264] = anon_sym_DOLLAR_LPAREN;
	v->a[40265] = actions(1653);
	v->a[40266] = 1;
	v->a[40267] = anon_sym_BQUOTE;
	v->a[40268] = state(590);
	v->a[40269] = 2;
	v->a[40270] = sym_concatenation;
	v->a[40271] = aux_sym_for_statement_repeat1;
	v->a[40272] = actions(1858);
	v->a[40273] = 3;
	v->a[40274] = sym_raw_string;
	v->a[40275] = sym_number;
	v->a[40276] = sym_word;
	v->a[40277] = state(782);
	v->a[40278] = 5;
	v->a[40279] = sym_arithmetic_expansion;
	small_parse_table_2014(v);
}

void	small_parse_table_2014(t_small_parse_table_array *v)
{
	v->a[40280] = sym_string;
	v->a[40281] = sym_simple_expansion;
	v->a[40282] = sym_expansion;
	v->a[40283] = sym_command_substitution;
	v->a[40284] = 3;
	v->a[40285] = actions(3);
	v->a[40286] = 1;
	v->a[40287] = sym_comment;
	v->a[40288] = actions(1116);
	v->a[40289] = 4;
	v->a[40290] = sym__concat;
	v->a[40291] = sym_variable_name;
	v->a[40292] = ts_builtin_sym_end;
	v->a[40293] = aux_sym_heredoc_redirect_token1;
	v->a[40294] = actions(1114);
	v->a[40295] = 12;
	v->a[40296] = anon_sym_PIPE;
	v->a[40297] = anon_sym_RPAREN;
	v->a[40298] = anon_sym_SEMI_SEMI;
	v->a[40299] = anon_sym_AMP_AMP;
	small_parse_table_2015(v);
}

/* EOF small_parse_table_402.c */
