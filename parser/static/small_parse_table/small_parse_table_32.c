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
	v->a[3200] = sym_number;
	v->a[3201] = actions(153);
	v->a[3202] = 3;
	v->a[3203] = anon_sym_fi;
	v->a[3204] = anon_sym_elif;
	v->a[3205] = anon_sym_else;
	v->a[3206] = state(436);
	v->a[3207] = 5;
	v->a[3208] = sym_arithmetic_expansion;
	v->a[3209] = sym_string;
	v->a[3210] = sym_simple_expansion;
	v->a[3211] = sym_expansion;
	v->a[3212] = sym_command_substitution;
	v->a[3213] = actions(167);
	v->a[3214] = 7;
	v->a[3215] = anon_sym_LT;
	v->a[3216] = anon_sym_GT;
	v->a[3217] = anon_sym_GT_GT;
	v->a[3218] = anon_sym_LT_AMP;
	v->a[3219] = anon_sym_GT_AMP;
	small_parse_table_161(v);
}

void	small_parse_table_161(t_small_parse_table_array *v)
{
	v->a[3220] = anon_sym_GT_PIPE;
	v->a[3221] = anon_sym_LT_GT;
	v->a[3222] = state(1079);
	v->a[3223] = 12;
	v->a[3224] = sym_redirected_statement;
	v->a[3225] = sym_for_statement;
	v->a[3226] = sym_while_statement;
	v->a[3227] = sym_if_statement;
	v->a[3228] = sym_case_statement;
	v->a[3229] = sym_function_definition;
	v->a[3230] = sym_compound_statement;
	v->a[3231] = sym_subshell;
	v->a[3232] = sym_list;
	v->a[3233] = sym_negated_command;
	v->a[3234] = sym_command;
	v->a[3235] = sym__variable_assignments;
	v->a[3236] = 33;
	v->a[3237] = actions(3);
	v->a[3238] = 1;
	v->a[3239] = sym_comment;
	small_parse_table_162(v);
}

void	small_parse_table_162(t_small_parse_table_array *v)
{
	v->a[3240] = actions(87);
	v->a[3241] = 1;
	v->a[3242] = sym_word;
	v->a[3243] = actions(89);
	v->a[3244] = 1;
	v->a[3245] = anon_sym_for;
	v->a[3246] = actions(93);
	v->a[3247] = 1;
	v->a[3248] = anon_sym_if;
	v->a[3249] = actions(95);
	v->a[3250] = 1;
	v->a[3251] = anon_sym_case;
	v->a[3252] = actions(97);
	v->a[3253] = 1;
	v->a[3254] = anon_sym_LPAREN;
	v->a[3255] = actions(101);
	v->a[3256] = 1;
	v->a[3257] = anon_sym_LBRACE;
	v->a[3258] = actions(103);
	v->a[3259] = 1;
	small_parse_table_163(v);
}

void	small_parse_table_163(t_small_parse_table_array *v)
{
	v->a[3260] = anon_sym_BANG;
	v->a[3261] = actions(107);
	v->a[3262] = 1;
	v->a[3263] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3264] = actions(109);
	v->a[3265] = 1;
	v->a[3266] = anon_sym_DOLLAR;
	v->a[3267] = actions(111);
	v->a[3268] = 1;
	v->a[3269] = anon_sym_DQUOTE;
	v->a[3270] = actions(115);
	v->a[3271] = 1;
	v->a[3272] = anon_sym_DOLLAR_LBRACE;
	v->a[3273] = actions(117);
	v->a[3274] = 1;
	v->a[3275] = anon_sym_DOLLAR_LPAREN;
	v->a[3276] = actions(119);
	v->a[3277] = 1;
	v->a[3278] = anon_sym_BQUOTE;
	v->a[3279] = actions(121);
	small_parse_table_164(v);
}

void	small_parse_table_164(t_small_parse_table_array *v)
{
	v->a[3280] = 1;
	v->a[3281] = sym_file_descriptor;
	v->a[3282] = actions(123);
	v->a[3283] = 1;
	v->a[3284] = sym_variable_name;
	v->a[3285] = actions(197);
	v->a[3286] = 1;
	v->a[3287] = anon_sym_LF;
	v->a[3288] = state(29);
	v->a[3289] = 1;
	v->a[3290] = aux_sym__case_item_last_repeat2;
	v->a[3291] = state(127);
	v->a[3292] = 1;
	v->a[3293] = aux_sym__statements_repeat1;
	v->a[3294] = state(178);
	v->a[3295] = 1;
	v->a[3296] = sym_command_name;
	v->a[3297] = state(228);
	v->a[3298] = 1;
	v->a[3299] = sym_variable_assignment;
	small_parse_table_165(v);
}

/* EOF small_parse_table_32.c */
