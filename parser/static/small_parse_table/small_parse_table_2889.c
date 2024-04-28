/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2889.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14445(t_small_parse_table_array *v)
{
	v->a[288900] = sym_string;
	v->a[288901] = actions(12914);
	v->a[288902] = 2;
	v->a[288903] = aux_sym__simple_variable_name_token1;
	v->a[288904] = aux_sym__multiline_variable_name_token1;
	v->a[288905] = actions(1227);
	v->a[288906] = 5;
	v->a[288907] = anon_sym_in;
	v->a[288908] = anon_sym_SEMI;
	v->a[288909] = anon_sym_AMP;
	v->a[288910] = anon_sym_SEMI_SEMI;
	v->a[288911] = aux_sym_heredoc_redirect_token1;
	v->a[288912] = actions(12910);
	v->a[288913] = 9;
	v->a[288914] = anon_sym_DASH;
	v->a[288915] = anon_sym_STAR;
	v->a[288916] = anon_sym_BANG;
	v->a[288917] = anon_sym_QMARK;
	v->a[288918] = anon_sym_DOLLAR;
	v->a[288919] = anon_sym_POUND;
	small_parse_table_14446(v);
}

void	small_parse_table_14446(t_small_parse_table_array *v)
{
	v->a[288920] = anon_sym_AT2;
	v->a[288921] = anon_sym_0;
	v->a[288922] = anon_sym__;
	v->a[288923] = 9;
	v->a[288924] = actions(3);
	v->a[288925] = 1;
	v->a[288926] = sym_comment;
	v->a[288927] = actions(3727);
	v->a[288928] = 1;
	v->a[288929] = anon_sym_LT_LT_LT;
	v->a[288930] = actions(3751);
	v->a[288931] = 1;
	v->a[288932] = sym_file_descriptor;
	v->a[288933] = actions(12922);
	v->a[288934] = 1;
	v->a[288935] = aux_sym_heredoc_redirect_token1;
	v->a[288936] = state(6931);
	v->a[288937] = 1;
	v->a[288938] = sym__heredoc_expression;
	v->a[288939] = actions(3717);
	small_parse_table_14447(v);
}

void	small_parse_table_14447(t_small_parse_table_array *v)
{
	v->a[288940] = 2;
	v->a[288941] = anon_sym_PIPE_PIPE;
	v->a[288942] = anon_sym_AMP_AMP;
	v->a[288943] = actions(3723);
	v->a[288944] = 2;
	v->a[288945] = anon_sym_LT_AMP_DASH;
	v->a[288946] = anon_sym_GT_AMP_DASH;
	v->a[288947] = state(5609);
	v->a[288948] = 3;
	v->a[288949] = sym_file_redirect;
	v->a[288950] = sym_herestring_redirect;
	v->a[288951] = aux_sym_redirected_statement_repeat2;
	v->a[288952] = actions(3721);
	v->a[288953] = 8;
	v->a[288954] = anon_sym_LT;
	v->a[288955] = anon_sym_GT;
	v->a[288956] = anon_sym_GT_GT;
	v->a[288957] = anon_sym_AMP_GT;
	v->a[288958] = anon_sym_AMP_GT_GT;
	v->a[288959] = anon_sym_LT_AMP;
	small_parse_table_14448(v);
}

void	small_parse_table_14448(t_small_parse_table_array *v)
{
	v->a[288960] = anon_sym_GT_AMP;
	v->a[288961] = anon_sym_GT_PIPE;
	v->a[288962] = 9;
	v->a[288963] = actions(3);
	v->a[288964] = 1;
	v->a[288965] = sym_comment;
	v->a[288966] = actions(3727);
	v->a[288967] = 1;
	v->a[288968] = anon_sym_LT_LT_LT;
	v->a[288969] = actions(3751);
	v->a[288970] = 1;
	v->a[288971] = sym_file_descriptor;
	v->a[288972] = actions(12924);
	v->a[288973] = 1;
	v->a[288974] = aux_sym_heredoc_redirect_token1;
	v->a[288975] = state(6928);
	v->a[288976] = 1;
	v->a[288977] = sym__heredoc_expression;
	v->a[288978] = actions(3717);
	v->a[288979] = 2;
	small_parse_table_14449(v);
}

void	small_parse_table_14449(t_small_parse_table_array *v)
{
	v->a[288980] = anon_sym_PIPE_PIPE;
	v->a[288981] = anon_sym_AMP_AMP;
	v->a[288982] = actions(3723);
	v->a[288983] = 2;
	v->a[288984] = anon_sym_LT_AMP_DASH;
	v->a[288985] = anon_sym_GT_AMP_DASH;
	v->a[288986] = state(5609);
	v->a[288987] = 3;
	v->a[288988] = sym_file_redirect;
	v->a[288989] = sym_herestring_redirect;
	v->a[288990] = aux_sym_redirected_statement_repeat2;
	v->a[288991] = actions(3721);
	v->a[288992] = 8;
	v->a[288993] = anon_sym_LT;
	v->a[288994] = anon_sym_GT;
	v->a[288995] = anon_sym_GT_GT;
	v->a[288996] = anon_sym_AMP_GT;
	v->a[288997] = anon_sym_AMP_GT_GT;
	v->a[288998] = anon_sym_LT_AMP;
	v->a[288999] = anon_sym_GT_AMP;
	small_parse_table_14450(v);
}

/* EOF small_parse_table_2889.c */
