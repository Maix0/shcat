/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_619.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3095(t_small_parse_table_array *v)
{
	v->a[61900] = 1;
	v->a[61901] = anon_sym_DOLLAR;
	v->a[61902] = actions(1883);
	v->a[61903] = 1;
	v->a[61904] = anon_sym_DQUOTE;
	v->a[61905] = actions(1887);
	v->a[61906] = 1;
	v->a[61907] = anon_sym_DOLLAR_LBRACE;
	v->a[61908] = actions(1889);
	v->a[61909] = 1;
	v->a[61910] = anon_sym_DOLLAR_LPAREN;
	v->a[61911] = actions(1891);
	v->a[61912] = 1;
	v->a[61913] = anon_sym_BQUOTE;
	v->a[61914] = actions(1893);
	v->a[61915] = 1;
	v->a[61916] = sym_variable_name;
	v->a[61917] = actions(1923);
	v->a[61918] = 1;
	v->a[61919] = anon_sym_RPAREN_RPAREN;
	small_parse_table_3096(v);
}

void	small_parse_table_3096(t_small_parse_table_array *v)
{
	v->a[61920] = actions(1875);
	v->a[61921] = 2;
	v->a[61922] = anon_sym_PLUS_PLUS;
	v->a[61923] = anon_sym_DASH_DASH;
	v->a[61924] = actions(1877);
	v->a[61925] = 2;
	v->a[61926] = anon_sym_DASH2;
	v->a[61927] = anon_sym_PLUS2;
	v->a[61928] = actions(1885);
	v->a[61929] = 2;
	v->a[61930] = sym_number;
	v->a[61931] = aux_sym__simple_variable_name_token1;
	v->a[61932] = state(365);
	v->a[61933] = 3;
	v->a[61934] = sym_string;
	v->a[61935] = sym_simple_expansion;
	v->a[61936] = sym_expansion;
	v->a[61937] = state(565);
	v->a[61938] = 8;
	v->a[61939] = sym__arithmetic_expression;
	small_parse_table_3097(v);
}

void	small_parse_table_3097(t_small_parse_table_array *v)
{
	v->a[61940] = sym_arithmetic_literal;
	v->a[61941] = sym_arithmetic_binary_expression;
	v->a[61942] = sym_arithmetic_ternary_expression;
	v->a[61943] = sym_arithmetic_unary_expression;
	v->a[61944] = sym_arithmetic_postfix_expression;
	v->a[61945] = sym_arithmetic_parenthesized_expression;
	v->a[61946] = sym_command_substitution;
	v->a[61947] = 3;
	v->a[61948] = actions(3);
	v->a[61949] = 1;
	v->a[61950] = sym_comment;
	v->a[61951] = actions(1177);
	v->a[61952] = 2;
	v->a[61953] = sym_file_descriptor;
	v->a[61954] = sym__concat;
	v->a[61955] = actions(1179);
	v->a[61956] = 25;
	v->a[61957] = anon_sym_PIPE;
	v->a[61958] = anon_sym_AMP_AMP;
	v->a[61959] = anon_sym_PIPE_PIPE;
	small_parse_table_3098(v);
}

void	small_parse_table_3098(t_small_parse_table_array *v)
{
	v->a[61960] = anon_sym_LT;
	v->a[61961] = anon_sym_GT;
	v->a[61962] = anon_sym_GT_GT;
	v->a[61963] = anon_sym_AMP_GT;
	v->a[61964] = anon_sym_AMP_GT_GT;
	v->a[61965] = anon_sym_LT_AMP;
	v->a[61966] = anon_sym_GT_AMP;
	v->a[61967] = anon_sym_GT_PIPE;
	v->a[61968] = anon_sym_LT_AMP_DASH;
	v->a[61969] = anon_sym_GT_AMP_DASH;
	v->a[61970] = anon_sym_LT_LT;
	v->a[61971] = anon_sym_LT_LT_DASH;
	v->a[61972] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[61973] = aux_sym_concatenation_token1;
	v->a[61974] = anon_sym_DOLLAR;
	v->a[61975] = anon_sym_DQUOTE;
	v->a[61976] = sym_raw_string;
	v->a[61977] = sym_number;
	v->a[61978] = anon_sym_DOLLAR_LBRACE;
	v->a[61979] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3099(v);
}

void	small_parse_table_3099(t_small_parse_table_array *v)
{
	v->a[61980] = anon_sym_BQUOTE;
	v->a[61981] = sym_word;
	v->a[61982] = 3;
	v->a[61983] = actions(3);
	v->a[61984] = 1;
	v->a[61985] = sym_comment;
	v->a[61986] = actions(1147);
	v->a[61987] = 2;
	v->a[61988] = sym_file_descriptor;
	v->a[61989] = sym__concat;
	v->a[61990] = actions(1149);
	v->a[61991] = 25;
	v->a[61992] = anon_sym_PIPE;
	v->a[61993] = anon_sym_AMP_AMP;
	v->a[61994] = anon_sym_PIPE_PIPE;
	v->a[61995] = anon_sym_LT;
	v->a[61996] = anon_sym_GT;
	v->a[61997] = anon_sym_GT_GT;
	v->a[61998] = anon_sym_AMP_GT;
	v->a[61999] = anon_sym_AMP_GT_GT;
	small_parse_table_3100(v);
}

/* EOF small_parse_table_619.c */
