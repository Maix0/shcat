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
	v->a[33900] = sym_test_operator;
	v->a[33901] = sym__brace_start;
	v->a[33902] = ts_builtin_sym_end;
	v->a[33903] = aux_sym_heredoc_redirect_token1;
	v->a[33904] = actions(1388);
	v->a[33905] = 31;
	v->a[33906] = anon_sym_PIPE;
	v->a[33907] = anon_sym_SEMI_SEMI;
	v->a[33908] = anon_sym_PIPE_AMP;
	v->a[33909] = anon_sym_AMP_AMP;
	v->a[33910] = anon_sym_PIPE_PIPE;
	v->a[33911] = anon_sym_LT;
	v->a[33912] = anon_sym_GT;
	v->a[33913] = anon_sym_GT_GT;
	v->a[33914] = anon_sym_AMP_GT;
	v->a[33915] = anon_sym_AMP_GT_GT;
	v->a[33916] = anon_sym_LT_AMP;
	v->a[33917] = anon_sym_GT_AMP;
	v->a[33918] = anon_sym_GT_PIPE;
	v->a[33919] = anon_sym_LT_AMP_DASH;
	small_parse_table_1696(v);
}

void	small_parse_table_1696(t_small_parse_table_array *v)
{
	v->a[33920] = anon_sym_GT_AMP_DASH;
	v->a[33921] = anon_sym_LT_LT;
	v->a[33922] = anon_sym_LT_LT_DASH;
	v->a[33923] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33924] = anon_sym_AMP;
	v->a[33925] = anon_sym_DOLLAR;
	v->a[33926] = sym__special_character;
	v->a[33927] = anon_sym_DQUOTE;
	v->a[33928] = sym_raw_string;
	v->a[33929] = aux_sym_number_token1;
	v->a[33930] = aux_sym_number_token2;
	v->a[33931] = anon_sym_DOLLAR_LBRACE;
	v->a[33932] = anon_sym_DOLLAR_LPAREN;
	v->a[33933] = anon_sym_BQUOTE;
	v->a[33934] = anon_sym_DOLLAR_BQUOTE;
	v->a[33935] = sym_word;
	v->a[33936] = anon_sym_SEMI;
	v->a[33937] = 6;
	v->a[33938] = actions(3);
	v->a[33939] = 1;
	small_parse_table_1697(v);
}

void	small_parse_table_1697(t_small_parse_table_array *v)
{
	v->a[33940] = sym_comment;
	v->a[33941] = actions(3442);
	v->a[33942] = 1;
	v->a[33943] = aux_sym_concatenation_token1;
	v->a[33944] = actions(3444);
	v->a[33945] = 1;
	v->a[33946] = sym__concat;
	v->a[33947] = state(858);
	v->a[33948] = 1;
	v->a[33949] = aux_sym_concatenation_repeat1;
	v->a[33950] = actions(2690);
	v->a[33951] = 4;
	v->a[33952] = sym_file_descriptor;
	v->a[33953] = sym_test_operator;
	v->a[33954] = sym__brace_start;
	v->a[33955] = aux_sym_heredoc_redirect_token1;
	v->a[33956] = actions(2688);
	v->a[33957] = 33;
	v->a[33958] = anon_sym_PIPE;
	v->a[33959] = anon_sym_RPAREN;
	small_parse_table_1698(v);
}

void	small_parse_table_1698(t_small_parse_table_array *v)
{
	v->a[33960] = anon_sym_SEMI_SEMI;
	v->a[33961] = anon_sym_PIPE_AMP;
	v->a[33962] = anon_sym_AMP_AMP;
	v->a[33963] = anon_sym_PIPE_PIPE;
	v->a[33964] = anon_sym_LT;
	v->a[33965] = anon_sym_GT;
	v->a[33966] = anon_sym_GT_GT;
	v->a[33967] = anon_sym_AMP_GT;
	v->a[33968] = anon_sym_AMP_GT_GT;
	v->a[33969] = anon_sym_LT_AMP;
	v->a[33970] = anon_sym_GT_AMP;
	v->a[33971] = anon_sym_GT_PIPE;
	v->a[33972] = anon_sym_LT_AMP_DASH;
	v->a[33973] = anon_sym_GT_AMP_DASH;
	v->a[33974] = anon_sym_LT_LT;
	v->a[33975] = anon_sym_LT_LT_DASH;
	v->a[33976] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33977] = anon_sym_AMP;
	v->a[33978] = anon_sym_DOLLAR;
	v->a[33979] = sym__special_character;
	small_parse_table_1699(v);
}

void	small_parse_table_1699(t_small_parse_table_array *v)
{
	v->a[33980] = anon_sym_DQUOTE;
	v->a[33981] = sym_raw_string;
	v->a[33982] = aux_sym_number_token1;
	v->a[33983] = aux_sym_number_token2;
	v->a[33984] = anon_sym_DOLLAR_LBRACE;
	v->a[33985] = anon_sym_DOLLAR_LPAREN;
	v->a[33986] = anon_sym_BQUOTE;
	v->a[33987] = anon_sym_DOLLAR_BQUOTE;
	v->a[33988] = aux_sym__simple_variable_name_token1;
	v->a[33989] = sym_word;
	v->a[33990] = anon_sym_SEMI;
	v->a[33991] = 6;
	v->a[33992] = actions(3);
	v->a[33993] = 1;
	v->a[33994] = sym_comment;
	v->a[33995] = actions(3442);
	v->a[33996] = 1;
	v->a[33997] = aux_sym_concatenation_token1;
	v->a[33998] = actions(3446);
	v->a[33999] = 1;
	small_parse_table_1700(v);
}

/* EOF small_parse_table_339.c */
