/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1612.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8060(t_small_parse_table_array *v)
{
	v->a[161200] = sym_expansion;
	v->a[161201] = sym_command_substitution;
	v->a[161202] = sym_process_substitution;
	v->a[161203] = 7;
	v->a[161204] = actions(71);
	v->a[161205] = 1;
	v->a[161206] = sym_comment;
	v->a[161207] = actions(7220);
	v->a[161208] = 1;
	v->a[161209] = anon_sym_STAR_STAR;
	v->a[161210] = actions(6793);
	v->a[161211] = 2;
	v->a[161212] = anon_sym_PLUS_PLUS;
	v->a[161213] = anon_sym_DASH_DASH;
	v->a[161214] = actions(7216);
	v->a[161215] = 2;
	v->a[161216] = anon_sym_PLUS;
	v->a[161217] = anon_sym_DASH;
	v->a[161218] = actions(7218);
	v->a[161219] = 3;
	small_parse_table_8061(v);
}

void	small_parse_table_8061(t_small_parse_table_array *v)
{
	v->a[161220] = anon_sym_STAR;
	v->a[161221] = anon_sym_SLASH;
	v->a[161222] = anon_sym_PERCENT;
	v->a[161223] = actions(6807);
	v->a[161224] = 8;
	v->a[161225] = anon_sym_EQ;
	v->a[161226] = anon_sym_PIPE;
	v->a[161227] = anon_sym_CARET;
	v->a[161228] = anon_sym_AMP;
	v->a[161229] = anon_sym_LT;
	v->a[161230] = anon_sym_GT;
	v->a[161231] = anon_sym_LT_LT;
	v->a[161232] = anon_sym_GT_GT;
	v->a[161233] = actions(6805);
	v->a[161234] = 21;
	v->a[161235] = sym_test_operator;
	v->a[161236] = anon_sym_RPAREN_RPAREN;
	v->a[161237] = anon_sym_PLUS_EQ;
	v->a[161238] = anon_sym_DASH_EQ;
	v->a[161239] = anon_sym_STAR_EQ;
	small_parse_table_8062(v);
}

void	small_parse_table_8062(t_small_parse_table_array *v)
{
	v->a[161240] = anon_sym_SLASH_EQ;
	v->a[161241] = anon_sym_PERCENT_EQ;
	v->a[161242] = anon_sym_STAR_STAR_EQ;
	v->a[161243] = anon_sym_LT_LT_EQ;
	v->a[161244] = anon_sym_GT_GT_EQ;
	v->a[161245] = anon_sym_AMP_EQ;
	v->a[161246] = anon_sym_CARET_EQ;
	v->a[161247] = anon_sym_PIPE_EQ;
	v->a[161248] = anon_sym_PIPE_PIPE;
	v->a[161249] = anon_sym_AMP_AMP;
	v->a[161250] = anon_sym_EQ_EQ;
	v->a[161251] = anon_sym_BANG_EQ;
	v->a[161252] = anon_sym_LT_EQ;
	v->a[161253] = anon_sym_GT_EQ;
	v->a[161254] = anon_sym_EQ_TILDE;
	v->a[161255] = anon_sym_QMARK;
	v->a[161256] = 20;
	v->a[161257] = actions(71);
	v->a[161258] = 1;
	v->a[161259] = sym_comment;
	small_parse_table_8063(v);
}

void	small_parse_table_8063(t_small_parse_table_array *v)
{
	v->a[161260] = actions(7322);
	v->a[161261] = 1;
	v->a[161262] = anon_sym_STAR_STAR;
	v->a[161263] = actions(7324);
	v->a[161264] = 1;
	v->a[161265] = anon_sym_PIPE_PIPE;
	v->a[161266] = actions(7326);
	v->a[161267] = 1;
	v->a[161268] = anon_sym_AMP_AMP;
	v->a[161269] = actions(7328);
	v->a[161270] = 1;
	v->a[161271] = anon_sym_PIPE;
	v->a[161272] = actions(7330);
	v->a[161273] = 1;
	v->a[161274] = anon_sym_CARET;
	v->a[161275] = actions(7332);
	v->a[161276] = 1;
	v->a[161277] = anon_sym_AMP;
	v->a[161278] = actions(7340);
	v->a[161279] = 1;
	small_parse_table_8064(v);
}

void	small_parse_table_8064(t_small_parse_table_array *v)
{
	v->a[161280] = anon_sym_QMARK;
	v->a[161281] = actions(7342);
	v->a[161282] = 1;
	v->a[161283] = sym_test_operator;
	v->a[161284] = actions(7346);
	v->a[161285] = 1;
	v->a[161286] = anon_sym_EQ_TILDE;
	v->a[161287] = actions(7374);
	v->a[161288] = 1;
	v->a[161289] = anon_sym_RBRACK_RBRACK;
	v->a[161290] = actions(7398);
	v->a[161291] = 1;
	v->a[161292] = anon_sym_EQ;
	v->a[161293] = actions(6793);
	v->a[161294] = 2;
	v->a[161295] = anon_sym_PLUS_PLUS;
	v->a[161296] = anon_sym_DASH_DASH;
	v->a[161297] = actions(7316);
	v->a[161298] = 2;
	v->a[161299] = anon_sym_LT_LT;
	small_parse_table_8065(v);
}

/* EOF small_parse_table_1612.c */
