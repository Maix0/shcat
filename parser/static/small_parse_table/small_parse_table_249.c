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
	v->a[24900] = anon_sym_PIPE;
	v->a[24901] = anon_sym_PIPE_AMP;
	v->a[24902] = actions(876);
	v->a[24903] = 2;
	v->a[24904] = anon_sym_AMP_AMP;
	v->a[24905] = anon_sym_PIPE_PIPE;
	v->a[24906] = actions(880);
	v->a[24907] = 2;
	v->a[24908] = anon_sym_LT_AMP_DASH;
	v->a[24909] = anon_sym_GT_AMP_DASH;
	v->a[24910] = state(1689);
	v->a[24911] = 2;
	v->a[24912] = sym_file_redirect;
	v->a[24913] = aux_sym_redirected_statement_repeat2;
	v->a[24914] = actions(872);
	v->a[24915] = 3;
	v->a[24916] = sym_raw_string;
	v->a[24917] = sym_number;
	v->a[24918] = sym_word;
	v->a[24919] = state(1944);
	small_parse_table_1246(v);
}

void	small_parse_table_1246(t_small_parse_table_array *v)
{
	v->a[24920] = 5;
	v->a[24921] = sym_arithmetic_expansion;
	v->a[24922] = sym_string;
	v->a[24923] = sym_simple_expansion;
	v->a[24924] = sym_expansion;
	v->a[24925] = sym_command_substitution;
	v->a[24926] = actions(878);
	v->a[24927] = 8;
	v->a[24928] = anon_sym_LT;
	v->a[24929] = anon_sym_GT;
	v->a[24930] = anon_sym_GT_GT;
	v->a[24931] = anon_sym_AMP_GT;
	v->a[24932] = anon_sym_AMP_GT_GT;
	v->a[24933] = anon_sym_LT_AMP;
	v->a[24934] = anon_sym_GT_AMP;
	v->a[24935] = anon_sym_GT_PIPE;
	v->a[24936] = 7;
	v->a[24937] = actions(3);
	v->a[24938] = 1;
	v->a[24939] = sym_comment;
	small_parse_table_1247(v);
}

void	small_parse_table_1247(t_small_parse_table_array *v)
{
	v->a[24940] = actions(852);
	v->a[24941] = 1;
	v->a[24942] = sym_variable_name;
	v->a[24943] = actions(900);
	v->a[24944] = 1;
	v->a[24945] = sym_file_descriptor;
	v->a[24946] = state(1216);
	v->a[24947] = 2;
	v->a[24948] = sym_variable_assignment;
	v->a[24949] = aux_sym_variable_assignments_repeat1;
	v->a[24950] = state(1214);
	v->a[24951] = 3;
	v->a[24952] = sym_file_redirect;
	v->a[24953] = sym_heredoc_redirect;
	v->a[24954] = aux_sym_redirected_statement_repeat1;
	v->a[24955] = actions(805);
	v->a[24956] = 9;
	v->a[24957] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[24958] = anon_sym_DOLLAR;
	v->a[24959] = anon_sym_DQUOTE;
	small_parse_table_1248(v);
}

void	small_parse_table_1248(t_small_parse_table_array *v)
{
	v->a[24960] = sym_raw_string;
	v->a[24961] = sym_number;
	v->a[24962] = anon_sym_DOLLAR_LBRACE;
	v->a[24963] = anon_sym_DOLLAR_LPAREN;
	v->a[24964] = anon_sym_BQUOTE;
	v->a[24965] = sym_word;
	v->a[24966] = actions(807);
	v->a[24967] = 20;
	v->a[24968] = anon_sym_esac;
	v->a[24969] = anon_sym_PIPE;
	v->a[24970] = anon_sym_SEMI_SEMI;
	v->a[24971] = anon_sym_AMP_AMP;
	v->a[24972] = anon_sym_PIPE_PIPE;
	v->a[24973] = anon_sym_LT;
	v->a[24974] = anon_sym_GT;
	v->a[24975] = anon_sym_GT_GT;
	v->a[24976] = anon_sym_AMP_GT;
	v->a[24977] = anon_sym_AMP_GT_GT;
	v->a[24978] = anon_sym_LT_AMP;
	v->a[24979] = anon_sym_GT_AMP;
	small_parse_table_1249(v);
}

void	small_parse_table_1249(t_small_parse_table_array *v)
{
	v->a[24980] = anon_sym_GT_PIPE;
	v->a[24981] = anon_sym_LT_AMP_DASH;
	v->a[24982] = anon_sym_GT_AMP_DASH;
	v->a[24983] = anon_sym_LT_LT;
	v->a[24984] = anon_sym_LT_LT_DASH;
	v->a[24985] = aux_sym_heredoc_redirect_token1;
	v->a[24986] = anon_sym_AMP;
	v->a[24987] = anon_sym_SEMI;
	v->a[24988] = 6;
	v->a[24989] = actions(3);
	v->a[24990] = 1;
	v->a[24991] = sym_comment;
	v->a[24992] = actions(379);
	v->a[24993] = 1;
	v->a[24994] = sym_file_descriptor;
	v->a[24995] = actions(906);
	v->a[24996] = 1;
	v->a[24997] = sym_variable_name;
	v->a[24998] = actions(904);
	v->a[24999] = 2;
	small_parse_table_1250(v);
}

/* EOF small_parse_table_249.c */
