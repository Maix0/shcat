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
	v->a[3900] = actions(1963);
	v->a[3901] = 1;
	v->a[3902] = sym_test_operator;
	v->a[3903] = actions(1966);
	v->a[3904] = 1;
	v->a[3905] = sym__brace_start;
	v->a[3906] = state(1699);
	v->a[3907] = 1;
	v->a[3908] = aux_sym__literal_repeat1;
	v->a[3909] = state(6769);
	v->a[3910] = 1;
	v->a[3911] = sym_subscript;
	v->a[3912] = actions(1704);
	v->a[3913] = 2;
	v->a[3914] = sym_file_descriptor;
	v->a[3915] = aux_sym_heredoc_redirect_token1;
	v->a[3916] = actions(1921);
	v->a[3917] = 2;
	v->a[3918] = anon_sym_LPAREN_LPAREN;
	v->a[3919] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_196(v);
}

void	small_parse_table_196(t_small_parse_table_array *v)
{
	v->a[3920] = actions(1954);
	v->a[3921] = 2;
	v->a[3922] = anon_sym_LT_LPAREN;
	v->a[3923] = anon_sym_GT_LPAREN;
	v->a[3924] = actions(1918);
	v->a[3925] = 3;
	v->a[3926] = sym_raw_string;
	v->a[3927] = sym_ansi_c_string;
	v->a[3928] = sym_word;
	v->a[3929] = state(565);
	v->a[3930] = 3;
	v->a[3931] = sym_variable_assignment;
	v->a[3932] = sym_concatenation;
	v->a[3933] = aux_sym_declaration_command_repeat1;
	v->a[3934] = state(1171);
	v->a[3935] = 9;
	v->a[3936] = sym_arithmetic_expansion;
	v->a[3937] = sym_brace_expression;
	v->a[3938] = sym_string;
	v->a[3939] = sym_translated_string;
	small_parse_table_197(v);
}

void	small_parse_table_197(t_small_parse_table_array *v)
{
	v->a[3940] = sym_number;
	v->a[3941] = sym_simple_expansion;
	v->a[3942] = sym_expansion;
	v->a[3943] = sym_command_substitution;
	v->a[3944] = sym_process_substitution;
	v->a[3945] = actions(1702);
	v->a[3946] = 21;
	v->a[3947] = anon_sym_SEMI;
	v->a[3948] = anon_sym_PIPE_PIPE;
	v->a[3949] = anon_sym_AMP_AMP;
	v->a[3950] = anon_sym_PIPE;
	v->a[3951] = anon_sym_AMP;
	v->a[3952] = anon_sym_LT;
	v->a[3953] = anon_sym_GT;
	v->a[3954] = anon_sym_LT_LT;
	v->a[3955] = anon_sym_GT_GT;
	v->a[3956] = anon_sym_SEMI_SEMI;
	v->a[3957] = anon_sym_SEMI_AMP;
	v->a[3958] = anon_sym_SEMI_SEMI_AMP;
	v->a[3959] = anon_sym_PIPE_AMP;
	small_parse_table_198(v);
}

void	small_parse_table_198(t_small_parse_table_array *v)
{
	v->a[3960] = anon_sym_AMP_GT;
	v->a[3961] = anon_sym_AMP_GT_GT;
	v->a[3962] = anon_sym_LT_AMP;
	v->a[3963] = anon_sym_GT_AMP;
	v->a[3964] = anon_sym_GT_PIPE;
	v->a[3965] = anon_sym_LT_AMP_DASH;
	v->a[3966] = anon_sym_GT_AMP_DASH;
	v->a[3967] = anon_sym_LT_LT_DASH;
	v->a[3968] = 26;
	v->a[3969] = actions(3);
	v->a[3970] = 1;
	v->a[3971] = sym_comment;
	v->a[3972] = actions(1547);
	v->a[3973] = 1;
	v->a[3974] = anon_sym_LT_LT_LT;
	v->a[3975] = actions(1549);
	v->a[3976] = 1;
	v->a[3977] = anon_sym_DOLLAR_LBRACK;
	v->a[3978] = actions(1551);
	v->a[3979] = 1;
	small_parse_table_199(v);
}

void	small_parse_table_199(t_small_parse_table_array *v)
{
	v->a[3980] = anon_sym_DOLLAR;
	v->a[3981] = actions(1553);
	v->a[3982] = 1;
	v->a[3983] = sym__special_character;
	v->a[3984] = actions(1555);
	v->a[3985] = 1;
	v->a[3986] = anon_sym_DQUOTE;
	v->a[3987] = actions(1557);
	v->a[3988] = 1;
	v->a[3989] = aux_sym_number_token1;
	v->a[3990] = actions(1559);
	v->a[3991] = 1;
	v->a[3992] = aux_sym_number_token2;
	v->a[3993] = actions(1561);
	v->a[3994] = 1;
	v->a[3995] = anon_sym_DOLLAR_LBRACE;
	v->a[3996] = actions(1563);
	v->a[3997] = 1;
	v->a[3998] = anon_sym_DOLLAR_LPAREN;
	v->a[3999] = actions(1565);
	small_parse_table_200(v);
}

/* EOF small_parse_table_39.c */
