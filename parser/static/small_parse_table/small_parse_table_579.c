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
	v->a[57900] = anon_sym_PIPE_AMP;
	v->a[57901] = anon_sym_AMP_AMP;
	v->a[57902] = anon_sym_PIPE_PIPE;
	v->a[57903] = anon_sym_LT;
	v->a[57904] = anon_sym_GT;
	v->a[57905] = anon_sym_GT_GT;
	v->a[57906] = anon_sym_AMP_GT;
	v->a[57907] = anon_sym_AMP_GT_GT;
	v->a[57908] = anon_sym_LT_AMP;
	v->a[57909] = anon_sym_GT_AMP;
	v->a[57910] = anon_sym_GT_PIPE;
	v->a[57911] = anon_sym_LT_AMP_DASH;
	v->a[57912] = anon_sym_GT_AMP_DASH;
	v->a[57913] = anon_sym_LT_LT;
	v->a[57914] = anon_sym_LT_LT_DASH;
	v->a[57915] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[57916] = anon_sym_AMP;
	v->a[57917] = anon_sym_DOLLAR;
	v->a[57918] = sym__special_character;
	v->a[57919] = anon_sym_DQUOTE;
	small_parse_table_2896(v);
}

void	small_parse_table_2896(t_small_parse_table_array *v)
{
	v->a[57920] = sym_raw_string;
	v->a[57921] = aux_sym_number_token1;
	v->a[57922] = aux_sym_number_token2;
	v->a[57923] = anon_sym_DOLLAR_LBRACE;
	v->a[57924] = anon_sym_DOLLAR_LPAREN;
	v->a[57925] = anon_sym_BQUOTE;
	v->a[57926] = anon_sym_DOLLAR_BQUOTE;
	v->a[57927] = sym_word;
	v->a[57928] = anon_sym_SEMI;
	v->a[57929] = 6;
	v->a[57930] = actions(3);
	v->a[57931] = 1;
	v->a[57932] = sym_comment;
	v->a[57933] = actions(3167);
	v->a[57934] = 1;
	v->a[57935] = aux_sym_concatenation_token1;
	v->a[57936] = actions(3296);
	v->a[57937] = 1;
	v->a[57938] = sym__concat;
	v->a[57939] = state(1325);
	small_parse_table_2897(v);
}

void	small_parse_table_2897(t_small_parse_table_array *v)
{
	v->a[57940] = 1;
	v->a[57941] = aux_sym_concatenation_repeat1;
	v->a[57942] = actions(2719);
	v->a[57943] = 5;
	v->a[57944] = sym_file_descriptor;
	v->a[57945] = sym_variable_name;
	v->a[57946] = sym_test_operator;
	v->a[57947] = sym__brace_start;
	v->a[57948] = aux_sym_heredoc_redirect_token1;
	v->a[57949] = actions(2717);
	v->a[57950] = 29;
	v->a[57951] = anon_sym_PIPE;
	v->a[57952] = anon_sym_PIPE_AMP;
	v->a[57953] = anon_sym_AMP_AMP;
	v->a[57954] = anon_sym_PIPE_PIPE;
	v->a[57955] = anon_sym_LT;
	v->a[57956] = anon_sym_GT;
	v->a[57957] = anon_sym_GT_GT;
	v->a[57958] = anon_sym_AMP_GT;
	v->a[57959] = anon_sym_AMP_GT_GT;
	small_parse_table_2898(v);
}

void	small_parse_table_2898(t_small_parse_table_array *v)
{
	v->a[57960] = anon_sym_LT_AMP;
	v->a[57961] = anon_sym_GT_AMP;
	v->a[57962] = anon_sym_GT_PIPE;
	v->a[57963] = anon_sym_LT_AMP_DASH;
	v->a[57964] = anon_sym_GT_AMP_DASH;
	v->a[57965] = anon_sym_LT_LT;
	v->a[57966] = anon_sym_LT_LT_DASH;
	v->a[57967] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[57968] = anon_sym_DOLLAR;
	v->a[57969] = sym__special_character;
	v->a[57970] = anon_sym_DQUOTE;
	v->a[57971] = sym_raw_string;
	v->a[57972] = aux_sym_number_token1;
	v->a[57973] = aux_sym_number_token2;
	v->a[57974] = anon_sym_DOLLAR_LBRACE;
	v->a[57975] = anon_sym_DOLLAR_LPAREN;
	v->a[57976] = anon_sym_BQUOTE;
	v->a[57977] = anon_sym_DOLLAR_BQUOTE;
	v->a[57978] = aux_sym__simple_variable_name_token1;
	v->a[57979] = sym_word;
	small_parse_table_2899(v);
}

void	small_parse_table_2899(t_small_parse_table_array *v)
{
	v->a[57980] = 3;
	v->a[57981] = actions(3);
	v->a[57982] = 1;
	v->a[57983] = sym_comment;
	v->a[57984] = actions(1182);
	v->a[57985] = 5;
	v->a[57986] = sym_file_descriptor;
	v->a[57987] = sym_variable_name;
	v->a[57988] = sym_test_operator;
	v->a[57989] = sym__brace_start;
	v->a[57990] = aux_sym_heredoc_redirect_token1;
	v->a[57991] = actions(1180);
	v->a[57992] = 32;
	v->a[57993] = anon_sym_PIPE;
	v->a[57994] = anon_sym_RPAREN;
	v->a[57995] = anon_sym_SEMI_SEMI;
	v->a[57996] = anon_sym_PIPE_AMP;
	v->a[57997] = anon_sym_AMP_AMP;
	v->a[57998] = anon_sym_PIPE_PIPE;
	v->a[57999] = anon_sym_LT;
	small_parse_table_2900(v);
}

/* EOF small_parse_table_579.c */
