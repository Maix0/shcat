/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_279.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1395(t_small_parse_table_array *v)
{
	v->a[27900] = aux_sym_heredoc_redirect_token1;
	v->a[27901] = anon_sym_AMP;
	v->a[27902] = anon_sym_BQUOTE;
	v->a[27903] = anon_sym_SEMI;
	v->a[27904] = 13;
	v->a[27905] = actions(3);
	v->a[27906] = 1;
	v->a[27907] = sym_comment;
	v->a[27908] = actions(750);
	v->a[27909] = 1;
	v->a[27910] = sym_file_descriptor;
	v->a[27911] = actions(905);
	v->a[27912] = 1;
	v->a[27913] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27914] = actions(907);
	v->a[27915] = 1;
	v->a[27916] = anon_sym_DOLLAR;
	v->a[27917] = actions(909);
	v->a[27918] = 1;
	v->a[27919] = anon_sym_DQUOTE;
	small_parse_table_1396(v);
}

void	small_parse_table_1396(t_small_parse_table_array *v)
{
	v->a[27920] = actions(911);
	v->a[27921] = 1;
	v->a[27922] = aux_sym_number_token1;
	v->a[27923] = actions(913);
	v->a[27924] = 1;
	v->a[27925] = aux_sym_number_token2;
	v->a[27926] = actions(915);
	v->a[27927] = 1;
	v->a[27928] = anon_sym_DOLLAR_LBRACE;
	v->a[27929] = actions(917);
	v->a[27930] = 1;
	v->a[27931] = anon_sym_DOLLAR_LPAREN;
	v->a[27932] = state(1105);
	v->a[27933] = 1;
	v->a[27934] = sym_concatenation;
	v->a[27935] = actions(1087);
	v->a[27936] = 2;
	v->a[27937] = sym_raw_string;
	v->a[27938] = sym_word;
	v->a[27939] = state(1056);
	small_parse_table_1397(v);
}

void	small_parse_table_1397(t_small_parse_table_array *v)
{
	v->a[27940] = 6;
	v->a[27941] = sym_arithmetic_expansion;
	v->a[27942] = sym_string;
	v->a[27943] = sym_number;
	v->a[27944] = sym_simple_expansion;
	v->a[27945] = sym_expansion;
	v->a[27946] = sym_command_substitution;
	v->a[27947] = actions(748);
	v->a[27948] = 20;
	v->a[27949] = anon_sym_PIPE;
	v->a[27950] = anon_sym_SEMI_SEMI;
	v->a[27951] = anon_sym_AMP_AMP;
	v->a[27952] = anon_sym_PIPE_PIPE;
	v->a[27953] = anon_sym_LT;
	v->a[27954] = anon_sym_GT;
	v->a[27955] = anon_sym_GT_GT;
	v->a[27956] = anon_sym_AMP_GT;
	v->a[27957] = anon_sym_AMP_GT_GT;
	v->a[27958] = anon_sym_LT_AMP;
	v->a[27959] = anon_sym_GT_AMP;
	small_parse_table_1398(v);
}

void	small_parse_table_1398(t_small_parse_table_array *v)
{
	v->a[27960] = anon_sym_GT_PIPE;
	v->a[27961] = anon_sym_LT_AMP_DASH;
	v->a[27962] = anon_sym_GT_AMP_DASH;
	v->a[27963] = anon_sym_LT_LT;
	v->a[27964] = anon_sym_LT_LT_DASH;
	v->a[27965] = aux_sym_heredoc_redirect_token1;
	v->a[27966] = anon_sym_AMP;
	v->a[27967] = anon_sym_BQUOTE;
	v->a[27968] = anon_sym_SEMI;
	v->a[27969] = 7;
	v->a[27970] = actions(3);
	v->a[27971] = 1;
	v->a[27972] = sym_comment;
	v->a[27973] = actions(1041);
	v->a[27974] = 1;
	v->a[27975] = sym_variable_name;
	v->a[27976] = actions(1081);
	v->a[27977] = 1;
	v->a[27978] = sym_file_descriptor;
	v->a[27979] = state(1039);
	small_parse_table_1399(v);
}

void	small_parse_table_1399(t_small_parse_table_array *v)
{
	v->a[27980] = 2;
	v->a[27981] = sym_variable_assignment;
	v->a[27982] = aux_sym_variable_assignments_repeat1;
	v->a[27983] = state(1035);
	v->a[27984] = 3;
	v->a[27985] = sym_file_redirect;
	v->a[27986] = sym_heredoc_redirect;
	v->a[27987] = aux_sym_redirected_statement_repeat1;
	v->a[27988] = actions(1000);
	v->a[27989] = 10;
	v->a[27990] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27991] = anon_sym_DOLLAR;
	v->a[27992] = anon_sym_DQUOTE;
	v->a[27993] = sym_raw_string;
	v->a[27994] = aux_sym_number_token1;
	v->a[27995] = aux_sym_number_token2;
	v->a[27996] = anon_sym_DOLLAR_LBRACE;
	v->a[27997] = anon_sym_DOLLAR_LPAREN;
	v->a[27998] = anon_sym_BQUOTE;
	v->a[27999] = sym_word;
	small_parse_table_1400(v);
}

/* EOF small_parse_table_279.c */
