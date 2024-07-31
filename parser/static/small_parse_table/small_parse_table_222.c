/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_222.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1110(t_small_parse_table_array *v)
{
	v->a[22200] = anon_sym_PLUS_EQ;
	v->a[22201] = anon_sym_DASH_EQ;
	v->a[22202] = anon_sym_STAR_EQ;
	v->a[22203] = anon_sym_SLASH_EQ;
	v->a[22204] = anon_sym_PERCENT_EQ;
	v->a[22205] = anon_sym_LT_LT_EQ;
	v->a[22206] = anon_sym_GT_GT_EQ;
	v->a[22207] = anon_sym_AMP_EQ;
	v->a[22208] = anon_sym_CARET_EQ;
	v->a[22209] = anon_sym_PIPE_EQ;
	v->a[22210] = 17;
	v->a[22211] = actions(407);
	v->a[22212] = 1;
	v->a[22213] = sym_comment;
	v->a[22214] = actions(409);
	v->a[22215] = 1;
	v->a[22216] = anon_sym_PIPE;
	v->a[22217] = actions(411);
	v->a[22218] = 1;
	v->a[22219] = anon_sym_AMP_AMP;
	small_parse_table_1111(v);
}

void	small_parse_table_1111(t_small_parse_table_array *v)
{
	v->a[22220] = actions(413);
	v->a[22221] = 1;
	v->a[22222] = anon_sym_PIPE_PIPE;
	v->a[22223] = actions(423);
	v->a[22224] = 1;
	v->a[22225] = anon_sym_CARET;
	v->a[22226] = actions(425);
	v->a[22227] = 1;
	v->a[22228] = anon_sym_AMP;
	v->a[22229] = actions(479);
	v->a[22230] = 1;
	v->a[22231] = anon_sym_QMARK;
	v->a[22232] = actions(485);
	v->a[22233] = 1;
	v->a[22234] = anon_sym_EQ;
	v->a[22235] = actions(740);
	v->a[22236] = 1;
	v->a[22237] = anon_sym_RPAREN_RPAREN;
	v->a[22238] = actions(405);
	v->a[22239] = 2;
	small_parse_table_1112(v);
}

void	small_parse_table_1112(t_small_parse_table_array *v)
{
	v->a[22240] = anon_sym_PLUS_PLUS2;
	v->a[22241] = anon_sym_DASH_DASH2;
	v->a[22242] = actions(417);
	v->a[22243] = 2;
	v->a[22244] = anon_sym_LT;
	v->a[22245] = anon_sym_GT;
	v->a[22246] = actions(419);
	v->a[22247] = 2;
	v->a[22248] = anon_sym_GT_GT;
	v->a[22249] = anon_sym_LT_LT;
	v->a[22250] = actions(427);
	v->a[22251] = 2;
	v->a[22252] = anon_sym_EQ_EQ;
	v->a[22253] = anon_sym_BANG_EQ;
	v->a[22254] = actions(429);
	v->a[22255] = 2;
	v->a[22256] = anon_sym_LT_EQ;
	v->a[22257] = anon_sym_GT_EQ;
	v->a[22258] = actions(431);
	v->a[22259] = 2;
	small_parse_table_1113(v);
}

void	small_parse_table_1113(t_small_parse_table_array *v)
{
	v->a[22260] = anon_sym_PLUS;
	v->a[22261] = anon_sym_DASH;
	v->a[22262] = actions(433);
	v->a[22263] = 3;
	v->a[22264] = anon_sym_STAR;
	v->a[22265] = anon_sym_SLASH;
	v->a[22266] = anon_sym_PERCENT;
	v->a[22267] = actions(493);
	v->a[22268] = 10;
	v->a[22269] = anon_sym_PLUS_EQ;
	v->a[22270] = anon_sym_DASH_EQ;
	v->a[22271] = anon_sym_STAR_EQ;
	v->a[22272] = anon_sym_SLASH_EQ;
	v->a[22273] = anon_sym_PERCENT_EQ;
	v->a[22274] = anon_sym_LT_LT_EQ;
	v->a[22275] = anon_sym_GT_GT_EQ;
	v->a[22276] = anon_sym_AMP_EQ;
	v->a[22277] = anon_sym_CARET_EQ;
	v->a[22278] = anon_sym_PIPE_EQ;
	v->a[22279] = 11;
	small_parse_table_1114(v);
}

void	small_parse_table_1114(t_small_parse_table_array *v)
{
	v->a[22280] = actions(3);
	v->a[22281] = 1;
	v->a[22282] = sym_comment;
	v->a[22283] = actions(746);
	v->a[22284] = 1;
	v->a[22285] = anon_sym_PIPE;
	v->a[22286] = actions(754);
	v->a[22287] = 1;
	v->a[22288] = sym_variable_name;
	v->a[22289] = state(507);
	v->a[22290] = 1;
	v->a[22291] = sym_terminator;
	v->a[22292] = actions(744);
	v->a[22293] = 2;
	v->a[22294] = anon_sym_esac;
	v->a[22295] = anon_sym_SEMI_SEMI;
	v->a[22296] = actions(748);
	v->a[22297] = 2;
	v->a[22298] = anon_sym_AMP_AMP;
	v->a[22299] = anon_sym_PIPE_PIPE;
	small_parse_table_1115(v);
}

/* EOF small_parse_table_222.c */
