/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_759.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3795(t_small_parse_table_array *v)
{
	v->a[75900] = sym__special_character;
	v->a[75901] = actions(1185);
	v->a[75902] = 1;
	v->a[75903] = sym_test_operator;
	v->a[75904] = actions(3060);
	v->a[75905] = 1;
	v->a[75906] = anon_sym_BQUOTE;
	v->a[75907] = actions(5781);
	v->a[75908] = 1;
	v->a[75909] = sym_extglob_pattern;
	v->a[75910] = state(2484);
	v->a[75911] = 1;
	v->a[75912] = aux_sym__literal_repeat1;
	v->a[75913] = state(2648);
	v->a[75914] = 1;
	v->a[75915] = sym__extglob_blob;
	v->a[75916] = state(3051);
	v->a[75917] = 1;
	v->a[75918] = sym__expression;
	v->a[75919] = actions(1129);
	small_parse_table_3796(v);
}

void	small_parse_table_3796(t_small_parse_table_array *v)
{
	v->a[75920] = 2;
	v->a[75921] = anon_sym_LPAREN_LPAREN;
	v->a[75922] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[75923] = actions(1165);
	v->a[75924] = 2;
	v->a[75925] = anon_sym_LT_LPAREN;
	v->a[75926] = anon_sym_GT_LPAREN;
	v->a[75927] = actions(1175);
	v->a[75928] = 2;
	v->a[75929] = anon_sym_PLUS_PLUS2;
	v->a[75930] = anon_sym_DASH_DASH2;
	v->a[75931] = actions(1177);
	v->a[75932] = 2;
	v->a[75933] = anon_sym_DASH2;
	v->a[75934] = anon_sym_PLUS2;
	v->a[75935] = actions(1183);
	v->a[75936] = 2;
	v->a[75937] = sym_raw_string;
	v->a[75938] = sym_ansi_c_string;
	v->a[75939] = state(2594);
	small_parse_table_3797(v);
}

void	small_parse_table_3797(t_small_parse_table_array *v)
{
	v->a[75940] = 6;
	v->a[75941] = sym_binary_expression;
	v->a[75942] = sym_ternary_expression;
	v->a[75943] = sym_unary_expression;
	v->a[75944] = sym_postfix_expression;
	v->a[75945] = sym_parenthesized_expression;
	v->a[75946] = sym_concatenation;
	v->a[75947] = state(2456);
	v->a[75948] = 9;
	v->a[75949] = sym_arithmetic_expansion;
	v->a[75950] = sym_brace_expression;
	v->a[75951] = sym_string;
	v->a[75952] = sym_translated_string;
	v->a[75953] = sym_number;
	v->a[75954] = sym_simple_expansion;
	v->a[75955] = sym_expansion;
	v->a[75956] = sym_command_substitution;
	v->a[75957] = sym_process_substitution;
	v->a[75958] = 3;
	v->a[75959] = actions(3);
	small_parse_table_3798(v);
}

void	small_parse_table_3798(t_small_parse_table_array *v)
{
	v->a[75960] = 1;
	v->a[75961] = sym_comment;
	v->a[75962] = actions(1326);
	v->a[75963] = 6;
	v->a[75964] = sym_file_descriptor;
	v->a[75965] = sym__concat;
	v->a[75966] = sym_variable_name;
	v->a[75967] = sym_test_operator;
	v->a[75968] = sym__brace_start;
	v->a[75969] = aux_sym_heredoc_redirect_token1;
	v->a[75970] = actions(1324);
	v->a[75971] = 39;
	v->a[75972] = anon_sym_LPAREN_LPAREN;
	v->a[75973] = anon_sym_SEMI;
	v->a[75974] = anon_sym_PIPE_PIPE;
	v->a[75975] = anon_sym_AMP_AMP;
	v->a[75976] = anon_sym_PIPE;
	v->a[75977] = anon_sym_AMP;
	v->a[75978] = anon_sym_LT;
	v->a[75979] = anon_sym_GT;
	small_parse_table_3799(v);
}

void	small_parse_table_3799(t_small_parse_table_array *v)
{
	v->a[75980] = anon_sym_LT_LT;
	v->a[75981] = anon_sym_GT_GT;
	v->a[75982] = anon_sym_RPAREN;
	v->a[75983] = anon_sym_SEMI_SEMI;
	v->a[75984] = anon_sym_PIPE_AMP;
	v->a[75985] = anon_sym_AMP_GT;
	v->a[75986] = anon_sym_AMP_GT_GT;
	v->a[75987] = anon_sym_LT_AMP;
	v->a[75988] = anon_sym_GT_AMP;
	v->a[75989] = anon_sym_GT_PIPE;
	v->a[75990] = anon_sym_LT_AMP_DASH;
	v->a[75991] = anon_sym_GT_AMP_DASH;
	v->a[75992] = anon_sym_LT_LT_DASH;
	v->a[75993] = anon_sym_LT_LT_LT;
	v->a[75994] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[75995] = anon_sym_DOLLAR_LBRACK;
	v->a[75996] = aux_sym_concatenation_token1;
	v->a[75997] = anon_sym_DOLLAR;
	v->a[75998] = sym__special_character;
	v->a[75999] = anon_sym_DQUOTE;
	small_parse_table_3800(v);
}

/* EOF small_parse_table_759.c */
