/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_792.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3960(t_small_parse_table_array *v)
{
	v->a[79200] = actions(4120);
	v->a[79201] = 1;
	v->a[79202] = anon_sym_PIPE;
	v->a[79203] = actions(4122);
	v->a[79204] = 1;
	v->a[79205] = anon_sym_AMP_AMP;
	v->a[79206] = actions(4124);
	v->a[79207] = 1;
	v->a[79208] = anon_sym_PIPE_PIPE;
	v->a[79209] = actions(4126);
	v->a[79210] = 1;
	v->a[79211] = anon_sym_EQ;
	v->a[79212] = actions(4138);
	v->a[79213] = 1;
	v->a[79214] = anon_sym_CARET;
	v->a[79215] = actions(4140);
	v->a[79216] = 1;
	v->a[79217] = anon_sym_AMP;
	v->a[79218] = actions(4150);
	v->a[79219] = 1;
	small_parse_table_3961(v);
}

void	small_parse_table_3961(t_small_parse_table_array *v)
{
	v->a[79220] = anon_sym_QMARK;
	v->a[79221] = actions(4519);
	v->a[79222] = 1;
	v->a[79223] = anon_sym_COLON;
	v->a[79224] = actions(4128);
	v->a[79225] = 2;
	v->a[79226] = anon_sym_LT;
	v->a[79227] = anon_sym_GT;
	v->a[79228] = actions(4130);
	v->a[79229] = 2;
	v->a[79230] = anon_sym_GT_GT;
	v->a[79231] = anon_sym_LT_LT;
	v->a[79232] = actions(4142);
	v->a[79233] = 2;
	v->a[79234] = anon_sym_EQ_EQ;
	v->a[79235] = anon_sym_BANG_EQ;
	v->a[79236] = actions(4144);
	v->a[79237] = 2;
	v->a[79238] = anon_sym_LT_EQ;
	v->a[79239] = anon_sym_GT_EQ;
	small_parse_table_3962(v);
}

void	small_parse_table_3962(t_small_parse_table_array *v)
{
	v->a[79240] = actions(4146);
	v->a[79241] = 2;
	v->a[79242] = anon_sym_PLUS;
	v->a[79243] = anon_sym_DASH;
	v->a[79244] = actions(4152);
	v->a[79245] = 2;
	v->a[79246] = anon_sym_PLUS_PLUS2;
	v->a[79247] = anon_sym_DASH_DASH2;
	v->a[79248] = actions(4148);
	v->a[79249] = 3;
	v->a[79250] = anon_sym_STAR;
	v->a[79251] = anon_sym_SLASH;
	v->a[79252] = anon_sym_PERCENT;
	v->a[79253] = actions(4136);
	v->a[79254] = 10;
	v->a[79255] = anon_sym_PLUS_EQ;
	v->a[79256] = anon_sym_DASH_EQ;
	v->a[79257] = anon_sym_STAR_EQ;
	v->a[79258] = anon_sym_SLASH_EQ;
	v->a[79259] = anon_sym_PERCENT_EQ;
	small_parse_table_3963(v);
}

void	small_parse_table_3963(t_small_parse_table_array *v)
{
	v->a[79260] = anon_sym_LT_LT_EQ;
	v->a[79261] = anon_sym_GT_GT_EQ;
	v->a[79262] = anon_sym_AMP_EQ;
	v->a[79263] = anon_sym_CARET_EQ;
	v->a[79264] = anon_sym_PIPE_EQ;
	v->a[79265] = 5;
	v->a[79266] = actions(57);
	v->a[79267] = 1;
	v->a[79268] = sym_comment;
	v->a[79269] = actions(4517);
	v->a[79270] = 1;
	v->a[79271] = sym__special_character;
	v->a[79272] = state(1614);
	v->a[79273] = 1;
	v->a[79274] = aux_sym__literal_repeat1;
	v->a[79275] = actions(3541);
	v->a[79276] = 12;
	v->a[79277] = anon_sym_PIPE;
	v->a[79278] = anon_sym_LT;
	v->a[79279] = anon_sym_GT;
	small_parse_table_3964(v);
}

void	small_parse_table_3964(t_small_parse_table_array *v)
{
	v->a[79280] = anon_sym_AMP_GT;
	v->a[79281] = anon_sym_LT_AMP;
	v->a[79282] = anon_sym_GT_AMP;
	v->a[79283] = anon_sym_LT_LT;
	v->a[79284] = anon_sym_DOLLAR;
	v->a[79285] = aux_sym_number_token1;
	v->a[79286] = aux_sym_number_token2;
	v->a[79287] = anon_sym_DOLLAR_LPAREN;
	v->a[79288] = sym_word;
	v->a[79289] = actions(3543);
	v->a[79290] = 19;
	v->a[79291] = sym_file_descriptor;
	v->a[79292] = sym_variable_name;
	v->a[79293] = sym_test_operator;
	v->a[79294] = sym__brace_start;
	v->a[79295] = anon_sym_PIPE_AMP;
	v->a[79296] = anon_sym_AMP_AMP;
	v->a[79297] = anon_sym_PIPE_PIPE;
	v->a[79298] = anon_sym_GT_GT;
	v->a[79299] = anon_sym_AMP_GT_GT;
	small_parse_table_3965(v);
}

/* EOF small_parse_table_792.c */
