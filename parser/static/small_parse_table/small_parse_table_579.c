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
	v->a[57900] = actions(1153);
	v->a[57901] = 1;
	v->a[57902] = anon_sym_DOLLAR;
	v->a[57903] = actions(1155);
	v->a[57904] = 1;
	v->a[57905] = anon_sym_DQUOTE;
	v->a[57906] = actions(1157);
	v->a[57907] = 1;
	v->a[57908] = anon_sym_DOLLAR_LBRACE;
	v->a[57909] = actions(1159);
	v->a[57910] = 1;
	v->a[57911] = anon_sym_DOLLAR_LPAREN;
	v->a[57912] = actions(1161);
	v->a[57913] = 1;
	v->a[57914] = anon_sym_BQUOTE;
	v->a[57915] = state(364);
	v->a[57916] = 2;
	v->a[57917] = sym_concatenation;
	v->a[57918] = aux_sym_for_statement_repeat1;
	v->a[57919] = actions(1149);
	small_parse_table_2896(v);
}

void	small_parse_table_2896(t_small_parse_table_array *v)
{
	v->a[57920] = 3;
	v->a[57921] = sym_raw_string;
	v->a[57922] = sym_number;
	v->a[57923] = sym_word;
	v->a[57924] = state(685);
	v->a[57925] = 5;
	v->a[57926] = sym_arithmetic_expansion;
	v->a[57927] = sym_string;
	v->a[57928] = sym_simple_expansion;
	v->a[57929] = sym_expansion;
	v->a[57930] = sym_command_substitution;
	v->a[57931] = 3;
	v->a[57932] = actions(3);
	v->a[57933] = 1;
	v->a[57934] = sym_comment;
	v->a[57935] = actions(1803);
	v->a[57936] = 1;
	v->a[57937] = aux_sym_heredoc_redirect_token1;
	v->a[57938] = actions(1805);
	v->a[57939] = 15;
	small_parse_table_2897(v);
}

void	small_parse_table_2897(t_small_parse_table_array *v)
{
	v->a[57940] = anon_sym_esac;
	v->a[57941] = anon_sym_PIPE;
	v->a[57942] = anon_sym_SEMI_SEMI;
	v->a[57943] = anon_sym_AMP_AMP;
	v->a[57944] = anon_sym_PIPE_PIPE;
	v->a[57945] = anon_sym_LT;
	v->a[57946] = anon_sym_GT;
	v->a[57947] = anon_sym_GT_GT;
	v->a[57948] = anon_sym_LT_AMP;
	v->a[57949] = anon_sym_GT_AMP;
	v->a[57950] = anon_sym_GT_PIPE;
	v->a[57951] = anon_sym_LT_GT;
	v->a[57952] = anon_sym_LT_LT;
	v->a[57953] = anon_sym_LT_LT_DASH;
	v->a[57954] = anon_sym_SEMI;
	v->a[57955] = 3;
	v->a[57956] = actions(3);
	v->a[57957] = 1;
	v->a[57958] = sym_comment;
	v->a[57959] = actions(1811);
	small_parse_table_2898(v);
}

void	small_parse_table_2898(t_small_parse_table_array *v)
{
	v->a[57960] = 1;
	v->a[57961] = aux_sym_heredoc_redirect_token1;
	v->a[57962] = actions(1813);
	v->a[57963] = 15;
	v->a[57964] = anon_sym_esac;
	v->a[57965] = anon_sym_PIPE;
	v->a[57966] = anon_sym_SEMI_SEMI;
	v->a[57967] = anon_sym_AMP_AMP;
	v->a[57968] = anon_sym_PIPE_PIPE;
	v->a[57969] = anon_sym_LT;
	v->a[57970] = anon_sym_GT;
	v->a[57971] = anon_sym_GT_GT;
	v->a[57972] = anon_sym_LT_AMP;
	v->a[57973] = anon_sym_GT_AMP;
	v->a[57974] = anon_sym_GT_PIPE;
	v->a[57975] = anon_sym_LT_GT;
	v->a[57976] = anon_sym_LT_LT;
	v->a[57977] = anon_sym_LT_LT_DASH;
	v->a[57978] = anon_sym_SEMI;
	v->a[57979] = 10;
	small_parse_table_2899(v);
}

void	small_parse_table_2899(t_small_parse_table_array *v)
{
	v->a[57980] = actions(3);
	v->a[57981] = 1;
	v->a[57982] = sym_comment;
	v->a[57983] = actions(930);
	v->a[57984] = 1;
	v->a[57985] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[57986] = actions(932);
	v->a[57987] = 1;
	v->a[57988] = anon_sym_DOLLAR;
	v->a[57989] = actions(934);
	v->a[57990] = 1;
	v->a[57991] = anon_sym_DQUOTE;
	v->a[57992] = actions(936);
	v->a[57993] = 1;
	v->a[57994] = anon_sym_DOLLAR_LBRACE;
	v->a[57995] = actions(938);
	v->a[57996] = 1;
	v->a[57997] = anon_sym_DOLLAR_LPAREN;
	v->a[57998] = actions(940);
	v->a[57999] = 1;
	small_parse_table_2900(v);
}

/* EOF small_parse_table_579.c */
