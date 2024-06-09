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
	v->a[3200] = state(2038);
	v->a[3201] = 1;
	v->a[3202] = sym__statements;
	v->a[3203] = state(2040);
	v->a[3204] = 1;
	v->a[3205] = sym__statement_not_pipeline;
	v->a[3206] = actions(99);
	v->a[3207] = 2;
	v->a[3208] = anon_sym_while;
	v->a[3209] = anon_sym_until;
	v->a[3210] = actions(115);
	v->a[3211] = 2;
	v->a[3212] = anon_sym_LT_AMP_DASH;
	v->a[3213] = anon_sym_GT_AMP_DASH;
	v->a[3214] = state(282);
	v->a[3215] = 6;
	v->a[3216] = sym_arithmetic_expansion;
	v->a[3217] = sym_string;
	v->a[3218] = sym_number;
	v->a[3219] = sym_simple_expansion;
	small_parse_table_161(v);
}

void	small_parse_table_161(t_small_parse_table_array *v)
{
	v->a[3220] = sym_expansion;
	v->a[3221] = sym_command_substitution;
	v->a[3222] = actions(113);
	v->a[3223] = 8;
	v->a[3224] = anon_sym_LT;
	v->a[3225] = anon_sym_GT;
	v->a[3226] = anon_sym_GT_GT;
	v->a[3227] = anon_sym_AMP_GT;
	v->a[3228] = anon_sym_AMP_GT_GT;
	v->a[3229] = anon_sym_LT_AMP;
	v->a[3230] = anon_sym_GT_AMP;
	v->a[3231] = anon_sym_GT_PIPE;
	v->a[3232] = state(1048);
	v->a[3233] = 12;
	v->a[3234] = sym_redirected_statement;
	v->a[3235] = sym_for_statement;
	v->a[3236] = sym_while_statement;
	v->a[3237] = sym_if_statement;
	v->a[3238] = sym_case_statement;
	v->a[3239] = sym_function_definition;
	small_parse_table_162(v);
}

void	small_parse_table_162(t_small_parse_table_array *v)
{
	v->a[3240] = sym_compound_statement;
	v->a[3241] = sym_subshell;
	v->a[3242] = sym_list;
	v->a[3243] = sym_negated_command;
	v->a[3244] = sym_command;
	v->a[3245] = sym_variable_assignments;
	v->a[3246] = 36;
	v->a[3247] = actions(3);
	v->a[3248] = 1;
	v->a[3249] = sym_comment;
	v->a[3250] = actions(9);
	v->a[3251] = 1;
	v->a[3252] = anon_sym_for;
	v->a[3253] = actions(13);
	v->a[3254] = 1;
	v->a[3255] = anon_sym_if;
	v->a[3256] = actions(15);
	v->a[3257] = 1;
	v->a[3258] = anon_sym_case;
	v->a[3259] = actions(17);
	small_parse_table_163(v);
}

void	small_parse_table_163(t_small_parse_table_array *v)
{
	v->a[3260] = 1;
	v->a[3261] = anon_sym_LPAREN;
	v->a[3262] = actions(19);
	v->a[3263] = 1;
	v->a[3264] = anon_sym_LBRACE;
	v->a[3265] = actions(49);
	v->a[3266] = 1;
	v->a[3267] = sym_word;
	v->a[3268] = actions(57);
	v->a[3269] = 1;
	v->a[3270] = anon_sym_BANG;
	v->a[3271] = actions(63);
	v->a[3272] = 1;
	v->a[3273] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3274] = actions(65);
	v->a[3275] = 1;
	v->a[3276] = anon_sym_DOLLAR;
	v->a[3277] = actions(67);
	v->a[3278] = 1;
	v->a[3279] = anon_sym_DQUOTE;
	small_parse_table_164(v);
}

void	small_parse_table_164(t_small_parse_table_array *v)
{
	v->a[3280] = actions(69);
	v->a[3281] = 1;
	v->a[3282] = sym_raw_string;
	v->a[3283] = actions(71);
	v->a[3284] = 1;
	v->a[3285] = aux_sym_number_token1;
	v->a[3286] = actions(73);
	v->a[3287] = 1;
	v->a[3288] = aux_sym_number_token2;
	v->a[3289] = actions(75);
	v->a[3290] = 1;
	v->a[3291] = anon_sym_DOLLAR_LBRACE;
	v->a[3292] = actions(77);
	v->a[3293] = 1;
	v->a[3294] = anon_sym_DOLLAR_LPAREN;
	v->a[3295] = actions(79);
	v->a[3296] = 1;
	v->a[3297] = anon_sym_BQUOTE;
	v->a[3298] = actions(81);
	v->a[3299] = 1;
	small_parse_table_165(v);
}

/* EOF small_parse_table_32.c */
