/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_39.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_195(t_small_parse_table_array *v)
{
	v->a[3900] = 1;
	v->a[3901] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3902] = actions(61);
	v->a[3903] = 1;
	v->a[3904] = anon_sym_DOLLAR;
	v->a[3905] = actions(63);
	v->a[3906] = 1;
	v->a[3907] = anon_sym_DQUOTE;
	v->a[3908] = actions(67);
	v->a[3909] = 1;
	v->a[3910] = anon_sym_DOLLAR_LBRACE;
	v->a[3911] = actions(69);
	v->a[3912] = 1;
	v->a[3913] = anon_sym_DOLLAR_LPAREN;
	v->a[3914] = actions(71);
	v->a[3915] = 1;
	v->a[3916] = anon_sym_BQUOTE;
	v->a[3917] = actions(73);
	v->a[3918] = 1;
	v->a[3919] = sym_file_descriptor;
	small_parse_table_196(v);
}

void	small_parse_table_196(t_small_parse_table_array *v)
{
	v->a[3920] = actions(75);
	v->a[3921] = 1;
	v->a[3922] = sym_variable_name;
	v->a[3923] = state(27);
	v->a[3924] = 1;
	v->a[3925] = aux_sym__terminated_statement;
	v->a[3926] = state(191);
	v->a[3927] = 1;
	v->a[3928] = sym_command_name;
	v->a[3929] = state(279);
	v->a[3930] = 1;
	v->a[3931] = sym_variable_assignment;
	v->a[3932] = state(624);
	v->a[3933] = 1;
	v->a[3934] = sym_concatenation;
	v->a[3935] = state(726);
	v->a[3936] = 1;
	v->a[3937] = sym_file_redirect;
	v->a[3938] = state(733);
	v->a[3939] = 1;
	small_parse_table_197(v);
}

void	small_parse_table_197(t_small_parse_table_array *v)
{
	v->a[3940] = aux_sym_command_repeat1;
	v->a[3941] = state(1223);
	v->a[3942] = 1;
	v->a[3943] = sym_pipeline;
	v->a[3944] = state(1307);
	v->a[3945] = 1;
	v->a[3946] = aux_sym_redirected_statement_repeat2;
	v->a[3947] = state(2117);
	v->a[3948] = 1;
	v->a[3949] = sym__statement_not_pipeline;
	v->a[3950] = actions(11);
	v->a[3951] = 2;
	v->a[3952] = anon_sym_while;
	v->a[3953] = anon_sym_until;
	v->a[3954] = actions(57);
	v->a[3955] = 2;
	v->a[3956] = anon_sym_LT_AMP_DASH;
	v->a[3957] = anon_sym_GT_AMP_DASH;
	v->a[3958] = actions(65);
	v->a[3959] = 2;
	small_parse_table_198(v);
}

void	small_parse_table_198(t_small_parse_table_array *v)
{
	v->a[3960] = sym_raw_string;
	v->a[3961] = sym_number;
	v->a[3962] = actions(210);
	v->a[3963] = 3;
	v->a[3964] = anon_sym_fi;
	v->a[3965] = anon_sym_elif;
	v->a[3966] = anon_sym_else;
	v->a[3967] = state(420);
	v->a[3968] = 5;
	v->a[3969] = sym_arithmetic_expansion;
	v->a[3970] = sym_string;
	v->a[3971] = sym_simple_expansion;
	v->a[3972] = sym_expansion;
	v->a[3973] = sym_command_substitution;
	v->a[3974] = actions(55);
	v->a[3975] = 8;
	v->a[3976] = anon_sym_LT;
	v->a[3977] = anon_sym_GT;
	v->a[3978] = anon_sym_GT_GT;
	v->a[3979] = anon_sym_AMP_GT;
	small_parse_table_199(v);
}

void	small_parse_table_199(t_small_parse_table_array *v)
{
	v->a[3980] = anon_sym_AMP_GT_GT;
	v->a[3981] = anon_sym_LT_AMP;
	v->a[3982] = anon_sym_GT_AMP;
	v->a[3983] = anon_sym_GT_PIPE;
	v->a[3984] = state(1140);
	v->a[3985] = 12;
	v->a[3986] = sym_redirected_statement;
	v->a[3987] = sym_for_statement;
	v->a[3988] = sym_while_statement;
	v->a[3989] = sym_if_statement;
	v->a[3990] = sym_case_statement;
	v->a[3991] = sym_function_definition;
	v->a[3992] = sym_compound_statement;
	v->a[3993] = sym_subshell;
	v->a[3994] = sym_list;
	v->a[3995] = sym_negated_command;
	v->a[3996] = sym_command;
	v->a[3997] = sym__variable_assignments;
	v->a[3998] = 34;
	v->a[3999] = actions(3);
	small_parse_table_200(v);
}

/* EOF small_parse_table_39.c */
