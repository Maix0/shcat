/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_149.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_745(t_small_parse_table_array *v)
{
	v->a[14900] = actions(2372);
	v->a[14901] = 1;
	v->a[14902] = anon_sym_DOLLAR_BQUOTE;
	v->a[14903] = actions(2376);
	v->a[14904] = 1;
	v->a[14905] = sym__brace_start;
	v->a[14906] = actions(2573);
	v->a[14907] = 1;
	v->a[14908] = sym__special_character;
	v->a[14909] = actions(2575);
	v->a[14910] = 1;
	v->a[14911] = sym_test_operator;
	v->a[14912] = state(1996);
	v->a[14913] = 1;
	v->a[14914] = aux_sym__literal_repeat1;
	v->a[14915] = state(2320);
	v->a[14916] = 1;
	v->a[14917] = sym_concatenation;
	v->a[14918] = actions(1534);
	v->a[14919] = 2;
	small_parse_table_746(v);
}

void	small_parse_table_746(t_small_parse_table_array *v)
{
	v->a[14920] = sym_file_descriptor;
	v->a[14921] = aux_sym_heredoc_redirect_token1;
	v->a[14922] = actions(2571);
	v->a[14923] = 2;
	v->a[14924] = sym_raw_string;
	v->a[14925] = sym_word;
	v->a[14926] = state(2049);
	v->a[14927] = 7;
	v->a[14928] = sym_arithmetic_expansion;
	v->a[14929] = sym_brace_expression;
	v->a[14930] = sym_string;
	v->a[14931] = sym_number;
	v->a[14932] = sym_simple_expansion;
	v->a[14933] = sym_expansion;
	v->a[14934] = sym_command_substitution;
	v->a[14935] = actions(1532);
	v->a[14936] = 20;
	v->a[14937] = anon_sym_PIPE;
	v->a[14938] = anon_sym_SEMI_SEMI;
	v->a[14939] = anon_sym_PIPE_AMP;
	small_parse_table_747(v);
}

void	small_parse_table_747(t_small_parse_table_array *v)
{
	v->a[14940] = anon_sym_AMP_AMP;
	v->a[14941] = anon_sym_PIPE_PIPE;
	v->a[14942] = anon_sym_LT;
	v->a[14943] = anon_sym_GT;
	v->a[14944] = anon_sym_GT_GT;
	v->a[14945] = anon_sym_AMP_GT;
	v->a[14946] = anon_sym_AMP_GT_GT;
	v->a[14947] = anon_sym_LT_AMP;
	v->a[14948] = anon_sym_GT_AMP;
	v->a[14949] = anon_sym_GT_PIPE;
	v->a[14950] = anon_sym_LT_AMP_DASH;
	v->a[14951] = anon_sym_GT_AMP_DASH;
	v->a[14952] = anon_sym_LT_LT;
	v->a[14953] = anon_sym_LT_LT_DASH;
	v->a[14954] = anon_sym_AMP;
	v->a[14955] = anon_sym_BQUOTE;
	v->a[14956] = anon_sym_SEMI;
	v->a[14957] = 19;
	v->a[14958] = actions(3);
	v->a[14959] = 1;
	small_parse_table_748(v);
}

void	small_parse_table_748(t_small_parse_table_array *v)
{
	v->a[14960] = sym_comment;
	v->a[14961] = actions(2354);
	v->a[14962] = 1;
	v->a[14963] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[14964] = actions(2356);
	v->a[14965] = 1;
	v->a[14966] = anon_sym_DOLLAR;
	v->a[14967] = actions(2360);
	v->a[14968] = 1;
	v->a[14969] = anon_sym_DQUOTE;
	v->a[14970] = actions(2362);
	v->a[14971] = 1;
	v->a[14972] = aux_sym_number_token1;
	v->a[14973] = actions(2364);
	v->a[14974] = 1;
	v->a[14975] = aux_sym_number_token2;
	v->a[14976] = actions(2366);
	v->a[14977] = 1;
	v->a[14978] = anon_sym_DOLLAR_LBRACE;
	v->a[14979] = actions(2368);
	small_parse_table_749(v);
}

void	small_parse_table_749(t_small_parse_table_array *v)
{
	v->a[14980] = 1;
	v->a[14981] = anon_sym_DOLLAR_LPAREN;
	v->a[14982] = actions(2370);
	v->a[14983] = 1;
	v->a[14984] = anon_sym_BQUOTE;
	v->a[14985] = actions(2372);
	v->a[14986] = 1;
	v->a[14987] = anon_sym_DOLLAR_BQUOTE;
	v->a[14988] = actions(2376);
	v->a[14989] = 1;
	v->a[14990] = sym__brace_start;
	v->a[14991] = actions(2442);
	v->a[14992] = 1;
	v->a[14993] = sym__special_character;
	v->a[14994] = actions(2579);
	v->a[14995] = 1;
	v->a[14996] = sym_test_operator;
	v->a[14997] = state(1996);
	v->a[14998] = 1;
	v->a[14999] = aux_sym__literal_repeat1;
	small_parse_table_750(v);
}

/* EOF small_parse_table_149.c */
