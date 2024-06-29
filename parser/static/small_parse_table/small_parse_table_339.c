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
	v->a[33900] = actions(1066);
	v->a[33901] = 2;
	v->a[33902] = anon_sym_LT_AMP_DASH;
	v->a[33903] = anon_sym_GT_AMP_DASH;
	v->a[33904] = actions(351);
	v->a[33905] = 3;
	v->a[33906] = sym_raw_string;
	v->a[33907] = sym_number;
	v->a[33908] = sym_word;
	v->a[33909] = state(777);
	v->a[33910] = 5;
	v->a[33911] = sym_arithmetic_expansion;
	v->a[33912] = sym_string;
	v->a[33913] = sym_simple_expansion;
	v->a[33914] = sym_expansion;
	v->a[33915] = sym_command_substitution;
	v->a[33916] = actions(1064);
	v->a[33917] = 8;
	v->a[33918] = anon_sym_LT;
	v->a[33919] = anon_sym_GT;
	small_parse_table_1696(v);
}

void	small_parse_table_1696(t_small_parse_table_array *v)
{
	v->a[33920] = anon_sym_GT_GT;
	v->a[33921] = anon_sym_AMP_GT;
	v->a[33922] = anon_sym_AMP_GT_GT;
	v->a[33923] = anon_sym_LT_AMP;
	v->a[33924] = anon_sym_GT_AMP;
	v->a[33925] = anon_sym_GT_PIPE;
	v->a[33926] = 3;
	v->a[33927] = actions(3);
	v->a[33928] = 1;
	v->a[33929] = sym_comment;
	v->a[33930] = actions(1114);
	v->a[33931] = 3;
	v->a[33932] = sym_file_descriptor;
	v->a[33933] = sym__concat;
	v->a[33934] = sym__bare_dollar;
	v->a[33935] = actions(1112);
	v->a[33936] = 30;
	v->a[33937] = anon_sym_PIPE;
	v->a[33938] = anon_sym_RPAREN;
	v->a[33939] = anon_sym_SEMI_SEMI;
	small_parse_table_1697(v);
}

void	small_parse_table_1697(t_small_parse_table_array *v)
{
	v->a[33940] = anon_sym_AMP_AMP;
	v->a[33941] = anon_sym_PIPE_PIPE;
	v->a[33942] = anon_sym_LT;
	v->a[33943] = anon_sym_GT;
	v->a[33944] = anon_sym_GT_GT;
	v->a[33945] = anon_sym_AMP_GT;
	v->a[33946] = anon_sym_AMP_GT_GT;
	v->a[33947] = anon_sym_LT_AMP;
	v->a[33948] = anon_sym_GT_AMP;
	v->a[33949] = anon_sym_GT_PIPE;
	v->a[33950] = anon_sym_LT_AMP_DASH;
	v->a[33951] = anon_sym_GT_AMP_DASH;
	v->a[33952] = anon_sym_LT_LT;
	v->a[33953] = anon_sym_LT_LT_DASH;
	v->a[33954] = aux_sym_heredoc_redirect_token1;
	v->a[33955] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33956] = anon_sym_AMP;
	v->a[33957] = aux_sym_concatenation_token1;
	v->a[33958] = anon_sym_DOLLAR;
	v->a[33959] = anon_sym_DQUOTE;
	small_parse_table_1698(v);
}

void	small_parse_table_1698(t_small_parse_table_array *v)
{
	v->a[33960] = sym_raw_string;
	v->a[33961] = sym_number;
	v->a[33962] = anon_sym_DOLLAR_LBRACE;
	v->a[33963] = anon_sym_DOLLAR_LPAREN;
	v->a[33964] = anon_sym_BQUOTE;
	v->a[33965] = sym_word;
	v->a[33966] = anon_sym_SEMI;
	v->a[33967] = 17;
	v->a[33968] = actions(1074);
	v->a[33969] = 1;
	v->a[33970] = sym_comment;
	v->a[33971] = actions(1136);
	v->a[33972] = 1;
	v->a[33973] = anon_sym_PIPE;
	v->a[33974] = actions(1138);
	v->a[33975] = 1;
	v->a[33976] = anon_sym_AMP_AMP;
	v->a[33977] = actions(1140);
	v->a[33978] = 1;
	v->a[33979] = anon_sym_PIPE_PIPE;
	small_parse_table_1699(v);
}

void	small_parse_table_1699(t_small_parse_table_array *v)
{
	v->a[33980] = actions(1150);
	v->a[33981] = 1;
	v->a[33982] = anon_sym_CARET;
	v->a[33983] = actions(1152);
	v->a[33984] = 1;
	v->a[33985] = anon_sym_AMP;
	v->a[33986] = actions(1239);
	v->a[33987] = 1;
	v->a[33988] = anon_sym_EQ;
	v->a[33989] = actions(1241);
	v->a[33990] = 1;
	v->a[33991] = anon_sym_QMARK;
	v->a[33992] = actions(1250);
	v->a[33993] = 1;
	v->a[33994] = anon_sym_RPAREN_RPAREN;
	v->a[33995] = actions(1144);
	v->a[33996] = 2;
	v->a[33997] = anon_sym_LT;
	v->a[33998] = anon_sym_GT;
	v->a[33999] = actions(1146);
	small_parse_table_1700(v);
}

/* EOF small_parse_table_339.c */
