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
	v->a[3201] = aux_sym__case_item_last_repeat2;
	v->a[3202] = state(117);
	v->a[3203] = 1;
	v->a[3204] = aux_sym__statements_repeat1;
	v->a[3205] = state(271);
	v->a[3206] = 1;
	v->a[3207] = sym_command_name;
	v->a[3208] = state(288);
	v->a[3209] = 1;
	v->a[3210] = sym_variable_assignment;
	v->a[3211] = state(482);
	v->a[3212] = 1;
	v->a[3213] = aux_sym_command_repeat1;
	v->a[3214] = state(600);
	v->a[3215] = 1;
	v->a[3216] = sym_file_redirect;
	v->a[3217] = state(602);
	v->a[3218] = 1;
	v->a[3219] = sym_concatenation;
	small_parse_table_161(v);
}

void	small_parse_table_161(t_small_parse_table_array *v)
{
	v->a[3220] = state(1014);
	v->a[3221] = 1;
	v->a[3222] = sym_pipeline;
	v->a[3223] = state(1068);
	v->a[3224] = 1;
	v->a[3225] = aux_sym_redirected_statement_repeat2;
	v->a[3226] = state(1609);
	v->a[3227] = 1;
	v->a[3228] = sym__statement_not_pipeline;
	v->a[3229] = state(1749);
	v->a[3230] = 1;
	v->a[3231] = sym__statements;
	v->a[3232] = actions(11);
	v->a[3233] = 2;
	v->a[3234] = anon_sym_while;
	v->a[3235] = anon_sym_until;
	v->a[3236] = actions(59);
	v->a[3237] = 2;
	v->a[3238] = sym_raw_string;
	v->a[3239] = sym_number;
	small_parse_table_162(v);
}

void	small_parse_table_162(t_small_parse_table_array *v)
{
	v->a[3240] = state(425);
	v->a[3241] = 5;
	v->a[3242] = sym_arithmetic_expansion;
	v->a[3243] = sym_string;
	v->a[3244] = sym_simple_expansion;
	v->a[3245] = sym_expansion;
	v->a[3246] = sym_command_substitution;
	v->a[3247] = actions(51);
	v->a[3248] = 7;
	v->a[3249] = anon_sym_LT;
	v->a[3250] = anon_sym_GT;
	v->a[3251] = anon_sym_GT_GT;
	v->a[3252] = anon_sym_LT_AMP;
	v->a[3253] = anon_sym_GT_AMP;
	v->a[3254] = anon_sym_GT_PIPE;
	v->a[3255] = anon_sym_LT_GT;
	v->a[3256] = state(936);
	v->a[3257] = 12;
	v->a[3258] = sym_redirected_statement;
	v->a[3259] = sym_for_statement;
	small_parse_table_163(v);
}

void	small_parse_table_163(t_small_parse_table_array *v)
{
	v->a[3260] = sym_while_statement;
	v->a[3261] = sym_if_statement;
	v->a[3262] = sym_case_statement;
	v->a[3263] = sym_function_definition;
	v->a[3264] = sym_compound_statement;
	v->a[3265] = sym_subshell;
	v->a[3266] = sym_list;
	v->a[3267] = sym_negated_command;
	v->a[3268] = sym_command;
	v->a[3269] = sym__variable_assignments;
	v->a[3270] = 32;
	v->a[3271] = actions(3);
	v->a[3272] = 1;
	v->a[3273] = sym_comment;
	v->a[3274] = actions(9);
	v->a[3275] = 1;
	v->a[3276] = anon_sym_for;
	v->a[3277] = actions(13);
	v->a[3278] = 1;
	v->a[3279] = anon_sym_if;
	small_parse_table_164(v);
}

void	small_parse_table_164(t_small_parse_table_array *v)
{
	v->a[3280] = actions(15);
	v->a[3281] = 1;
	v->a[3282] = anon_sym_case;
	v->a[3283] = actions(17);
	v->a[3284] = 1;
	v->a[3285] = anon_sym_LPAREN;
	v->a[3286] = actions(19);
	v->a[3287] = 1;
	v->a[3288] = anon_sym_LBRACE;
	v->a[3289] = actions(41);
	v->a[3290] = 1;
	v->a[3291] = sym_word;
	v->a[3292] = actions(49);
	v->a[3293] = 1;
	v->a[3294] = anon_sym_BANG;
	v->a[3295] = actions(53);
	v->a[3296] = 1;
	v->a[3297] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3298] = actions(55);
	v->a[3299] = 1;
	small_parse_table_165(v);
}

/* EOF small_parse_table_32.c */
