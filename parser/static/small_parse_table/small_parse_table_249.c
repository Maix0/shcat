/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_249.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1245(t_small_parse_table_array *v)
{
	v->a[24900] = sym_string;
	v->a[24901] = sym_simple_expansion;
	v->a[24902] = sym_expansion;
	v->a[24903] = sym_command_substitution;
	v->a[24904] = actions(540);
	v->a[24905] = 20;
	v->a[24906] = anon_sym_PIPE;
	v->a[24907] = anon_sym_SEMI_SEMI;
	v->a[24908] = anon_sym_AMP_AMP;
	v->a[24909] = anon_sym_PIPE_PIPE;
	v->a[24910] = anon_sym_LT;
	v->a[24911] = anon_sym_GT;
	v->a[24912] = anon_sym_GT_GT;
	v->a[24913] = anon_sym_AMP_GT;
	v->a[24914] = anon_sym_AMP_GT_GT;
	v->a[24915] = anon_sym_LT_AMP;
	v->a[24916] = anon_sym_GT_AMP;
	v->a[24917] = anon_sym_GT_PIPE;
	v->a[24918] = anon_sym_LT_AMP_DASH;
	v->a[24919] = anon_sym_GT_AMP_DASH;
	small_parse_table_1246(v);
}

void	small_parse_table_1246(t_small_parse_table_array *v)
{
	v->a[24920] = anon_sym_LT_LT;
	v->a[24921] = anon_sym_LT_LT_DASH;
	v->a[24922] = aux_sym_heredoc_redirect_token1;
	v->a[24923] = anon_sym_AMP;
	v->a[24924] = anon_sym_BQUOTE;
	v->a[24925] = anon_sym_SEMI;
	v->a[24926] = 7;
	v->a[24927] = actions(3);
	v->a[24928] = 1;
	v->a[24929] = sym_comment;
	v->a[24930] = actions(776);
	v->a[24931] = 1;
	v->a[24932] = sym_variable_name;
	v->a[24933] = actions(875);
	v->a[24934] = 1;
	v->a[24935] = sym_file_descriptor;
	v->a[24936] = state(1136);
	v->a[24937] = 2;
	v->a[24938] = sym_variable_assignment;
	v->a[24939] = aux_sym__variable_assignments_repeat1;
	small_parse_table_1247(v);
}

void	small_parse_table_1247(t_small_parse_table_array *v)
{
	v->a[24940] = state(1123);
	v->a[24941] = 3;
	v->a[24942] = sym_file_redirect;
	v->a[24943] = sym_heredoc_redirect;
	v->a[24944] = aux_sym_redirected_statement_repeat1;
	v->a[24945] = actions(762);
	v->a[24946] = 9;
	v->a[24947] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24948] = anon_sym_DOLLAR;
	v->a[24949] = anon_sym_DQUOTE;
	v->a[24950] = sym_raw_string;
	v->a[24951] = sym_number;
	v->a[24952] = anon_sym_DOLLAR_LBRACE;
	v->a[24953] = anon_sym_DOLLAR_LPAREN;
	v->a[24954] = anon_sym_BQUOTE;
	v->a[24955] = sym_word;
	v->a[24956] = actions(766);
	v->a[24957] = 20;
	v->a[24958] = anon_sym_esac;
	v->a[24959] = anon_sym_PIPE;
	small_parse_table_1248(v);
}

void	small_parse_table_1248(t_small_parse_table_array *v)
{
	v->a[24960] = anon_sym_SEMI_SEMI;
	v->a[24961] = anon_sym_AMP_AMP;
	v->a[24962] = anon_sym_PIPE_PIPE;
	v->a[24963] = anon_sym_LT;
	v->a[24964] = anon_sym_GT;
	v->a[24965] = anon_sym_GT_GT;
	v->a[24966] = anon_sym_AMP_GT;
	v->a[24967] = anon_sym_AMP_GT_GT;
	v->a[24968] = anon_sym_LT_AMP;
	v->a[24969] = anon_sym_GT_AMP;
	v->a[24970] = anon_sym_GT_PIPE;
	v->a[24971] = anon_sym_LT_AMP_DASH;
	v->a[24972] = anon_sym_GT_AMP_DASH;
	v->a[24973] = anon_sym_LT_LT;
	v->a[24974] = anon_sym_LT_LT_DASH;
	v->a[24975] = aux_sym_heredoc_redirect_token1;
	v->a[24976] = anon_sym_AMP;
	v->a[24977] = anon_sym_SEMI;
	v->a[24978] = 12;
	v->a[24979] = actions(3);
	small_parse_table_1249(v);
}

void	small_parse_table_1249(t_small_parse_table_array *v)
{
	v->a[24980] = 1;
	v->a[24981] = sym_comment;
	v->a[24982] = actions(760);
	v->a[24983] = 1;
	v->a[24984] = sym_file_descriptor;
	v->a[24985] = actions(879);
	v->a[24986] = 1;
	v->a[24987] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24988] = actions(881);
	v->a[24989] = 1;
	v->a[24990] = anon_sym_DOLLAR;
	v->a[24991] = actions(883);
	v->a[24992] = 1;
	v->a[24993] = anon_sym_DQUOTE;
	v->a[24994] = actions(885);
	v->a[24995] = 1;
	v->a[24996] = anon_sym_DOLLAR_LBRACE;
	v->a[24997] = actions(887);
	v->a[24998] = 1;
	v->a[24999] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1250(v);
}

/* EOF small_parse_table_249.c */
