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
	v->a[3200] = 2;
	v->a[3201] = anon_sym_LT_AMP_DASH;
	v->a[3202] = anon_sym_GT_AMP_DASH;
	v->a[3203] = actions(65);
	v->a[3204] = 2;
	v->a[3205] = sym_raw_string;
	v->a[3206] = sym_number;
	v->a[3207] = state(394);
	v->a[3208] = 5;
	v->a[3209] = sym_arithmetic_expansion;
	v->a[3210] = sym_string;
	v->a[3211] = sym_simple_expansion;
	v->a[3212] = sym_expansion;
	v->a[3213] = sym_command_substitution;
	v->a[3214] = actions(55);
	v->a[3215] = 8;
	v->a[3216] = anon_sym_LT;
	v->a[3217] = anon_sym_GT;
	v->a[3218] = anon_sym_GT_GT;
	v->a[3219] = anon_sym_AMP_GT;
	small_parse_table_161(v);
}

void	small_parse_table_161(t_small_parse_table_array *v)
{
	v->a[3220] = anon_sym_AMP_GT_GT;
	v->a[3221] = anon_sym_LT_AMP;
	v->a[3222] = anon_sym_GT_AMP;
	v->a[3223] = anon_sym_GT_PIPE;
	v->a[3224] = state(1434);
	v->a[3225] = 12;
	v->a[3226] = sym_redirected_statement;
	v->a[3227] = sym_for_statement;
	v->a[3228] = sym_while_statement;
	v->a[3229] = sym_if_statement;
	v->a[3230] = sym_case_statement;
	v->a[3231] = sym_function_definition;
	v->a[3232] = sym_compound_statement;
	v->a[3233] = sym_subshell;
	v->a[3234] = sym_list;
	v->a[3235] = sym_negated_command;
	v->a[3236] = sym_command;
	v->a[3237] = sym__variable_assignments;
	v->a[3238] = 34;
	v->a[3239] = actions(3);
	small_parse_table_162(v);
}

void	small_parse_table_162(t_small_parse_table_array *v)
{
	v->a[3240] = 1;
	v->a[3241] = sym_comment;
	v->a[3242] = actions(9);
	v->a[3243] = 1;
	v->a[3244] = anon_sym_for;
	v->a[3245] = actions(13);
	v->a[3246] = 1;
	v->a[3247] = anon_sym_if;
	v->a[3248] = actions(15);
	v->a[3249] = 1;
	v->a[3250] = anon_sym_case;
	v->a[3251] = actions(17);
	v->a[3252] = 1;
	v->a[3253] = anon_sym_LPAREN;
	v->a[3254] = actions(19);
	v->a[3255] = 1;
	v->a[3256] = anon_sym_LBRACE;
	v->a[3257] = actions(45);
	v->a[3258] = 1;
	v->a[3259] = sym_word;
	small_parse_table_163(v);
}

void	small_parse_table_163(t_small_parse_table_array *v)
{
	v->a[3260] = actions(53);
	v->a[3261] = 1;
	v->a[3262] = anon_sym_BANG;
	v->a[3263] = actions(59);
	v->a[3264] = 1;
	v->a[3265] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3266] = actions(61);
	v->a[3267] = 1;
	v->a[3268] = anon_sym_DOLLAR;
	v->a[3269] = actions(63);
	v->a[3270] = 1;
	v->a[3271] = anon_sym_DQUOTE;
	v->a[3272] = actions(67);
	v->a[3273] = 1;
	v->a[3274] = anon_sym_DOLLAR_LBRACE;
	v->a[3275] = actions(69);
	v->a[3276] = 1;
	v->a[3277] = anon_sym_DOLLAR_LPAREN;
	v->a[3278] = actions(71);
	v->a[3279] = 1;
	small_parse_table_164(v);
}

void	small_parse_table_164(t_small_parse_table_array *v)
{
	v->a[3280] = anon_sym_BQUOTE;
	v->a[3281] = actions(73);
	v->a[3282] = 1;
	v->a[3283] = sym_file_descriptor;
	v->a[3284] = actions(75);
	v->a[3285] = 1;
	v->a[3286] = sym_variable_name;
	v->a[3287] = actions(87);
	v->a[3288] = 1;
	v->a[3289] = anon_sym_LF;
	v->a[3290] = state(136);
	v->a[3291] = 1;
	v->a[3292] = aux_sym__statements_repeat1;
	v->a[3293] = state(187);
	v->a[3294] = 1;
	v->a[3295] = sym_command_name;
	v->a[3296] = state(275);
	v->a[3297] = 1;
	v->a[3298] = sym_variable_assignment;
	v->a[3299] = state(647);
	small_parse_table_165(v);
}

/* EOF small_parse_table_32.c */
