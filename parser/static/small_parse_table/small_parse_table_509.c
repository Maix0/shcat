/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_509.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2545(t_small_parse_table_array *v)
{
	v->a[50900] = sym_variable_name;
	v->a[50901] = state(1224);
	v->a[50902] = 2;
	v->a[50903] = sym_variable_assignment;
	v->a[50904] = aux_sym__variable_assignments_repeat1;
	v->a[50905] = actions(742);
	v->a[50906] = 16;
	v->a[50907] = anon_sym_LT;
	v->a[50908] = anon_sym_GT;
	v->a[50909] = anon_sym_GT_GT;
	v->a[50910] = anon_sym_LT_AMP;
	v->a[50911] = anon_sym_GT_AMP;
	v->a[50912] = anon_sym_GT_PIPE;
	v->a[50913] = anon_sym_LT_GT;
	v->a[50914] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50915] = anon_sym_DOLLAR;
	v->a[50916] = anon_sym_DQUOTE;
	v->a[50917] = sym_raw_string;
	v->a[50918] = sym_number;
	v->a[50919] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2546(v);
}

void	small_parse_table_2546(t_small_parse_table_array *v)
{
	v->a[50920] = anon_sym_DOLLAR_LPAREN;
	v->a[50921] = anon_sym_BQUOTE;
	v->a[50922] = sym_word;
	v->a[50923] = 4;
	v->a[50924] = actions(3);
	v->a[50925] = 1;
	v->a[50926] = sym_comment;
	v->a[50927] = actions(942);
	v->a[50928] = 1;
	v->a[50929] = aux_sym_heredoc_redirect_token1;
	v->a[50930] = state(970);
	v->a[50931] = 3;
	v->a[50932] = sym_file_redirect;
	v->a[50933] = sym_heredoc_redirect;
	v->a[50934] = aux_sym_redirected_statement_repeat1;
	v->a[50935] = actions(916);
	v->a[50936] = 15;
	v->a[50937] = anon_sym_PIPE;
	v->a[50938] = anon_sym_SEMI_SEMI;
	v->a[50939] = anon_sym_AMP_AMP;
	small_parse_table_2547(v);
}

void	small_parse_table_2547(t_small_parse_table_array *v)
{
	v->a[50940] = anon_sym_PIPE_PIPE;
	v->a[50941] = anon_sym_LT;
	v->a[50942] = anon_sym_GT;
	v->a[50943] = anon_sym_GT_GT;
	v->a[50944] = anon_sym_LT_AMP;
	v->a[50945] = anon_sym_GT_AMP;
	v->a[50946] = anon_sym_GT_PIPE;
	v->a[50947] = anon_sym_LT_GT;
	v->a[50948] = anon_sym_LT_LT;
	v->a[50949] = anon_sym_LT_LT_DASH;
	v->a[50950] = anon_sym_BQUOTE;
	v->a[50951] = anon_sym_SEMI;
	v->a[50952] = 4;
	v->a[50953] = actions(3);
	v->a[50954] = 1;
	v->a[50955] = sym_comment;
	v->a[50956] = actions(942);
	v->a[50957] = 1;
	v->a[50958] = aux_sym_heredoc_redirect_token1;
	v->a[50959] = state(931);
	small_parse_table_2548(v);
}

void	small_parse_table_2548(t_small_parse_table_array *v)
{
	v->a[50960] = 3;
	v->a[50961] = sym_file_redirect;
	v->a[50962] = sym_heredoc_redirect;
	v->a[50963] = aux_sym_redirected_statement_repeat1;
	v->a[50964] = actions(916);
	v->a[50965] = 15;
	v->a[50966] = anon_sym_esac;
	v->a[50967] = anon_sym_PIPE;
	v->a[50968] = anon_sym_SEMI_SEMI;
	v->a[50969] = anon_sym_AMP_AMP;
	v->a[50970] = anon_sym_PIPE_PIPE;
	v->a[50971] = anon_sym_LT;
	v->a[50972] = anon_sym_GT;
	v->a[50973] = anon_sym_GT_GT;
	v->a[50974] = anon_sym_LT_AMP;
	v->a[50975] = anon_sym_GT_AMP;
	v->a[50976] = anon_sym_GT_PIPE;
	v->a[50977] = anon_sym_LT_GT;
	v->a[50978] = anon_sym_LT_LT;
	v->a[50979] = anon_sym_LT_LT_DASH;
	small_parse_table_2549(v);
}

void	small_parse_table_2549(t_small_parse_table_array *v)
{
	v->a[50980] = anon_sym_SEMI;
	v->a[50981] = 5;
	v->a[50982] = actions(3);
	v->a[50983] = 1;
	v->a[50984] = sym_comment;
	v->a[50985] = actions(746);
	v->a[50986] = 1;
	v->a[50987] = anon_sym_PIPE;
	v->a[50988] = actions(942);
	v->a[50989] = 1;
	v->a[50990] = aux_sym_heredoc_redirect_token1;
	v->a[50991] = state(931);
	v->a[50992] = 3;
	v->a[50993] = sym_file_redirect;
	v->a[50994] = sym_heredoc_redirect;
	v->a[50995] = aux_sym_redirected_statement_repeat1;
	v->a[50996] = actions(916);
	v->a[50997] = 14;
	v->a[50998] = anon_sym_esac;
	v->a[50999] = anon_sym_SEMI_SEMI;
	small_parse_table_2550(v);
}

/* EOF small_parse_table_509.c */
