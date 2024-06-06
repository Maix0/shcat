/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_32.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_160(t_small_parse_table_array *v)
{
	v->a[3200] = actions(1178);
	v->a[3201] = 1;
	v->a[3202] = sym_variable_name;
	v->a[3203] = actions(1176);
	v->a[3204] = 2;
	v->a[3205] = aux_sym__simple_variable_name_token1;
	v->a[3206] = aux_sym__multiline_variable_name_token1;
	v->a[3207] = actions(828);
	v->a[3208] = 4;
	v->a[3209] = sym_file_descriptor;
	v->a[3210] = sym_test_operator;
	v->a[3211] = sym__bare_dollar;
	v->a[3212] = sym__brace_start;
	v->a[3213] = actions(1174);
	v->a[3214] = 9;
	v->a[3215] = anon_sym_BANG;
	v->a[3216] = anon_sym_DASH;
	v->a[3217] = anon_sym_STAR;
	v->a[3218] = anon_sym_QMARK;
	v->a[3219] = anon_sym_DOLLAR;
	small_parse_table_161(v);
}

void	small_parse_table_161(t_small_parse_table_array *v)
{
	v->a[3220] = anon_sym_POUND;
	v->a[3221] = anon_sym_AT;
	v->a[3222] = anon_sym_0;
	v->a[3223] = anon_sym__;
	v->a[3224] = actions(826);
	v->a[3225] = 33;
	v->a[3226] = anon_sym_LPAREN;
	v->a[3227] = anon_sym_PIPE;
	v->a[3228] = anon_sym_RPAREN;
	v->a[3229] = anon_sym_SEMI_SEMI;
	v->a[3230] = anon_sym_PIPE_AMP;
	v->a[3231] = anon_sym_AMP_AMP;
	v->a[3232] = anon_sym_PIPE_PIPE;
	v->a[3233] = anon_sym_LT;
	v->a[3234] = anon_sym_GT;
	v->a[3235] = anon_sym_GT_GT;
	v->a[3236] = anon_sym_AMP_GT;
	v->a[3237] = anon_sym_AMP_GT_GT;
	v->a[3238] = anon_sym_LT_AMP;
	v->a[3239] = anon_sym_GT_AMP;
	small_parse_table_162(v);
}

void	small_parse_table_162(t_small_parse_table_array *v)
{
	v->a[3240] = anon_sym_GT_PIPE;
	v->a[3241] = anon_sym_LT_AMP_DASH;
	v->a[3242] = anon_sym_GT_AMP_DASH;
	v->a[3243] = anon_sym_LT_LT;
	v->a[3244] = anon_sym_LT_LT_DASH;
	v->a[3245] = aux_sym_heredoc_redirect_token1;
	v->a[3246] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3247] = anon_sym_AMP;
	v->a[3248] = sym__special_character;
	v->a[3249] = anon_sym_DQUOTE;
	v->a[3250] = sym_raw_string;
	v->a[3251] = aux_sym_number_token1;
	v->a[3252] = aux_sym_number_token2;
	v->a[3253] = anon_sym_DOLLAR_LBRACE;
	v->a[3254] = anon_sym_DOLLAR_LPAREN;
	v->a[3255] = anon_sym_BQUOTE;
	v->a[3256] = anon_sym_DOLLAR_BQUOTE;
	v->a[3257] = sym_word;
	v->a[3258] = anon_sym_SEMI;
	v->a[3259] = 19;
	small_parse_table_163(v);
}

void	small_parse_table_163(t_small_parse_table_array *v)
{
	v->a[3260] = actions(3);
	v->a[3261] = 1;
	v->a[3262] = sym_comment;
	v->a[3263] = actions(1289);
	v->a[3264] = 1;
	v->a[3265] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3266] = actions(1292);
	v->a[3267] = 1;
	v->a[3268] = anon_sym_DOLLAR;
	v->a[3269] = actions(1295);
	v->a[3270] = 1;
	v->a[3271] = sym__special_character;
	v->a[3272] = actions(1298);
	v->a[3273] = 1;
	v->a[3274] = anon_sym_DQUOTE;
	v->a[3275] = actions(1301);
	v->a[3276] = 1;
	v->a[3277] = aux_sym_number_token1;
	v->a[3278] = actions(1304);
	v->a[3279] = 1;
	small_parse_table_164(v);
}

void	small_parse_table_164(t_small_parse_table_array *v)
{
	v->a[3280] = aux_sym_number_token2;
	v->a[3281] = actions(1307);
	v->a[3282] = 1;
	v->a[3283] = anon_sym_DOLLAR_LBRACE;
	v->a[3284] = actions(1310);
	v->a[3285] = 1;
	v->a[3286] = anon_sym_DOLLAR_LPAREN;
	v->a[3287] = actions(1313);
	v->a[3288] = 1;
	v->a[3289] = anon_sym_BQUOTE;
	v->a[3290] = actions(1316);
	v->a[3291] = 1;
	v->a[3292] = anon_sym_DOLLAR_BQUOTE;
	v->a[3293] = actions(1319);
	v->a[3294] = 1;
	v->a[3295] = sym_test_operator;
	v->a[3296] = actions(1322);
	v->a[3297] = 1;
	v->a[3298] = sym__brace_start;
	v->a[3299] = state(864);
	small_parse_table_165(v);
}

/* EOF small_parse_table_32.c */
