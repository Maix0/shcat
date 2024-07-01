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
	v->a[3200] = anon_sym_if;
	v->a[3201] = actions(164);
	v->a[3202] = 1;
	v->a[3203] = anon_sym_case;
	v->a[3204] = actions(166);
	v->a[3205] = 1;
	v->a[3206] = anon_sym_LPAREN;
	v->a[3207] = actions(168);
	v->a[3208] = 1;
	v->a[3209] = anon_sym_LBRACE;
	v->a[3210] = actions(170);
	v->a[3211] = 1;
	v->a[3212] = anon_sym_BANG;
	v->a[3213] = actions(176);
	v->a[3214] = 1;
	v->a[3215] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3216] = actions(178);
	v->a[3217] = 1;
	v->a[3218] = anon_sym_DOLLAR;
	v->a[3219] = actions(180);
	small_parse_table_161(v);
}

void	small_parse_table_161(t_small_parse_table_array *v)
{
	v->a[3220] = 1;
	v->a[3221] = anon_sym_DQUOTE;
	v->a[3222] = actions(184);
	v->a[3223] = 1;
	v->a[3224] = anon_sym_DOLLAR_LBRACE;
	v->a[3225] = actions(186);
	v->a[3226] = 1;
	v->a[3227] = anon_sym_DOLLAR_LPAREN;
	v->a[3228] = actions(188);
	v->a[3229] = 1;
	v->a[3230] = anon_sym_BQUOTE;
	v->a[3231] = actions(190);
	v->a[3232] = 1;
	v->a[3233] = sym_file_descriptor;
	v->a[3234] = actions(192);
	v->a[3235] = 1;
	v->a[3236] = sym_variable_name;
	v->a[3237] = actions(202);
	v->a[3238] = 1;
	v->a[3239] = anon_sym_LF;
	small_parse_table_162(v);
}

void	small_parse_table_162(t_small_parse_table_array *v)
{
	v->a[3240] = state(18);
	v->a[3241] = 1;
	v->a[3242] = aux_sym__case_item_last_repeat2;
	v->a[3243] = state(140);
	v->a[3244] = 1;
	v->a[3245] = aux_sym__statements_repeat1;
	v->a[3246] = state(186);
	v->a[3247] = 1;
	v->a[3248] = sym_command_name;
	v->a[3249] = state(213);
	v->a[3250] = 1;
	v->a[3251] = sym_variable_assignment;
	v->a[3252] = state(636);
	v->a[3253] = 1;
	v->a[3254] = sym_concatenation;
	v->a[3255] = state(677);
	v->a[3256] = 1;
	v->a[3257] = sym_file_redirect;
	v->a[3258] = state(752);
	v->a[3259] = 1;
	small_parse_table_163(v);
}

void	small_parse_table_163(t_small_parse_table_array *v)
{
	v->a[3260] = aux_sym_command_repeat1;
	v->a[3261] = state(1133);
	v->a[3262] = 1;
	v->a[3263] = sym_pipeline;
	v->a[3264] = state(1226);
	v->a[3265] = 1;
	v->a[3266] = aux_sym_redirected_statement_repeat2;
	v->a[3267] = state(2108);
	v->a[3268] = 1;
	v->a[3269] = sym__statements;
	v->a[3270] = state(2111);
	v->a[3271] = 1;
	v->a[3272] = sym__statement_not_pipeline;
	v->a[3273] = actions(160);
	v->a[3274] = 2;
	v->a[3275] = anon_sym_while;
	v->a[3276] = anon_sym_until;
	v->a[3277] = actions(174);
	v->a[3278] = 2;
	v->a[3279] = anon_sym_LT_AMP_DASH;
	small_parse_table_164(v);
}

void	small_parse_table_164(t_small_parse_table_array *v)
{
	v->a[3280] = anon_sym_GT_AMP_DASH;
	v->a[3281] = actions(182);
	v->a[3282] = 2;
	v->a[3283] = sym_raw_string;
	v->a[3284] = sym_number;
	v->a[3285] = state(385);
	v->a[3286] = 5;
	v->a[3287] = sym_arithmetic_expansion;
	v->a[3288] = sym_string;
	v->a[3289] = sym_simple_expansion;
	v->a[3290] = sym_expansion;
	v->a[3291] = sym_command_substitution;
	v->a[3292] = actions(172);
	v->a[3293] = 6;
	v->a[3294] = anon_sym_LT;
	v->a[3295] = anon_sym_GT;
	v->a[3296] = anon_sym_GT_GT;
	v->a[3297] = anon_sym_LT_AMP;
	v->a[3298] = anon_sym_GT_AMP;
	v->a[3299] = anon_sym_GT_PIPE;
	small_parse_table_165(v);
}

/* EOF small_parse_table_32.c */
