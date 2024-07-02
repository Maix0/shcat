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
	v->a[34900] = anon_sym_DOLLAR;
	v->a[34901] = anon_sym_DQUOTE;
	v->a[34902] = sym_raw_string;
	v->a[34903] = sym_number;
	v->a[34904] = anon_sym_DOLLAR_LBRACE;
	v->a[34905] = anon_sym_DOLLAR_LPAREN;
	v->a[34906] = anon_sym_BQUOTE;
	v->a[34907] = sym_word;
	v->a[34908] = anon_sym_SEMI;
	v->a[34909] = 6;
	v->a[34910] = actions(3);
	v->a[34911] = 1;
	v->a[34912] = sym_comment;
	v->a[34913] = actions(1092);
	v->a[34914] = 1;
	v->a[34915] = sym_file_descriptor;
	v->a[34916] = actions(1291);
	v->a[34917] = 1;
	v->a[34918] = aux_sym_concatenation_token1;
	v->a[34919] = actions(1294);
	small_parse_table_1746(v);
}

void	small_parse_table_1746(t_small_parse_table_array *v)
{
	v->a[34920] = 1;
	v->a[34921] = sym__concat;
	v->a[34922] = state(479);
	v->a[34923] = 1;
	v->a[34924] = aux_sym_concatenation_repeat1;
	v->a[34925] = actions(1094);
	v->a[34926] = 26;
	v->a[34927] = anon_sym_esac;
	v->a[34928] = anon_sym_PIPE;
	v->a[34929] = anon_sym_SEMI_SEMI;
	v->a[34930] = anon_sym_AMP_AMP;
	v->a[34931] = anon_sym_PIPE_PIPE;
	v->a[34932] = anon_sym_LT;
	v->a[34933] = anon_sym_GT;
	v->a[34934] = anon_sym_GT_GT;
	v->a[34935] = anon_sym_LT_AMP;
	v->a[34936] = anon_sym_GT_AMP;
	v->a[34937] = anon_sym_GT_PIPE;
	v->a[34938] = anon_sym_LT_GT;
	v->a[34939] = anon_sym_LT_LT;
	small_parse_table_1747(v);
}

void	small_parse_table_1747(t_small_parse_table_array *v)
{
	v->a[34940] = anon_sym_LT_LT_DASH;
	v->a[34941] = aux_sym_heredoc_redirect_token1;
	v->a[34942] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[34943] = anon_sym_AMP;
	v->a[34944] = anon_sym_DOLLAR;
	v->a[34945] = anon_sym_DQUOTE;
	v->a[34946] = sym_raw_string;
	v->a[34947] = sym_number;
	v->a[34948] = anon_sym_DOLLAR_LBRACE;
	v->a[34949] = anon_sym_DOLLAR_LPAREN;
	v->a[34950] = anon_sym_BQUOTE;
	v->a[34951] = sym_word;
	v->a[34952] = anon_sym_SEMI;
	v->a[34953] = 14;
	v->a[34954] = actions(3);
	v->a[34955] = 1;
	v->a[34956] = sym_comment;
	v->a[34957] = actions(503);
	v->a[34958] = 1;
	v->a[34959] = sym_file_descriptor;
	small_parse_table_1748(v);
}

void	small_parse_table_1748(t_small_parse_table_array *v)
{
	v->a[34960] = actions(1114);
	v->a[34961] = 1;
	v->a[34962] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[34963] = actions(1116);
	v->a[34964] = 1;
	v->a[34965] = anon_sym_DOLLAR;
	v->a[34966] = actions(1118);
	v->a[34967] = 1;
	v->a[34968] = anon_sym_DQUOTE;
	v->a[34969] = actions(1120);
	v->a[34970] = 1;
	v->a[34971] = anon_sym_DOLLAR_LBRACE;
	v->a[34972] = actions(1122);
	v->a[34973] = 1;
	v->a[34974] = anon_sym_DOLLAR_LPAREN;
	v->a[34975] = actions(1124);
	v->a[34976] = 1;
	v->a[34977] = anon_sym_BQUOTE;
	v->a[34978] = actions(1126);
	v->a[34979] = 1;
	small_parse_table_1749(v);
}

void	small_parse_table_1749(t_small_parse_table_array *v)
{
	v->a[34980] = sym__bare_dollar;
	v->a[34981] = state(485);
	v->a[34982] = 1;
	v->a[34983] = aux_sym_command_repeat2;
	v->a[34984] = state(924);
	v->a[34985] = 1;
	v->a[34986] = sym_concatenation;
	v->a[34987] = actions(1112);
	v->a[34988] = 3;
	v->a[34989] = sym_raw_string;
	v->a[34990] = sym_number;
	v->a[34991] = sym_word;
	v->a[34992] = state(826);
	v->a[34993] = 5;
	v->a[34994] = sym_arithmetic_expansion;
	v->a[34995] = sym_string;
	v->a[34996] = sym_simple_expansion;
	v->a[34997] = sym_expansion;
	v->a[34998] = sym_command_substitution;
	v->a[34999] = actions(501);
	small_parse_table_1750(v);
}

/* EOF small_parse_table_349.c */
