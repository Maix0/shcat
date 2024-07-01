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
	v->a[33900] = actions(3);
	v->a[33901] = 1;
	v->a[33902] = sym_comment;
	v->a[33903] = actions(1093);
	v->a[33904] = 3;
	v->a[33905] = sym_file_descriptor;
	v->a[33906] = sym__concat;
	v->a[33907] = sym_variable_name;
	v->a[33908] = actions(1088);
	v->a[33909] = 27;
	v->a[33910] = anon_sym_PIPE;
	v->a[33911] = anon_sym_RPAREN;
	v->a[33912] = anon_sym_SEMI_SEMI;
	v->a[33913] = anon_sym_AMP_AMP;
	v->a[33914] = anon_sym_PIPE_PIPE;
	v->a[33915] = anon_sym_LT;
	v->a[33916] = anon_sym_GT;
	v->a[33917] = anon_sym_GT_GT;
	v->a[33918] = anon_sym_LT_AMP;
	v->a[33919] = anon_sym_GT_AMP;
	small_parse_table_1696(v);
}

void	small_parse_table_1696(t_small_parse_table_array *v)
{
	v->a[33920] = anon_sym_GT_PIPE;
	v->a[33921] = anon_sym_LT_GT;
	v->a[33922] = anon_sym_LT_LT;
	v->a[33923] = anon_sym_LT_LT_DASH;
	v->a[33924] = aux_sym_heredoc_redirect_token1;
	v->a[33925] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33926] = anon_sym_AMP;
	v->a[33927] = aux_sym_concatenation_token1;
	v->a[33928] = anon_sym_DOLLAR;
	v->a[33929] = anon_sym_DQUOTE;
	v->a[33930] = sym_raw_string;
	v->a[33931] = sym_number;
	v->a[33932] = anon_sym_DOLLAR_LBRACE;
	v->a[33933] = anon_sym_DOLLAR_LPAREN;
	v->a[33934] = anon_sym_BQUOTE;
	v->a[33935] = sym_word;
	v->a[33936] = anon_sym_SEMI;
	v->a[33937] = 14;
	v->a[33938] = actions(3);
	v->a[33939] = 1;
	small_parse_table_1697(v);
}

void	small_parse_table_1697(t_small_parse_table_array *v)
{
	v->a[33940] = sym_comment;
	v->a[33941] = actions(558);
	v->a[33942] = 1;
	v->a[33943] = sym_file_descriptor;
	v->a[33944] = actions(1130);
	v->a[33945] = 1;
	v->a[33946] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[33947] = actions(1132);
	v->a[33948] = 1;
	v->a[33949] = anon_sym_DOLLAR;
	v->a[33950] = actions(1134);
	v->a[33951] = 1;
	v->a[33952] = anon_sym_DQUOTE;
	v->a[33953] = actions(1136);
	v->a[33954] = 1;
	v->a[33955] = anon_sym_DOLLAR_LBRACE;
	v->a[33956] = actions(1138);
	v->a[33957] = 1;
	v->a[33958] = anon_sym_DOLLAR_LPAREN;
	v->a[33959] = actions(1140);
	small_parse_table_1698(v);
}

void	small_parse_table_1698(t_small_parse_table_array *v)
{
	v->a[33960] = 1;
	v->a[33961] = anon_sym_BQUOTE;
	v->a[33962] = actions(1142);
	v->a[33963] = 1;
	v->a[33964] = sym__bare_dollar;
	v->a[33965] = state(556);
	v->a[33966] = 1;
	v->a[33967] = aux_sym_command_repeat2;
	v->a[33968] = state(912);
	v->a[33969] = 1;
	v->a[33970] = sym_concatenation;
	v->a[33971] = actions(1128);
	v->a[33972] = 3;
	v->a[33973] = sym_raw_string;
	v->a[33974] = sym_number;
	v->a[33975] = sym_word;
	v->a[33976] = state(779);
	v->a[33977] = 5;
	v->a[33978] = sym_arithmetic_expansion;
	v->a[33979] = sym_string;
	small_parse_table_1699(v);
}

void	small_parse_table_1699(t_small_parse_table_array *v)
{
	v->a[33980] = sym_simple_expansion;
	v->a[33981] = sym_expansion;
	v->a[33982] = sym_command_substitution;
	v->a[33983] = actions(556);
	v->a[33984] = 12;
	v->a[33985] = anon_sym_PIPE;
	v->a[33986] = anon_sym_AMP_AMP;
	v->a[33987] = anon_sym_PIPE_PIPE;
	v->a[33988] = anon_sym_LT;
	v->a[33989] = anon_sym_GT;
	v->a[33990] = anon_sym_GT_GT;
	v->a[33991] = anon_sym_LT_AMP;
	v->a[33992] = anon_sym_GT_AMP;
	v->a[33993] = anon_sym_GT_PIPE;
	v->a[33994] = anon_sym_LT_GT;
	v->a[33995] = anon_sym_LT_LT;
	v->a[33996] = anon_sym_LT_LT_DASH;
	v->a[33997] = 3;
	v->a[33998] = actions(3);
	v->a[33999] = 1;
	small_parse_table_1700(v);
}

/* EOF small_parse_table_339.c */
