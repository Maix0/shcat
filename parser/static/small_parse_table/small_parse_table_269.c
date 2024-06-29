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
	v->a[26900] = anon_sym_PIPE;
	v->a[26901] = actions(774);
	v->a[26902] = 1;
	v->a[26903] = sym_file_descriptor;
	v->a[26904] = actions(895);
	v->a[26905] = 1;
	v->a[26906] = sym_variable_name;
	v->a[26907] = state(773);
	v->a[26908] = 1;
	v->a[26909] = sym_terminator;
	v->a[26910] = actions(804);
	v->a[26911] = 2;
	v->a[26912] = anon_sym_LT_LT;
	v->a[26913] = anon_sym_LT_LT_DASH;
	v->a[26914] = actions(893);
	v->a[26915] = 2;
	v->a[26916] = anon_sym_AMP_AMP;
	v->a[26917] = anon_sym_PIPE_PIPE;
	v->a[26918] = state(1270);
	v->a[26919] = 2;
	small_parse_table_1346(v);
}

void	small_parse_table_1346(t_small_parse_table_array *v)
{
	v->a[26920] = sym_variable_assignment;
	v->a[26921] = aux_sym__variable_assignments_repeat1;
	v->a[26922] = state(1256);
	v->a[26923] = 3;
	v->a[26924] = sym_file_redirect;
	v->a[26925] = sym_heredoc_redirect;
	v->a[26926] = aux_sym_redirected_statement_repeat1;
	v->a[26927] = actions(951);
	v->a[26928] = 4;
	v->a[26929] = anon_sym_SEMI_SEMI;
	v->a[26930] = aux_sym_heredoc_redirect_token1;
	v->a[26931] = anon_sym_AMP;
	v->a[26932] = anon_sym_SEMI;
	v->a[26933] = actions(762);
	v->a[26934] = 19;
	v->a[26935] = anon_sym_LT;
	v->a[26936] = anon_sym_GT;
	v->a[26937] = anon_sym_GT_GT;
	v->a[26938] = anon_sym_AMP_GT;
	v->a[26939] = anon_sym_AMP_GT_GT;
	small_parse_table_1347(v);
}

void	small_parse_table_1347(t_small_parse_table_array *v)
{
	v->a[26940] = anon_sym_LT_AMP;
	v->a[26941] = anon_sym_GT_AMP;
	v->a[26942] = anon_sym_GT_PIPE;
	v->a[26943] = anon_sym_LT_AMP_DASH;
	v->a[26944] = anon_sym_GT_AMP_DASH;
	v->a[26945] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26946] = anon_sym_DOLLAR;
	v->a[26947] = anon_sym_DQUOTE;
	v->a[26948] = sym_raw_string;
	v->a[26949] = sym_number;
	v->a[26950] = anon_sym_DOLLAR_LBRACE;
	v->a[26951] = anon_sym_DOLLAR_LPAREN;
	v->a[26952] = anon_sym_BQUOTE;
	v->a[26953] = sym_word;
	v->a[26954] = 11;
	v->a[26955] = actions(3);
	v->a[26956] = 1;
	v->a[26957] = sym_comment;
	v->a[26958] = actions(766);
	v->a[26959] = 1;
	small_parse_table_1348(v);
}

void	small_parse_table_1348(t_small_parse_table_array *v)
{
	v->a[26960] = anon_sym_PIPE;
	v->a[26961] = actions(774);
	v->a[26962] = 1;
	v->a[26963] = sym_file_descriptor;
	v->a[26964] = actions(895);
	v->a[26965] = 1;
	v->a[26966] = sym_variable_name;
	v->a[26967] = state(798);
	v->a[26968] = 1;
	v->a[26969] = sym_terminator;
	v->a[26970] = actions(804);
	v->a[26971] = 2;
	v->a[26972] = anon_sym_LT_LT;
	v->a[26973] = anon_sym_LT_LT_DASH;
	v->a[26974] = actions(893);
	v->a[26975] = 2;
	v->a[26976] = anon_sym_AMP_AMP;
	v->a[26977] = anon_sym_PIPE_PIPE;
	v->a[26978] = state(1270);
	v->a[26979] = 2;
	small_parse_table_1349(v);
}

void	small_parse_table_1349(t_small_parse_table_array *v)
{
	v->a[26980] = sym_variable_assignment;
	v->a[26981] = aux_sym__variable_assignments_repeat1;
	v->a[26982] = state(1256);
	v->a[26983] = 3;
	v->a[26984] = sym_file_redirect;
	v->a[26985] = sym_heredoc_redirect;
	v->a[26986] = aux_sym_redirected_statement_repeat1;
	v->a[26987] = actions(953);
	v->a[26988] = 4;
	v->a[26989] = anon_sym_SEMI_SEMI;
	v->a[26990] = aux_sym_heredoc_redirect_token1;
	v->a[26991] = anon_sym_AMP;
	v->a[26992] = anon_sym_SEMI;
	v->a[26993] = actions(762);
	v->a[26994] = 19;
	v->a[26995] = anon_sym_LT;
	v->a[26996] = anon_sym_GT;
	v->a[26997] = anon_sym_GT_GT;
	v->a[26998] = anon_sym_AMP_GT;
	v->a[26999] = anon_sym_AMP_GT_GT;
	small_parse_table_1350(v);
}

/* EOF small_parse_table_269.c */
