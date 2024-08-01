/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_539.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2695(t_small_parse_table_array *v)
{
	v->a[53900] = anon_sym_QMARK;
	v->a[53901] = anon_sym_COLON;
	v->a[53902] = anon_sym_PLUS_PLUS;
	v->a[53903] = anon_sym_DASH_DASH;
	v->a[53904] = 5;
	v->a[53905] = actions(1436);
	v->a[53906] = 1;
	v->a[53907] = sym_comment;
	v->a[53908] = actions(2702);
	v->a[53909] = 2;
	v->a[53910] = anon_sym_PLUS;
	v->a[53911] = anon_sym_DASH;
	v->a[53912] = actions(2706);
	v->a[53913] = 2;
	v->a[53914] = anon_sym_PLUS_PLUS;
	v->a[53915] = anon_sym_DASH_DASH;
	v->a[53916] = actions(2700);
	v->a[53917] = 3;
	v->a[53918] = anon_sym_RPAREN_RPAREN;
	v->a[53919] = anon_sym_QMARK;
	small_parse_table_2696(v);
}

void	small_parse_table_2696(t_small_parse_table_array *v)
{
	v->a[53920] = anon_sym_COLON;
	v->a[53921] = actions(2704);
	v->a[53922] = 3;
	v->a[53923] = anon_sym_STAR;
	v->a[53924] = anon_sym_SLASH;
	v->a[53925] = anon_sym_PERCENT;
	v->a[53926] = 3;
	v->a[53927] = actions(1436);
	v->a[53928] = 1;
	v->a[53929] = sym_comment;
	v->a[53930] = actions(1052);
	v->a[53931] = 3;
	v->a[53932] = anon_sym_PIPE;
	v->a[53933] = anon_sym_LT;
	v->a[53934] = anon_sym_GT;
	v->a[53935] = actions(1050);
	v->a[53936] = 7;
	v->a[53937] = sym__concat;
	v->a[53938] = sym_variable_name;
	v->a[53939] = anon_sym_AMP_AMP;
	small_parse_table_2697(v);
}

void	small_parse_table_2697(t_small_parse_table_array *v)
{
	v->a[53940] = anon_sym_PIPE_PIPE;
	v->a[53941] = anon_sym_GT_GT;
	v->a[53942] = anon_sym_LT_LT;
	v->a[53943] = aux_sym_concatenation_token1;
	v->a[53944] = 3;
	v->a[53945] = actions(1436);
	v->a[53946] = 1;
	v->a[53947] = sym_comment;
	v->a[53948] = actions(1056);
	v->a[53949] = 3;
	v->a[53950] = anon_sym_PIPE;
	v->a[53951] = anon_sym_LT;
	v->a[53952] = anon_sym_GT;
	v->a[53953] = actions(1054);
	v->a[53954] = 7;
	v->a[53955] = sym__concat;
	v->a[53956] = sym_variable_name;
	v->a[53957] = anon_sym_AMP_AMP;
	v->a[53958] = anon_sym_PIPE_PIPE;
	v->a[53959] = anon_sym_GT_GT;
	small_parse_table_2698(v);
}

void	small_parse_table_2698(t_small_parse_table_array *v)
{
	v->a[53960] = anon_sym_LT_LT;
	v->a[53961] = aux_sym_concatenation_token1;
	v->a[53962] = 4;
	v->a[53963] = actions(1436);
	v->a[53964] = 1;
	v->a[53965] = sym_comment;
	v->a[53966] = actions(816);
	v->a[53967] = 3;
	v->a[53968] = anon_sym_PIPE;
	v->a[53969] = anon_sym_LT;
	v->a[53970] = anon_sym_GT;
	v->a[53971] = state(1319);
	v->a[53972] = 3;
	v->a[53973] = sym_file_redirect;
	v->a[53974] = sym_heredoc_redirect;
	v->a[53975] = aux_sym_redirected_statement_repeat1;
	v->a[53976] = actions(827);
	v->a[53977] = 4;
	v->a[53978] = anon_sym_AMP_AMP;
	v->a[53979] = anon_sym_PIPE_PIPE;
	small_parse_table_2699(v);
}

void	small_parse_table_2699(t_small_parse_table_array *v)
{
	v->a[53980] = anon_sym_GT_GT;
	v->a[53981] = anon_sym_LT_LT;
	v->a[53982] = 5;
	v->a[53983] = actions(3);
	v->a[53984] = 1;
	v->a[53985] = sym_comment;
	v->a[53986] = actions(2065);
	v->a[53987] = 1;
	v->a[53988] = aux_sym_heredoc_redirect_token1;
	v->a[53989] = state(1311);
	v->a[53990] = 2;
	v->a[53991] = sym_file_redirect;
	v->a[53992] = aux_sym_redirected_statement_repeat2;
	v->a[53993] = actions(2633);
	v->a[53994] = 3;
	v->a[53995] = anon_sym_LT;
	v->a[53996] = anon_sym_GT;
	v->a[53997] = anon_sym_GT_GT;
	v->a[53998] = actions(2063);
	v->a[53999] = 4;
	small_parse_table_2700(v);
}

/* EOF small_parse_table_539.c */
