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
	v->a[3200] = sym_arithmetic_expansion;
	v->a[3201] = sym_string;
	v->a[3202] = sym_simple_expansion;
	v->a[3203] = sym_expansion;
	v->a[3204] = sym_command_substitution;
	v->a[3205] = actions(105);
	v->a[3206] = 7;
	v->a[3207] = anon_sym_LT;
	v->a[3208] = anon_sym_GT;
	v->a[3209] = anon_sym_GT_GT;
	v->a[3210] = anon_sym_LT_AMP;
	v->a[3211] = anon_sym_GT_AMP;
	v->a[3212] = anon_sym_GT_PIPE;
	v->a[3213] = anon_sym_LT_GT;
	v->a[3214] = state(987);
	v->a[3215] = 12;
	v->a[3216] = sym_redirected_statement;
	v->a[3217] = sym_for_statement;
	v->a[3218] = sym_while_statement;
	v->a[3219] = sym_if_statement;
	small_parse_table_161(v);
}

void	small_parse_table_161(t_small_parse_table_array *v)
{
	v->a[3220] = sym_case_statement;
	v->a[3221] = sym_function_definition;
	v->a[3222] = sym_compound_statement;
	v->a[3223] = sym_subshell;
	v->a[3224] = sym_list;
	v->a[3225] = sym_negated_command;
	v->a[3226] = sym_command;
	v->a[3227] = sym__variable_assignments;
	v->a[3228] = 33;
	v->a[3229] = actions(3);
	v->a[3230] = 1;
	v->a[3231] = sym_comment;
	v->a[3232] = actions(9);
	v->a[3233] = 1;
	v->a[3234] = anon_sym_for;
	v->a[3235] = actions(13);
	v->a[3236] = 1;
	v->a[3237] = anon_sym_if;
	v->a[3238] = actions(15);
	v->a[3239] = 1;
	small_parse_table_162(v);
}

void	small_parse_table_162(t_small_parse_table_array *v)
{
	v->a[3240] = anon_sym_case;
	v->a[3241] = actions(17);
	v->a[3242] = 1;
	v->a[3243] = anon_sym_LPAREN;
	v->a[3244] = actions(19);
	v->a[3245] = 1;
	v->a[3246] = anon_sym_LBRACE;
	v->a[3247] = actions(43);
	v->a[3248] = 1;
	v->a[3249] = sym_word;
	v->a[3250] = actions(51);
	v->a[3251] = 1;
	v->a[3252] = anon_sym_BANG;
	v->a[3253] = actions(55);
	v->a[3254] = 1;
	v->a[3255] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3256] = actions(57);
	v->a[3257] = 1;
	v->a[3258] = anon_sym_DOLLAR;
	v->a[3259] = actions(59);
	small_parse_table_163(v);
}

void	small_parse_table_163(t_small_parse_table_array *v)
{
	v->a[3260] = 1;
	v->a[3261] = anon_sym_DQUOTE;
	v->a[3262] = actions(63);
	v->a[3263] = 1;
	v->a[3264] = anon_sym_DOLLAR_LBRACE;
	v->a[3265] = actions(65);
	v->a[3266] = 1;
	v->a[3267] = anon_sym_DOLLAR_LPAREN;
	v->a[3268] = actions(67);
	v->a[3269] = 1;
	v->a[3270] = anon_sym_BQUOTE;
	v->a[3271] = actions(69);
	v->a[3272] = 1;
	v->a[3273] = sym_file_descriptor;
	v->a[3274] = actions(71);
	v->a[3275] = 1;
	v->a[3276] = sym_variable_name;
	v->a[3277] = actions(197);
	v->a[3278] = 1;
	v->a[3279] = anon_sym_LF;
	small_parse_table_164(v);
}

void	small_parse_table_164(t_small_parse_table_array *v)
{
	v->a[3280] = state(20);
	v->a[3281] = 1;
	v->a[3282] = aux_sym__case_item_last_repeat2;
	v->a[3283] = state(119);
	v->a[3284] = 1;
	v->a[3285] = aux_sym__statements_repeat1;
	v->a[3286] = state(183);
	v->a[3287] = 1;
	v->a[3288] = sym_command_name;
	v->a[3289] = state(323);
	v->a[3290] = 1;
	v->a[3291] = sym_variable_assignment;
	v->a[3292] = state(655);
	v->a[3293] = 1;
	v->a[3294] = aux_sym_command_repeat1;
	v->a[3295] = state(661);
	v->a[3296] = 1;
	v->a[3297] = sym_concatenation;
	v->a[3298] = state(665);
	v->a[3299] = 1;
	small_parse_table_165(v);
}

/* EOF small_parse_table_32.c */
