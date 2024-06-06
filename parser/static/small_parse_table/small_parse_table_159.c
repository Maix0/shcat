/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_159.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_795(t_small_parse_table_array *v)
{
	v->a[15900] = anon_sym_SEMI_AMP;
	v->a[15901] = anon_sym_SEMI_SEMI_AMP;
	v->a[15902] = anon_sym_PIPE_AMP;
	v->a[15903] = anon_sym_AMP_AMP;
	v->a[15904] = anon_sym_PIPE_PIPE;
	v->a[15905] = anon_sym_LT;
	v->a[15906] = anon_sym_GT;
	v->a[15907] = anon_sym_GT_GT;
	v->a[15908] = anon_sym_AMP_GT;
	v->a[15909] = anon_sym_AMP_GT_GT;
	v->a[15910] = anon_sym_LT_AMP;
	v->a[15911] = anon_sym_GT_AMP;
	v->a[15912] = anon_sym_GT_PIPE;
	v->a[15913] = anon_sym_LT_AMP_DASH;
	v->a[15914] = anon_sym_GT_AMP_DASH;
	v->a[15915] = anon_sym_LT_LT;
	v->a[15916] = anon_sym_LT_LT_DASH;
	v->a[15917] = anon_sym_AMP;
	v->a[15918] = anon_sym_SEMI;
	v->a[15919] = 27;
	small_parse_table_796(v);
}

void	small_parse_table_796(t_small_parse_table_array *v)
{
	v->a[15920] = actions(3);
	v->a[15921] = 1;
	v->a[15922] = sym_comment;
	v->a[15923] = actions(2458);
	v->a[15924] = 1;
	v->a[15925] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[15926] = actions(2460);
	v->a[15927] = 1;
	v->a[15928] = anon_sym_DOLLAR;
	v->a[15929] = actions(2462);
	v->a[15930] = 1;
	v->a[15931] = sym__special_character;
	v->a[15932] = actions(2464);
	v->a[15933] = 1;
	v->a[15934] = anon_sym_DQUOTE;
	v->a[15935] = actions(2466);
	v->a[15936] = 1;
	v->a[15937] = aux_sym_number_token1;
	v->a[15938] = actions(2468);
	v->a[15939] = 1;
	small_parse_table_797(v);
}

void	small_parse_table_797(t_small_parse_table_array *v)
{
	v->a[15940] = aux_sym_number_token2;
	v->a[15941] = actions(2470);
	v->a[15942] = 1;
	v->a[15943] = anon_sym_DOLLAR_LBRACE;
	v->a[15944] = actions(2472);
	v->a[15945] = 1;
	v->a[15946] = anon_sym_DOLLAR_LPAREN;
	v->a[15947] = actions(2474);
	v->a[15948] = 1;
	v->a[15949] = anon_sym_BQUOTE;
	v->a[15950] = actions(2476);
	v->a[15951] = 1;
	v->a[15952] = anon_sym_DOLLAR_BQUOTE;
	v->a[15953] = actions(2478);
	v->a[15954] = 1;
	v->a[15955] = sym_file_descriptor;
	v->a[15956] = actions(2480);
	v->a[15957] = 1;
	v->a[15958] = sym_test_operator;
	v->a[15959] = actions(2482);
	small_parse_table_798(v);
}

void	small_parse_table_798(t_small_parse_table_array *v)
{
	v->a[15960] = 1;
	v->a[15961] = sym__brace_start;
	v->a[15962] = actions(2640);
	v->a[15963] = 1;
	v->a[15964] = aux_sym_heredoc_redirect_token1;
	v->a[15965] = state(2137);
	v->a[15966] = 1;
	v->a[15967] = aux_sym__heredoc_command;
	v->a[15968] = state(2852);
	v->a[15969] = 1;
	v->a[15970] = aux_sym__literal_repeat1;
	v->a[15971] = state(2882);
	v->a[15972] = 1;
	v->a[15973] = sym_concatenation;
	v->a[15974] = state(3923);
	v->a[15975] = 1;
	v->a[15976] = sym__heredoc_expression;
	v->a[15977] = state(3925);
	v->a[15978] = 1;
	v->a[15979] = sym__heredoc_pipeline;
	small_parse_table_799(v);
}

void	small_parse_table_799(t_small_parse_table_array *v)
{
	v->a[15980] = actions(2446);
	v->a[15981] = 2;
	v->a[15982] = sym_raw_string;
	v->a[15983] = sym_word;
	v->a[15984] = actions(2448);
	v->a[15985] = 2;
	v->a[15986] = anon_sym_PIPE;
	v->a[15987] = anon_sym_PIPE_AMP;
	v->a[15988] = actions(2450);
	v->a[15989] = 2;
	v->a[15990] = anon_sym_AMP_AMP;
	v->a[15991] = anon_sym_PIPE_PIPE;
	v->a[15992] = actions(2454);
	v->a[15993] = 2;
	v->a[15994] = anon_sym_LT_AMP_DASH;
	v->a[15995] = anon_sym_GT_AMP_DASH;
	v->a[15996] = state(2764);
	v->a[15997] = 2;
	v->a[15998] = sym_file_redirect;
	v->a[15999] = aux_sym_redirected_statement_repeat2;
	small_parse_table_800(v);
}

/* EOF small_parse_table_159.c */
