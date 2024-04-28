/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2519.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12595(t_small_parse_table_array *v)
{
	v->a[251900] = anon_sym_AMP_GT_GT;
	v->a[251901] = anon_sym_LT_AMP;
	v->a[251902] = anon_sym_GT_AMP;
	v->a[251903] = anon_sym_GT_PIPE;
	v->a[251904] = anon_sym_LT_AMP_DASH;
	v->a[251905] = anon_sym_GT_AMP_DASH;
	v->a[251906] = anon_sym_LT_LT_DASH;
	v->a[251907] = anon_sym_LT_LT_LT;
	v->a[251908] = 8;
	v->a[251909] = actions(3);
	v->a[251910] = 1;
	v->a[251911] = sym_comment;
	v->a[251912] = actions(11661);
	v->a[251913] = 1;
	v->a[251914] = anon_sym_LT_LT_LT;
	v->a[251915] = actions(11664);
	v->a[251916] = 1;
	v->a[251917] = sym_file_descriptor;
	v->a[251918] = actions(11315);
	v->a[251919] = 2;
	small_parse_table_12596(v);
}

void	small_parse_table_12596(t_small_parse_table_array *v)
{
	v->a[251920] = ts_builtin_sym_end;
	v->a[251921] = aux_sym_heredoc_redirect_token1;
	v->a[251922] = actions(11658);
	v->a[251923] = 2;
	v->a[251924] = anon_sym_LT_AMP_DASH;
	v->a[251925] = anon_sym_GT_AMP_DASH;
	v->a[251926] = state(4530);
	v->a[251927] = 3;
	v->a[251928] = sym_file_redirect;
	v->a[251929] = sym_herestring_redirect;
	v->a[251930] = aux_sym_redirected_statement_repeat2;
	v->a[251931] = actions(11655);
	v->a[251932] = 8;
	v->a[251933] = anon_sym_LT;
	v->a[251934] = anon_sym_GT;
	v->a[251935] = anon_sym_GT_GT;
	v->a[251936] = anon_sym_AMP_GT;
	v->a[251937] = anon_sym_AMP_GT_GT;
	v->a[251938] = anon_sym_LT_AMP;
	v->a[251939] = anon_sym_GT_AMP;
	small_parse_table_12597(v);
}

void	small_parse_table_12597(t_small_parse_table_array *v)
{
	v->a[251940] = anon_sym_GT_PIPE;
	v->a[251941] = actions(11307);
	v->a[251942] = 9;
	v->a[251943] = anon_sym_SEMI;
	v->a[251944] = anon_sym_PIPE_PIPE;
	v->a[251945] = anon_sym_AMP_AMP;
	v->a[251946] = anon_sym_PIPE;
	v->a[251947] = anon_sym_AMP;
	v->a[251948] = anon_sym_LT_LT;
	v->a[251949] = anon_sym_SEMI_SEMI;
	v->a[251950] = anon_sym_PIPE_AMP;
	v->a[251951] = anon_sym_LT_LT_DASH;
	v->a[251952] = 6;
	v->a[251953] = actions(3);
	v->a[251954] = 1;
	v->a[251955] = sym_comment;
	v->a[251956] = actions(11500);
	v->a[251957] = 1;
	v->a[251958] = aux_sym_concatenation_token1;
	v->a[251959] = actions(11502);
	small_parse_table_12598(v);
}

void	small_parse_table_12598(t_small_parse_table_array *v)
{
	v->a[251960] = 1;
	v->a[251961] = sym__concat;
	v->a[251962] = state(4585);
	v->a[251963] = 1;
	v->a[251964] = aux_sym_concatenation_repeat1;
	v->a[251965] = actions(5375);
	v->a[251966] = 3;
	v->a[251967] = sym_file_descriptor;
	v->a[251968] = sym_variable_name;
	v->a[251969] = aux_sym_heredoc_redirect_token1;
	v->a[251970] = actions(5373);
	v->a[251971] = 20;
	v->a[251972] = anon_sym_SEMI;
	v->a[251973] = anon_sym_PIPE_PIPE;
	v->a[251974] = anon_sym_AMP_AMP;
	v->a[251975] = anon_sym_PIPE;
	v->a[251976] = anon_sym_AMP;
	v->a[251977] = anon_sym_LT;
	v->a[251978] = anon_sym_GT;
	v->a[251979] = anon_sym_LT_LT;
	small_parse_table_12599(v);
}

void	small_parse_table_12599(t_small_parse_table_array *v)
{
	v->a[251980] = anon_sym_GT_GT;
	v->a[251981] = anon_sym_RPAREN;
	v->a[251982] = anon_sym_SEMI_SEMI;
	v->a[251983] = anon_sym_PIPE_AMP;
	v->a[251984] = anon_sym_AMP_GT;
	v->a[251985] = anon_sym_AMP_GT_GT;
	v->a[251986] = anon_sym_LT_AMP;
	v->a[251987] = anon_sym_GT_AMP;
	v->a[251988] = anon_sym_GT_PIPE;
	v->a[251989] = anon_sym_LT_AMP_DASH;
	v->a[251990] = anon_sym_GT_AMP_DASH;
	v->a[251991] = anon_sym_LT_LT_DASH;
	v->a[251992] = 3;
	v->a[251993] = actions(3);
	v->a[251994] = 1;
	v->a[251995] = sym_comment;
	v->a[251996] = actions(1253);
	v->a[251997] = 3;
	v->a[251998] = sym_file_descriptor;
	v->a[251999] = sym__concat;
	small_parse_table_12600(v);
}

/* EOF small_parse_table_2519.c */
