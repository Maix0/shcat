/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1632.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8160(t_small_parse_table_array *v)
{
	v->a[163200] = sym_process_substitution;
	v->a[163201] = 3;
	v->a[163202] = actions(71);
	v->a[163203] = 1;
	v->a[163204] = sym_comment;
	v->a[163205] = actions(1273);
	v->a[163206] = 14;
	v->a[163207] = anon_sym_EQ;
	v->a[163208] = anon_sym_PIPE;
	v->a[163209] = anon_sym_CARET;
	v->a[163210] = anon_sym_AMP;
	v->a[163211] = anon_sym_LT;
	v->a[163212] = anon_sym_GT;
	v->a[163213] = anon_sym_LT_LT;
	v->a[163214] = anon_sym_GT_GT;
	v->a[163215] = anon_sym_PLUS;
	v->a[163216] = anon_sym_DASH;
	v->a[163217] = anon_sym_STAR;
	v->a[163218] = anon_sym_SLASH;
	v->a[163219] = anon_sym_PERCENT;
	small_parse_table_8161(v);
}

void	small_parse_table_8161(t_small_parse_table_array *v)
{
	v->a[163220] = anon_sym_STAR_STAR;
	v->a[163221] = actions(1369);
	v->a[163222] = 23;
	v->a[163223] = sym_test_operator;
	v->a[163224] = anon_sym_PLUS_PLUS;
	v->a[163225] = anon_sym_DASH_DASH;
	v->a[163226] = anon_sym_PLUS_EQ;
	v->a[163227] = anon_sym_DASH_EQ;
	v->a[163228] = anon_sym_STAR_EQ;
	v->a[163229] = anon_sym_SLASH_EQ;
	v->a[163230] = anon_sym_PERCENT_EQ;
	v->a[163231] = anon_sym_STAR_STAR_EQ;
	v->a[163232] = anon_sym_LT_LT_EQ;
	v->a[163233] = anon_sym_GT_GT_EQ;
	v->a[163234] = anon_sym_AMP_EQ;
	v->a[163235] = anon_sym_CARET_EQ;
	v->a[163236] = anon_sym_PIPE_EQ;
	v->a[163237] = anon_sym_PIPE_PIPE;
	v->a[163238] = anon_sym_AMP_AMP;
	v->a[163239] = anon_sym_EQ_EQ;
	small_parse_table_8162(v);
}

void	small_parse_table_8162(t_small_parse_table_array *v)
{
	v->a[163240] = anon_sym_BANG_EQ;
	v->a[163241] = anon_sym_LT_EQ;
	v->a[163242] = anon_sym_GT_EQ;
	v->a[163243] = anon_sym_RBRACK;
	v->a[163244] = anon_sym_EQ_TILDE;
	v->a[163245] = anon_sym_QMARK;
	v->a[163246] = 4;
	v->a[163247] = actions(71);
	v->a[163248] = 1;
	v->a[163249] = sym_comment;
	v->a[163250] = actions(7461);
	v->a[163251] = 1;
	v->a[163252] = sym__concat;
	v->a[163253] = actions(6829);
	v->a[163254] = 14;
	v->a[163255] = anon_sym_EQ;
	v->a[163256] = anon_sym_PIPE;
	v->a[163257] = anon_sym_CARET;
	v->a[163258] = anon_sym_AMP;
	v->a[163259] = anon_sym_LT;
	small_parse_table_8163(v);
}

void	small_parse_table_8163(t_small_parse_table_array *v)
{
	v->a[163260] = anon_sym_GT;
	v->a[163261] = anon_sym_LT_LT;
	v->a[163262] = anon_sym_GT_GT;
	v->a[163263] = anon_sym_PLUS;
	v->a[163264] = anon_sym_DASH;
	v->a[163265] = anon_sym_STAR;
	v->a[163266] = anon_sym_SLASH;
	v->a[163267] = anon_sym_PERCENT;
	v->a[163268] = anon_sym_STAR_STAR;
	v->a[163269] = actions(6827);
	v->a[163270] = 22;
	v->a[163271] = anon_sym_PLUS_PLUS;
	v->a[163272] = anon_sym_DASH_DASH;
	v->a[163273] = anon_sym_PLUS_EQ;
	v->a[163274] = anon_sym_DASH_EQ;
	v->a[163275] = anon_sym_STAR_EQ;
	v->a[163276] = anon_sym_SLASH_EQ;
	v->a[163277] = anon_sym_PERCENT_EQ;
	v->a[163278] = anon_sym_STAR_STAR_EQ;
	v->a[163279] = anon_sym_LT_LT_EQ;
	small_parse_table_8164(v);
}

void	small_parse_table_8164(t_small_parse_table_array *v)
{
	v->a[163280] = anon_sym_GT_GT_EQ;
	v->a[163281] = anon_sym_AMP_EQ;
	v->a[163282] = anon_sym_CARET_EQ;
	v->a[163283] = anon_sym_PIPE_EQ;
	v->a[163284] = anon_sym_PIPE_PIPE;
	v->a[163285] = anon_sym_AMP_AMP;
	v->a[163286] = anon_sym_EQ_EQ;
	v->a[163287] = anon_sym_BANG_EQ;
	v->a[163288] = anon_sym_LT_EQ;
	v->a[163289] = anon_sym_GT_EQ;
	v->a[163290] = anon_sym_RPAREN;
	v->a[163291] = anon_sym_EQ_TILDE;
	v->a[163292] = anon_sym_QMARK;
	v->a[163293] = 20;
	v->a[163294] = actions(71);
	v->a[163295] = 1;
	v->a[163296] = sym_comment;
	v->a[163297] = actions(7220);
	v->a[163298] = 1;
	v->a[163299] = anon_sym_STAR_STAR;
	small_parse_table_8165(v);
}

/* EOF small_parse_table_1632.c */
