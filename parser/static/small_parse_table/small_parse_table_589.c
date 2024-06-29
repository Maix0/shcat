/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_589.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2945(t_small_parse_table_array *v)
{
	v->a[58900] = actions(1116);
	v->a[58901] = 21;
	v->a[58902] = anon_sym_PIPE;
	v->a[58903] = anon_sym_RPAREN;
	v->a[58904] = anon_sym_SEMI_SEMI;
	v->a[58905] = anon_sym_AMP_AMP;
	v->a[58906] = anon_sym_PIPE_PIPE;
	v->a[58907] = anon_sym_LT;
	v->a[58908] = anon_sym_GT;
	v->a[58909] = anon_sym_GT_GT;
	v->a[58910] = anon_sym_AMP_GT;
	v->a[58911] = anon_sym_AMP_GT_GT;
	v->a[58912] = anon_sym_LT_AMP;
	v->a[58913] = anon_sym_GT_AMP;
	v->a[58914] = anon_sym_GT_PIPE;
	v->a[58915] = anon_sym_LT_AMP_DASH;
	v->a[58916] = anon_sym_GT_AMP_DASH;
	v->a[58917] = anon_sym_LT_LT;
	v->a[58918] = anon_sym_LT_LT_DASH;
	v->a[58919] = anon_sym_AMP;
	small_parse_table_2946(v);
}

void	small_parse_table_2946(t_small_parse_table_array *v)
{
	v->a[58920] = aux_sym_concatenation_token1;
	v->a[58921] = anon_sym_BQUOTE;
	v->a[58922] = anon_sym_SEMI;
	v->a[58923] = 15;
	v->a[58924] = actions(1074);
	v->a[58925] = 1;
	v->a[58926] = sym_comment;
	v->a[58927] = actions(1951);
	v->a[58928] = 1;
	v->a[58929] = anon_sym_LPAREN;
	v->a[58930] = actions(1953);
	v->a[58931] = 1;
	v->a[58932] = anon_sym_BANG;
	v->a[58933] = actions(1959);
	v->a[58934] = 1;
	v->a[58935] = anon_sym_TILDE;
	v->a[58936] = actions(1961);
	v->a[58937] = 1;
	v->a[58938] = anon_sym_DOLLAR;
	v->a[58939] = actions(1963);
	small_parse_table_2947(v);
}

void	small_parse_table_2947(t_small_parse_table_array *v)
{
	v->a[58940] = 1;
	v->a[58941] = anon_sym_DQUOTE;
	v->a[58942] = actions(1967);
	v->a[58943] = 1;
	v->a[58944] = anon_sym_DOLLAR_LBRACE;
	v->a[58945] = actions(1969);
	v->a[58946] = 1;
	v->a[58947] = anon_sym_DOLLAR_LPAREN;
	v->a[58948] = actions(1971);
	v->a[58949] = 1;
	v->a[58950] = anon_sym_BQUOTE;
	v->a[58951] = actions(1973);
	v->a[58952] = 1;
	v->a[58953] = sym_variable_name;
	v->a[58954] = actions(1955);
	v->a[58955] = 2;
	v->a[58956] = anon_sym_PLUS_PLUS;
	v->a[58957] = anon_sym_DASH_DASH;
	v->a[58958] = actions(1957);
	v->a[58959] = 2;
	small_parse_table_2948(v);
}

void	small_parse_table_2948(t_small_parse_table_array *v)
{
	v->a[58960] = anon_sym_DASH2;
	v->a[58961] = anon_sym_PLUS2;
	v->a[58962] = actions(1965);
	v->a[58963] = 2;
	v->a[58964] = sym_number;
	v->a[58965] = aux_sym__simple_variable_name_token1;
	v->a[58966] = state(462);
	v->a[58967] = 3;
	v->a[58968] = sym_string;
	v->a[58969] = sym_simple_expansion;
	v->a[58970] = sym_expansion;
	v->a[58971] = state(579);
	v->a[58972] = 8;
	v->a[58973] = sym__arithmetic_expression;
	v->a[58974] = sym_arithmetic_literal;
	v->a[58975] = sym_arithmetic_binary_expression;
	v->a[58976] = sym_arithmetic_ternary_expression;
	v->a[58977] = sym_arithmetic_unary_expression;
	v->a[58978] = sym_arithmetic_postfix_expression;
	v->a[58979] = sym_arithmetic_parenthesized_expression;
	small_parse_table_2949(v);
}

void	small_parse_table_2949(t_small_parse_table_array *v)
{
	v->a[58980] = sym_command_substitution;
	v->a[58981] = 3;
	v->a[58982] = actions(3);
	v->a[58983] = 1;
	v->a[58984] = sym_comment;
	v->a[58985] = actions(1044);
	v->a[58986] = 5;
	v->a[58987] = sym_file_descriptor;
	v->a[58988] = sym__concat;
	v->a[58989] = sym_variable_name;
	v->a[58990] = ts_builtin_sym_end;
	v->a[58991] = aux_sym_heredoc_redirect_token1;
	v->a[58992] = actions(1042);
	v->a[58993] = 21;
	v->a[58994] = anon_sym_PIPE;
	v->a[58995] = anon_sym_RPAREN;
	v->a[58996] = anon_sym_SEMI_SEMI;
	v->a[58997] = anon_sym_AMP_AMP;
	v->a[58998] = anon_sym_PIPE_PIPE;
	v->a[58999] = anon_sym_LT;
	small_parse_table_2950(v);
}

/* EOF small_parse_table_589.c */
