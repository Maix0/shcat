/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_579.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2895(t_small_parse_table_array *v)
{
	v->a[57900] = actions(1937);
	v->a[57901] = 1;
	v->a[57902] = aux_sym_heredoc_redirect_token1;
	v->a[57903] = actions(1971);
	v->a[57904] = 1;
	v->a[57905] = sym_file_descriptor;
	v->a[57906] = actions(1934);
	v->a[57907] = 2;
	v->a[57908] = anon_sym_LT_LT;
	v->a[57909] = anon_sym_LT_LT_DASH;
	v->a[57910] = state(1027);
	v->a[57911] = 3;
	v->a[57912] = sym_file_redirect;
	v->a[57913] = sym_heredoc_redirect;
	v->a[57914] = aux_sym_redirected_statement_repeat1;
	v->a[57915] = actions(1929);
	v->a[57916] = 7;
	v->a[57917] = anon_sym_PIPE;
	v->a[57918] = anon_sym_RPAREN;
	v->a[57919] = anon_sym_SEMI_SEMI;
	small_parse_table_2896(v);
}

void	small_parse_table_2896(t_small_parse_table_array *v)
{
	v->a[57920] = anon_sym_AMP_AMP;
	v->a[57921] = anon_sym_PIPE_PIPE;
	v->a[57922] = anon_sym_AMP;
	v->a[57923] = anon_sym_SEMI;
	v->a[57924] = actions(1968);
	v->a[57925] = 7;
	v->a[57926] = anon_sym_LT;
	v->a[57927] = anon_sym_GT;
	v->a[57928] = anon_sym_GT_GT;
	v->a[57929] = anon_sym_LT_AMP;
	v->a[57930] = anon_sym_GT_AMP;
	v->a[57931] = anon_sym_GT_PIPE;
	v->a[57932] = anon_sym_LT_GT;
	v->a[57933] = 4;
	v->a[57934] = actions(3);
	v->a[57935] = 1;
	v->a[57936] = sym_comment;
	v->a[57937] = actions(995);
	v->a[57938] = 2;
	v->a[57939] = sym_file_descriptor;
	small_parse_table_2897(v);
}

void	small_parse_table_2897(t_small_parse_table_array *v)
{
	v->a[57940] = aux_sym_heredoc_redirect_token1;
	v->a[57941] = state(1031);
	v->a[57942] = 3;
	v->a[57943] = sym_file_redirect;
	v->a[57944] = sym_heredoc_redirect;
	v->a[57945] = aux_sym_redirected_statement_repeat1;
	v->a[57946] = actions(997);
	v->a[57947] = 16;
	v->a[57948] = anon_sym_PIPE;
	v->a[57949] = anon_sym_RPAREN;
	v->a[57950] = anon_sym_SEMI_SEMI;
	v->a[57951] = anon_sym_AMP_AMP;
	v->a[57952] = anon_sym_PIPE_PIPE;
	v->a[57953] = anon_sym_LT;
	v->a[57954] = anon_sym_GT;
	v->a[57955] = anon_sym_GT_GT;
	v->a[57956] = anon_sym_LT_AMP;
	v->a[57957] = anon_sym_GT_AMP;
	v->a[57958] = anon_sym_GT_PIPE;
	v->a[57959] = anon_sym_LT_GT;
	small_parse_table_2898(v);
}

void	small_parse_table_2898(t_small_parse_table_array *v)
{
	v->a[57960] = anon_sym_LT_LT;
	v->a[57961] = anon_sym_LT_LT_DASH;
	v->a[57962] = anon_sym_AMP;
	v->a[57963] = anon_sym_SEMI;
	v->a[57964] = 5;
	v->a[57965] = actions(3);
	v->a[57966] = 1;
	v->a[57967] = sym_comment;
	v->a[57968] = actions(692);
	v->a[57969] = 1;
	v->a[57970] = anon_sym_PIPE;
	v->a[57971] = actions(995);
	v->a[57972] = 2;
	v->a[57973] = sym_file_descriptor;
	v->a[57974] = aux_sym_heredoc_redirect_token1;
	v->a[57975] = state(1031);
	v->a[57976] = 3;
	v->a[57977] = sym_file_redirect;
	v->a[57978] = sym_heredoc_redirect;
	v->a[57979] = aux_sym_redirected_statement_repeat1;
	small_parse_table_2899(v);
}

void	small_parse_table_2899(t_small_parse_table_array *v)
{
	v->a[57980] = actions(997);
	v->a[57981] = 15;
	v->a[57982] = anon_sym_RPAREN;
	v->a[57983] = anon_sym_SEMI_SEMI;
	v->a[57984] = anon_sym_AMP_AMP;
	v->a[57985] = anon_sym_PIPE_PIPE;
	v->a[57986] = anon_sym_LT;
	v->a[57987] = anon_sym_GT;
	v->a[57988] = anon_sym_GT_GT;
	v->a[57989] = anon_sym_LT_AMP;
	v->a[57990] = anon_sym_GT_AMP;
	v->a[57991] = anon_sym_GT_PIPE;
	v->a[57992] = anon_sym_LT_GT;
	v->a[57993] = anon_sym_LT_LT;
	v->a[57994] = anon_sym_LT_LT_DASH;
	v->a[57995] = anon_sym_AMP;
	v->a[57996] = anon_sym_SEMI;
	v->a[57997] = 3;
	v->a[57998] = actions(3);
	v->a[57999] = 1;
	small_parse_table_2900(v);
}

/* EOF small_parse_table_579.c */
