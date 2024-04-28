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
	v->a[3200] = anon_sym_LT_LT;
	v->a[3201] = anon_sym_GT_GT;
	v->a[3202] = anon_sym_LPAREN;
	v->a[3203] = anon_sym_SEMI_SEMI;
	v->a[3204] = anon_sym_PIPE_AMP;
	v->a[3205] = anon_sym_EQ_TILDE;
	v->a[3206] = anon_sym_AMP_GT;
	v->a[3207] = anon_sym_AMP_GT_GT;
	v->a[3208] = anon_sym_LT_AMP;
	v->a[3209] = anon_sym_GT_AMP;
	v->a[3210] = anon_sym_GT_PIPE;
	v->a[3211] = anon_sym_LT_AMP_DASH;
	v->a[3212] = anon_sym_GT_AMP_DASH;
	v->a[3213] = anon_sym_LT_LT_DASH;
	v->a[3214] = aux_sym_heredoc_redirect_token1;
	v->a[3215] = anon_sym_LT_LT_LT;
	v->a[3216] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3217] = anon_sym_DOLLAR_LBRACK;
	v->a[3218] = sym__special_character;
	v->a[3219] = sym_raw_string;
	small_parse_table_161(v);
}

void	small_parse_table_161(t_small_parse_table_array *v)
{
	v->a[3220] = sym_ansi_c_string;
	v->a[3221] = aux_sym_number_token1;
	v->a[3222] = aux_sym_number_token2;
	v->a[3223] = anon_sym_DOLLAR_LBRACE;
	v->a[3224] = anon_sym_DOLLAR_LPAREN;
	v->a[3225] = anon_sym_BQUOTE;
	v->a[3226] = anon_sym_DOLLAR_BQUOTE;
	v->a[3227] = anon_sym_LT_LPAREN;
	v->a[3228] = anon_sym_GT_LPAREN;
	v->a[3229] = sym_word;
	v->a[3230] = 24;
	v->a[3231] = actions(3);
	v->a[3232] = 1;
	v->a[3233] = sym_comment;
	v->a[3234] = actions(1829);
	v->a[3235] = 1;
	v->a[3236] = anon_sym_DOLLAR_LBRACK;
	v->a[3237] = actions(1831);
	v->a[3238] = 1;
	v->a[3239] = anon_sym_DOLLAR;
	small_parse_table_162(v);
}

void	small_parse_table_162(t_small_parse_table_array *v)
{
	v->a[3240] = actions(1833);
	v->a[3241] = 1;
	v->a[3242] = sym__special_character;
	v->a[3243] = actions(1835);
	v->a[3244] = 1;
	v->a[3245] = anon_sym_DQUOTE;
	v->a[3246] = actions(1837);
	v->a[3247] = 1;
	v->a[3248] = aux_sym_number_token1;
	v->a[3249] = actions(1839);
	v->a[3250] = 1;
	v->a[3251] = aux_sym_number_token2;
	v->a[3252] = actions(1841);
	v->a[3253] = 1;
	v->a[3254] = anon_sym_DOLLAR_LBRACE;
	v->a[3255] = actions(1843);
	v->a[3256] = 1;
	v->a[3257] = anon_sym_DOLLAR_LPAREN;
	v->a[3258] = actions(1845);
	v->a[3259] = 1;
	small_parse_table_163(v);
}

void	small_parse_table_163(t_small_parse_table_array *v)
{
	v->a[3260] = anon_sym_BQUOTE;
	v->a[3261] = actions(1847);
	v->a[3262] = 1;
	v->a[3263] = anon_sym_DOLLAR_BQUOTE;
	v->a[3264] = actions(1851);
	v->a[3265] = 1;
	v->a[3266] = aux_sym__simple_variable_name_token1;
	v->a[3267] = actions(1853);
	v->a[3268] = 1;
	v->a[3269] = sym_variable_name;
	v->a[3270] = actions(1855);
	v->a[3271] = 1;
	v->a[3272] = sym_test_operator;
	v->a[3273] = actions(1857);
	v->a[3274] = 1;
	v->a[3275] = sym__brace_start;
	v->a[3276] = state(1699);
	v->a[3277] = 1;
	v->a[3278] = aux_sym__literal_repeat1;
	v->a[3279] = state(6769);
	small_parse_table_164(v);
}

void	small_parse_table_164(t_small_parse_table_array *v)
{
	v->a[3280] = 1;
	v->a[3281] = sym_subscript;
	v->a[3282] = actions(1799);
	v->a[3283] = 2;
	v->a[3284] = sym_file_descriptor;
	v->a[3285] = aux_sym_heredoc_redirect_token1;
	v->a[3286] = actions(1827);
	v->a[3287] = 2;
	v->a[3288] = anon_sym_LPAREN_LPAREN;
	v->a[3289] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3290] = actions(1849);
	v->a[3291] = 2;
	v->a[3292] = anon_sym_LT_LPAREN;
	v->a[3293] = anon_sym_GT_LPAREN;
	v->a[3294] = actions(1825);
	v->a[3295] = 3;
	v->a[3296] = sym_raw_string;
	v->a[3297] = sym_ansi_c_string;
	v->a[3298] = sym_word;
	v->a[3299] = state(565);
	small_parse_table_165(v);
}

/* EOF small_parse_table_32.c */
