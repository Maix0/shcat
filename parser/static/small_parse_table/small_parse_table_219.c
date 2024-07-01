/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_219.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1095(t_small_parse_table_array *v)
{
	v->a[21900] = anon_sym_PIPE;
	v->a[21901] = anon_sym_SEMI_SEMI;
	v->a[21902] = anon_sym_AMP_AMP;
	v->a[21903] = anon_sym_PIPE_PIPE;
	v->a[21904] = anon_sym_LT;
	v->a[21905] = anon_sym_GT;
	v->a[21906] = anon_sym_GT_GT;
	v->a[21907] = anon_sym_LT_AMP;
	v->a[21908] = anon_sym_GT_AMP;
	v->a[21909] = anon_sym_GT_PIPE;
	v->a[21910] = anon_sym_LT_GT;
	v->a[21911] = anon_sym_LT_LT;
	v->a[21912] = anon_sym_LT_LT_DASH;
	v->a[21913] = aux_sym_heredoc_redirect_token1;
	v->a[21914] = anon_sym_AMP;
	v->a[21915] = anon_sym_SEMI;
	v->a[21916] = 5;
	v->a[21917] = actions(3);
	v->a[21918] = 1;
	v->a[21919] = sym_comment;
	small_parse_table_1096(v);
}

void	small_parse_table_1096(t_small_parse_table_array *v)
{
	v->a[21920] = actions(552);
	v->a[21921] = 2;
	v->a[21922] = sym_file_descriptor;
	v->a[21923] = sym_variable_name;
	v->a[21924] = state(257);
	v->a[21925] = 2;
	v->a[21926] = sym_concatenation;
	v->a[21927] = aux_sym_for_statement_repeat1;
	v->a[21928] = state(459);
	v->a[21929] = 5;
	v->a[21930] = sym_arithmetic_expansion;
	v->a[21931] = sym_string;
	v->a[21932] = sym_simple_expansion;
	v->a[21933] = sym_expansion;
	v->a[21934] = sym_command_substitution;
	v->a[21935] = actions(554);
	v->a[21936] = 25;
	v->a[21937] = anon_sym_PIPE;
	v->a[21938] = anon_sym_SEMI_SEMI;
	v->a[21939] = anon_sym_AMP_AMP;
	small_parse_table_1097(v);
}

void	small_parse_table_1097(t_small_parse_table_array *v)
{
	v->a[21940] = anon_sym_PIPE_PIPE;
	v->a[21941] = anon_sym_LT;
	v->a[21942] = anon_sym_GT;
	v->a[21943] = anon_sym_GT_GT;
	v->a[21944] = anon_sym_LT_AMP;
	v->a[21945] = anon_sym_GT_AMP;
	v->a[21946] = anon_sym_GT_PIPE;
	v->a[21947] = anon_sym_LT_GT;
	v->a[21948] = anon_sym_LT_LT;
	v->a[21949] = anon_sym_LT_LT_DASH;
	v->a[21950] = aux_sym_heredoc_redirect_token1;
	v->a[21951] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21952] = anon_sym_AMP;
	v->a[21953] = anon_sym_DOLLAR;
	v->a[21954] = anon_sym_DQUOTE;
	v->a[21955] = sym_raw_string;
	v->a[21956] = sym_number;
	v->a[21957] = anon_sym_DOLLAR_LBRACE;
	v->a[21958] = anon_sym_DOLLAR_LPAREN;
	v->a[21959] = anon_sym_BQUOTE;
	small_parse_table_1098(v);
}

void	small_parse_table_1098(t_small_parse_table_array *v)
{
	v->a[21960] = sym_word;
	v->a[21961] = anon_sym_SEMI;
	v->a[21962] = 12;
	v->a[21963] = actions(3);
	v->a[21964] = 1;
	v->a[21965] = sym_comment;
	v->a[21966] = actions(736);
	v->a[21967] = 1;
	v->a[21968] = anon_sym_PIPE;
	v->a[21969] = actions(738);
	v->a[21970] = 1;
	v->a[21971] = anon_sym_RPAREN;
	v->a[21972] = actions(746);
	v->a[21973] = 1;
	v->a[21974] = sym_file_descriptor;
	v->a[21975] = actions(748);
	v->a[21976] = 1;
	v->a[21977] = sym_variable_name;
	v->a[21978] = state(631);
	v->a[21979] = 1;
	small_parse_table_1099(v);
}

void	small_parse_table_1099(t_small_parse_table_array *v)
{
	v->a[21980] = sym_terminator;
	v->a[21981] = actions(742);
	v->a[21982] = 2;
	v->a[21983] = anon_sym_AMP_AMP;
	v->a[21984] = anon_sym_PIPE_PIPE;
	v->a[21985] = actions(744);
	v->a[21986] = 2;
	v->a[21987] = anon_sym_LT_LT;
	v->a[21988] = anon_sym_LT_LT_DASH;
	v->a[21989] = state(1045);
	v->a[21990] = 2;
	v->a[21991] = sym_variable_assignment;
	v->a[21992] = aux_sym__variable_assignments_repeat1;
	v->a[21993] = state(1080);
	v->a[21994] = 3;
	v->a[21995] = sym_file_redirect;
	v->a[21996] = sym_heredoc_redirect;
	v->a[21997] = aux_sym_redirected_statement_repeat1;
	v->a[21998] = actions(740);
	v->a[21999] = 4;
	small_parse_table_1100(v);
}

/* EOF small_parse_table_219.c */
