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
	v->a[3901] = anon_sym_BANG;
	v->a[3902] = actions(109);
	v->a[3903] = 1;
	v->a[3904] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3905] = actions(111);
	v->a[3906] = 1;
	v->a[3907] = anon_sym_DOLLAR;
	v->a[3908] = actions(113);
	v->a[3909] = 1;
	v->a[3910] = anon_sym_DQUOTE;
	v->a[3911] = actions(117);
	v->a[3912] = 1;
	v->a[3913] = anon_sym_DOLLAR_LBRACE;
	v->a[3914] = actions(119);
	v->a[3915] = 1;
	v->a[3916] = anon_sym_DOLLAR_LPAREN;
	v->a[3917] = actions(121);
	v->a[3918] = 1;
	v->a[3919] = anon_sym_BQUOTE;
	small_parse_table_196(v);
}

void	small_parse_table_196(t_small_parse_table_array *v)
{
	v->a[3920] = actions(123);
	v->a[3921] = 1;
	v->a[3922] = sym_file_descriptor;
	v->a[3923] = actions(125);
	v->a[3924] = 1;
	v->a[3925] = sym_variable_name;
	v->a[3926] = state(129);
	v->a[3927] = 1;
	v->a[3928] = aux_sym__statements_repeat1;
	v->a[3929] = state(182);
	v->a[3930] = 1;
	v->a[3931] = sym_command_name;
	v->a[3932] = state(271);
	v->a[3933] = 1;
	v->a[3934] = sym_variable_assignment;
	v->a[3935] = state(621);
	v->a[3936] = 1;
	v->a[3937] = sym_concatenation;
	v->a[3938] = state(692);
	v->a[3939] = 1;
	small_parse_table_197(v);
}

void	small_parse_table_197(t_small_parse_table_array *v)
{
	v->a[3940] = sym_file_redirect;
	v->a[3941] = state(767);
	v->a[3942] = 1;
	v->a[3943] = aux_sym__case_item_last_repeat2;
	v->a[3944] = state(810);
	v->a[3945] = 1;
	v->a[3946] = aux_sym_command_repeat1;
	v->a[3947] = state(1321);
	v->a[3948] = 1;
	v->a[3949] = sym_pipeline;
	v->a[3950] = state(1432);
	v->a[3951] = 1;
	v->a[3952] = aux_sym_redirected_statement_repeat2;
	v->a[3953] = state(2254);
	v->a[3954] = 1;
	v->a[3955] = sym__statement_not_pipeline;
	v->a[3956] = state(2265);
	v->a[3957] = 1;
	v->a[3958] = sym__statements;
	v->a[3959] = actions(93);
	small_parse_table_198(v);
}

void	small_parse_table_198(t_small_parse_table_array *v)
{
	v->a[3960] = 2;
	v->a[3961] = anon_sym_while;
	v->a[3962] = anon_sym_until;
	v->a[3963] = actions(107);
	v->a[3964] = 2;
	v->a[3965] = anon_sym_LT_AMP_DASH;
	v->a[3966] = anon_sym_GT_AMP_DASH;
	v->a[3967] = actions(115);
	v->a[3968] = 2;
	v->a[3969] = sym_raw_string;
	v->a[3970] = sym_number;
	v->a[3971] = state(282);
	v->a[3972] = 5;
	v->a[3973] = sym_arithmetic_expansion;
	v->a[3974] = sym_string;
	v->a[3975] = sym_simple_expansion;
	v->a[3976] = sym_expansion;
	v->a[3977] = sym_command_substitution;
	v->a[3978] = actions(105);
	v->a[3979] = 8;
	small_parse_table_199(v);
}

void	small_parse_table_199(t_small_parse_table_array *v)
{
	v->a[3980] = anon_sym_LT;
	v->a[3981] = anon_sym_GT;
	v->a[3982] = anon_sym_GT_GT;
	v->a[3983] = anon_sym_AMP_GT;
	v->a[3984] = anon_sym_AMP_GT_GT;
	v->a[3985] = anon_sym_LT_AMP;
	v->a[3986] = anon_sym_GT_AMP;
	v->a[3987] = anon_sym_GT_PIPE;
	v->a[3988] = state(1296);
	v->a[3989] = 12;
	v->a[3990] = sym_redirected_statement;
	v->a[3991] = sym_for_statement;
	v->a[3992] = sym_while_statement;
	v->a[3993] = sym_if_statement;
	v->a[3994] = sym_case_statement;
	v->a[3995] = sym_function_definition;
	v->a[3996] = sym_compound_statement;
	v->a[3997] = sym_subshell;
	v->a[3998] = sym_list;
	v->a[3999] = sym_negated_command;
	small_parse_table_200(v);
}

/* EOF small_parse_table_39.c */
