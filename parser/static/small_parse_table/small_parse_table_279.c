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
	v->a[27900] = anon_sym_AMP_AMP;
	v->a[27901] = anon_sym_PIPE_PIPE;
	v->a[27902] = actions(890);
	v->a[27903] = 2;
	v->a[27904] = anon_sym_LT_AMP_DASH;
	v->a[27905] = anon_sym_GT_AMP_DASH;
	v->a[27906] = state(1619);
	v->a[27907] = 2;
	v->a[27908] = sym_file_redirect;
	v->a[27909] = aux_sym_redirected_statement_repeat2;
	v->a[27910] = actions(882);
	v->a[27911] = 3;
	v->a[27912] = sym_raw_string;
	v->a[27913] = sym_number;
	v->a[27914] = sym_word;
	v->a[27915] = state(1774);
	v->a[27916] = 5;
	v->a[27917] = sym_arithmetic_expansion;
	v->a[27918] = sym_string;
	v->a[27919] = sym_simple_expansion;
	small_parse_table_1396(v);
}

void	small_parse_table_1396(t_small_parse_table_array *v)
{
	v->a[27920] = sym_expansion;
	v->a[27921] = sym_command_substitution;
	v->a[27922] = actions(888);
	v->a[27923] = 6;
	v->a[27924] = anon_sym_LT;
	v->a[27925] = anon_sym_GT;
	v->a[27926] = anon_sym_GT_GT;
	v->a[27927] = anon_sym_LT_AMP;
	v->a[27928] = anon_sym_GT_AMP;
	v->a[27929] = anon_sym_GT_PIPE;
	v->a[27930] = 12;
	v->a[27931] = actions(3);
	v->a[27932] = 1;
	v->a[27933] = sym_comment;
	v->a[27934] = actions(575);
	v->a[27935] = 1;
	v->a[27936] = sym_file_descriptor;
	v->a[27937] = actions(699);
	v->a[27938] = 1;
	v->a[27939] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1397(v);
}

void	small_parse_table_1397(t_small_parse_table_array *v)
{
	v->a[27940] = actions(701);
	v->a[27941] = 1;
	v->a[27942] = anon_sym_DOLLAR;
	v->a[27943] = actions(703);
	v->a[27944] = 1;
	v->a[27945] = anon_sym_DQUOTE;
	v->a[27946] = actions(705);
	v->a[27947] = 1;
	v->a[27948] = anon_sym_DOLLAR_LBRACE;
	v->a[27949] = actions(707);
	v->a[27950] = 1;
	v->a[27951] = anon_sym_DOLLAR_LPAREN;
	v->a[27952] = actions(709);
	v->a[27953] = 1;
	v->a[27954] = anon_sym_BQUOTE;
	v->a[27955] = state(272);
	v->a[27956] = 2;
	v->a[27957] = sym_concatenation;
	v->a[27958] = aux_sym_for_statement_repeat1;
	v->a[27959] = actions(1001);
	small_parse_table_1398(v);
}

void	small_parse_table_1398(t_small_parse_table_array *v)
{
	v->a[27960] = 3;
	v->a[27961] = sym_raw_string;
	v->a[27962] = sym_number;
	v->a[27963] = sym_word;
	v->a[27964] = state(628);
	v->a[27965] = 5;
	v->a[27966] = sym_arithmetic_expansion;
	v->a[27967] = sym_string;
	v->a[27968] = sym_simple_expansion;
	v->a[27969] = sym_expansion;
	v->a[27970] = sym_command_substitution;
	v->a[27971] = actions(573);
	v->a[27972] = 17;
	v->a[27973] = anon_sym_PIPE;
	v->a[27974] = anon_sym_SEMI_SEMI;
	v->a[27975] = anon_sym_AMP_AMP;
	v->a[27976] = anon_sym_PIPE_PIPE;
	v->a[27977] = anon_sym_LT;
	v->a[27978] = anon_sym_GT;
	v->a[27979] = anon_sym_GT_GT;
	small_parse_table_1399(v);
}

void	small_parse_table_1399(t_small_parse_table_array *v)
{
	v->a[27980] = anon_sym_LT_AMP;
	v->a[27981] = anon_sym_GT_AMP;
	v->a[27982] = anon_sym_GT_PIPE;
	v->a[27983] = anon_sym_LT_AMP_DASH;
	v->a[27984] = anon_sym_GT_AMP_DASH;
	v->a[27985] = anon_sym_LT_LT;
	v->a[27986] = anon_sym_LT_LT_DASH;
	v->a[27987] = aux_sym_heredoc_redirect_token1;
	v->a[27988] = anon_sym_AMP;
	v->a[27989] = anon_sym_SEMI;
	v->a[27990] = 16;
	v->a[27991] = actions(870);
	v->a[27992] = 1;
	v->a[27993] = sym_comment;
	v->a[27994] = actions(872);
	v->a[27995] = 1;
	v->a[27996] = anon_sym_EQ;
	v->a[27997] = actions(1051);
	v->a[27998] = 1;
	v->a[27999] = anon_sym_PIPE;
	small_parse_table_1400(v);
}

/* EOF small_parse_table_279.c */
