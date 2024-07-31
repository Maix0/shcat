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
	v->a[3900] = anon_sym_DOLLAR;
	v->a[3901] = actions(103);
	v->a[3902] = 1;
	v->a[3903] = anon_sym_DQUOTE;
	v->a[3904] = actions(107);
	v->a[3905] = 1;
	v->a[3906] = anon_sym_DOLLAR_LBRACE;
	v->a[3907] = actions(109);
	v->a[3908] = 1;
	v->a[3909] = anon_sym_DOLLAR_LPAREN;
	v->a[3910] = actions(111);
	v->a[3911] = 1;
	v->a[3912] = anon_sym_BQUOTE;
	v->a[3913] = actions(113);
	v->a[3914] = 1;
	v->a[3915] = sym_variable_name;
	v->a[3916] = actions(115);
	v->a[3917] = 1;
	v->a[3918] = anon_sym_LF;
	v->a[3919] = state(112);
	small_parse_table_196(v);
}

void	small_parse_table_196(t_small_parse_table_array *v)
{
	v->a[3920] = 1;
	v->a[3921] = aux_sym__statements_repeat1;
	v->a[3922] = state(185);
	v->a[3923] = 1;
	v->a[3924] = sym_command_name;
	v->a[3925] = state(255);
	v->a[3926] = 1;
	v->a[3927] = sym_variable_assignment;
	v->a[3928] = state(491);
	v->a[3929] = 1;
	v->a[3930] = aux_sym_command_repeat1;
	v->a[3931] = state(511);
	v->a[3932] = 1;
	v->a[3933] = aux_sym__case_item_last_repeat2;
	v->a[3934] = state(599);
	v->a[3935] = 1;
	v->a[3936] = sym_concatenation;
	v->a[3937] = state(615);
	v->a[3938] = 1;
	v->a[3939] = sym_file_redirect;
	small_parse_table_197(v);
}

void	small_parse_table_197(t_small_parse_table_array *v)
{
	v->a[3940] = state(941);
	v->a[3941] = 1;
	v->a[3942] = sym_pipeline;
	v->a[3943] = state(1015);
	v->a[3944] = 1;
	v->a[3945] = aux_sym_redirected_statement_repeat2;
	v->a[3946] = state(1610);
	v->a[3947] = 1;
	v->a[3948] = sym__statement_not_pipeline;
	v->a[3949] = state(1619);
	v->a[3950] = 1;
	v->a[3951] = sym__statements;
	v->a[3952] = actions(83);
	v->a[3953] = 2;
	v->a[3954] = anon_sym_while;
	v->a[3955] = anon_sym_until;
	v->a[3956] = actions(105);
	v->a[3957] = 2;
	v->a[3958] = sym_raw_string;
	v->a[3959] = sym_number;
	small_parse_table_198(v);
}

void	small_parse_table_198(t_small_parse_table_array *v)
{
	v->a[3960] = state(341);
	v->a[3961] = 5;
	v->a[3962] = sym_arithmetic_expansion;
	v->a[3963] = sym_string;
	v->a[3964] = sym_simple_expansion;
	v->a[3965] = sym_expansion;
	v->a[3966] = sym_command_substitution;
	v->a[3967] = actions(97);
	v->a[3968] = 7;
	v->a[3969] = anon_sym_LT;
	v->a[3970] = anon_sym_GT;
	v->a[3971] = anon_sym_GT_GT;
	v->a[3972] = anon_sym_LT_AMP;
	v->a[3973] = anon_sym_GT_AMP;
	v->a[3974] = anon_sym_GT_PIPE;
	v->a[3975] = anon_sym_LT_GT;
	v->a[3976] = state(819);
	v->a[3977] = 12;
	v->a[3978] = sym_redirected_statement;
	v->a[3979] = sym_for_statement;
	small_parse_table_199(v);
}

void	small_parse_table_199(t_small_parse_table_array *v)
{
	v->a[3980] = sym_while_statement;
	v->a[3981] = sym_if_statement;
	v->a[3982] = sym_case_statement;
	v->a[3983] = sym_function_definition;
	v->a[3984] = sym_compound_statement;
	v->a[3985] = sym_subshell;
	v->a[3986] = sym_list;
	v->a[3987] = sym_negated_command;
	v->a[3988] = sym_command;
	v->a[3989] = sym__variable_assignments;
	v->a[3990] = 31;
	v->a[3991] = actions(3);
	v->a[3992] = 1;
	v->a[3993] = sym_comment;
	v->a[3994] = actions(9);
	v->a[3995] = 1;
	v->a[3996] = anon_sym_for;
	v->a[3997] = actions(13);
	v->a[3998] = 1;
	v->a[3999] = anon_sym_if;
	small_parse_table_200(v);
}

/* EOF small_parse_table_39.c */
