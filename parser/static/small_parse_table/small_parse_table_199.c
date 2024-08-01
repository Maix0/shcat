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
	v->a[19900] = aux_sym__variable_assignments_repeat1;
	v->a[19901] = state(916);
	v->a[19902] = 3;
	v->a[19903] = sym_file_redirect;
	v->a[19904] = sym_heredoc_redirect;
	v->a[19905] = aux_sym_redirected_statement_repeat1;
	v->a[19906] = actions(816);
	v->a[19907] = 7;
	v->a[19908] = anon_sym_RPAREN;
	v->a[19909] = anon_sym_SEMI_SEMI;
	v->a[19910] = anon_sym_AMP_AMP;
	v->a[19911] = anon_sym_PIPE_PIPE;
	v->a[19912] = anon_sym_LT_LT;
	v->a[19913] = aux_sym_heredoc_redirect_token1;
	v->a[19914] = anon_sym_SEMI;
	v->a[19915] = actions(576);
	v->a[19916] = 12;
	v->a[19917] = anon_sym_LT;
	v->a[19918] = anon_sym_GT;
	v->a[19919] = anon_sym_GT_GT;
	small_parse_table_996(v);
}

void	small_parse_table_996(t_small_parse_table_array *v)
{
	v->a[19920] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19921] = anon_sym_DOLLAR;
	v->a[19922] = anon_sym_DQUOTE;
	v->a[19923] = sym_raw_string;
	v->a[19924] = sym_number;
	v->a[19925] = anon_sym_DOLLAR_LBRACE;
	v->a[19926] = anon_sym_DOLLAR_LPAREN;
	v->a[19927] = anon_sym_BQUOTE;
	v->a[19928] = sym_word;
	v->a[19929] = 19;
	v->a[19930] = actions(3);
	v->a[19931] = 1;
	v->a[19932] = sym_comment;
	v->a[19933] = actions(17);
	v->a[19934] = 1;
	v->a[19935] = anon_sym_LPAREN;
	v->a[19936] = actions(53);
	v->a[19937] = 1;
	v->a[19938] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[19939] = actions(55);
	small_parse_table_997(v);
}

void	small_parse_table_997(t_small_parse_table_array *v)
{
	v->a[19940] = 1;
	v->a[19941] = anon_sym_DOLLAR;
	v->a[19942] = actions(57);
	v->a[19943] = 1;
	v->a[19944] = anon_sym_DQUOTE;
	v->a[19945] = actions(61);
	v->a[19946] = 1;
	v->a[19947] = anon_sym_DOLLAR_LBRACE;
	v->a[19948] = actions(63);
	v->a[19949] = 1;
	v->a[19950] = anon_sym_DOLLAR_LPAREN;
	v->a[19951] = actions(65);
	v->a[19952] = 1;
	v->a[19953] = anon_sym_BQUOTE;
	v->a[19954] = actions(67);
	v->a[19955] = 1;
	v->a[19956] = sym_variable_name;
	v->a[19957] = state(185);
	v->a[19958] = 1;
	v->a[19959] = sym_command_name;
	small_parse_table_998(v);
}

void	small_parse_table_998(t_small_parse_table_array *v)
{
	v->a[19960] = state(411);
	v->a[19961] = 1;
	v->a[19962] = aux_sym_command_repeat1;
	v->a[19963] = state(555);
	v->a[19964] = 1;
	v->a[19965] = sym_concatenation;
	v->a[19966] = state(557);
	v->a[19967] = 1;
	v->a[19968] = sym_variable_assignment;
	v->a[19969] = state(1039);
	v->a[19970] = 1;
	v->a[19971] = sym_subshell;
	v->a[19972] = state(1065);
	v->a[19973] = 1;
	v->a[19974] = sym_command;
	v->a[19975] = state(1083);
	v->a[19976] = 1;
	v->a[19977] = sym_file_redirect;
	v->a[19978] = actions(59);
	v->a[19979] = 3;
	small_parse_table_999(v);
}

void	small_parse_table_999(t_small_parse_table_array *v)
{
	v->a[19980] = sym_raw_string;
	v->a[19981] = sym_number;
	v->a[19982] = sym_word;
	v->a[19983] = actions(758);
	v->a[19984] = 3;
	v->a[19985] = anon_sym_LT;
	v->a[19986] = anon_sym_GT;
	v->a[19987] = anon_sym_GT_GT;
	v->a[19988] = state(401);
	v->a[19989] = 5;
	v->a[19990] = sym_arithmetic_expansion;
	v->a[19991] = sym_string;
	v->a[19992] = sym_simple_expansion;
	v->a[19993] = sym_expansion;
	v->a[19994] = sym_command_substitution;
	v->a[19995] = 19;
	v->a[19996] = actions(3);
	v->a[19997] = 1;
	v->a[19998] = sym_comment;
	v->a[19999] = actions(307);
	small_parse_table_1000(v);
}

/* EOF small_parse_table_199.c */
