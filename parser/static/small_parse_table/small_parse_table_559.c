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
	v->a[55900] = anon_sym_BANG;
	v->a[55901] = actions(1841);
	v->a[55902] = 1;
	v->a[55903] = anon_sym_TILDE;
	v->a[55904] = actions(1843);
	v->a[55905] = 1;
	v->a[55906] = anon_sym_DOLLAR;
	v->a[55907] = actions(1845);
	v->a[55908] = 1;
	v->a[55909] = anon_sym_DQUOTE;
	v->a[55910] = actions(1849);
	v->a[55911] = 1;
	v->a[55912] = anon_sym_DOLLAR_LBRACE;
	v->a[55913] = actions(1851);
	v->a[55914] = 1;
	v->a[55915] = anon_sym_DOLLAR_LPAREN;
	v->a[55916] = actions(1853);
	v->a[55917] = 1;
	v->a[55918] = anon_sym_BQUOTE;
	v->a[55919] = actions(1855);
	small_parse_table_2796(v);
}

void	small_parse_table_2796(t_small_parse_table_array *v)
{
	v->a[55920] = 1;
	v->a[55921] = sym_variable_name;
	v->a[55922] = actions(1905);
	v->a[55923] = 1;
	v->a[55924] = anon_sym_RPAREN_RPAREN;
	v->a[55925] = actions(1837);
	v->a[55926] = 2;
	v->a[55927] = anon_sym_PLUS_PLUS;
	v->a[55928] = anon_sym_DASH_DASH;
	v->a[55929] = actions(1839);
	v->a[55930] = 2;
	v->a[55931] = anon_sym_DASH2;
	v->a[55932] = anon_sym_PLUS2;
	v->a[55933] = actions(1847);
	v->a[55934] = 2;
	v->a[55935] = sym_number;
	v->a[55936] = aux_sym__simple_variable_name_token1;
	v->a[55937] = state(370);
	v->a[55938] = 3;
	v->a[55939] = sym_string;
	small_parse_table_2797(v);
}

void	small_parse_table_2797(t_small_parse_table_array *v)
{
	v->a[55940] = sym_simple_expansion;
	v->a[55941] = sym_expansion;
	v->a[55942] = state(559);
	v->a[55943] = 8;
	v->a[55944] = sym__arithmetic_expression;
	v->a[55945] = sym_arithmetic_literal;
	v->a[55946] = sym_arithmetic_binary_expression;
	v->a[55947] = sym_arithmetic_ternary_expression;
	v->a[55948] = sym_arithmetic_unary_expression;
	v->a[55949] = sym_arithmetic_postfix_expression;
	v->a[55950] = sym_arithmetic_parenthesized_expression;
	v->a[55951] = sym_command_substitution;
	v->a[55952] = 3;
	v->a[55953] = actions(3);
	v->a[55954] = 1;
	v->a[55955] = sym_comment;
	v->a[55956] = actions(1088);
	v->a[55957] = 2;
	v->a[55958] = sym_file_descriptor;
	v->a[55959] = sym__concat;
	small_parse_table_2798(v);
}

void	small_parse_table_2798(t_small_parse_table_array *v)
{
	v->a[55960] = actions(1086);
	v->a[55961] = 25;
	v->a[55962] = anon_sym_PIPE;
	v->a[55963] = anon_sym_AMP_AMP;
	v->a[55964] = anon_sym_PIPE_PIPE;
	v->a[55965] = anon_sym_LT;
	v->a[55966] = anon_sym_GT;
	v->a[55967] = anon_sym_GT_GT;
	v->a[55968] = anon_sym_AMP_GT;
	v->a[55969] = anon_sym_AMP_GT_GT;
	v->a[55970] = anon_sym_LT_AMP;
	v->a[55971] = anon_sym_GT_AMP;
	v->a[55972] = anon_sym_GT_PIPE;
	v->a[55973] = anon_sym_LT_AMP_DASH;
	v->a[55974] = anon_sym_GT_AMP_DASH;
	v->a[55975] = anon_sym_LT_LT;
	v->a[55976] = anon_sym_LT_LT_DASH;
	v->a[55977] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[55978] = aux_sym_concatenation_token1;
	v->a[55979] = anon_sym_DOLLAR;
	small_parse_table_2799(v);
}

void	small_parse_table_2799(t_small_parse_table_array *v)
{
	v->a[55980] = anon_sym_DQUOTE;
	v->a[55981] = sym_raw_string;
	v->a[55982] = sym_number;
	v->a[55983] = anon_sym_DOLLAR_LBRACE;
	v->a[55984] = anon_sym_DOLLAR_LPAREN;
	v->a[55985] = anon_sym_BQUOTE;
	v->a[55986] = sym_word;
	v->a[55987] = 16;
	v->a[55988] = actions(1074);
	v->a[55989] = 1;
	v->a[55990] = sym_comment;
	v->a[55991] = actions(1831);
	v->a[55992] = 1;
	v->a[55993] = anon_sym_LPAREN;
	v->a[55994] = actions(1833);
	v->a[55995] = 1;
	v->a[55996] = anon_sym_BANG;
	v->a[55997] = actions(1841);
	v->a[55998] = 1;
	v->a[55999] = anon_sym_TILDE;
	small_parse_table_2800(v);
}

/* EOF small_parse_table_559.c */
