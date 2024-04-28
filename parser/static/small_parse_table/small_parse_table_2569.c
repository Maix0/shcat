/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2569.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12845(t_small_parse_table_array *v)
{
	v->a[256900] = 1;
	v->a[256901] = aux_sym__simple_variable_name_token1;
	v->a[256902] = actions(11772);
	v->a[256903] = 1;
	v->a[256904] = sym_variable_name;
	v->a[256905] = actions(11848);
	v->a[256906] = 1;
	v->a[256907] = anon_sym_RBRACE3;
	v->a[256908] = state(3532);
	v->a[256909] = 1;
	v->a[256910] = sym_subscript;
	v->a[256911] = state(6428);
	v->a[256912] = 1;
	v->a[256913] = aux_sym__expansion_body_repeat1;
	v->a[256914] = state(6472);
	v->a[256915] = 1;
	v->a[256916] = sym_command_substitution;
	v->a[256917] = state(7105);
	v->a[256918] = 1;
	v->a[256919] = sym__expansion_body;
	small_parse_table_12846(v);
}

void	small_parse_table_12846(t_small_parse_table_array *v)
{
	v->a[256920] = actions(11762);
	v->a[256921] = 2;
	v->a[256922] = anon_sym_POUND2;
	v->a[256923] = anon_sym_EQ2;
	v->a[256924] = actions(8050);
	v->a[256925] = 3;
	v->a[256926] = sym__external_expansion_sym_hash;
	v->a[256927] = sym__external_expansion_sym_bang;
	v->a[256928] = sym__external_expansion_sym_equal;
	v->a[256929] = actions(11754);
	v->a[256930] = 4;
	v->a[256931] = anon_sym_DASH;
	v->a[256932] = anon_sym_STAR;
	v->a[256933] = anon_sym_QMARK;
	v->a[256934] = anon_sym_AT2;
	v->a[256935] = actions(11756);
	v->a[256936] = 5;
	v->a[256937] = anon_sym_BANG;
	v->a[256938] = anon_sym_DOLLAR;
	v->a[256939] = anon_sym_POUND;
	small_parse_table_12847(v);
}

void	small_parse_table_12847(t_small_parse_table_array *v)
{
	v->a[256940] = anon_sym_0;
	v->a[256941] = anon_sym__;
	v->a[256942] = 8;
	v->a[256943] = actions(3);
	v->a[256944] = 1;
	v->a[256945] = sym_comment;
	v->a[256946] = actions(11506);
	v->a[256947] = 1;
	v->a[256948] = aux_sym_heredoc_redirect_token1;
	v->a[256949] = actions(11508);
	v->a[256950] = 1;
	v->a[256951] = anon_sym_LT_LT_LT;
	v->a[256952] = actions(11850);
	v->a[256953] = 1;
	v->a[256954] = sym_file_descriptor;
	v->a[256955] = actions(11542);
	v->a[256956] = 2;
	v->a[256957] = anon_sym_LT_AMP_DASH;
	v->a[256958] = anon_sym_GT_AMP_DASH;
	v->a[256959] = state(5017);
	small_parse_table_12848(v);
}

void	small_parse_table_12848(t_small_parse_table_array *v)
{
	v->a[256960] = 2;
	v->a[256961] = sym_file_redirect;
	v->a[256962] = sym_herestring_redirect;
	v->a[256963] = actions(11540);
	v->a[256964] = 8;
	v->a[256965] = anon_sym_LT;
	v->a[256966] = anon_sym_GT;
	v->a[256967] = anon_sym_GT_GT;
	v->a[256968] = anon_sym_AMP_GT;
	v->a[256969] = anon_sym_AMP_GT_GT;
	v->a[256970] = anon_sym_LT_AMP;
	v->a[256971] = anon_sym_GT_AMP;
	v->a[256972] = anon_sym_GT_PIPE;
	v->a[256973] = actions(11504);
	v->a[256974] = 10;
	v->a[256975] = anon_sym_SEMI;
	v->a[256976] = anon_sym_PIPE_PIPE;
	v->a[256977] = anon_sym_AMP_AMP;
	v->a[256978] = anon_sym_PIPE;
	v->a[256979] = anon_sym_AMP;
	small_parse_table_12849(v);
}

void	small_parse_table_12849(t_small_parse_table_array *v)
{
	v->a[256980] = anon_sym_LT_LT;
	v->a[256981] = anon_sym_RPAREN;
	v->a[256982] = anon_sym_SEMI_SEMI;
	v->a[256983] = anon_sym_PIPE_AMP;
	v->a[256984] = anon_sym_LT_LT_DASH;
	v->a[256985] = 16;
	v->a[256986] = actions(3);
	v->a[256987] = 1;
	v->a[256988] = sym_comment;
	v->a[256989] = actions(11760);
	v->a[256990] = 1;
	v->a[256991] = anon_sym_BANG2;
	v->a[256992] = actions(11764);
	v->a[256993] = 1;
	v->a[256994] = anon_sym_DOLLAR_LPAREN;
	v->a[256995] = actions(11766);
	v->a[256996] = 1;
	v->a[256997] = anon_sym_BQUOTE;
	v->a[256998] = actions(11768);
	v->a[256999] = 1;
	small_parse_table_12850(v);
}

/* EOF small_parse_table_2569.c */
