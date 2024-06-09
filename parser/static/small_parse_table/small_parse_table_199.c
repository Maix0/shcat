/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_199.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_995(t_small_parse_table_array *v)
{
	v->a[19900] = sym_number;
	v->a[19901] = sym_simple_expansion;
	v->a[19902] = sym_expansion;
	v->a[19903] = sym_command_substitution;
	v->a[19904] = actions(353);
	v->a[19905] = 8;
	v->a[19906] = anon_sym_LT;
	v->a[19907] = anon_sym_GT;
	v->a[19908] = anon_sym_GT_GT;
	v->a[19909] = anon_sym_AMP_GT;
	v->a[19910] = anon_sym_AMP_GT_GT;
	v->a[19911] = anon_sym_LT_AMP;
	v->a[19912] = anon_sym_GT_AMP;
	v->a[19913] = anon_sym_GT_PIPE;
	v->a[19914] = state(1304);
	v->a[19915] = 12;
	v->a[19916] = sym_redirected_statement;
	v->a[19917] = sym_for_statement;
	v->a[19918] = sym_while_statement;
	v->a[19919] = sym_if_statement;
	small_parse_table_996(v);
}

void	small_parse_table_996(t_small_parse_table_array *v)
{
	v->a[19920] = sym_case_statement;
	v->a[19921] = sym_function_definition;
	v->a[19922] = sym_compound_statement;
	v->a[19923] = sym_subshell;
	v->a[19924] = sym_list;
	v->a[19925] = sym_negated_command;
	v->a[19926] = sym_command;
	v->a[19927] = sym_variable_assignments;
	v->a[19928] = 31;
	v->a[19929] = actions(3);
	v->a[19930] = 1;
	v->a[19931] = sym_comment;
	v->a[19932] = actions(9);
	v->a[19933] = 1;
	v->a[19934] = anon_sym_for;
	v->a[19935] = actions(13);
	v->a[19936] = 1;
	v->a[19937] = anon_sym_if;
	v->a[19938] = actions(15);
	v->a[19939] = 1;
	small_parse_table_997(v);
}

void	small_parse_table_997(t_small_parse_table_array *v)
{
	v->a[19940] = anon_sym_case;
	v->a[19941] = actions(17);
	v->a[19942] = 1;
	v->a[19943] = anon_sym_LPAREN;
	v->a[19944] = actions(19);
	v->a[19945] = 1;
	v->a[19946] = anon_sym_LBRACE;
	v->a[19947] = actions(49);
	v->a[19948] = 1;
	v->a[19949] = sym_word;
	v->a[19950] = actions(57);
	v->a[19951] = 1;
	v->a[19952] = anon_sym_BANG;
	v->a[19953] = actions(63);
	v->a[19954] = 1;
	v->a[19955] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19956] = actions(65);
	v->a[19957] = 1;
	v->a[19958] = anon_sym_DOLLAR;
	v->a[19959] = actions(67);
	small_parse_table_998(v);
}

void	small_parse_table_998(t_small_parse_table_array *v)
{
	v->a[19960] = 1;
	v->a[19961] = anon_sym_DQUOTE;
	v->a[19962] = actions(69);
	v->a[19963] = 1;
	v->a[19964] = sym_raw_string;
	v->a[19965] = actions(71);
	v->a[19966] = 1;
	v->a[19967] = aux_sym_number_token1;
	v->a[19968] = actions(73);
	v->a[19969] = 1;
	v->a[19970] = aux_sym_number_token2;
	v->a[19971] = actions(75);
	v->a[19972] = 1;
	v->a[19973] = anon_sym_DOLLAR_LBRACE;
	v->a[19974] = actions(77);
	v->a[19975] = 1;
	v->a[19976] = anon_sym_DOLLAR_LPAREN;
	v->a[19977] = actions(79);
	v->a[19978] = 1;
	v->a[19979] = anon_sym_BQUOTE;
	small_parse_table_999(v);
}

void	small_parse_table_999(t_small_parse_table_array *v)
{
	v->a[19980] = actions(81);
	v->a[19981] = 1;
	v->a[19982] = sym_file_descriptor;
	v->a[19983] = actions(83);
	v->a[19984] = 1;
	v->a[19985] = sym_variable_name;
	v->a[19986] = state(190);
	v->a[19987] = 1;
	v->a[19988] = sym_command_name;
	v->a[19989] = state(316);
	v->a[19990] = 1;
	v->a[19991] = sym_variable_assignment;
	v->a[19992] = state(582);
	v->a[19993] = 1;
	v->a[19994] = sym_concatenation;
	v->a[19995] = state(587);
	v->a[19996] = 1;
	v->a[19997] = aux_sym_command_repeat1;
	v->a[19998] = state(718);
	v->a[19999] = 1;
	small_parse_table_1000(v);
}

/* EOF small_parse_table_199.c */
