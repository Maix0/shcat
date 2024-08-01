/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_439.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2195(t_small_parse_table_array *v)
{
	v->a[43900] = anon_sym_PIPE;
	v->a[43901] = anon_sym_SEMI_SEMI;
	v->a[43902] = anon_sym_AMP_AMP;
	v->a[43903] = anon_sym_PIPE_PIPE;
	v->a[43904] = anon_sym_LT;
	v->a[43905] = anon_sym_GT;
	v->a[43906] = anon_sym_GT_GT;
	v->a[43907] = anon_sym_LT_LT;
	v->a[43908] = anon_sym_SEMI;
	v->a[43909] = 12;
	v->a[43910] = actions(3);
	v->a[43911] = 1;
	v->a[43912] = sym_comment;
	v->a[43913] = actions(784);
	v->a[43914] = 1;
	v->a[43915] = anon_sym_DOLLAR;
	v->a[43916] = actions(786);
	v->a[43917] = 1;
	v->a[43918] = anon_sym_DQUOTE;
	v->a[43919] = actions(788);
	small_parse_table_2196(v);
}

void	small_parse_table_2196(t_small_parse_table_array *v)
{
	v->a[43920] = 1;
	v->a[43921] = anon_sym_DOLLAR_LBRACE;
	v->a[43922] = actions(790);
	v->a[43923] = 1;
	v->a[43924] = anon_sym_DOLLAR_LPAREN;
	v->a[43925] = actions(792);
	v->a[43926] = 1;
	v->a[43927] = anon_sym_BQUOTE;
	v->a[43928] = actions(1834);
	v->a[43929] = 1;
	v->a[43930] = aux_sym__word_no_brace_token1;
	v->a[43931] = actions(1928);
	v->a[43932] = 1;
	v->a[43933] = sym_raw_string;
	v->a[43934] = actions(1930);
	v->a[43935] = 1;
	v->a[43936] = sym_variable_name;
	v->a[43937] = actions(1932);
	v->a[43938] = 1;
	v->a[43939] = sym__expansion_word;
	small_parse_table_2197(v);
}

void	small_parse_table_2197(t_small_parse_table_array *v)
{
	v->a[43940] = state(1544);
	v->a[43941] = 1;
	v->a[43942] = sym__word_no_brace;
	v->a[43943] = state(1543);
	v->a[43944] = 4;
	v->a[43945] = sym_string;
	v->a[43946] = sym_simple_expansion;
	v->a[43947] = sym_expansion;
	v->a[43948] = sym_command_substitution;
	v->a[43949] = 9;
	v->a[43950] = actions(3);
	v->a[43951] = 1;
	v->a[43952] = sym_comment;
	v->a[43953] = actions(584);
	v->a[43954] = 1;
	v->a[43955] = anon_sym_LT_LT;
	v->a[43956] = actions(586);
	v->a[43957] = 1;
	v->a[43958] = anon_sym_SEMI;
	v->a[43959] = actions(1878);
	small_parse_table_2198(v);
}

void	small_parse_table_2198(t_small_parse_table_array *v)
{
	v->a[43960] = 1;
	v->a[43961] = aux_sym_heredoc_redirect_token1;
	v->a[43962] = state(381);
	v->a[43963] = 1;
	v->a[43964] = sym_terminator;
	v->a[43965] = actions(578);
	v->a[43966] = 2;
	v->a[43967] = anon_sym_esac;
	v->a[43968] = anon_sym_SEMI_SEMI;
	v->a[43969] = actions(582);
	v->a[43970] = 2;
	v->a[43971] = anon_sym_AMP_AMP;
	v->a[43972] = anon_sym_PIPE_PIPE;
	v->a[43973] = actions(1876);
	v->a[43974] = 3;
	v->a[43975] = anon_sym_LT;
	v->a[43976] = anon_sym_GT;
	v->a[43977] = anon_sym_GT_GT;
	v->a[43978] = state(971);
	v->a[43979] = 3;
	small_parse_table_2199(v);
}

void	small_parse_table_2199(t_small_parse_table_array *v)
{
	v->a[43980] = sym_file_redirect;
	v->a[43981] = sym_heredoc_redirect;
	v->a[43982] = aux_sym_redirected_statement_repeat1;
	v->a[43983] = 3;
	v->a[43984] = actions(3);
	v->a[43985] = 1;
	v->a[43986] = sym_comment;
	v->a[43987] = actions(1093);
	v->a[43988] = 3;
	v->a[43989] = sym__concat;
	v->a[43990] = sym_variable_name;
	v->a[43991] = aux_sym_heredoc_redirect_token1;
	v->a[43992] = actions(1091);
	v->a[43993] = 11;
	v->a[43994] = anon_sym_esac;
	v->a[43995] = anon_sym_PIPE;
	v->a[43996] = anon_sym_SEMI_SEMI;
	v->a[43997] = anon_sym_AMP_AMP;
	v->a[43998] = anon_sym_PIPE_PIPE;
	v->a[43999] = anon_sym_LT;
	small_parse_table_2200(v);
}

/* EOF small_parse_table_439.c */
