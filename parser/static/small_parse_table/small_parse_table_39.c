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
	v->a[3900] = anon_sym_GT_AMP;
	v->a[3901] = anon_sym_GT_PIPE;
	v->a[3902] = state(1048);
	v->a[3903] = 12;
	v->a[3904] = sym_redirected_statement;
	v->a[3905] = sym_for_statement;
	v->a[3906] = sym_while_statement;
	v->a[3907] = sym_if_statement;
	v->a[3908] = sym_case_statement;
	v->a[3909] = sym_function_definition;
	v->a[3910] = sym_compound_statement;
	v->a[3911] = sym_subshell;
	v->a[3912] = sym_list;
	v->a[3913] = sym_negated_command;
	v->a[3914] = sym_command;
	v->a[3915] = sym_variable_assignments;
	v->a[3916] = 36;
	v->a[3917] = actions(3);
	v->a[3918] = 1;
	v->a[3919] = sym_comment;
	small_parse_table_196(v);
}

void	small_parse_table_196(t_small_parse_table_array *v)
{
	v->a[3920] = actions(95);
	v->a[3921] = 1;
	v->a[3922] = sym_word;
	v->a[3923] = actions(97);
	v->a[3924] = 1;
	v->a[3925] = anon_sym_for;
	v->a[3926] = actions(101);
	v->a[3927] = 1;
	v->a[3928] = anon_sym_if;
	v->a[3929] = actions(103);
	v->a[3930] = 1;
	v->a[3931] = anon_sym_case;
	v->a[3932] = actions(105);
	v->a[3933] = 1;
	v->a[3934] = anon_sym_LPAREN;
	v->a[3935] = actions(109);
	v->a[3936] = 1;
	v->a[3937] = anon_sym_LBRACE;
	v->a[3938] = actions(111);
	v->a[3939] = 1;
	small_parse_table_197(v);
}

void	small_parse_table_197(t_small_parse_table_array *v)
{
	v->a[3940] = anon_sym_BANG;
	v->a[3941] = actions(117);
	v->a[3942] = 1;
	v->a[3943] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3944] = actions(119);
	v->a[3945] = 1;
	v->a[3946] = anon_sym_DOLLAR;
	v->a[3947] = actions(121);
	v->a[3948] = 1;
	v->a[3949] = anon_sym_DQUOTE;
	v->a[3950] = actions(123);
	v->a[3951] = 1;
	v->a[3952] = sym_raw_string;
	v->a[3953] = actions(125);
	v->a[3954] = 1;
	v->a[3955] = aux_sym_number_token1;
	v->a[3956] = actions(127);
	v->a[3957] = 1;
	v->a[3958] = aux_sym_number_token2;
	v->a[3959] = actions(129);
	small_parse_table_198(v);
}

void	small_parse_table_198(t_small_parse_table_array *v)
{
	v->a[3960] = 1;
	v->a[3961] = anon_sym_DOLLAR_LBRACE;
	v->a[3962] = actions(131);
	v->a[3963] = 1;
	v->a[3964] = anon_sym_DOLLAR_LPAREN;
	v->a[3965] = actions(133);
	v->a[3966] = 1;
	v->a[3967] = anon_sym_BQUOTE;
	v->a[3968] = actions(135);
	v->a[3969] = 1;
	v->a[3970] = sym_file_descriptor;
	v->a[3971] = actions(137);
	v->a[3972] = 1;
	v->a[3973] = sym_variable_name;
	v->a[3974] = actions(226);
	v->a[3975] = 1;
	v->a[3976] = anon_sym_LF;
	v->a[3977] = state(25);
	v->a[3978] = 1;
	v->a[3979] = aux_sym__case_item_last_repeat2;
	small_parse_table_199(v);
}

void	small_parse_table_199(t_small_parse_table_array *v)
{
	v->a[3980] = state(139);
	v->a[3981] = 1;
	v->a[3982] = aux_sym__statements_repeat1;
	v->a[3983] = state(173);
	v->a[3984] = 1;
	v->a[3985] = sym_command_name;
	v->a[3986] = state(269);
	v->a[3987] = 1;
	v->a[3988] = sym_variable_assignment;
	v->a[3989] = state(663);
	v->a[3990] = 1;
	v->a[3991] = aux_sym_command_repeat1;
	v->a[3992] = state(665);
	v->a[3993] = 1;
	v->a[3994] = sym_concatenation;
	v->a[3995] = state(749);
	v->a[3996] = 1;
	v->a[3997] = sym_file_redirect;
	v->a[3998] = state(1145);
	v->a[3999] = 1;
	small_parse_table_200(v);
}

/* EOF small_parse_table_39.c */
