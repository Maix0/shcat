/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_642.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3210(t_small_parse_table_array *v)
{
	v->a[64200] = sym__special_character;
	v->a[64201] = anon_sym_DQUOTE;
	v->a[64202] = sym_raw_string;
	v->a[64203] = anon_sym_DOLLAR_LBRACE;
	v->a[64204] = anon_sym_DOLLAR_BQUOTE;
	v->a[64205] = 19;
	v->a[64206] = actions(57);
	v->a[64207] = 1;
	v->a[64208] = sym_comment;
	v->a[64209] = actions(4120);
	v->a[64210] = 1;
	v->a[64211] = anon_sym_PIPE;
	v->a[64212] = actions(4122);
	v->a[64213] = 1;
	v->a[64214] = anon_sym_AMP_AMP;
	v->a[64215] = actions(4124);
	v->a[64216] = 1;
	v->a[64217] = anon_sym_PIPE_PIPE;
	v->a[64218] = actions(4126);
	v->a[64219] = 1;
	small_parse_table_3211(v);
}

void	small_parse_table_3211(t_small_parse_table_array *v)
{
	v->a[64220] = anon_sym_EQ;
	v->a[64221] = actions(4132);
	v->a[64222] = 1;
	v->a[64223] = anon_sym_COMMA;
	v->a[64224] = actions(4138);
	v->a[64225] = 1;
	v->a[64226] = anon_sym_CARET;
	v->a[64227] = actions(4140);
	v->a[64228] = 1;
	v->a[64229] = anon_sym_AMP;
	v->a[64230] = actions(4150);
	v->a[64231] = 1;
	v->a[64232] = anon_sym_QMARK;
	v->a[64233] = actions(4161);
	v->a[64234] = 1;
	v->a[64235] = anon_sym_RPAREN_RPAREN;
	v->a[64236] = state(3460);
	v->a[64237] = 1;
	v->a[64238] = aux_sym_arithmetic_expansion_repeat1;
	v->a[64239] = actions(4128);
	small_parse_table_3212(v);
}

void	small_parse_table_3212(t_small_parse_table_array *v)
{
	v->a[64240] = 2;
	v->a[64241] = anon_sym_LT;
	v->a[64242] = anon_sym_GT;
	v->a[64243] = actions(4130);
	v->a[64244] = 2;
	v->a[64245] = anon_sym_GT_GT;
	v->a[64246] = anon_sym_LT_LT;
	v->a[64247] = actions(4142);
	v->a[64248] = 2;
	v->a[64249] = anon_sym_EQ_EQ;
	v->a[64250] = anon_sym_BANG_EQ;
	v->a[64251] = actions(4144);
	v->a[64252] = 2;
	v->a[64253] = anon_sym_LT_EQ;
	v->a[64254] = anon_sym_GT_EQ;
	v->a[64255] = actions(4146);
	v->a[64256] = 2;
	v->a[64257] = anon_sym_PLUS;
	v->a[64258] = anon_sym_DASH;
	v->a[64259] = actions(4152);
	small_parse_table_3213(v);
}

void	small_parse_table_3213(t_small_parse_table_array *v)
{
	v->a[64260] = 2;
	v->a[64261] = anon_sym_PLUS_PLUS2;
	v->a[64262] = anon_sym_DASH_DASH2;
	v->a[64263] = actions(4148);
	v->a[64264] = 3;
	v->a[64265] = anon_sym_STAR;
	v->a[64266] = anon_sym_SLASH;
	v->a[64267] = anon_sym_PERCENT;
	v->a[64268] = actions(4136);
	v->a[64269] = 10;
	v->a[64270] = anon_sym_PLUS_EQ;
	v->a[64271] = anon_sym_DASH_EQ;
	v->a[64272] = anon_sym_STAR_EQ;
	v->a[64273] = anon_sym_SLASH_EQ;
	v->a[64274] = anon_sym_PERCENT_EQ;
	v->a[64275] = anon_sym_LT_LT_EQ;
	v->a[64276] = anon_sym_GT_GT_EQ;
	v->a[64277] = anon_sym_AMP_EQ;
	v->a[64278] = anon_sym_CARET_EQ;
	v->a[64279] = anon_sym_PIPE_EQ;
	small_parse_table_3214(v);
}

void	small_parse_table_3214(t_small_parse_table_array *v)
{
	v->a[64280] = 19;
	v->a[64281] = actions(57);
	v->a[64282] = 1;
	v->a[64283] = sym_comment;
	v->a[64284] = actions(4120);
	v->a[64285] = 1;
	v->a[64286] = anon_sym_PIPE;
	v->a[64287] = actions(4122);
	v->a[64288] = 1;
	v->a[64289] = anon_sym_AMP_AMP;
	v->a[64290] = actions(4124);
	v->a[64291] = 1;
	v->a[64292] = anon_sym_PIPE_PIPE;
	v->a[64293] = actions(4126);
	v->a[64294] = 1;
	v->a[64295] = anon_sym_EQ;
	v->a[64296] = actions(4132);
	v->a[64297] = 1;
	v->a[64298] = anon_sym_COMMA;
	v->a[64299] = actions(4138);
	small_parse_table_3215(v);
}

/* EOF small_parse_table_642.c */
