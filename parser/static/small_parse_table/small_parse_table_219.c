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
	v->a[21900] = 1;
	v->a[21901] = anon_sym_BQUOTE;
	v->a[21902] = state(197);
	v->a[21903] = 2;
	v->a[21904] = sym_concatenation;
	v->a[21905] = aux_sym_for_statement_repeat1;
	v->a[21906] = actions(559);
	v->a[21907] = 3;
	v->a[21908] = sym_file_descriptor;
	v->a[21909] = sym_variable_name;
	v->a[21910] = ts_builtin_sym_end;
	v->a[21911] = actions(561);
	v->a[21912] = 3;
	v->a[21913] = sym_raw_string;
	v->a[21914] = sym_number;
	v->a[21915] = sym_word;
	v->a[21916] = state(368);
	v->a[21917] = 5;
	v->a[21918] = sym_arithmetic_expansion;
	v->a[21919] = sym_string;
	small_parse_table_1096(v);
}

void	small_parse_table_1096(t_small_parse_table_array *v)
{
	v->a[21920] = sym_simple_expansion;
	v->a[21921] = sym_expansion;
	v->a[21922] = sym_command_substitution;
	v->a[21923] = actions(564);
	v->a[21924] = 19;
	v->a[21925] = anon_sym_PIPE;
	v->a[21926] = anon_sym_SEMI_SEMI;
	v->a[21927] = anon_sym_AMP_AMP;
	v->a[21928] = anon_sym_PIPE_PIPE;
	v->a[21929] = anon_sym_LT;
	v->a[21930] = anon_sym_GT;
	v->a[21931] = anon_sym_GT_GT;
	v->a[21932] = anon_sym_AMP_GT;
	v->a[21933] = anon_sym_AMP_GT_GT;
	v->a[21934] = anon_sym_LT_AMP;
	v->a[21935] = anon_sym_GT_AMP;
	v->a[21936] = anon_sym_GT_PIPE;
	v->a[21937] = anon_sym_LT_AMP_DASH;
	v->a[21938] = anon_sym_GT_AMP_DASH;
	v->a[21939] = anon_sym_LT_LT;
	small_parse_table_1097(v);
}

void	small_parse_table_1097(t_small_parse_table_array *v)
{
	v->a[21940] = anon_sym_LT_LT_DASH;
	v->a[21941] = aux_sym_heredoc_redirect_token1;
	v->a[21942] = anon_sym_AMP;
	v->a[21943] = anon_sym_SEMI;
	v->a[21944] = 5;
	v->a[21945] = actions(3);
	v->a[21946] = 1;
	v->a[21947] = sym_comment;
	v->a[21948] = state(197);
	v->a[21949] = 2;
	v->a[21950] = sym_concatenation;
	v->a[21951] = aux_sym_for_statement_repeat1;
	v->a[21952] = actions(543);
	v->a[21953] = 3;
	v->a[21954] = sym_file_descriptor;
	v->a[21955] = sym_variable_name;
	v->a[21956] = ts_builtin_sym_end;
	v->a[21957] = state(368);
	v->a[21958] = 5;
	v->a[21959] = sym_arithmetic_expansion;
	small_parse_table_1098(v);
}

void	small_parse_table_1098(t_small_parse_table_array *v)
{
	v->a[21960] = sym_string;
	v->a[21961] = sym_simple_expansion;
	v->a[21962] = sym_expansion;
	v->a[21963] = sym_command_substitution;
	v->a[21964] = actions(541);
	v->a[21965] = 28;
	v->a[21966] = anon_sym_PIPE;
	v->a[21967] = anon_sym_SEMI_SEMI;
	v->a[21968] = anon_sym_AMP_AMP;
	v->a[21969] = anon_sym_PIPE_PIPE;
	v->a[21970] = anon_sym_LT;
	v->a[21971] = anon_sym_GT;
	v->a[21972] = anon_sym_GT_GT;
	v->a[21973] = anon_sym_AMP_GT;
	v->a[21974] = anon_sym_AMP_GT_GT;
	v->a[21975] = anon_sym_LT_AMP;
	v->a[21976] = anon_sym_GT_AMP;
	v->a[21977] = anon_sym_GT_PIPE;
	v->a[21978] = anon_sym_LT_AMP_DASH;
	v->a[21979] = anon_sym_GT_AMP_DASH;
	small_parse_table_1099(v);
}

void	small_parse_table_1099(t_small_parse_table_array *v)
{
	v->a[21980] = anon_sym_LT_LT;
	v->a[21981] = anon_sym_LT_LT_DASH;
	v->a[21982] = aux_sym_heredoc_redirect_token1;
	v->a[21983] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21984] = anon_sym_AMP;
	v->a[21985] = anon_sym_DOLLAR;
	v->a[21986] = anon_sym_DQUOTE;
	v->a[21987] = sym_raw_string;
	v->a[21988] = sym_number;
	v->a[21989] = anon_sym_DOLLAR_LBRACE;
	v->a[21990] = anon_sym_DOLLAR_LPAREN;
	v->a[21991] = anon_sym_BQUOTE;
	v->a[21992] = sym_word;
	v->a[21993] = anon_sym_SEMI;
	v->a[21994] = 14;
	v->a[21995] = actions(3);
	v->a[21996] = 1;
	v->a[21997] = sym_comment;
	v->a[21998] = actions(536);
	v->a[21999] = 1;
	small_parse_table_1100(v);
}

/* EOF small_parse_table_219.c */
