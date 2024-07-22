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
	v->a[27900] = sym_concatenation;
	v->a[27901] = state(1983);
	v->a[27902] = 1;
	v->a[27903] = sym__heredoc_expression;
	v->a[27904] = state(1984);
	v->a[27905] = 1;
	v->a[27906] = sym__heredoc_pipeline;
	v->a[27907] = actions(1006);
	v->a[27908] = 2;
	v->a[27909] = anon_sym_AMP_AMP;
	v->a[27910] = anon_sym_PIPE_PIPE;
	v->a[27911] = state(1450);
	v->a[27912] = 2;
	v->a[27913] = sym_file_redirect;
	v->a[27914] = aux_sym_redirected_statement_repeat2;
	v->a[27915] = actions(1002);
	v->a[27916] = 3;
	v->a[27917] = sym_raw_string;
	v->a[27918] = sym_number;
	v->a[27919] = sym_word;
	small_parse_table_1396(v);
}

void	small_parse_table_1396(t_small_parse_table_array *v)
{
	v->a[27920] = state(1516);
	v->a[27921] = 5;
	v->a[27922] = sym_arithmetic_expansion;
	v->a[27923] = sym_string;
	v->a[27924] = sym_simple_expansion;
	v->a[27925] = sym_expansion;
	v->a[27926] = sym_command_substitution;
	v->a[27927] = actions(1008);
	v->a[27928] = 7;
	v->a[27929] = anon_sym_LT;
	v->a[27930] = anon_sym_GT;
	v->a[27931] = anon_sym_GT_GT;
	v->a[27932] = anon_sym_LT_AMP;
	v->a[27933] = anon_sym_GT_AMP;
	v->a[27934] = anon_sym_GT_PIPE;
	v->a[27935] = anon_sym_LT_GT;
	v->a[27936] = 9;
	v->a[27937] = actions(3);
	v->a[27938] = 1;
	v->a[27939] = sym_comment;
	small_parse_table_1397(v);
}

void	small_parse_table_1397(t_small_parse_table_array *v)
{
	v->a[27940] = actions(782);
	v->a[27941] = 1;
	v->a[27942] = anon_sym_PIPE;
	v->a[27943] = actions(792);
	v->a[27944] = 1;
	v->a[27945] = sym_file_descriptor;
	v->a[27946] = actions(812);
	v->a[27947] = 1;
	v->a[27948] = sym_variable_name;
	v->a[27949] = actions(1055);
	v->a[27950] = 1;
	v->a[27951] = ts_builtin_sym_end;
	v->a[27952] = state(1048);
	v->a[27953] = 2;
	v->a[27954] = sym_variable_assignment;
	v->a[27955] = aux_sym__variable_assignments_repeat1;
	v->a[27956] = state(1046);
	v->a[27957] = 3;
	v->a[27958] = sym_file_redirect;
	v->a[27959] = sym_heredoc_redirect;
	small_parse_table_1398(v);
}

void	small_parse_table_1398(t_small_parse_table_array *v)
{
	v->a[27960] = aux_sym_redirected_statement_repeat1;
	v->a[27961] = actions(1057);
	v->a[27962] = 7;
	v->a[27963] = anon_sym_SEMI_SEMI;
	v->a[27964] = anon_sym_AMP_AMP;
	v->a[27965] = anon_sym_PIPE_PIPE;
	v->a[27966] = anon_sym_LT_LT;
	v->a[27967] = anon_sym_LT_LT_DASH;
	v->a[27968] = aux_sym_heredoc_redirect_token1;
	v->a[27969] = anon_sym_SEMI;
	v->a[27970] = actions(780);
	v->a[27971] = 16;
	v->a[27972] = anon_sym_LT;
	v->a[27973] = anon_sym_GT;
	v->a[27974] = anon_sym_GT_GT;
	v->a[27975] = anon_sym_LT_AMP;
	v->a[27976] = anon_sym_GT_AMP;
	v->a[27977] = anon_sym_GT_PIPE;
	v->a[27978] = anon_sym_LT_GT;
	v->a[27979] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1399(v);
}

void	small_parse_table_1399(t_small_parse_table_array *v)
{
	v->a[27980] = anon_sym_DOLLAR;
	v->a[27981] = anon_sym_DQUOTE;
	v->a[27982] = sym_raw_string;
	v->a[27983] = sym_number;
	v->a[27984] = anon_sym_DOLLAR_LBRACE;
	v->a[27985] = anon_sym_DOLLAR_LPAREN;
	v->a[27986] = anon_sym_BQUOTE;
	v->a[27987] = sym_word;
	v->a[27988] = 12;
	v->a[27989] = actions(3);
	v->a[27990] = 1;
	v->a[27991] = sym_comment;
	v->a[27992] = actions(782);
	v->a[27993] = 1;
	v->a[27994] = anon_sym_PIPE;
	v->a[27995] = actions(784);
	v->a[27996] = 1;
	v->a[27997] = anon_sym_BQUOTE;
	v->a[27998] = actions(792);
	v->a[27999] = 1;
	small_parse_table_1400(v);
}

/* EOF small_parse_table_279.c */
