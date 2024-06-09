/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_339.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1695(t_small_parse_table_array *v)
{
	v->a[33900] = aux_sym_number_token2;
	v->a[33901] = anon_sym_DOLLAR_LBRACE;
	v->a[33902] = anon_sym_DOLLAR_LPAREN;
	v->a[33903] = anon_sym_BQUOTE;
	v->a[33904] = sym_word;
	v->a[33905] = anon_sym_SEMI;
	v->a[33906] = 3;
	v->a[33907] = actions(3);
	v->a[33908] = 1;
	v->a[33909] = sym_comment;
	v->a[33910] = actions(1194);
	v->a[33911] = 3;
	v->a[33912] = sym_file_descriptor;
	v->a[33913] = sym__concat;
	v->a[33914] = sym__bare_dollar;
	v->a[33915] = actions(1196);
	v->a[33916] = 32;
	v->a[33917] = anon_sym_esac;
	v->a[33918] = anon_sym_LPAREN;
	v->a[33919] = anon_sym_PIPE;
	small_parse_table_1696(v);
}

void	small_parse_table_1696(t_small_parse_table_array *v)
{
	v->a[33920] = anon_sym_SEMI_SEMI;
	v->a[33921] = anon_sym_AMP_AMP;
	v->a[33922] = anon_sym_PIPE_PIPE;
	v->a[33923] = anon_sym_LT;
	v->a[33924] = anon_sym_GT;
	v->a[33925] = anon_sym_GT_GT;
	v->a[33926] = anon_sym_AMP_GT;
	v->a[33927] = anon_sym_AMP_GT_GT;
	v->a[33928] = anon_sym_LT_AMP;
	v->a[33929] = anon_sym_GT_AMP;
	v->a[33930] = anon_sym_GT_PIPE;
	v->a[33931] = anon_sym_LT_AMP_DASH;
	v->a[33932] = anon_sym_GT_AMP_DASH;
	v->a[33933] = anon_sym_LT_LT;
	v->a[33934] = anon_sym_LT_LT_DASH;
	v->a[33935] = aux_sym_heredoc_redirect_token1;
	v->a[33936] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33937] = anon_sym_AMP;
	v->a[33938] = aux_sym_concatenation_token1;
	v->a[33939] = anon_sym_DOLLAR;
	small_parse_table_1697(v);
}

void	small_parse_table_1697(t_small_parse_table_array *v)
{
	v->a[33940] = anon_sym_DQUOTE;
	v->a[33941] = sym_raw_string;
	v->a[33942] = aux_sym_number_token1;
	v->a[33943] = aux_sym_number_token2;
	v->a[33944] = anon_sym_DOLLAR_LBRACE;
	v->a[33945] = anon_sym_DOLLAR_LPAREN;
	v->a[33946] = anon_sym_BQUOTE;
	v->a[33947] = sym_word;
	v->a[33948] = anon_sym_SEMI;
	v->a[33949] = 14;
	v->a[33950] = actions(3);
	v->a[33951] = 1;
	v->a[33952] = sym_comment;
	v->a[33953] = actions(565);
	v->a[33954] = 1;
	v->a[33955] = sym_file_descriptor;
	v->a[33956] = actions(761);
	v->a[33957] = 1;
	v->a[33958] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33959] = actions(763);
	small_parse_table_1698(v);
}

void	small_parse_table_1698(t_small_parse_table_array *v)
{
	v->a[33960] = 1;
	v->a[33961] = anon_sym_DOLLAR;
	v->a[33962] = actions(765);
	v->a[33963] = 1;
	v->a[33964] = anon_sym_DQUOTE;
	v->a[33965] = actions(767);
	v->a[33966] = 1;
	v->a[33967] = aux_sym_number_token1;
	v->a[33968] = actions(769);
	v->a[33969] = 1;
	v->a[33970] = aux_sym_number_token2;
	v->a[33971] = actions(771);
	v->a[33972] = 1;
	v->a[33973] = anon_sym_DOLLAR_LBRACE;
	v->a[33974] = actions(773);
	v->a[33975] = 1;
	v->a[33976] = anon_sym_DOLLAR_LPAREN;
	v->a[33977] = actions(775);
	v->a[33978] = 1;
	v->a[33979] = anon_sym_BQUOTE;
	small_parse_table_1699(v);
}

void	small_parse_table_1699(t_small_parse_table_array *v)
{
	v->a[33980] = actions(1385);
	v->a[33981] = 2;
	v->a[33982] = sym_raw_string;
	v->a[33983] = sym_word;
	v->a[33984] = state(383);
	v->a[33985] = 2;
	v->a[33986] = sym_concatenation;
	v->a[33987] = aux_sym_for_statement_repeat1;
	v->a[33988] = state(805);
	v->a[33989] = 6;
	v->a[33990] = sym_arithmetic_expansion;
	v->a[33991] = sym_string;
	v->a[33992] = sym_number;
	v->a[33993] = sym_simple_expansion;
	v->a[33994] = sym_expansion;
	v->a[33995] = sym_command_substitution;
	v->a[33996] = actions(567);
	v->a[33997] = 16;
	v->a[33998] = anon_sym_PIPE;
	v->a[33999] = anon_sym_AMP_AMP;
	small_parse_table_1700(v);
}

/* EOF small_parse_table_339.c */
