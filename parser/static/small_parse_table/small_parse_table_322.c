/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_322.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1610(t_small_parse_table_array *v)
{
	v->a[32200] = 1;
	v->a[32201] = anon_sym_BQUOTE;
	v->a[32202] = actions(1128);
	v->a[32203] = 1;
	v->a[32204] = sym__bare_dollar;
	v->a[32205] = state(518);
	v->a[32206] = 1;
	v->a[32207] = aux_sym_command_repeat2;
	v->a[32208] = state(1002);
	v->a[32209] = 1;
	v->a[32210] = sym_concatenation;
	v->a[32211] = state(1669);
	v->a[32212] = 1;
	v->a[32213] = sym_subshell;
	v->a[32214] = actions(1114);
	v->a[32215] = 3;
	v->a[32216] = sym_raw_string;
	v->a[32217] = sym_number;
	v->a[32218] = sym_word;
	v->a[32219] = state(864);
	small_parse_table_1611(v);
}

void	small_parse_table_1611(t_small_parse_table_array *v)
{
	v->a[32220] = 5;
	v->a[32221] = sym_arithmetic_expansion;
	v->a[32222] = sym_string;
	v->a[32223] = sym_simple_expansion;
	v->a[32224] = sym_expansion;
	v->a[32225] = sym_command_substitution;
	v->a[32226] = actions(457);
	v->a[32227] = 13;
	v->a[32228] = anon_sym_PIPE;
	v->a[32229] = anon_sym_AMP_AMP;
	v->a[32230] = anon_sym_PIPE_PIPE;
	v->a[32231] = anon_sym_LT;
	v->a[32232] = anon_sym_GT;
	v->a[32233] = anon_sym_GT_GT;
	v->a[32234] = anon_sym_LT_AMP;
	v->a[32235] = anon_sym_GT_AMP;
	v->a[32236] = anon_sym_GT_PIPE;
	v->a[32237] = anon_sym_LT_AMP_DASH;
	v->a[32238] = anon_sym_GT_AMP_DASH;
	v->a[32239] = anon_sym_LT_LT;
	small_parse_table_1612(v);
}

void	small_parse_table_1612(t_small_parse_table_array *v)
{
	v->a[32240] = anon_sym_LT_LT_DASH;
	v->a[32241] = 17;
	v->a[32242] = actions(842);
	v->a[32243] = 1;
	v->a[32244] = anon_sym_PIPE;
	v->a[32245] = actions(844);
	v->a[32246] = 1;
	v->a[32247] = anon_sym_AMP_AMP;
	v->a[32248] = actions(846);
	v->a[32249] = 1;
	v->a[32250] = anon_sym_PIPE_PIPE;
	v->a[32251] = actions(856);
	v->a[32252] = 1;
	v->a[32253] = anon_sym_CARET;
	v->a[32254] = actions(858);
	v->a[32255] = 1;
	v->a[32256] = anon_sym_AMP;
	v->a[32257] = actions(870);
	v->a[32258] = 1;
	v->a[32259] = sym_comment;
	small_parse_table_1613(v);
}

void	small_parse_table_1613(t_small_parse_table_array *v)
{
	v->a[32260] = actions(1021);
	v->a[32261] = 1;
	v->a[32262] = anon_sym_EQ;
	v->a[32263] = actions(1023);
	v->a[32264] = 1;
	v->a[32265] = anon_sym_QMARK;
	v->a[32266] = actions(1206);
	v->a[32267] = 1;
	v->a[32268] = anon_sym_RPAREN_RPAREN;
	v->a[32269] = actions(850);
	v->a[32270] = 2;
	v->a[32271] = anon_sym_LT;
	v->a[32272] = anon_sym_GT;
	v->a[32273] = actions(852);
	v->a[32274] = 2;
	v->a[32275] = anon_sym_GT_GT;
	v->a[32276] = anon_sym_LT_LT;
	v->a[32277] = actions(860);
	v->a[32278] = 2;
	v->a[32279] = anon_sym_EQ_EQ;
	small_parse_table_1614(v);
}

void	small_parse_table_1614(t_small_parse_table_array *v)
{
	v->a[32280] = anon_sym_BANG_EQ;
	v->a[32281] = actions(862);
	v->a[32282] = 2;
	v->a[32283] = anon_sym_LT_EQ;
	v->a[32284] = anon_sym_GT_EQ;
	v->a[32285] = actions(864);
	v->a[32286] = 2;
	v->a[32287] = anon_sym_PLUS;
	v->a[32288] = anon_sym_DASH;
	v->a[32289] = actions(868);
	v->a[32290] = 2;
	v->a[32291] = anon_sym_PLUS_PLUS2;
	v->a[32292] = anon_sym_DASH_DASH2;
	v->a[32293] = actions(866);
	v->a[32294] = 3;
	v->a[32295] = anon_sym_STAR;
	v->a[32296] = anon_sym_SLASH;
	v->a[32297] = anon_sym_PERCENT;
	v->a[32298] = actions(1079);
	v->a[32299] = 10;
	small_parse_table_1615(v);
}

/* EOF small_parse_table_322.c */
