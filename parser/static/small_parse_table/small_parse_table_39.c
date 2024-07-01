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
	v->a[3900] = 2;
	v->a[3901] = anon_sym_while;
	v->a[3902] = anon_sym_until;
	v->a[3903] = actions(174);
	v->a[3904] = 2;
	v->a[3905] = anon_sym_LT_AMP_DASH;
	v->a[3906] = anon_sym_GT_AMP_DASH;
	v->a[3907] = actions(182);
	v->a[3908] = 2;
	v->a[3909] = sym_raw_string;
	v->a[3910] = sym_number;
	v->a[3911] = state(385);
	v->a[3912] = 5;
	v->a[3913] = sym_arithmetic_expansion;
	v->a[3914] = sym_string;
	v->a[3915] = sym_simple_expansion;
	v->a[3916] = sym_expansion;
	v->a[3917] = sym_command_substitution;
	v->a[3918] = actions(172);
	v->a[3919] = 6;
	small_parse_table_196(v);
}

void	small_parse_table_196(t_small_parse_table_array *v)
{
	v->a[3920] = anon_sym_LT;
	v->a[3921] = anon_sym_GT;
	v->a[3922] = anon_sym_GT_GT;
	v->a[3923] = anon_sym_LT_AMP;
	v->a[3924] = anon_sym_GT_AMP;
	v->a[3925] = anon_sym_GT_PIPE;
	v->a[3926] = state(1075);
	v->a[3927] = 12;
	v->a[3928] = sym_redirected_statement;
	v->a[3929] = sym_for_statement;
	v->a[3930] = sym_while_statement;
	v->a[3931] = sym_if_statement;
	v->a[3932] = sym_case_statement;
	v->a[3933] = sym_function_definition;
	v->a[3934] = sym_compound_statement;
	v->a[3935] = sym_subshell;
	v->a[3936] = sym_list;
	v->a[3937] = sym_negated_command;
	v->a[3938] = sym_command;
	v->a[3939] = sym__variable_assignments;
	small_parse_table_197(v);
}

void	small_parse_table_197(t_small_parse_table_array *v)
{
	v->a[3940] = 34;
	v->a[3941] = actions(3);
	v->a[3942] = 1;
	v->a[3943] = sym_comment;
	v->a[3944] = actions(156);
	v->a[3945] = 1;
	v->a[3946] = sym_word;
	v->a[3947] = actions(158);
	v->a[3948] = 1;
	v->a[3949] = anon_sym_for;
	v->a[3950] = actions(162);
	v->a[3951] = 1;
	v->a[3952] = anon_sym_if;
	v->a[3953] = actions(164);
	v->a[3954] = 1;
	v->a[3955] = anon_sym_case;
	v->a[3956] = actions(166);
	v->a[3957] = 1;
	v->a[3958] = anon_sym_LPAREN;
	v->a[3959] = actions(168);
	small_parse_table_198(v);
}

void	small_parse_table_198(t_small_parse_table_array *v)
{
	v->a[3960] = 1;
	v->a[3961] = anon_sym_LBRACE;
	v->a[3962] = actions(170);
	v->a[3963] = 1;
	v->a[3964] = anon_sym_BANG;
	v->a[3965] = actions(176);
	v->a[3966] = 1;
	v->a[3967] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3968] = actions(178);
	v->a[3969] = 1;
	v->a[3970] = anon_sym_DOLLAR;
	v->a[3971] = actions(180);
	v->a[3972] = 1;
	v->a[3973] = anon_sym_DQUOTE;
	v->a[3974] = actions(184);
	v->a[3975] = 1;
	v->a[3976] = anon_sym_DOLLAR_LBRACE;
	v->a[3977] = actions(186);
	v->a[3978] = 1;
	v->a[3979] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_199(v);
}

void	small_parse_table_199(t_small_parse_table_array *v)
{
	v->a[3980] = actions(188);
	v->a[3981] = 1;
	v->a[3982] = anon_sym_BQUOTE;
	v->a[3983] = actions(190);
	v->a[3984] = 1;
	v->a[3985] = sym_file_descriptor;
	v->a[3986] = actions(192);
	v->a[3987] = 1;
	v->a[3988] = sym_variable_name;
	v->a[3989] = actions(210);
	v->a[3990] = 1;
	v->a[3991] = anon_sym_LF;
	v->a[3992] = state(32);
	v->a[3993] = 1;
	v->a[3994] = aux_sym__case_item_last_repeat2;
	v->a[3995] = state(140);
	v->a[3996] = 1;
	v->a[3997] = aux_sym__statements_repeat1;
	v->a[3998] = state(186);
	v->a[3999] = 1;
	small_parse_table_200(v);
}

/* EOF small_parse_table_39.c */
