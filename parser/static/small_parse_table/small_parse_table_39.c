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
	v->a[3900] = sym_brace_expression;
	v->a[3901] = sym_string;
	v->a[3902] = sym_number;
	v->a[3903] = sym_simple_expansion;
	v->a[3904] = sym_expansion;
	v->a[3905] = sym_command_substitution;
	v->a[3906] = actions(1388);
	v->a[3907] = 34;
	v->a[3908] = anon_sym_esac;
	v->a[3909] = anon_sym_PIPE;
	v->a[3910] = anon_sym_SEMI_SEMI;
	v->a[3911] = anon_sym_SEMI_AMP;
	v->a[3912] = anon_sym_SEMI_SEMI_AMP;
	v->a[3913] = anon_sym_PIPE_AMP;
	v->a[3914] = anon_sym_AMP_AMP;
	v->a[3915] = anon_sym_PIPE_PIPE;
	v->a[3916] = anon_sym_LT;
	v->a[3917] = anon_sym_GT;
	v->a[3918] = anon_sym_GT_GT;
	v->a[3919] = anon_sym_AMP_GT;
	small_parse_table_196(v);
}

void	small_parse_table_196(t_small_parse_table_array *v)
{
	v->a[3920] = anon_sym_AMP_GT_GT;
	v->a[3921] = anon_sym_LT_AMP;
	v->a[3922] = anon_sym_GT_AMP;
	v->a[3923] = anon_sym_GT_PIPE;
	v->a[3924] = anon_sym_LT_AMP_DASH;
	v->a[3925] = anon_sym_GT_AMP_DASH;
	v->a[3926] = anon_sym_LT_LT;
	v->a[3927] = anon_sym_LT_LT_DASH;
	v->a[3928] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3929] = anon_sym_AMP;
	v->a[3930] = anon_sym_DOLLAR;
	v->a[3931] = sym__special_character;
	v->a[3932] = anon_sym_DQUOTE;
	v->a[3933] = sym_raw_string;
	v->a[3934] = aux_sym_number_token1;
	v->a[3935] = aux_sym_number_token2;
	v->a[3936] = anon_sym_DOLLAR_LBRACE;
	v->a[3937] = anon_sym_DOLLAR_LPAREN;
	v->a[3938] = anon_sym_BQUOTE;
	v->a[3939] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_197(v);
}

void	small_parse_table_197(t_small_parse_table_array *v)
{
	v->a[3940] = sym_word;
	v->a[3941] = anon_sym_SEMI;
	v->a[3942] = 6;
	v->a[3943] = actions(3);
	v->a[3944] = 1;
	v->a[3945] = sym_comment;
	v->a[3946] = actions(1178);
	v->a[3947] = 1;
	v->a[3948] = sym_variable_name;
	v->a[3949] = actions(1176);
	v->a[3950] = 2;
	v->a[3951] = aux_sym__simple_variable_name_token1;
	v->a[3952] = aux_sym__multiline_variable_name_token1;
	v->a[3953] = actions(816);
	v->a[3954] = 4;
	v->a[3955] = sym_file_descriptor;
	v->a[3956] = sym_test_operator;
	v->a[3957] = sym__bare_dollar;
	v->a[3958] = sym__brace_start;
	v->a[3959] = actions(1174);
	small_parse_table_198(v);
}

void	small_parse_table_198(t_small_parse_table_array *v)
{
	v->a[3960] = 9;
	v->a[3961] = anon_sym_BANG;
	v->a[3962] = anon_sym_DASH;
	v->a[3963] = anon_sym_STAR;
	v->a[3964] = anon_sym_QMARK;
	v->a[3965] = anon_sym_DOLLAR;
	v->a[3966] = anon_sym_POUND;
	v->a[3967] = anon_sym_AT;
	v->a[3968] = anon_sym_0;
	v->a[3969] = anon_sym__;
	v->a[3970] = actions(810);
	v->a[3971] = 32;
	v->a[3972] = anon_sym_LPAREN;
	v->a[3973] = anon_sym_PIPE;
	v->a[3974] = anon_sym_SEMI_SEMI;
	v->a[3975] = anon_sym_PIPE_AMP;
	v->a[3976] = anon_sym_AMP_AMP;
	v->a[3977] = anon_sym_PIPE_PIPE;
	v->a[3978] = anon_sym_LT;
	v->a[3979] = anon_sym_GT;
	small_parse_table_199(v);
}

void	small_parse_table_199(t_small_parse_table_array *v)
{
	v->a[3980] = anon_sym_GT_GT;
	v->a[3981] = anon_sym_AMP_GT;
	v->a[3982] = anon_sym_AMP_GT_GT;
	v->a[3983] = anon_sym_LT_AMP;
	v->a[3984] = anon_sym_GT_AMP;
	v->a[3985] = anon_sym_GT_PIPE;
	v->a[3986] = anon_sym_LT_AMP_DASH;
	v->a[3987] = anon_sym_GT_AMP_DASH;
	v->a[3988] = anon_sym_LT_LT;
	v->a[3989] = anon_sym_LT_LT_DASH;
	v->a[3990] = aux_sym_heredoc_redirect_token1;
	v->a[3991] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[3992] = anon_sym_AMP;
	v->a[3993] = sym__special_character;
	v->a[3994] = anon_sym_DQUOTE;
	v->a[3995] = sym_raw_string;
	v->a[3996] = aux_sym_number_token1;
	v->a[3997] = aux_sym_number_token2;
	v->a[3998] = anon_sym_DOLLAR_LBRACE;
	v->a[3999] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_200(v);
}

/* EOF small_parse_table_39.c */
