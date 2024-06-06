/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1169.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5845(t_small_parse_table_array *v)
{
	v->a[116900] = 1;
	v->a[116901] = sym_comment;
	v->a[116902] = actions(5952);
	v->a[116903] = 1;
	v->a[116904] = sym_file_descriptor;
	v->a[116905] = state(2311);
	v->a[116906] = 1;
	v->a[116907] = sym_file_redirect;
	v->a[116908] = actions(5443);
	v->a[116909] = 2;
	v->a[116910] = ts_builtin_sym_end;
	v->a[116911] = aux_sym_heredoc_redirect_token1;
	v->a[116912] = actions(5602);
	v->a[116913] = 2;
	v->a[116914] = anon_sym_LT_AMP_DASH;
	v->a[116915] = anon_sym_GT_AMP_DASH;
	v->a[116916] = actions(5600);
	v->a[116917] = 8;
	v->a[116918] = anon_sym_LT;
	v->a[116919] = anon_sym_GT;
	small_parse_table_5846(v);
}

void	small_parse_table_5846(t_small_parse_table_array *v)
{
	v->a[116920] = anon_sym_GT_GT;
	v->a[116921] = anon_sym_AMP_GT;
	v->a[116922] = anon_sym_AMP_GT_GT;
	v->a[116923] = anon_sym_LT_AMP;
	v->a[116924] = anon_sym_GT_AMP;
	v->a[116925] = anon_sym_GT_PIPE;
	v->a[116926] = actions(5441);
	v->a[116927] = 9;
	v->a[116928] = anon_sym_PIPE;
	v->a[116929] = anon_sym_SEMI_SEMI;
	v->a[116930] = anon_sym_PIPE_AMP;
	v->a[116931] = anon_sym_AMP_AMP;
	v->a[116932] = anon_sym_PIPE_PIPE;
	v->a[116933] = anon_sym_LT_LT;
	v->a[116934] = anon_sym_LT_LT_DASH;
	v->a[116935] = anon_sym_AMP;
	v->a[116936] = anon_sym_SEMI;
	v->a[116937] = 16;
	v->a[116938] = actions(3);
	v->a[116939] = 1;
	small_parse_table_5847(v);
}

void	small_parse_table_5847(t_small_parse_table_array *v)
{
	v->a[116940] = sym_comment;
	v->a[116941] = actions(1402);
	v->a[116942] = 1;
	v->a[116943] = aux_sym_number_token1;
	v->a[116944] = actions(1404);
	v->a[116945] = 1;
	v->a[116946] = aux_sym_number_token2;
	v->a[116947] = actions(1408);
	v->a[116948] = 1;
	v->a[116949] = anon_sym_DOLLAR_LPAREN;
	v->a[116950] = actions(1418);
	v->a[116951] = 1;
	v->a[116952] = sym__brace_start;
	v->a[116953] = actions(6360);
	v->a[116954] = 1;
	v->a[116955] = sym_word;
	v->a[116956] = actions(6362);
	v->a[116957] = 1;
	v->a[116958] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[116959] = actions(6364);
	small_parse_table_5848(v);
}

void	small_parse_table_5848(t_small_parse_table_array *v)
{
	v->a[116960] = 1;
	v->a[116961] = sym__special_character;
	v->a[116962] = actions(6366);
	v->a[116963] = 1;
	v->a[116964] = anon_sym_DQUOTE;
	v->a[116965] = actions(6370);
	v->a[116966] = 1;
	v->a[116967] = anon_sym_DOLLAR_LBRACE;
	v->a[116968] = actions(6372);
	v->a[116969] = 1;
	v->a[116970] = anon_sym_BQUOTE;
	v->a[116971] = actions(6374);
	v->a[116972] = 1;
	v->a[116973] = anon_sym_DOLLAR_BQUOTE;
	v->a[116974] = actions(6376);
	v->a[116975] = 1;
	v->a[116976] = sym__comment_word;
	v->a[116977] = actions(6869);
	v->a[116978] = 1;
	v->a[116979] = anon_sym_DOLLAR;
	small_parse_table_5849(v);
}

void	small_parse_table_5849(t_small_parse_table_array *v)
{
	v->a[116980] = actions(6368);
	v->a[116981] = 3;
	v->a[116982] = sym_test_operator;
	v->a[116983] = sym__bare_dollar;
	v->a[116984] = sym_raw_string;
	v->a[116985] = state(813);
	v->a[116986] = 7;
	v->a[116987] = sym_arithmetic_expansion;
	v->a[116988] = sym_brace_expression;
	v->a[116989] = sym_string;
	v->a[116990] = sym_number;
	v->a[116991] = sym_simple_expansion;
	v->a[116992] = sym_expansion;
	v->a[116993] = sym_command_substitution;
	v->a[116994] = 16;
	v->a[116995] = actions(3);
	v->a[116996] = 1;
	v->a[116997] = sym_comment;
	v->a[116998] = actions(163);
	v->a[116999] = 1;
	small_parse_table_5850(v);
}

/* EOF small_parse_table_1169.c */
