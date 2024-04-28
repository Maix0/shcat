/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2629.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13145(t_small_parse_table_array *v)
{
	v->a[262900] = anon_sym_esac;
	v->a[262901] = anon_sym_SEMI_SEMI;
	v->a[262902] = anon_sym_SEMI_AMP;
	v->a[262903] = anon_sym_SEMI_SEMI_AMP;
	v->a[262904] = anon_sym_PIPE_AMP;
	v->a[262905] = anon_sym_AMP_GT;
	v->a[262906] = anon_sym_AMP_GT_GT;
	v->a[262907] = anon_sym_LT_AMP;
	v->a[262908] = anon_sym_GT_AMP;
	v->a[262909] = anon_sym_GT_PIPE;
	v->a[262910] = anon_sym_LT_AMP_DASH;
	v->a[262911] = anon_sym_GT_AMP_DASH;
	v->a[262912] = anon_sym_LT_LT_DASH;
	v->a[262913] = anon_sym_LT_LT_LT;
	v->a[262914] = 6;
	v->a[262915] = actions(3);
	v->a[262916] = 1;
	v->a[262917] = sym_comment;
	v->a[262918] = actions(12038);
	v->a[262919] = 1;
	small_parse_table_13146(v);
}

void	small_parse_table_13146(t_small_parse_table_array *v)
{
	v->a[262920] = sym_variable_name;
	v->a[262921] = state(6727);
	v->a[262922] = 1;
	v->a[262923] = sym_subscript;
	v->a[262924] = actions(11329);
	v->a[262925] = 2;
	v->a[262926] = sym_file_descriptor;
	v->a[262927] = aux_sym_heredoc_redirect_token1;
	v->a[262928] = state(4784);
	v->a[262929] = 2;
	v->a[262930] = sym_variable_assignment;
	v->a[262931] = aux_sym_variable_assignments_repeat1;
	v->a[262932] = actions(11327);
	v->a[262933] = 19;
	v->a[262934] = anon_sym_SEMI;
	v->a[262935] = anon_sym_PIPE_PIPE;
	v->a[262936] = anon_sym_AMP_AMP;
	v->a[262937] = anon_sym_PIPE;
	v->a[262938] = anon_sym_AMP;
	v->a[262939] = anon_sym_LT;
	small_parse_table_13147(v);
}

void	small_parse_table_13147(t_small_parse_table_array *v)
{
	v->a[262940] = anon_sym_GT;
	v->a[262941] = anon_sym_LT_LT;
	v->a[262942] = anon_sym_GT_GT;
	v->a[262943] = anon_sym_SEMI_SEMI;
	v->a[262944] = anon_sym_PIPE_AMP;
	v->a[262945] = anon_sym_AMP_GT;
	v->a[262946] = anon_sym_AMP_GT_GT;
	v->a[262947] = anon_sym_LT_AMP;
	v->a[262948] = anon_sym_GT_AMP;
	v->a[262949] = anon_sym_GT_PIPE;
	v->a[262950] = anon_sym_LT_AMP_DASH;
	v->a[262951] = anon_sym_GT_AMP_DASH;
	v->a[262952] = anon_sym_LT_LT_DASH;
	v->a[262953] = 3;
	v->a[262954] = actions(3);
	v->a[262955] = 1;
	v->a[262956] = sym_comment;
	v->a[262957] = actions(1263);
	v->a[262958] = 2;
	v->a[262959] = sym_file_descriptor;
	small_parse_table_13148(v);
}

void	small_parse_table_13148(t_small_parse_table_array *v)
{
	v->a[262960] = aux_sym_heredoc_redirect_token1;
	v->a[262961] = actions(1261);
	v->a[262962] = 23;
	v->a[262963] = anon_sym_SEMI;
	v->a[262964] = anon_sym_PIPE_PIPE;
	v->a[262965] = anon_sym_AMP_AMP;
	v->a[262966] = anon_sym_PIPE;
	v->a[262967] = anon_sym_AMP;
	v->a[262968] = anon_sym_LT;
	v->a[262969] = anon_sym_GT;
	v->a[262970] = anon_sym_LT_LT;
	v->a[262971] = anon_sym_GT_GT;
	v->a[262972] = anon_sym_esac;
	v->a[262973] = anon_sym_SEMI_SEMI;
	v->a[262974] = anon_sym_SEMI_AMP;
	v->a[262975] = anon_sym_SEMI_SEMI_AMP;
	v->a[262976] = anon_sym_PIPE_AMP;
	v->a[262977] = anon_sym_AMP_GT;
	v->a[262978] = anon_sym_AMP_GT_GT;
	v->a[262979] = anon_sym_LT_AMP;
	small_parse_table_13149(v);
}

void	small_parse_table_13149(t_small_parse_table_array *v)
{
	v->a[262980] = anon_sym_GT_AMP;
	v->a[262981] = anon_sym_GT_PIPE;
	v->a[262982] = anon_sym_LT_AMP_DASH;
	v->a[262983] = anon_sym_GT_AMP_DASH;
	v->a[262984] = anon_sym_LT_LT_DASH;
	v->a[262985] = sym__special_character;
	v->a[262986] = 3;
	v->a[262987] = actions(3);
	v->a[262988] = 1;
	v->a[262989] = sym_comment;
	v->a[262990] = actions(2074);
	v->a[262991] = 2;
	v->a[262992] = sym_file_descriptor;
	v->a[262993] = aux_sym_heredoc_redirect_token1;
	v->a[262994] = actions(2072);
	v->a[262995] = 23;
	v->a[262996] = anon_sym_SEMI;
	v->a[262997] = anon_sym_PIPE_PIPE;
	v->a[262998] = anon_sym_AMP_AMP;
	v->a[262999] = anon_sym_PIPE;
	small_parse_table_13150(v);
}

/* EOF small_parse_table_2629.c */
