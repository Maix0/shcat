/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_722.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3610(t_small_parse_table_array *v)
{
	v->a[72200] = actions(2109);
	v->a[72201] = 2;
	v->a[72202] = anon_sym_PIPE;
	v->a[72203] = anon_sym_LT_LT;
	v->a[72204] = actions(2748);
	v->a[72205] = 2;
	v->a[72206] = anon_sym_LT;
	v->a[72207] = anon_sym_GT;
	v->a[72208] = state(1448);
	v->a[72209] = 2;
	v->a[72210] = sym_file_redirect;
	v->a[72211] = aux_sym_redirected_statement_repeat2;
	v->a[72212] = actions(2111);
	v->a[72213] = 3;
	v->a[72214] = anon_sym_AMP_AMP;
	v->a[72215] = anon_sym_PIPE_PIPE;
	v->a[72216] = anon_sym_LT_LT_DASH;
	v->a[72217] = actions(2750);
	v->a[72218] = 5;
	v->a[72219] = anon_sym_GT_GT;
	small_parse_table_3611(v);
}

void	small_parse_table_3611(t_small_parse_table_array *v)
{
	v->a[72220] = anon_sym_LT_AMP;
	v->a[72221] = anon_sym_GT_AMP;
	v->a[72222] = anon_sym_GT_PIPE;
	v->a[72223] = anon_sym_LT_GT;
	v->a[72224] = 6;
	v->a[72225] = actions(3);
	v->a[72226] = 1;
	v->a[72227] = sym_comment;
	v->a[72228] = actions(2850);
	v->a[72229] = 1;
	v->a[72230] = anon_sym_DQUOTE;
	v->a[72231] = actions(2852);
	v->a[72232] = 1;
	v->a[72233] = sym_string_content;
	v->a[72234] = actions(2856);
	v->a[72235] = 1;
	v->a[72236] = sym_variable_name;
	v->a[72237] = actions(2854);
	v->a[72238] = 2;
	v->a[72239] = aux_sym__simple_variable_name_token1;
	small_parse_table_3612(v);
}

void	small_parse_table_3612(t_small_parse_table_array *v)
{
	v->a[72240] = aux_sym__multiline_variable_name_token1;
	v->a[72241] = actions(2848);
	v->a[72242] = 9;
	v->a[72243] = anon_sym_BANG;
	v->a[72244] = anon_sym_DASH;
	v->a[72245] = anon_sym_STAR;
	v->a[72246] = anon_sym_QMARK;
	v->a[72247] = anon_sym_DOLLAR;
	v->a[72248] = anon_sym_POUND;
	v->a[72249] = anon_sym_AT;
	v->a[72250] = anon_sym_0;
	v->a[72251] = anon_sym__;
	v->a[72252] = 6;
	v->a[72253] = actions(3);
	v->a[72254] = 1;
	v->a[72255] = sym_comment;
	v->a[72256] = actions(2852);
	v->a[72257] = 1;
	v->a[72258] = sym_string_content;
	v->a[72259] = actions(2856);
	small_parse_table_3613(v);
}

void	small_parse_table_3613(t_small_parse_table_array *v)
{
	v->a[72260] = 1;
	v->a[72261] = sym_variable_name;
	v->a[72262] = actions(2858);
	v->a[72263] = 1;
	v->a[72264] = anon_sym_DQUOTE;
	v->a[72265] = actions(2854);
	v->a[72266] = 2;
	v->a[72267] = aux_sym__simple_variable_name_token1;
	v->a[72268] = aux_sym__multiline_variable_name_token1;
	v->a[72269] = actions(2848);
	v->a[72270] = 9;
	v->a[72271] = anon_sym_BANG;
	v->a[72272] = anon_sym_DASH;
	v->a[72273] = anon_sym_STAR;
	v->a[72274] = anon_sym_QMARK;
	v->a[72275] = anon_sym_DOLLAR;
	v->a[72276] = anon_sym_POUND;
	v->a[72277] = anon_sym_AT;
	v->a[72278] = anon_sym_0;
	v->a[72279] = anon_sym__;
	small_parse_table_3614(v);
}

void	small_parse_table_3614(t_small_parse_table_array *v)
{
	v->a[72280] = 6;
	v->a[72281] = actions(3);
	v->a[72282] = 1;
	v->a[72283] = sym_comment;
	v->a[72284] = actions(2852);
	v->a[72285] = 1;
	v->a[72286] = sym_string_content;
	v->a[72287] = actions(2856);
	v->a[72288] = 1;
	v->a[72289] = sym_variable_name;
	v->a[72290] = actions(2860);
	v->a[72291] = 1;
	v->a[72292] = anon_sym_DQUOTE;
	v->a[72293] = actions(2854);
	v->a[72294] = 2;
	v->a[72295] = aux_sym__simple_variable_name_token1;
	v->a[72296] = aux_sym__multiline_variable_name_token1;
	v->a[72297] = actions(2848);
	v->a[72298] = 9;
	v->a[72299] = anon_sym_BANG;
	small_parse_table_3615(v);
}

/* EOF small_parse_table_722.c */
