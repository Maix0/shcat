/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_349.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1745(t_small_parse_table_array *v)
{
	v->a[34900] = sym_raw_string;
	v->a[34901] = sym_number;
	v->a[34902] = anon_sym_DOLLAR_LBRACE;
	v->a[34903] = anon_sym_DOLLAR_LPAREN;
	v->a[34904] = anon_sym_BQUOTE;
	v->a[34905] = sym_word;
	v->a[34906] = anon_sym_SEMI;
	v->a[34907] = 7;
	v->a[34908] = actions(3);
	v->a[34909] = 1;
	v->a[34910] = sym_comment;
	v->a[34911] = actions(1083);
	v->a[34912] = 1;
	v->a[34913] = aux_sym_concatenation_token1;
	v->a[34914] = actions(1185);
	v->a[34915] = 1;
	v->a[34916] = sym__concat;
	v->a[34917] = actions(1308);
	v->a[34918] = 1;
	v->a[34919] = anon_sym_LPAREN;
	small_parse_table_1746(v);
}

void	small_parse_table_1746(t_small_parse_table_array *v)
{
	v->a[34920] = state(470);
	v->a[34921] = 1;
	v->a[34922] = aux_sym_concatenation_repeat1;
	v->a[34923] = actions(1095);
	v->a[34924] = 2;
	v->a[34925] = sym_file_descriptor;
	v->a[34926] = sym__bare_dollar;
	v->a[34927] = actions(1097);
	v->a[34928] = 26;
	v->a[34929] = anon_sym_PIPE;
	v->a[34930] = anon_sym_SEMI_SEMI;
	v->a[34931] = anon_sym_AMP_AMP;
	v->a[34932] = anon_sym_PIPE_PIPE;
	v->a[34933] = anon_sym_LT;
	v->a[34934] = anon_sym_GT;
	v->a[34935] = anon_sym_GT_GT;
	v->a[34936] = anon_sym_LT_AMP;
	v->a[34937] = anon_sym_GT_AMP;
	v->a[34938] = anon_sym_GT_PIPE;
	v->a[34939] = anon_sym_LT_AMP_DASH;
	small_parse_table_1747(v);
}

void	small_parse_table_1747(t_small_parse_table_array *v)
{
	v->a[34940] = anon_sym_GT_AMP_DASH;
	v->a[34941] = anon_sym_LT_LT;
	v->a[34942] = anon_sym_LT_LT_DASH;
	v->a[34943] = aux_sym_heredoc_redirect_token1;
	v->a[34944] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[34945] = anon_sym_AMP;
	v->a[34946] = anon_sym_DOLLAR;
	v->a[34947] = anon_sym_DQUOTE;
	v->a[34948] = sym_raw_string;
	v->a[34949] = sym_number;
	v->a[34950] = anon_sym_DOLLAR_LBRACE;
	v->a[34951] = anon_sym_DOLLAR_LPAREN;
	v->a[34952] = anon_sym_BQUOTE;
	v->a[34953] = sym_word;
	v->a[34954] = anon_sym_SEMI;
	v->a[34955] = 6;
	v->a[34956] = actions(3);
	v->a[34957] = 1;
	v->a[34958] = sym_comment;
	v->a[34959] = actions(1287);
	small_parse_table_1748(v);
}

void	small_parse_table_1748(t_small_parse_table_array *v)
{
	v->a[34960] = 1;
	v->a[34961] = aux_sym_concatenation_token1;
	v->a[34962] = actions(1297);
	v->a[34963] = 1;
	v->a[34964] = sym__concat;
	v->a[34965] = state(435);
	v->a[34966] = 1;
	v->a[34967] = aux_sym_concatenation_repeat1;
	v->a[34968] = actions(602);
	v->a[34969] = 3;
	v->a[34970] = sym_file_descriptor;
	v->a[34971] = sym_variable_name;
	v->a[34972] = ts_builtin_sym_end;
	v->a[34973] = actions(604);
	v->a[34974] = 26;
	v->a[34975] = anon_sym_PIPE;
	v->a[34976] = anon_sym_SEMI_SEMI;
	v->a[34977] = anon_sym_AMP_AMP;
	v->a[34978] = anon_sym_PIPE_PIPE;
	v->a[34979] = anon_sym_LT;
	small_parse_table_1749(v);
}

void	small_parse_table_1749(t_small_parse_table_array *v)
{
	v->a[34980] = anon_sym_GT;
	v->a[34981] = anon_sym_GT_GT;
	v->a[34982] = anon_sym_LT_AMP;
	v->a[34983] = anon_sym_GT_AMP;
	v->a[34984] = anon_sym_GT_PIPE;
	v->a[34985] = anon_sym_LT_AMP_DASH;
	v->a[34986] = anon_sym_GT_AMP_DASH;
	v->a[34987] = anon_sym_LT_LT;
	v->a[34988] = anon_sym_LT_LT_DASH;
	v->a[34989] = aux_sym_heredoc_redirect_token1;
	v->a[34990] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[34991] = anon_sym_AMP;
	v->a[34992] = anon_sym_DOLLAR;
	v->a[34993] = anon_sym_DQUOTE;
	v->a[34994] = sym_raw_string;
	v->a[34995] = sym_number;
	v->a[34996] = anon_sym_DOLLAR_LBRACE;
	v->a[34997] = anon_sym_DOLLAR_LPAREN;
	v->a[34998] = anon_sym_BQUOTE;
	v->a[34999] = sym_word;
	small_parse_table_1750(v);
}

/* EOF small_parse_table_349.c */
