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
	v->a[21900] = anon_sym_LT;
	v->a[21901] = anon_sym_GT;
	v->a[21902] = anon_sym_GT_GT;
	v->a[21903] = anon_sym_AMP_GT;
	v->a[21904] = anon_sym_AMP_GT_GT;
	v->a[21905] = anon_sym_LT_AMP;
	v->a[21906] = anon_sym_GT_AMP;
	v->a[21907] = anon_sym_GT_PIPE;
	v->a[21908] = anon_sym_LT_AMP_DASH;
	v->a[21909] = anon_sym_GT_AMP_DASH;
	v->a[21910] = anon_sym_LT_LT;
	v->a[21911] = anon_sym_LT_LT_DASH;
	v->a[21912] = aux_sym_heredoc_redirect_token1;
	v->a[21913] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21914] = anon_sym_AMP;
	v->a[21915] = anon_sym_DOLLAR;
	v->a[21916] = anon_sym_DQUOTE;
	v->a[21917] = sym_raw_string;
	v->a[21918] = sym_number;
	v->a[21919] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1096(v);
}

void	small_parse_table_1096(t_small_parse_table_array *v)
{
	v->a[21920] = anon_sym_DOLLAR_LPAREN;
	v->a[21921] = anon_sym_BQUOTE;
	v->a[21922] = sym_word;
	v->a[21923] = anon_sym_SEMI;
	v->a[21924] = 14;
	v->a[21925] = actions(3);
	v->a[21926] = 1;
	v->a[21927] = sym_comment;
	v->a[21928] = actions(559);
	v->a[21929] = 1;
	v->a[21930] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21931] = actions(562);
	v->a[21932] = 1;
	v->a[21933] = anon_sym_DOLLAR;
	v->a[21934] = actions(565);
	v->a[21935] = 1;
	v->a[21936] = anon_sym_DQUOTE;
	v->a[21937] = actions(568);
	v->a[21938] = 1;
	v->a[21939] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1097(v);
}

void	small_parse_table_1097(t_small_parse_table_array *v)
{
	v->a[21940] = actions(571);
	v->a[21941] = 1;
	v->a[21942] = anon_sym_DOLLAR_LPAREN;
	v->a[21943] = actions(574);
	v->a[21944] = 1;
	v->a[21945] = anon_sym_BQUOTE;
	v->a[21946] = actions(577);
	v->a[21947] = 1;
	v->a[21948] = sym_file_descriptor;
	v->a[21949] = actions(579);
	v->a[21950] = 1;
	v->a[21951] = sym__bare_dollar;
	v->a[21952] = state(198);
	v->a[21953] = 1;
	v->a[21954] = aux_sym_command_repeat2;
	v->a[21955] = state(684);
	v->a[21956] = 1;
	v->a[21957] = sym_concatenation;
	v->a[21958] = actions(554);
	v->a[21959] = 3;
	small_parse_table_1098(v);
}

void	small_parse_table_1098(t_small_parse_table_array *v)
{
	v->a[21960] = sym_raw_string;
	v->a[21961] = sym_number;
	v->a[21962] = sym_word;
	v->a[21963] = state(385);
	v->a[21964] = 5;
	v->a[21965] = sym_arithmetic_expansion;
	v->a[21966] = sym_string;
	v->a[21967] = sym_simple_expansion;
	v->a[21968] = sym_expansion;
	v->a[21969] = sym_command_substitution;
	v->a[21970] = actions(557);
	v->a[21971] = 20;
	v->a[21972] = anon_sym_esac;
	v->a[21973] = anon_sym_PIPE;
	v->a[21974] = anon_sym_SEMI_SEMI;
	v->a[21975] = anon_sym_AMP_AMP;
	v->a[21976] = anon_sym_PIPE_PIPE;
	v->a[21977] = anon_sym_LT;
	v->a[21978] = anon_sym_GT;
	v->a[21979] = anon_sym_GT_GT;
	small_parse_table_1099(v);
}

void	small_parse_table_1099(t_small_parse_table_array *v)
{
	v->a[21980] = anon_sym_AMP_GT;
	v->a[21981] = anon_sym_AMP_GT_GT;
	v->a[21982] = anon_sym_LT_AMP;
	v->a[21983] = anon_sym_GT_AMP;
	v->a[21984] = anon_sym_GT_PIPE;
	v->a[21985] = anon_sym_LT_AMP_DASH;
	v->a[21986] = anon_sym_GT_AMP_DASH;
	v->a[21987] = anon_sym_LT_LT;
	v->a[21988] = anon_sym_LT_LT_DASH;
	v->a[21989] = aux_sym_heredoc_redirect_token1;
	v->a[21990] = anon_sym_AMP;
	v->a[21991] = anon_sym_SEMI;
	v->a[21992] = 14;
	v->a[21993] = actions(3);
	v->a[21994] = 1;
	v->a[21995] = sym_comment;
	v->a[21996] = actions(477);
	v->a[21997] = 1;
	v->a[21998] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[21999] = actions(479);
	small_parse_table_1100(v);
}

/* EOF small_parse_table_219.c */
