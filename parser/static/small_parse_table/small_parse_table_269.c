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
	v->a[26900] = anon_sym_LT_AMP_DASH;
	v->a[26901] = anon_sym_GT_AMP_DASH;
	v->a[26902] = anon_sym_LT_LT;
	v->a[26903] = anon_sym_LT_LT_DASH;
	v->a[26904] = aux_sym_heredoc_redirect_token1;
	v->a[26905] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26906] = anon_sym_AMP;
	v->a[26907] = anon_sym_DOLLAR;
	v->a[26908] = anon_sym_DQUOTE;
	v->a[26909] = sym_raw_string;
	v->a[26910] = sym_number;
	v->a[26911] = anon_sym_DOLLAR_LBRACE;
	v->a[26912] = anon_sym_DOLLAR_LPAREN;
	v->a[26913] = anon_sym_BQUOTE;
	v->a[26914] = sym_word;
	v->a[26915] = anon_sym_SEMI;
	v->a[26916] = 10;
	v->a[26917] = actions(3);
	v->a[26918] = 1;
	v->a[26919] = sym_comment;
	small_parse_table_1346(v);
}

void	small_parse_table_1346(t_small_parse_table_array *v)
{
	v->a[26920] = actions(807);
	v->a[26921] = 1;
	v->a[26922] = anon_sym_PIPE;
	v->a[26923] = actions(811);
	v->a[26924] = 1;
	v->a[26925] = sym_file_descriptor;
	v->a[26926] = actions(967);
	v->a[26927] = 1;
	v->a[26928] = sym_variable_name;
	v->a[26929] = actions(861);
	v->a[26930] = 2;
	v->a[26931] = anon_sym_LT_LT;
	v->a[26932] = anon_sym_LT_LT_DASH;
	v->a[26933] = actions(965);
	v->a[26934] = 2;
	v->a[26935] = anon_sym_AMP_AMP;
	v->a[26936] = anon_sym_PIPE_PIPE;
	v->a[26937] = state(1415);
	v->a[26938] = 2;
	v->a[26939] = sym_variable_assignment;
	small_parse_table_1347(v);
}

void	small_parse_table_1347(t_small_parse_table_array *v)
{
	v->a[26940] = aux_sym_variable_assignments_repeat1;
	v->a[26941] = state(1322);
	v->a[26942] = 3;
	v->a[26943] = sym_file_redirect;
	v->a[26944] = sym_heredoc_redirect;
	v->a[26945] = aux_sym_redirected_statement_repeat1;
	v->a[26946] = actions(995);
	v->a[26947] = 4;
	v->a[26948] = anon_sym_SEMI_SEMI;
	v->a[26949] = aux_sym_heredoc_redirect_token1;
	v->a[26950] = anon_sym_AMP;
	v->a[26951] = anon_sym_SEMI;
	v->a[26952] = actions(805);
	v->a[26953] = 19;
	v->a[26954] = anon_sym_LT;
	v->a[26955] = anon_sym_GT;
	v->a[26956] = anon_sym_GT_GT;
	v->a[26957] = anon_sym_AMP_GT;
	v->a[26958] = anon_sym_AMP_GT_GT;
	v->a[26959] = anon_sym_LT_AMP;
	small_parse_table_1348(v);
}

void	small_parse_table_1348(t_small_parse_table_array *v)
{
	v->a[26960] = anon_sym_GT_AMP;
	v->a[26961] = anon_sym_GT_PIPE;
	v->a[26962] = anon_sym_LT_AMP_DASH;
	v->a[26963] = anon_sym_GT_AMP_DASH;
	v->a[26964] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26965] = anon_sym_DOLLAR;
	v->a[26966] = anon_sym_DQUOTE;
	v->a[26967] = sym_raw_string;
	v->a[26968] = sym_number;
	v->a[26969] = anon_sym_DOLLAR_LBRACE;
	v->a[26970] = anon_sym_DOLLAR_LPAREN;
	v->a[26971] = anon_sym_BQUOTE;
	v->a[26972] = sym_word;
	v->a[26973] = 6;
	v->a[26974] = actions(3);
	v->a[26975] = 1;
	v->a[26976] = sym_comment;
	v->a[26977] = actions(980);
	v->a[26978] = 1;
	v->a[26979] = aux_sym_concatenation_token1;
	small_parse_table_1349(v);
}

void	small_parse_table_1349(t_small_parse_table_array *v)
{
	v->a[26980] = actions(997);
	v->a[26981] = 1;
	v->a[26982] = sym__concat;
	v->a[26983] = state(278);
	v->a[26984] = 1;
	v->a[26985] = aux_sym_concatenation_repeat1;
	v->a[26986] = actions(991);
	v->a[26987] = 2;
	v->a[26988] = sym_file_descriptor;
	v->a[26989] = sym__bare_dollar;
	v->a[26990] = actions(984);
	v->a[26991] = 30;
	v->a[26992] = anon_sym_esac;
	v->a[26993] = anon_sym_LPAREN;
	v->a[26994] = anon_sym_PIPE;
	v->a[26995] = anon_sym_SEMI_SEMI;
	v->a[26996] = anon_sym_AMP_AMP;
	v->a[26997] = anon_sym_PIPE_PIPE;
	v->a[26998] = anon_sym_LT;
	v->a[26999] = anon_sym_GT;
	small_parse_table_1350(v);
}

/* EOF small_parse_table_269.c */
