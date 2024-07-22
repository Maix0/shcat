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
	v->a[3900] = sym_command_name;
	v->a[3901] = state(263);
	v->a[3902] = 1;
	v->a[3903] = sym_variable_assignment;
	v->a[3904] = state(584);
	v->a[3905] = 1;
	v->a[3906] = aux_sym__case_item_last_repeat2;
	v->a[3907] = state(597);
	v->a[3908] = 1;
	v->a[3909] = aux_sym_command_repeat1;
	v->a[3910] = state(598);
	v->a[3911] = 1;
	v->a[3912] = sym_concatenation;
	v->a[3913] = state(714);
	v->a[3914] = 1;
	v->a[3915] = sym_file_redirect;
	v->a[3916] = state(1063);
	v->a[3917] = 1;
	v->a[3918] = sym_pipeline;
	v->a[3919] = state(1123);
	small_parse_table_196(v);
}

void	small_parse_table_196(t_small_parse_table_array *v)
{
	v->a[3920] = 1;
	v->a[3921] = aux_sym_redirected_statement_repeat2;
	v->a[3922] = state(1903);
	v->a[3923] = 1;
	v->a[3924] = sym__statement_not_pipeline;
	v->a[3925] = state(1904);
	v->a[3926] = 1;
	v->a[3927] = sym__statements;
	v->a[3928] = actions(91);
	v->a[3929] = 2;
	v->a[3930] = anon_sym_while;
	v->a[3931] = anon_sym_until;
	v->a[3932] = actions(113);
	v->a[3933] = 2;
	v->a[3934] = sym_raw_string;
	v->a[3935] = sym_number;
	v->a[3936] = state(378);
	v->a[3937] = 5;
	v->a[3938] = sym_arithmetic_expansion;
	v->a[3939] = sym_string;
	small_parse_table_197(v);
}

void	small_parse_table_197(t_small_parse_table_array *v)
{
	v->a[3940] = sym_simple_expansion;
	v->a[3941] = sym_expansion;
	v->a[3942] = sym_command_substitution;
	v->a[3943] = actions(105);
	v->a[3944] = 7;
	v->a[3945] = anon_sym_LT;
	v->a[3946] = anon_sym_GT;
	v->a[3947] = anon_sym_GT_GT;
	v->a[3948] = anon_sym_LT_AMP;
	v->a[3949] = anon_sym_GT_AMP;
	v->a[3950] = anon_sym_GT_PIPE;
	v->a[3951] = anon_sym_LT_GT;
	v->a[3952] = state(987);
	v->a[3953] = 12;
	v->a[3954] = sym_redirected_statement;
	v->a[3955] = sym_for_statement;
	v->a[3956] = sym_while_statement;
	v->a[3957] = sym_if_statement;
	v->a[3958] = sym_case_statement;
	v->a[3959] = sym_function_definition;
	small_parse_table_198(v);
}

void	small_parse_table_198(t_small_parse_table_array *v)
{
	v->a[3960] = sym_compound_statement;
	v->a[3961] = sym_subshell;
	v->a[3962] = sym_list;
	v->a[3963] = sym_negated_command;
	v->a[3964] = sym_command;
	v->a[3965] = sym__variable_assignments;
	v->a[3966] = 33;
	v->a[3967] = actions(3);
	v->a[3968] = 1;
	v->a[3969] = sym_comment;
	v->a[3970] = actions(9);
	v->a[3971] = 1;
	v->a[3972] = anon_sym_for;
	v->a[3973] = actions(13);
	v->a[3974] = 1;
	v->a[3975] = anon_sym_if;
	v->a[3976] = actions(15);
	v->a[3977] = 1;
	v->a[3978] = anon_sym_case;
	v->a[3979] = actions(17);
	small_parse_table_199(v);
}

void	small_parse_table_199(t_small_parse_table_array *v)
{
	v->a[3980] = 1;
	v->a[3981] = anon_sym_LPAREN;
	v->a[3982] = actions(19);
	v->a[3983] = 1;
	v->a[3984] = anon_sym_LBRACE;
	v->a[3985] = actions(43);
	v->a[3986] = 1;
	v->a[3987] = sym_word;
	v->a[3988] = actions(51);
	v->a[3989] = 1;
	v->a[3990] = anon_sym_BANG;
	v->a[3991] = actions(55);
	v->a[3992] = 1;
	v->a[3993] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3994] = actions(57);
	v->a[3995] = 1;
	v->a[3996] = anon_sym_DOLLAR;
	v->a[3997] = actions(59);
	v->a[3998] = 1;
	v->a[3999] = anon_sym_DQUOTE;
	small_parse_table_200(v);
}

/* EOF small_parse_table_39.c */
