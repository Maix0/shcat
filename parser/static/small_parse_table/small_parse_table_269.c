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
	v->a[26900] = anon_sym_PIPE_PIPE;
	v->a[26901] = anon_sym_AMP_AMP;
	v->a[26902] = anon_sym_GT_GT;
	v->a[26903] = anon_sym_PIPE_AMP;
	v->a[26904] = anon_sym_RBRACK;
	v->a[26905] = anon_sym_AMP_GT_GT;
	v->a[26906] = anon_sym_GT_PIPE;
	v->a[26907] = anon_sym_LT_AMP_DASH;
	v->a[26908] = anon_sym_GT_AMP_DASH;
	v->a[26909] = anon_sym_LT_LT_DASH;
	v->a[26910] = anon_sym_LT_LT_LT;
	v->a[26911] = 13;
	v->a[26912] = actions(3);
	v->a[26913] = 1;
	v->a[26914] = sym_comment;
	v->a[26915] = actions(4263);
	v->a[26916] = 1;
	v->a[26917] = sym_variable_name;
	v->a[26918] = actions(4340);
	v->a[26919] = 1;
	small_parse_table_1346(v);
}

void	small_parse_table_1346(t_small_parse_table_array *v)
{
	v->a[26920] = aux_sym_heredoc_redirect_token1;
	v->a[26921] = state(6726);
	v->a[26922] = 1;
	v->a[26923] = sym_subscript;
	v->a[26924] = actions(4251);
	v->a[26925] = 2;
	v->a[26926] = anon_sym_PIPE_PIPE;
	v->a[26927] = anon_sym_AMP_AMP;
	v->a[26928] = actions(4253);
	v->a[26929] = 2;
	v->a[26930] = anon_sym_PIPE;
	v->a[26931] = anon_sym_PIPE_AMP;
	v->a[26932] = actions(4255);
	v->a[26933] = 2;
	v->a[26934] = anon_sym_LT_LT;
	v->a[26935] = anon_sym_LT_LT_DASH;
	v->a[26936] = actions(4338);
	v->a[26937] = 2;
	v->a[26938] = anon_sym_SEMI;
	v->a[26939] = anon_sym_AMP;
	small_parse_table_1347(v);
}

void	small_parse_table_1347(t_small_parse_table_array *v)
{
	v->a[26940] = state(4237);
	v->a[26941] = 2;
	v->a[26942] = sym_variable_assignment;
	v->a[26943] = aux_sym_variable_assignments_repeat1;
	v->a[26944] = actions(4261);
	v->a[26945] = 3;
	v->a[26946] = sym_file_descriptor;
	v->a[26947] = sym_test_operator;
	v->a[26948] = sym__brace_start;
	v->a[26949] = state(4283);
	v->a[26950] = 3;
	v->a[26951] = sym_file_redirect;
	v->a[26952] = sym_heredoc_redirect;
	v->a[26953] = aux_sym_redirected_statement_repeat1;
	v->a[26954] = actions(2719);
	v->a[26955] = 4;
	v->a[26956] = anon_sym_esac;
	v->a[26957] = anon_sym_SEMI_SEMI;
	v->a[26958] = anon_sym_SEMI_AMP;
	v->a[26959] = anon_sym_SEMI_SEMI_AMP;
	small_parse_table_1348(v);
}

void	small_parse_table_1348(t_small_parse_table_array *v)
{
	v->a[26960] = actions(4247);
	v->a[26961] = 28;
	v->a[26962] = anon_sym_LPAREN_LPAREN;
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
	v->a[26973] = anon_sym_LT_LT_LT;
	v->a[26974] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26975] = anon_sym_DOLLAR_LBRACK;
	v->a[26976] = anon_sym_DOLLAR;
	v->a[26977] = sym__special_character;
	v->a[26978] = anon_sym_DQUOTE;
	v->a[26979] = sym_raw_string;
	small_parse_table_1349(v);
}

void	small_parse_table_1349(t_small_parse_table_array *v)
{
	v->a[26980] = sym_ansi_c_string;
	v->a[26981] = aux_sym_number_token1;
	v->a[26982] = aux_sym_number_token2;
	v->a[26983] = anon_sym_DOLLAR_LBRACE;
	v->a[26984] = anon_sym_DOLLAR_LPAREN;
	v->a[26985] = anon_sym_BQUOTE;
	v->a[26986] = anon_sym_DOLLAR_BQUOTE;
	v->a[26987] = anon_sym_LT_LPAREN;
	v->a[26988] = anon_sym_GT_LPAREN;
	v->a[26989] = sym_word;
	v->a[26990] = 6;
	v->a[26991] = actions(3);
	v->a[26992] = 1;
	v->a[26993] = sym_comment;
	v->a[26994] = actions(4266);
	v->a[26995] = 1;
	v->a[26996] = aux_sym_concatenation_token1;
	v->a[26997] = actions(4286);
	v->a[26998] = 1;
	v->a[26999] = sym__concat;
	small_parse_table_1350(v);
}

/* EOF small_parse_table_269.c */
