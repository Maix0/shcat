/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2939.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14695(t_small_parse_table_array *v)
{
	v->a[293900] = actions(12294);
	v->a[293901] = 7;
	v->a[293902] = anon_sym_PIPE;
	v->a[293903] = anon_sym_LT;
	v->a[293904] = anon_sym_GT;
	v->a[293905] = anon_sym_LT_LT;
	v->a[293906] = anon_sym_AMP_GT;
	v->a[293907] = anon_sym_LT_AMP;
	v->a[293908] = anon_sym_GT_AMP;
	v->a[293909] = actions(12292);
	v->a[293910] = 10;
	v->a[293911] = sym_file_descriptor;
	v->a[293912] = anon_sym_PIPE_PIPE;
	v->a[293913] = anon_sym_AMP_AMP;
	v->a[293914] = anon_sym_GT_GT;
	v->a[293915] = anon_sym_PIPE_AMP;
	v->a[293916] = anon_sym_AMP_GT_GT;
	v->a[293917] = anon_sym_GT_PIPE;
	v->a[293918] = anon_sym_LT_AMP_DASH;
	v->a[293919] = anon_sym_GT_AMP_DASH;
	small_parse_table_14696(v);
}

void	small_parse_table_14696(t_small_parse_table_array *v)
{
	v->a[293920] = anon_sym_LT_LT_DASH;
	v->a[293921] = 3;
	v->a[293922] = actions(71);
	v->a[293923] = 1;
	v->a[293924] = sym_comment;
	v->a[293925] = actions(12261);
	v->a[293926] = 7;
	v->a[293927] = anon_sym_PIPE;
	v->a[293928] = anon_sym_LT;
	v->a[293929] = anon_sym_GT;
	v->a[293930] = anon_sym_LT_LT;
	v->a[293931] = anon_sym_AMP_GT;
	v->a[293932] = anon_sym_LT_AMP;
	v->a[293933] = anon_sym_GT_AMP;
	v->a[293934] = actions(12263);
	v->a[293935] = 10;
	v->a[293936] = sym_file_descriptor;
	v->a[293937] = anon_sym_PIPE_PIPE;
	v->a[293938] = anon_sym_AMP_AMP;
	v->a[293939] = anon_sym_GT_GT;
	small_parse_table_14697(v);
}

void	small_parse_table_14697(t_small_parse_table_array *v)
{
	v->a[293940] = anon_sym_PIPE_AMP;
	v->a[293941] = anon_sym_AMP_GT_GT;
	v->a[293942] = anon_sym_GT_PIPE;
	v->a[293943] = anon_sym_LT_AMP_DASH;
	v->a[293944] = anon_sym_GT_AMP_DASH;
	v->a[293945] = anon_sym_LT_LT_DASH;
	v->a[293946] = 3;
	v->a[293947] = actions(3);
	v->a[293948] = 1;
	v->a[293949] = sym_comment;
	v->a[293950] = actions(1350);
	v->a[293951] = 3;
	v->a[293952] = sym_file_descriptor;
	v->a[293953] = sym__concat;
	v->a[293954] = aux_sym_heredoc_redirect_token1;
	v->a[293955] = actions(1348);
	v->a[293956] = 14;
	v->a[293957] = anon_sym_PIPE_PIPE;
	v->a[293958] = anon_sym_AMP_AMP;
	v->a[293959] = anon_sym_LT;
	small_parse_table_14698(v);
}

void	small_parse_table_14698(t_small_parse_table_array *v)
{
	v->a[293960] = anon_sym_GT;
	v->a[293961] = anon_sym_GT_GT;
	v->a[293962] = anon_sym_AMP_GT;
	v->a[293963] = anon_sym_AMP_GT_GT;
	v->a[293964] = anon_sym_LT_AMP;
	v->a[293965] = anon_sym_GT_AMP;
	v->a[293966] = anon_sym_GT_PIPE;
	v->a[293967] = anon_sym_LT_AMP_DASH;
	v->a[293968] = anon_sym_GT_AMP_DASH;
	v->a[293969] = anon_sym_LT_LT_LT;
	v->a[293970] = aux_sym_concatenation_token1;
	v->a[293971] = 10;
	v->a[293972] = actions(3);
	v->a[293973] = 1;
	v->a[293974] = sym_comment;
	v->a[293975] = actions(11764);
	v->a[293976] = 1;
	v->a[293977] = anon_sym_DOLLAR_LPAREN;
	v->a[293978] = actions(11766);
	v->a[293979] = 1;
	small_parse_table_14699(v);
}

void	small_parse_table_14699(t_small_parse_table_array *v)
{
	v->a[293980] = anon_sym_BQUOTE;
	v->a[293981] = actions(11768);
	v->a[293982] = 1;
	v->a[293983] = anon_sym_DOLLAR_BQUOTE;
	v->a[293984] = actions(13040);
	v->a[293985] = 1;
	v->a[293986] = aux_sym__simple_variable_name_token1;
	v->a[293987] = actions(13042);
	v->a[293988] = 1;
	v->a[293989] = sym_variable_name;
	v->a[293990] = state(3533);
	v->a[293991] = 1;
	v->a[293992] = sym_subscript;
	v->a[293993] = state(6448);
	v->a[293994] = 1;
	v->a[293995] = sym_command_substitution;
	v->a[293996] = actions(13038);
	v->a[293997] = 3;
	v->a[293998] = anon_sym_DOLLAR;
	v->a[293999] = anon_sym_0;
	small_parse_table_14700(v);
}

/* EOF small_parse_table_2939.c */
