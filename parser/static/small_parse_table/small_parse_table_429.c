/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_429.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2145(t_small_parse_table_array *v)
{
	v->a[42900] = 1;
	v->a[42901] = sym_file_descriptor;
	v->a[42902] = actions(1476);
	v->a[42903] = 1;
	v->a[42904] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42905] = actions(1479);
	v->a[42906] = 1;
	v->a[42907] = anon_sym_DOLLAR;
	v->a[42908] = actions(1482);
	v->a[42909] = 1;
	v->a[42910] = anon_sym_DQUOTE;
	v->a[42911] = actions(1485);
	v->a[42912] = 1;
	v->a[42913] = anon_sym_DOLLAR_LBRACE;
	v->a[42914] = actions(1488);
	v->a[42915] = 1;
	v->a[42916] = anon_sym_DOLLAR_LPAREN;
	v->a[42917] = actions(1491);
	v->a[42918] = 1;
	v->a[42919] = anon_sym_BQUOTE;
	small_parse_table_2146(v);
}

void	small_parse_table_2146(t_small_parse_table_array *v)
{
	v->a[42920] = state(631);
	v->a[42921] = 2;
	v->a[42922] = sym_concatenation;
	v->a[42923] = aux_sym_for_statement_repeat1;
	v->a[42924] = actions(1473);
	v->a[42925] = 3;
	v->a[42926] = sym_raw_string;
	v->a[42927] = sym_number;
	v->a[42928] = sym_word;
	v->a[42929] = state(926);
	v->a[42930] = 5;
	v->a[42931] = sym_arithmetic_expansion;
	v->a[42932] = sym_string;
	v->a[42933] = sym_simple_expansion;
	v->a[42934] = sym_expansion;
	v->a[42935] = sym_command_substitution;
	v->a[42936] = actions(582);
	v->a[42937] = 13;
	v->a[42938] = anon_sym_PIPE;
	v->a[42939] = anon_sym_AMP_AMP;
	small_parse_table_2147(v);
}

void	small_parse_table_2147(t_small_parse_table_array *v)
{
	v->a[42940] = anon_sym_PIPE_PIPE;
	v->a[42941] = anon_sym_LT;
	v->a[42942] = anon_sym_GT;
	v->a[42943] = anon_sym_GT_GT;
	v->a[42944] = anon_sym_LT_AMP;
	v->a[42945] = anon_sym_GT_AMP;
	v->a[42946] = anon_sym_GT_PIPE;
	v->a[42947] = anon_sym_LT_AMP_DASH;
	v->a[42948] = anon_sym_GT_AMP_DASH;
	v->a[42949] = anon_sym_LT_LT;
	v->a[42950] = anon_sym_LT_LT_DASH;
	v->a[42951] = 3;
	v->a[42952] = actions(3);
	v->a[42953] = 1;
	v->a[42954] = sym_comment;
	v->a[42955] = actions(1027);
	v->a[42956] = 3;
	v->a[42957] = sym_file_descriptor;
	v->a[42958] = sym__concat;
	v->a[42959] = ts_builtin_sym_end;
	small_parse_table_2148(v);
}

void	small_parse_table_2148(t_small_parse_table_array *v)
{
	v->a[42960] = actions(1025);
	v->a[42961] = 27;
	v->a[42962] = anon_sym_PIPE;
	v->a[42963] = anon_sym_SEMI_SEMI;
	v->a[42964] = anon_sym_AMP_AMP;
	v->a[42965] = anon_sym_PIPE_PIPE;
	v->a[42966] = anon_sym_LT;
	v->a[42967] = anon_sym_GT;
	v->a[42968] = anon_sym_GT_GT;
	v->a[42969] = anon_sym_LT_AMP;
	v->a[42970] = anon_sym_GT_AMP;
	v->a[42971] = anon_sym_GT_PIPE;
	v->a[42972] = anon_sym_LT_AMP_DASH;
	v->a[42973] = anon_sym_GT_AMP_DASH;
	v->a[42974] = anon_sym_LT_LT;
	v->a[42975] = anon_sym_LT_LT_DASH;
	v->a[42976] = aux_sym_heredoc_redirect_token1;
	v->a[42977] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42978] = anon_sym_AMP;
	v->a[42979] = aux_sym_concatenation_token1;
	small_parse_table_2149(v);
}

void	small_parse_table_2149(t_small_parse_table_array *v)
{
	v->a[42980] = anon_sym_DOLLAR;
	v->a[42981] = anon_sym_DQUOTE;
	v->a[42982] = sym_raw_string;
	v->a[42983] = sym_number;
	v->a[42984] = anon_sym_DOLLAR_LBRACE;
	v->a[42985] = anon_sym_DOLLAR_LPAREN;
	v->a[42986] = anon_sym_BQUOTE;
	v->a[42987] = sym_word;
	v->a[42988] = anon_sym_SEMI;
	v->a[42989] = 3;
	v->a[42990] = actions(3);
	v->a[42991] = 1;
	v->a[42992] = sym_comment;
	v->a[42993] = actions(982);
	v->a[42994] = 2;
	v->a[42995] = sym_file_descriptor;
	v->a[42996] = sym__concat;
	v->a[42997] = actions(980);
	v->a[42998] = 28;
	v->a[42999] = anon_sym_PIPE;
	small_parse_table_2150(v);
}

/* EOF small_parse_table_429.c */
