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
	v->a[34900] = actions(790);
	v->a[34901] = 2;
	v->a[34902] = anon_sym_LT_LT;
	v->a[34903] = anon_sym_LT_LT_DASH;
	v->a[34904] = actions(1328);
	v->a[34905] = 2;
	v->a[34906] = anon_sym_AMP_AMP;
	v->a[34907] = anon_sym_PIPE_PIPE;
	v->a[34908] = state(1360);
	v->a[34909] = 2;
	v->a[34910] = sym_variable_assignment;
	v->a[34911] = aux_sym__variable_assignments_repeat1;
	v->a[34912] = state(1353);
	v->a[34913] = 3;
	v->a[34914] = sym_file_redirect;
	v->a[34915] = sym_heredoc_redirect;
	v->a[34916] = aux_sym_redirected_statement_repeat1;
	v->a[34917] = actions(780);
	v->a[34918] = 16;
	v->a[34919] = anon_sym_LT;
	small_parse_table_1746(v);
}

void	small_parse_table_1746(t_small_parse_table_array *v)
{
	v->a[34920] = anon_sym_GT;
	v->a[34921] = anon_sym_GT_GT;
	v->a[34922] = anon_sym_LT_AMP;
	v->a[34923] = anon_sym_GT_AMP;
	v->a[34924] = anon_sym_GT_PIPE;
	v->a[34925] = anon_sym_LT_GT;
	v->a[34926] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[34927] = anon_sym_DOLLAR;
	v->a[34928] = anon_sym_DQUOTE;
	v->a[34929] = sym_raw_string;
	v->a[34930] = sym_number;
	v->a[34931] = anon_sym_DOLLAR_LBRACE;
	v->a[34932] = anon_sym_DOLLAR_LPAREN;
	v->a[34933] = anon_sym_BQUOTE;
	v->a[34934] = sym_word;
	v->a[34935] = 3;
	v->a[34936] = actions(3);
	v->a[34937] = 1;
	v->a[34938] = sym_comment;
	v->a[34939] = actions(599);
	small_parse_table_1747(v);
}

void	small_parse_table_1747(t_small_parse_table_array *v)
{
	v->a[34940] = 3;
	v->a[34941] = sym_file_descriptor;
	v->a[34942] = sym__concat;
	v->a[34943] = sym_variable_name;
	v->a[34944] = actions(597);
	v->a[34945] = 26;
	v->a[34946] = anon_sym_esac;
	v->a[34947] = anon_sym_PIPE;
	v->a[34948] = anon_sym_SEMI_SEMI;
	v->a[34949] = anon_sym_AMP_AMP;
	v->a[34950] = anon_sym_PIPE_PIPE;
	v->a[34951] = anon_sym_LT;
	v->a[34952] = anon_sym_GT;
	v->a[34953] = anon_sym_GT_GT;
	v->a[34954] = anon_sym_LT_AMP;
	v->a[34955] = anon_sym_GT_AMP;
	v->a[34956] = anon_sym_GT_PIPE;
	v->a[34957] = anon_sym_LT_GT;
	v->a[34958] = anon_sym_LT_LT;
	v->a[34959] = anon_sym_LT_LT_DASH;
	small_parse_table_1748(v);
}

void	small_parse_table_1748(t_small_parse_table_array *v)
{
	v->a[34960] = aux_sym_heredoc_redirect_token1;
	v->a[34961] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[34962] = aux_sym_concatenation_token1;
	v->a[34963] = anon_sym_DOLLAR;
	v->a[34964] = anon_sym_DQUOTE;
	v->a[34965] = sym_raw_string;
	v->a[34966] = sym_number;
	v->a[34967] = anon_sym_DOLLAR_LBRACE;
	v->a[34968] = anon_sym_DOLLAR_LPAREN;
	v->a[34969] = anon_sym_BQUOTE;
	v->a[34970] = sym_word;
	v->a[34971] = anon_sym_SEMI;
	v->a[34972] = 10;
	v->a[34973] = actions(3);
	v->a[34974] = 1;
	v->a[34975] = sym_comment;
	v->a[34976] = actions(782);
	v->a[34977] = 1;
	v->a[34978] = anon_sym_PIPE;
	v->a[34979] = actions(792);
	small_parse_table_1749(v);
}

void	small_parse_table_1749(t_small_parse_table_array *v)
{
	v->a[34980] = 1;
	v->a[34981] = sym_file_descriptor;
	v->a[34982] = actions(1332);
	v->a[34983] = 1;
	v->a[34984] = sym_variable_name;
	v->a[34985] = actions(1335);
	v->a[34986] = 1;
	v->a[34987] = aux_sym_heredoc_redirect_token1;
	v->a[34988] = actions(790);
	v->a[34989] = 2;
	v->a[34990] = anon_sym_LT_LT;
	v->a[34991] = anon_sym_LT_LT_DASH;
	v->a[34992] = actions(1328);
	v->a[34993] = 2;
	v->a[34994] = anon_sym_AMP_AMP;
	v->a[34995] = anon_sym_PIPE_PIPE;
	v->a[34996] = state(1360);
	v->a[34997] = 2;
	v->a[34998] = sym_variable_assignment;
	v->a[34999] = aux_sym__variable_assignments_repeat1;
	small_parse_table_1750(v);
}

/* EOF small_parse_table_349.c */
