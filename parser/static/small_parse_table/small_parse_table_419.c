/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_419.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2095(t_small_parse_table_array *v)
{
	v->a[41900] = anon_sym_DOLLAR;
	v->a[41901] = anon_sym_DQUOTE;
	v->a[41902] = sym_raw_string;
	v->a[41903] = aux_sym_number_token1;
	v->a[41904] = aux_sym_number_token2;
	v->a[41905] = anon_sym_DOLLAR_LBRACE;
	v->a[41906] = anon_sym_DOLLAR_LPAREN;
	v->a[41907] = anon_sym_BQUOTE;
	v->a[41908] = sym_word;
	v->a[41909] = anon_sym_SEMI;
	v->a[41910] = 6;
	v->a[41911] = actions(3);
	v->a[41912] = 1;
	v->a[41913] = sym_comment;
	v->a[41914] = actions(1210);
	v->a[41915] = 1;
	v->a[41916] = sym_file_descriptor;
	v->a[41917] = actions(1509);
	v->a[41918] = 1;
	v->a[41919] = aux_sym_concatenation_token1;
	small_parse_table_2096(v);
}

void	small_parse_table_2096(t_small_parse_table_array *v)
{
	v->a[41920] = actions(1533);
	v->a[41921] = 1;
	v->a[41922] = sym__concat;
	v->a[41923] = state(653);
	v->a[41924] = 1;
	v->a[41925] = aux_sym_concatenation_repeat1;
	v->a[41926] = actions(1206);
	v->a[41927] = 29;
	v->a[41928] = anon_sym_PIPE;
	v->a[41929] = anon_sym_SEMI_SEMI;
	v->a[41930] = anon_sym_AMP_AMP;
	v->a[41931] = anon_sym_PIPE_PIPE;
	v->a[41932] = anon_sym_LT;
	v->a[41933] = anon_sym_GT;
	v->a[41934] = anon_sym_GT_GT;
	v->a[41935] = anon_sym_AMP_GT;
	v->a[41936] = anon_sym_AMP_GT_GT;
	v->a[41937] = anon_sym_LT_AMP;
	v->a[41938] = anon_sym_GT_AMP;
	v->a[41939] = anon_sym_GT_PIPE;
	small_parse_table_2097(v);
}

void	small_parse_table_2097(t_small_parse_table_array *v)
{
	v->a[41940] = anon_sym_LT_AMP_DASH;
	v->a[41941] = anon_sym_GT_AMP_DASH;
	v->a[41942] = anon_sym_LT_LT;
	v->a[41943] = anon_sym_LT_LT_DASH;
	v->a[41944] = aux_sym_heredoc_redirect_token1;
	v->a[41945] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41946] = anon_sym_AMP;
	v->a[41947] = anon_sym_DOLLAR;
	v->a[41948] = anon_sym_DQUOTE;
	v->a[41949] = sym_raw_string;
	v->a[41950] = aux_sym_number_token1;
	v->a[41951] = aux_sym_number_token2;
	v->a[41952] = anon_sym_DOLLAR_LBRACE;
	v->a[41953] = anon_sym_DOLLAR_LPAREN;
	v->a[41954] = anon_sym_BQUOTE;
	v->a[41955] = sym_word;
	v->a[41956] = anon_sym_SEMI;
	v->a[41957] = 19;
	v->a[41958] = actions(3);
	v->a[41959] = 1;
	small_parse_table_2098(v);
}

void	small_parse_table_2098(t_small_parse_table_array *v)
{
	v->a[41960] = sym_comment;
	v->a[41961] = actions(63);
	v->a[41962] = 1;
	v->a[41963] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41964] = actions(65);
	v->a[41965] = 1;
	v->a[41966] = anon_sym_DOLLAR;
	v->a[41967] = actions(67);
	v->a[41968] = 1;
	v->a[41969] = anon_sym_DQUOTE;
	v->a[41970] = actions(71);
	v->a[41971] = 1;
	v->a[41972] = aux_sym_number_token1;
	v->a[41973] = actions(73);
	v->a[41974] = 1;
	v->a[41975] = aux_sym_number_token2;
	v->a[41976] = actions(75);
	v->a[41977] = 1;
	v->a[41978] = anon_sym_DOLLAR_LBRACE;
	v->a[41979] = actions(77);
	small_parse_table_2099(v);
}

void	small_parse_table_2099(t_small_parse_table_array *v)
{
	v->a[41980] = 1;
	v->a[41981] = anon_sym_DOLLAR_LPAREN;
	v->a[41982] = actions(79);
	v->a[41983] = 1;
	v->a[41984] = anon_sym_BQUOTE;
	v->a[41985] = actions(405);
	v->a[41986] = 1;
	v->a[41987] = sym_variable_name;
	v->a[41988] = actions(1102);
	v->a[41989] = 1;
	v->a[41990] = sym_file_descriptor;
	v->a[41991] = state(178);
	v->a[41992] = 1;
	v->a[41993] = sym_command_name;
	v->a[41994] = state(582);
	v->a[41995] = 1;
	v->a[41996] = sym_concatenation;
	v->a[41997] = state(1237);
	v->a[41998] = 1;
	v->a[41999] = sym_file_redirect;
	small_parse_table_2100(v);
}

/* EOF small_parse_table_419.c */
