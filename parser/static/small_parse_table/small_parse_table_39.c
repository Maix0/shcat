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
	v->a[3900] = anon_sym_BQUOTE;
	v->a[3901] = actions(67);
	v->a[3902] = 1;
	v->a[3903] = sym_variable_name;
	v->a[3904] = actions(196);
	v->a[3905] = 1;
	v->a[3906] = anon_sym_do;
	v->a[3907] = state(103);
	v->a[3908] = 1;
	v->a[3909] = aux_sym__terminated_statement;
	v->a[3910] = state(185);
	v->a[3911] = 1;
	v->a[3912] = sym_command_name;
	v->a[3913] = state(238);
	v->a[3914] = 1;
	v->a[3915] = sym_variable_assignment;
	v->a[3916] = state(411);
	v->a[3917] = 1;
	v->a[3918] = aux_sym_command_repeat1;
	v->a[3919] = state(551);
	small_parse_table_196(v);
}

void	small_parse_table_196(t_small_parse_table_array *v)
{
	v->a[3920] = 1;
	v->a[3921] = sym_file_redirect;
	v->a[3922] = state(555);
	v->a[3923] = 1;
	v->a[3924] = sym_concatenation;
	v->a[3925] = state(978);
	v->a[3926] = 1;
	v->a[3927] = sym_do_group;
	v->a[3928] = state(1001);
	v->a[3929] = 1;
	v->a[3930] = sym_pipeline;
	v->a[3931] = state(1126);
	v->a[3932] = 1;
	v->a[3933] = aux_sym_redirected_statement_repeat2;
	v->a[3934] = state(1561);
	v->a[3935] = 1;
	v->a[3936] = sym__statement_not_pipeline;
	v->a[3937] = actions(11);
	v->a[3938] = 2;
	v->a[3939] = anon_sym_while;
	small_parse_table_197(v);
}

void	small_parse_table_197(t_small_parse_table_array *v)
{
	v->a[3940] = anon_sym_until;
	v->a[3941] = actions(59);
	v->a[3942] = 2;
	v->a[3943] = sym_raw_string;
	v->a[3944] = sym_number;
	v->a[3945] = actions(51);
	v->a[3946] = 3;
	v->a[3947] = anon_sym_LT;
	v->a[3948] = anon_sym_GT;
	v->a[3949] = anon_sym_GT_GT;
	v->a[3950] = state(401);
	v->a[3951] = 5;
	v->a[3952] = sym_arithmetic_expansion;
	v->a[3953] = sym_string;
	v->a[3954] = sym_simple_expansion;
	v->a[3955] = sym_expansion;
	v->a[3956] = sym_command_substitution;
	v->a[3957] = state(958);
	v->a[3958] = 12;
	v->a[3959] = sym_redirected_statement;
	small_parse_table_198(v);
}

void	small_parse_table_198(t_small_parse_table_array *v)
{
	v->a[3960] = sym_for_statement;
	v->a[3961] = sym_while_statement;
	v->a[3962] = sym_if_statement;
	v->a[3963] = sym_case_statement;
	v->a[3964] = sym_function_definition;
	v->a[3965] = sym_compound_statement;
	v->a[3966] = sym_subshell;
	v->a[3967] = sym_list;
	v->a[3968] = sym_negated_command;
	v->a[3969] = sym_command;
	v->a[3970] = sym__variable_assignments;
	v->a[3971] = 31;
	v->a[3972] = actions(3);
	v->a[3973] = 1;
	v->a[3974] = sym_comment;
	v->a[3975] = actions(9);
	v->a[3976] = 1;
	v->a[3977] = anon_sym_for;
	v->a[3978] = actions(13);
	v->a[3979] = 1;
	small_parse_table_199(v);
}

void	small_parse_table_199(t_small_parse_table_array *v)
{
	v->a[3980] = anon_sym_if;
	v->a[3981] = actions(15);
	v->a[3982] = 1;
	v->a[3983] = anon_sym_case;
	v->a[3984] = actions(17);
	v->a[3985] = 1;
	v->a[3986] = anon_sym_LPAREN;
	v->a[3987] = actions(19);
	v->a[3988] = 1;
	v->a[3989] = anon_sym_LBRACE;
	v->a[3990] = actions(41);
	v->a[3991] = 1;
	v->a[3992] = sym_word;
	v->a[3993] = actions(49);
	v->a[3994] = 1;
	v->a[3995] = anon_sym_BANG;
	v->a[3996] = actions(53);
	v->a[3997] = 1;
	v->a[3998] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3999] = actions(55);
	small_parse_table_200(v);
}

/* EOF small_parse_table_39.c */
