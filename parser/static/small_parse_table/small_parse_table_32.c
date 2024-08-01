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
	v->a[3200] = 1;
	v->a[3201] = anon_sym_DOLLAR_LPAREN;
	v->a[3202] = actions(65);
	v->a[3203] = 1;
	v->a[3204] = anon_sym_BQUOTE;
	v->a[3205] = actions(67);
	v->a[3206] = 1;
	v->a[3207] = sym_variable_name;
	v->a[3208] = actions(188);
	v->a[3209] = 1;
	v->a[3210] = anon_sym_LF;
	v->a[3211] = state(20);
	v->a[3212] = 1;
	v->a[3213] = aux_sym__case_item_last_repeat2;
	v->a[3214] = state(118);
	v->a[3215] = 1;
	v->a[3216] = aux_sym__statements_repeat1;
	v->a[3217] = state(185);
	v->a[3218] = 1;
	v->a[3219] = sym_command_name;
	small_parse_table_161(v);
}

void	small_parse_table_161(t_small_parse_table_array *v)
{
	v->a[3220] = state(216);
	v->a[3221] = 1;
	v->a[3222] = sym_variable_assignment;
	v->a[3223] = state(411);
	v->a[3224] = 1;
	v->a[3225] = aux_sym_command_repeat1;
	v->a[3226] = state(551);
	v->a[3227] = 1;
	v->a[3228] = sym_file_redirect;
	v->a[3229] = state(555);
	v->a[3230] = 1;
	v->a[3231] = sym_concatenation;
	v->a[3232] = state(991);
	v->a[3233] = 1;
	v->a[3234] = sym_pipeline;
	v->a[3235] = state(1126);
	v->a[3236] = 1;
	v->a[3237] = aux_sym_redirected_statement_repeat2;
	v->a[3238] = state(1561);
	v->a[3239] = 1;
	small_parse_table_162(v);
}

void	small_parse_table_162(t_small_parse_table_array *v)
{
	v->a[3240] = sym__statement_not_pipeline;
	v->a[3241] = state(1612);
	v->a[3242] = 1;
	v->a[3243] = sym__statements;
	v->a[3244] = actions(11);
	v->a[3245] = 2;
	v->a[3246] = anon_sym_while;
	v->a[3247] = anon_sym_until;
	v->a[3248] = actions(59);
	v->a[3249] = 2;
	v->a[3250] = sym_raw_string;
	v->a[3251] = sym_number;
	v->a[3252] = actions(51);
	v->a[3253] = 3;
	v->a[3254] = anon_sym_LT;
	v->a[3255] = anon_sym_GT;
	v->a[3256] = anon_sym_GT_GT;
	v->a[3257] = state(401);
	v->a[3258] = 5;
	v->a[3259] = sym_arithmetic_expansion;
	small_parse_table_163(v);
}

void	small_parse_table_163(t_small_parse_table_array *v)
{
	v->a[3260] = sym_string;
	v->a[3261] = sym_simple_expansion;
	v->a[3262] = sym_expansion;
	v->a[3263] = sym_command_substitution;
	v->a[3264] = state(972);
	v->a[3265] = 12;
	v->a[3266] = sym_redirected_statement;
	v->a[3267] = sym_for_statement;
	v->a[3268] = sym_while_statement;
	v->a[3269] = sym_if_statement;
	v->a[3270] = sym_case_statement;
	v->a[3271] = sym_function_definition;
	v->a[3272] = sym_compound_statement;
	v->a[3273] = sym_subshell;
	v->a[3274] = sym_list;
	v->a[3275] = sym_negated_command;
	v->a[3276] = sym_command;
	v->a[3277] = sym__variable_assignments;
	v->a[3278] = 32;
	v->a[3279] = actions(3);
	small_parse_table_164(v);
}

void	small_parse_table_164(t_small_parse_table_array *v)
{
	v->a[3280] = 1;
	v->a[3281] = sym_comment;
	v->a[3282] = actions(79);
	v->a[3283] = 1;
	v->a[3284] = sym_word;
	v->a[3285] = actions(81);
	v->a[3286] = 1;
	v->a[3287] = anon_sym_for;
	v->a[3288] = actions(85);
	v->a[3289] = 1;
	v->a[3290] = anon_sym_if;
	v->a[3291] = actions(87);
	v->a[3292] = 1;
	v->a[3293] = anon_sym_case;
	v->a[3294] = actions(89);
	v->a[3295] = 1;
	v->a[3296] = anon_sym_LPAREN;
	v->a[3297] = actions(93);
	v->a[3298] = 1;
	v->a[3299] = anon_sym_LBRACE;
	small_parse_table_165(v);
}

/* EOF small_parse_table_32.c */
