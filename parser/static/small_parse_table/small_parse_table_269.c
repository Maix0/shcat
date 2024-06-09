/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_269.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1345(t_small_parse_table_array *v)
{
	v->a[26900] = sym_raw_string;
	v->a[26901] = sym_word;
	v->a[26902] = state(759);
	v->a[26903] = 6;
	v->a[26904] = sym_arithmetic_expansion;
	v->a[26905] = sym_string;
	v->a[26906] = sym_number;
	v->a[26907] = sym_simple_expansion;
	v->a[26908] = sym_expansion;
	v->a[26909] = sym_command_substitution;
	v->a[26910] = actions(515);
	v->a[26911] = 16;
	v->a[26912] = anon_sym_PIPE;
	v->a[26913] = anon_sym_AMP_AMP;
	v->a[26914] = anon_sym_PIPE_PIPE;
	v->a[26915] = anon_sym_LT;
	v->a[26916] = anon_sym_GT;
	v->a[26917] = anon_sym_GT_GT;
	v->a[26918] = anon_sym_AMP_GT;
	v->a[26919] = anon_sym_AMP_GT_GT;
	small_parse_table_1346(v);
}

void	small_parse_table_1346(t_small_parse_table_array *v)
{
	v->a[26920] = anon_sym_LT_AMP;
	v->a[26921] = anon_sym_GT_AMP;
	v->a[26922] = anon_sym_GT_PIPE;
	v->a[26923] = anon_sym_LT_AMP_DASH;
	v->a[26924] = anon_sym_GT_AMP_DASH;
	v->a[26925] = anon_sym_LT_LT;
	v->a[26926] = anon_sym_LT_LT_DASH;
	v->a[26927] = aux_sym_heredoc_redirect_token1;
	v->a[26928] = 8;
	v->a[26929] = actions(3);
	v->a[26930] = 1;
	v->a[26931] = sym_comment;
	v->a[26932] = actions(1002);
	v->a[26933] = 1;
	v->a[26934] = anon_sym_PIPE;
	v->a[26935] = actions(1006);
	v->a[26936] = 1;
	v->a[26937] = sym_file_descriptor;
	v->a[26938] = actions(1008);
	v->a[26939] = 1;
	small_parse_table_1347(v);
}

void	small_parse_table_1347(t_small_parse_table_array *v)
{
	v->a[26940] = sym_variable_name;
	v->a[26941] = state(1030);
	v->a[26942] = 2;
	v->a[26943] = sym_variable_assignment;
	v->a[26944] = aux_sym_variable_assignments_repeat1;
	v->a[26945] = state(1050);
	v->a[26946] = 3;
	v->a[26947] = sym_file_redirect;
	v->a[26948] = sym_heredoc_redirect;
	v->a[26949] = aux_sym_redirected_statement_repeat1;
	v->a[26950] = actions(1004);
	v->a[26951] = 9;
	v->a[26952] = anon_sym_RPAREN;
	v->a[26953] = anon_sym_SEMI_SEMI;
	v->a[26954] = anon_sym_AMP_AMP;
	v->a[26955] = anon_sym_PIPE_PIPE;
	v->a[26956] = anon_sym_LT_LT;
	v->a[26957] = anon_sym_LT_LT_DASH;
	v->a[26958] = aux_sym_heredoc_redirect_token1;
	v->a[26959] = anon_sym_AMP;
	small_parse_table_1348(v);
}

void	small_parse_table_1348(t_small_parse_table_array *v)
{
	v->a[26960] = anon_sym_SEMI;
	v->a[26961] = actions(1000);
	v->a[26962] = 20;
	v->a[26963] = anon_sym_LT;
	v->a[26964] = anon_sym_GT;
	v->a[26965] = anon_sym_GT_GT;
	v->a[26966] = anon_sym_AMP_GT;
	v->a[26967] = anon_sym_AMP_GT_GT;
	v->a[26968] = anon_sym_LT_AMP;
	v->a[26969] = anon_sym_GT_AMP;
	v->a[26970] = anon_sym_GT_PIPE;
	v->a[26971] = anon_sym_LT_AMP_DASH;
	v->a[26972] = anon_sym_GT_AMP_DASH;
	v->a[26973] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26974] = anon_sym_DOLLAR;
	v->a[26975] = anon_sym_DQUOTE;
	v->a[26976] = sym_raw_string;
	v->a[26977] = aux_sym_number_token1;
	v->a[26978] = aux_sym_number_token2;
	v->a[26979] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1349(v);
}

void	small_parse_table_1349(t_small_parse_table_array *v)
{
	v->a[26980] = anon_sym_DOLLAR_LPAREN;
	v->a[26981] = anon_sym_BQUOTE;
	v->a[26982] = sym_word;
	v->a[26983] = 14;
	v->a[26984] = actions(3);
	v->a[26985] = 1;
	v->a[26986] = sym_comment;
	v->a[26987] = actions(750);
	v->a[26988] = 1;
	v->a[26989] = sym_file_descriptor;
	v->a[26990] = actions(905);
	v->a[26991] = 1;
	v->a[26992] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26993] = actions(907);
	v->a[26994] = 1;
	v->a[26995] = anon_sym_DOLLAR;
	v->a[26996] = actions(909);
	v->a[26997] = 1;
	v->a[26998] = anon_sym_DQUOTE;
	v->a[26999] = actions(911);
	small_parse_table_1350(v);
}

/* EOF small_parse_table_269.c */
