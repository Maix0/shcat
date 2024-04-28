/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2099.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10495(t_small_parse_table_array *v)
{
	v->a[209900] = sym_arithmetic_expansion;
	v->a[209901] = sym_brace_expression;
	v->a[209902] = sym_string;
	v->a[209903] = sym_translated_string;
	v->a[209904] = sym_number;
	v->a[209905] = sym_simple_expansion;
	v->a[209906] = sym_expansion;
	v->a[209907] = sym_command_substitution;
	v->a[209908] = sym_process_substitution;
	v->a[209909] = 20;
	v->a[209910] = actions(71);
	v->a[209911] = 1;
	v->a[209912] = sym_comment;
	v->a[209913] = actions(1414);
	v->a[209914] = 1;
	v->a[209915] = anon_sym_DOLLAR;
	v->a[209916] = actions(1420);
	v->a[209917] = 1;
	v->a[209918] = aux_sym_number_token1;
	v->a[209919] = actions(1422);
	small_parse_table_10496(v);
}

void	small_parse_table_10496(t_small_parse_table_array *v)
{
	v->a[209920] = 1;
	v->a[209921] = aux_sym_number_token2;
	v->a[209922] = actions(1426);
	v->a[209923] = 1;
	v->a[209924] = anon_sym_DOLLAR_LPAREN;
	v->a[209925] = actions(1438);
	v->a[209926] = 1;
	v->a[209927] = sym__brace_start;
	v->a[209928] = actions(9094);
	v->a[209929] = 1;
	v->a[209930] = anon_sym_DOLLAR_LBRACK;
	v->a[209931] = actions(9096);
	v->a[209932] = 1;
	v->a[209933] = sym__special_character;
	v->a[209934] = actions(9098);
	v->a[209935] = 1;
	v->a[209936] = anon_sym_DQUOTE;
	v->a[209937] = actions(9102);
	v->a[209938] = 1;
	v->a[209939] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_10497(v);
}

void	small_parse_table_10497(t_small_parse_table_array *v)
{
	v->a[209940] = actions(9104);
	v->a[209941] = 1;
	v->a[209942] = anon_sym_BQUOTE;
	v->a[209943] = actions(9106);
	v->a[209944] = 1;
	v->a[209945] = anon_sym_DOLLAR_BQUOTE;
	v->a[209946] = actions(9892);
	v->a[209947] = 1;
	v->a[209948] = sym_word;
	v->a[209949] = actions(9896);
	v->a[209950] = 1;
	v->a[209951] = sym_test_operator;
	v->a[209952] = state(1149);
	v->a[209953] = 1;
	v->a[209954] = aux_sym__literal_repeat1;
	v->a[209955] = state(1281);
	v->a[209956] = 1;
	v->a[209957] = sym_concatenation;
	v->a[209958] = actions(9092);
	v->a[209959] = 2;
	small_parse_table_10498(v);
}

void	small_parse_table_10498(t_small_parse_table_array *v)
{
	v->a[209960] = anon_sym_LPAREN_LPAREN;
	v->a[209961] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[209962] = actions(9108);
	v->a[209963] = 2;
	v->a[209964] = anon_sym_LT_LPAREN;
	v->a[209965] = anon_sym_GT_LPAREN;
	v->a[209966] = actions(9894);
	v->a[209967] = 2;
	v->a[209968] = sym_raw_string;
	v->a[209969] = sym_ansi_c_string;
	v->a[209970] = state(832);
	v->a[209971] = 9;
	v->a[209972] = sym_arithmetic_expansion;
	v->a[209973] = sym_brace_expression;
	v->a[209974] = sym_string;
	v->a[209975] = sym_translated_string;
	v->a[209976] = sym_number;
	v->a[209977] = sym_simple_expansion;
	v->a[209978] = sym_expansion;
	v->a[209979] = sym_command_substitution;
	small_parse_table_10499(v);
}

void	small_parse_table_10499(t_small_parse_table_array *v)
{
	v->a[209980] = sym_process_substitution;
	v->a[209981] = 21;
	v->a[209982] = actions(71);
	v->a[209983] = 1;
	v->a[209984] = sym_comment;
	v->a[209985] = actions(3602);
	v->a[209986] = 1;
	v->a[209987] = sym_variable_name;
	v->a[209988] = actions(9898);
	v->a[209989] = 1;
	v->a[209990] = anon_sym_LPAREN;
	v->a[209991] = actions(9900);
	v->a[209992] = 1;
	v->a[209993] = anon_sym_BANG;
	v->a[209994] = actions(9906);
	v->a[209995] = 1;
	v->a[209996] = anon_sym_TILDE;
	v->a[209997] = actions(9908);
	v->a[209998] = 1;
	v->a[209999] = anon_sym_DOLLAR;
	small_parse_table_10500(v);
}

/* EOF small_parse_table_2099.c */
