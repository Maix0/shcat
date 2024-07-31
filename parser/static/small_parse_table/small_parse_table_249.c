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
	v->a[24900] = sym_comment;
	v->a[24901] = actions(746);
	v->a[24902] = 1;
	v->a[24903] = anon_sym_PIPE;
	v->a[24904] = actions(842);
	v->a[24905] = 1;
	v->a[24906] = anon_sym_SEMI_SEMI;
	v->a[24907] = actions(900);
	v->a[24908] = 1;
	v->a[24909] = sym_variable_name;
	v->a[24910] = state(530);
	v->a[24911] = 1;
	v->a[24912] = sym_terminator;
	v->a[24913] = actions(850);
	v->a[24914] = 2;
	v->a[24915] = anon_sym_LT_LT;
	v->a[24916] = anon_sym_LT_LT_DASH;
	v->a[24917] = actions(858);
	v->a[24918] = 2;
	v->a[24919] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1246(v);
}

void	small_parse_table_1246(t_small_parse_table_array *v)
{
	v->a[24920] = anon_sym_SEMI;
	v->a[24921] = actions(898);
	v->a[24922] = 2;
	v->a[24923] = anon_sym_AMP_AMP;
	v->a[24924] = anon_sym_PIPE_PIPE;
	v->a[24925] = state(1002);
	v->a[24926] = 2;
	v->a[24927] = sym_variable_assignment;
	v->a[24928] = aux_sym__variable_assignments_repeat1;
	v->a[24929] = state(984);
	v->a[24930] = 3;
	v->a[24931] = sym_file_redirect;
	v->a[24932] = sym_heredoc_redirect;
	v->a[24933] = aux_sym_redirected_statement_repeat1;
	v->a[24934] = actions(742);
	v->a[24935] = 16;
	v->a[24936] = anon_sym_LT;
	v->a[24937] = anon_sym_GT;
	v->a[24938] = anon_sym_GT_GT;
	v->a[24939] = anon_sym_LT_AMP;
	small_parse_table_1247(v);
}

void	small_parse_table_1247(t_small_parse_table_array *v)
{
	v->a[24940] = anon_sym_GT_AMP;
	v->a[24941] = anon_sym_GT_PIPE;
	v->a[24942] = anon_sym_LT_GT;
	v->a[24943] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24944] = anon_sym_DOLLAR;
	v->a[24945] = anon_sym_DQUOTE;
	v->a[24946] = sym_raw_string;
	v->a[24947] = sym_number;
	v->a[24948] = anon_sym_DOLLAR_LBRACE;
	v->a[24949] = anon_sym_DOLLAR_LPAREN;
	v->a[24950] = anon_sym_BQUOTE;
	v->a[24951] = sym_word;
	v->a[24952] = 6;
	v->a[24953] = actions(3);
	v->a[24954] = 1;
	v->a[24955] = sym_comment;
	v->a[24956] = actions(754);
	v->a[24957] = 1;
	v->a[24958] = sym_variable_name;
	v->a[24959] = state(929);
	small_parse_table_1248(v);
}

void	small_parse_table_1248(t_small_parse_table_array *v)
{
	v->a[24960] = 2;
	v->a[24961] = sym_variable_assignment;
	v->a[24962] = aux_sym__variable_assignments_repeat1;
	v->a[24963] = state(931);
	v->a[24964] = 3;
	v->a[24965] = sym_file_redirect;
	v->a[24966] = sym_heredoc_redirect;
	v->a[24967] = aux_sym_redirected_statement_repeat1;
	v->a[24968] = actions(742);
	v->a[24969] = 9;
	v->a[24970] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24971] = anon_sym_DOLLAR;
	v->a[24972] = anon_sym_DQUOTE;
	v->a[24973] = sym_raw_string;
	v->a[24974] = sym_number;
	v->a[24975] = anon_sym_DOLLAR_LBRACE;
	v->a[24976] = anon_sym_DOLLAR_LPAREN;
	v->a[24977] = anon_sym_BQUOTE;
	v->a[24978] = sym_word;
	v->a[24979] = actions(746);
	small_parse_table_1249(v);
}

void	small_parse_table_1249(t_small_parse_table_array *v)
{
	v->a[24980] = 16;
	v->a[24981] = anon_sym_esac;
	v->a[24982] = anon_sym_PIPE;
	v->a[24983] = anon_sym_SEMI_SEMI;
	v->a[24984] = anon_sym_AMP_AMP;
	v->a[24985] = anon_sym_PIPE_PIPE;
	v->a[24986] = anon_sym_LT;
	v->a[24987] = anon_sym_GT;
	v->a[24988] = anon_sym_GT_GT;
	v->a[24989] = anon_sym_LT_AMP;
	v->a[24990] = anon_sym_GT_AMP;
	v->a[24991] = anon_sym_GT_PIPE;
	v->a[24992] = anon_sym_LT_GT;
	v->a[24993] = anon_sym_LT_LT;
	v->a[24994] = anon_sym_LT_LT_DASH;
	v->a[24995] = aux_sym_heredoc_redirect_token1;
	v->a[24996] = anon_sym_SEMI;
	v->a[24997] = 19;
	v->a[24998] = actions(3);
	v->a[24999] = 1;
	small_parse_table_1250(v);
}

/* EOF small_parse_table_249.c */
