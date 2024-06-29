/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_599.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2995(t_small_parse_table_array *v)
{
	v->a[59900] = anon_sym_LT;
	v->a[59901] = anon_sym_GT;
	v->a[59902] = anon_sym_GT_GT;
	v->a[59903] = anon_sym_AMP_GT;
	v->a[59904] = anon_sym_AMP_GT_GT;
	v->a[59905] = anon_sym_LT_AMP;
	v->a[59906] = anon_sym_GT_AMP;
	v->a[59907] = anon_sym_GT_PIPE;
	v->a[59908] = anon_sym_LT_AMP_DASH;
	v->a[59909] = anon_sym_GT_AMP_DASH;
	v->a[59910] = aux_sym_heredoc_redirect_token1;
	v->a[59911] = 15;
	v->a[59912] = actions(1074);
	v->a[59913] = 1;
	v->a[59914] = sym_comment;
	v->a[59915] = actions(1951);
	v->a[59916] = 1;
	v->a[59917] = anon_sym_LPAREN;
	v->a[59918] = actions(1953);
	v->a[59919] = 1;
	small_parse_table_2996(v);
}

void	small_parse_table_2996(t_small_parse_table_array *v)
{
	v->a[59920] = anon_sym_BANG;
	v->a[59921] = actions(1959);
	v->a[59922] = 1;
	v->a[59923] = anon_sym_TILDE;
	v->a[59924] = actions(1961);
	v->a[59925] = 1;
	v->a[59926] = anon_sym_DOLLAR;
	v->a[59927] = actions(1963);
	v->a[59928] = 1;
	v->a[59929] = anon_sym_DQUOTE;
	v->a[59930] = actions(1967);
	v->a[59931] = 1;
	v->a[59932] = anon_sym_DOLLAR_LBRACE;
	v->a[59933] = actions(1969);
	v->a[59934] = 1;
	v->a[59935] = anon_sym_DOLLAR_LPAREN;
	v->a[59936] = actions(1971);
	v->a[59937] = 1;
	v->a[59938] = anon_sym_BQUOTE;
	v->a[59939] = actions(1973);
	small_parse_table_2997(v);
}

void	small_parse_table_2997(t_small_parse_table_array *v)
{
	v->a[59940] = 1;
	v->a[59941] = sym_variable_name;
	v->a[59942] = actions(1955);
	v->a[59943] = 2;
	v->a[59944] = anon_sym_PLUS_PLUS;
	v->a[59945] = anon_sym_DASH_DASH;
	v->a[59946] = actions(1957);
	v->a[59947] = 2;
	v->a[59948] = anon_sym_DASH2;
	v->a[59949] = anon_sym_PLUS2;
	v->a[59950] = actions(1965);
	v->a[59951] = 2;
	v->a[59952] = sym_number;
	v->a[59953] = aux_sym__simple_variable_name_token1;
	v->a[59954] = state(462);
	v->a[59955] = 3;
	v->a[59956] = sym_string;
	v->a[59957] = sym_simple_expansion;
	v->a[59958] = sym_expansion;
	v->a[59959] = state(511);
	small_parse_table_2998(v);
}

void	small_parse_table_2998(t_small_parse_table_array *v)
{
	v->a[59960] = 8;
	v->a[59961] = sym__arithmetic_expression;
	v->a[59962] = sym_arithmetic_literal;
	v->a[59963] = sym_arithmetic_binary_expression;
	v->a[59964] = sym_arithmetic_ternary_expression;
	v->a[59965] = sym_arithmetic_unary_expression;
	v->a[59966] = sym_arithmetic_postfix_expression;
	v->a[59967] = sym_arithmetic_parenthesized_expression;
	v->a[59968] = sym_command_substitution;
	v->a[59969] = 3;
	v->a[59970] = actions(3);
	v->a[59971] = 1;
	v->a[59972] = sym_comment;
	v->a[59973] = actions(548);
	v->a[59974] = 2;
	v->a[59975] = sym_file_descriptor;
	v->a[59976] = sym_variable_name;
	v->a[59977] = actions(546);
	v->a[59978] = 24;
	v->a[59979] = anon_sym_PIPE;
	small_parse_table_2999(v);
}

void	small_parse_table_2999(t_small_parse_table_array *v)
{
	v->a[59980] = anon_sym_AMP_AMP;
	v->a[59981] = anon_sym_PIPE_PIPE;
	v->a[59982] = anon_sym_LT;
	v->a[59983] = anon_sym_GT;
	v->a[59984] = anon_sym_GT_GT;
	v->a[59985] = anon_sym_AMP_GT;
	v->a[59986] = anon_sym_AMP_GT_GT;
	v->a[59987] = anon_sym_LT_AMP;
	v->a[59988] = anon_sym_GT_AMP;
	v->a[59989] = anon_sym_GT_PIPE;
	v->a[59990] = anon_sym_LT_AMP_DASH;
	v->a[59991] = anon_sym_GT_AMP_DASH;
	v->a[59992] = anon_sym_LT_LT;
	v->a[59993] = anon_sym_LT_LT_DASH;
	v->a[59994] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[59995] = anon_sym_DOLLAR;
	v->a[59996] = anon_sym_DQUOTE;
	v->a[59997] = sym_raw_string;
	v->a[59998] = sym_number;
	v->a[59999] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3000(v);
}

/* EOF small_parse_table_599.c */
