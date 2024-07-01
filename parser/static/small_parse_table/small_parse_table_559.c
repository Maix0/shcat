/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_559.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2795(t_small_parse_table_array *v)
{
	v->a[55900] = actions(1756);
	v->a[55901] = 1;
	v->a[55902] = anon_sym_DOLLAR;
	v->a[55903] = actions(1758);
	v->a[55904] = 1;
	v->a[55905] = anon_sym_DQUOTE;
	v->a[55906] = actions(1762);
	v->a[55907] = 1;
	v->a[55908] = anon_sym_DOLLAR_LBRACE;
	v->a[55909] = actions(1764);
	v->a[55910] = 1;
	v->a[55911] = anon_sym_DOLLAR_LPAREN;
	v->a[55912] = actions(1766);
	v->a[55913] = 1;
	v->a[55914] = anon_sym_BQUOTE;
	v->a[55915] = actions(1768);
	v->a[55916] = 1;
	v->a[55917] = sym_variable_name;
	v->a[55918] = actions(1750);
	v->a[55919] = 2;
	small_parse_table_2796(v);
}

void	small_parse_table_2796(t_small_parse_table_array *v)
{
	v->a[55920] = anon_sym_PLUS_PLUS;
	v->a[55921] = anon_sym_DASH_DASH;
	v->a[55922] = actions(1752);
	v->a[55923] = 2;
	v->a[55924] = anon_sym_DASH2;
	v->a[55925] = anon_sym_PLUS2;
	v->a[55926] = actions(1760);
	v->a[55927] = 2;
	v->a[55928] = sym_number;
	v->a[55929] = aux_sym__simple_variable_name_token1;
	v->a[55930] = state(271);
	v->a[55931] = 3;
	v->a[55932] = sym_string;
	v->a[55933] = sym_simple_expansion;
	v->a[55934] = sym_expansion;
	v->a[55935] = state(245);
	v->a[55936] = 8;
	v->a[55937] = sym__arithmetic_expression;
	v->a[55938] = sym_arithmetic_literal;
	v->a[55939] = sym_arithmetic_binary_expression;
	small_parse_table_2797(v);
}

void	small_parse_table_2797(t_small_parse_table_array *v)
{
	v->a[55940] = sym_arithmetic_ternary_expression;
	v->a[55941] = sym_arithmetic_unary_expression;
	v->a[55942] = sym_arithmetic_postfix_expression;
	v->a[55943] = sym_arithmetic_parenthesized_expression;
	v->a[55944] = sym_command_substitution;
	v->a[55945] = 3;
	v->a[55946] = actions(3);
	v->a[55947] = 1;
	v->a[55948] = sym_comment;
	v->a[55949] = actions(1005);
	v->a[55950] = 3;
	v->a[55951] = sym_file_descriptor;
	v->a[55952] = sym__concat;
	v->a[55953] = sym_variable_name;
	v->a[55954] = actions(1003);
	v->a[55955] = 23;
	v->a[55956] = anon_sym_PIPE;
	v->a[55957] = anon_sym_AMP_AMP;
	v->a[55958] = anon_sym_PIPE_PIPE;
	v->a[55959] = anon_sym_LT;
	small_parse_table_2798(v);
}

void	small_parse_table_2798(t_small_parse_table_array *v)
{
	v->a[55960] = anon_sym_GT;
	v->a[55961] = anon_sym_GT_GT;
	v->a[55962] = anon_sym_LT_AMP;
	v->a[55963] = anon_sym_GT_AMP;
	v->a[55964] = anon_sym_GT_PIPE;
	v->a[55965] = anon_sym_LT_AMP_DASH;
	v->a[55966] = anon_sym_GT_AMP_DASH;
	v->a[55967] = anon_sym_LT_LT;
	v->a[55968] = anon_sym_LT_LT_DASH;
	v->a[55969] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[55970] = aux_sym_concatenation_token1;
	v->a[55971] = anon_sym_DOLLAR;
	v->a[55972] = anon_sym_DQUOTE;
	v->a[55973] = sym_raw_string;
	v->a[55974] = sym_number;
	v->a[55975] = anon_sym_DOLLAR_LBRACE;
	v->a[55976] = anon_sym_DOLLAR_LPAREN;
	v->a[55977] = anon_sym_BQUOTE;
	v->a[55978] = sym_word;
	v->a[55979] = 3;
	small_parse_table_2799(v);
}

void	small_parse_table_2799(t_small_parse_table_array *v)
{
	v->a[55980] = actions(3);
	v->a[55981] = 1;
	v->a[55982] = sym_comment;
	v->a[55983] = actions(1009);
	v->a[55984] = 3;
	v->a[55985] = sym_file_descriptor;
	v->a[55986] = sym__concat;
	v->a[55987] = sym_variable_name;
	v->a[55988] = actions(1007);
	v->a[55989] = 23;
	v->a[55990] = anon_sym_PIPE;
	v->a[55991] = anon_sym_AMP_AMP;
	v->a[55992] = anon_sym_PIPE_PIPE;
	v->a[55993] = anon_sym_LT;
	v->a[55994] = anon_sym_GT;
	v->a[55995] = anon_sym_GT_GT;
	v->a[55996] = anon_sym_LT_AMP;
	v->a[55997] = anon_sym_GT_AMP;
	v->a[55998] = anon_sym_GT_PIPE;
	v->a[55999] = anon_sym_LT_AMP_DASH;
	small_parse_table_2800(v);
}

/* EOF small_parse_table_559.c */
