/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2959.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14795(t_small_parse_table_array *v)
{
	v->a[295900] = sym_command_substitution;
	v->a[295901] = 12;
	v->a[295902] = actions(3);
	v->a[295903] = 1;
	v->a[295904] = sym_comment;
	v->a[295905] = actions(13060);
	v->a[295906] = 1;
	v->a[295907] = anon_sym_DOLLAR_LBRACK;
	v->a[295908] = actions(13066);
	v->a[295909] = 1;
	v->a[295910] = sym_string_content;
	v->a[295911] = actions(13068);
	v->a[295912] = 1;
	v->a[295913] = anon_sym_DOLLAR_LBRACE;
	v->a[295914] = actions(13070);
	v->a[295915] = 1;
	v->a[295916] = anon_sym_DOLLAR_LPAREN;
	v->a[295917] = actions(13072);
	v->a[295918] = 1;
	v->a[295919] = anon_sym_BQUOTE;
	small_parse_table_14796(v);
}

void	small_parse_table_14796(t_small_parse_table_array *v)
{
	v->a[295920] = actions(13074);
	v->a[295921] = 1;
	v->a[295922] = anon_sym_DOLLAR_BQUOTE;
	v->a[295923] = actions(13240);
	v->a[295924] = 1;
	v->a[295925] = anon_sym_DOLLAR;
	v->a[295926] = actions(13242);
	v->a[295927] = 1;
	v->a[295928] = anon_sym_DQUOTE;
	v->a[295929] = state(5737);
	v->a[295930] = 1;
	v->a[295931] = aux_sym_string_repeat1;
	v->a[295932] = actions(13058);
	v->a[295933] = 2;
	v->a[295934] = anon_sym_LPAREN_LPAREN;
	v->a[295935] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[295936] = state(6127);
	v->a[295937] = 4;
	v->a[295938] = sym_arithmetic_expansion;
	v->a[295939] = sym_simple_expansion;
	small_parse_table_14797(v);
}

void	small_parse_table_14797(t_small_parse_table_array *v)
{
	v->a[295940] = sym_expansion;
	v->a[295941] = sym_command_substitution;
	v->a[295942] = 3;
	v->a[295943] = actions(3);
	v->a[295944] = 1;
	v->a[295945] = sym_comment;
	v->a[295946] = actions(4554);
	v->a[295947] = 2;
	v->a[295948] = sym_file_descriptor;
	v->a[295949] = aux_sym_heredoc_redirect_token1;
	v->a[295950] = actions(4552);
	v->a[295951] = 13;
	v->a[295952] = anon_sym_PIPE_PIPE;
	v->a[295953] = anon_sym_AMP_AMP;
	v->a[295954] = anon_sym_LT;
	v->a[295955] = anon_sym_GT;
	v->a[295956] = anon_sym_GT_GT;
	v->a[295957] = anon_sym_AMP_GT;
	v->a[295958] = anon_sym_AMP_GT_GT;
	v->a[295959] = anon_sym_LT_AMP;
	small_parse_table_14798(v);
}

void	small_parse_table_14798(t_small_parse_table_array *v)
{
	v->a[295960] = anon_sym_GT_AMP;
	v->a[295961] = anon_sym_GT_PIPE;
	v->a[295962] = anon_sym_LT_AMP_DASH;
	v->a[295963] = anon_sym_GT_AMP_DASH;
	v->a[295964] = anon_sym_LT_LT_LT;
	v->a[295965] = 12;
	v->a[295966] = actions(3);
	v->a[295967] = 1;
	v->a[295968] = sym_comment;
	v->a[295969] = actions(13060);
	v->a[295970] = 1;
	v->a[295971] = anon_sym_DOLLAR_LBRACK;
	v->a[295972] = actions(13066);
	v->a[295973] = 1;
	v->a[295974] = sym_string_content;
	v->a[295975] = actions(13068);
	v->a[295976] = 1;
	v->a[295977] = anon_sym_DOLLAR_LBRACE;
	v->a[295978] = actions(13070);
	v->a[295979] = 1;
	small_parse_table_14799(v);
}

void	small_parse_table_14799(t_small_parse_table_array *v)
{
	v->a[295980] = anon_sym_DOLLAR_LPAREN;
	v->a[295981] = actions(13072);
	v->a[295982] = 1;
	v->a[295983] = anon_sym_BQUOTE;
	v->a[295984] = actions(13074);
	v->a[295985] = 1;
	v->a[295986] = anon_sym_DOLLAR_BQUOTE;
	v->a[295987] = actions(13244);
	v->a[295988] = 1;
	v->a[295989] = anon_sym_DOLLAR;
	v->a[295990] = actions(13246);
	v->a[295991] = 1;
	v->a[295992] = anon_sym_DQUOTE;
	v->a[295993] = state(5768);
	v->a[295994] = 1;
	v->a[295995] = aux_sym_string_repeat1;
	v->a[295996] = actions(13058);
	v->a[295997] = 2;
	v->a[295998] = anon_sym_LPAREN_LPAREN;
	v->a[295999] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_14800(v);
}

/* EOF small_parse_table_2959.c */
