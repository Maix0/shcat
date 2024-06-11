/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_309.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1545(t_small_parse_table_array *v)
{
	v->a[30900] = anon_sym_PIPE_PIPE;
	v->a[30901] = anon_sym_RPAREN_RPAREN;
	v->a[30902] = anon_sym_PLUS_EQ;
	v->a[30903] = anon_sym_DASH_EQ;
	v->a[30904] = anon_sym_STAR_EQ;
	v->a[30905] = anon_sym_SLASH_EQ;
	v->a[30906] = anon_sym_PERCENT_EQ;
	v->a[30907] = anon_sym_LT_LT_EQ;
	v->a[30908] = anon_sym_GT_GT_EQ;
	v->a[30909] = anon_sym_AMP_EQ;
	v->a[30910] = anon_sym_CARET_EQ;
	v->a[30911] = anon_sym_PIPE_EQ;
	v->a[30912] = anon_sym_QMARK;
	v->a[30913] = anon_sym_COLON;
	v->a[30914] = 6;
	v->a[30915] = actions(3);
	v->a[30916] = 1;
	v->a[30917] = sym_comment;
	v->a[30918] = actions(1207);
	v->a[30919] = 1;
	small_parse_table_1546(v);
}

void	small_parse_table_1546(t_small_parse_table_array *v)
{
	v->a[30920] = aux_sym_concatenation_token1;
	v->a[30921] = actions(1209);
	v->a[30922] = 1;
	v->a[30923] = sym__concat;
	v->a[30924] = state(421);
	v->a[30925] = 1;
	v->a[30926] = aux_sym_concatenation_repeat1;
	v->a[30927] = actions(1169);
	v->a[30928] = 2;
	v->a[30929] = sym_file_descriptor;
	v->a[30930] = sym__bare_dollar;
	v->a[30931] = actions(1167);
	v->a[30932] = 29;
	v->a[30933] = anon_sym_esac;
	v->a[30934] = anon_sym_PIPE;
	v->a[30935] = anon_sym_SEMI_SEMI;
	v->a[30936] = anon_sym_AMP_AMP;
	v->a[30937] = anon_sym_PIPE_PIPE;
	v->a[30938] = anon_sym_LT;
	v->a[30939] = anon_sym_GT;
	small_parse_table_1547(v);
}

void	small_parse_table_1547(t_small_parse_table_array *v)
{
	v->a[30940] = anon_sym_GT_GT;
	v->a[30941] = anon_sym_AMP_GT;
	v->a[30942] = anon_sym_AMP_GT_GT;
	v->a[30943] = anon_sym_LT_AMP;
	v->a[30944] = anon_sym_GT_AMP;
	v->a[30945] = anon_sym_GT_PIPE;
	v->a[30946] = anon_sym_LT_AMP_DASH;
	v->a[30947] = anon_sym_GT_AMP_DASH;
	v->a[30948] = anon_sym_LT_LT;
	v->a[30949] = anon_sym_LT_LT_DASH;
	v->a[30950] = aux_sym_heredoc_redirect_token1;
	v->a[30951] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30952] = anon_sym_AMP;
	v->a[30953] = anon_sym_DOLLAR;
	v->a[30954] = anon_sym_DQUOTE;
	v->a[30955] = sym_raw_string;
	v->a[30956] = sym_number;
	v->a[30957] = anon_sym_DOLLAR_LBRACE;
	v->a[30958] = anon_sym_DOLLAR_LPAREN;
	v->a[30959] = anon_sym_BQUOTE;
	small_parse_table_1548(v);
}

void	small_parse_table_1548(t_small_parse_table_array *v)
{
	v->a[30960] = sym_word;
	v->a[30961] = anon_sym_SEMI;
	v->a[30962] = 3;
	v->a[30963] = actions(1094);
	v->a[30964] = 1;
	v->a[30965] = sym_comment;
	v->a[30966] = actions(1211);
	v->a[30967] = 13;
	v->a[30968] = anon_sym_PIPE;
	v->a[30969] = anon_sym_EQ;
	v->a[30970] = anon_sym_LT;
	v->a[30971] = anon_sym_GT;
	v->a[30972] = anon_sym_GT_GT;
	v->a[30973] = anon_sym_LT_LT;
	v->a[30974] = anon_sym_CARET;
	v->a[30975] = anon_sym_AMP;
	v->a[30976] = anon_sym_PLUS;
	v->a[30977] = anon_sym_DASH;
	v->a[30978] = anon_sym_STAR;
	v->a[30979] = anon_sym_SLASH;
	small_parse_table_1549(v);
}

void	small_parse_table_1549(t_small_parse_table_array *v)
{
	v->a[30980] = anon_sym_PERCENT;
	v->a[30981] = actions(1213);
	v->a[30982] = 21;
	v->a[30983] = anon_sym_AMP_AMP;
	v->a[30984] = anon_sym_PIPE_PIPE;
	v->a[30985] = anon_sym_RPAREN_RPAREN;
	v->a[30986] = anon_sym_PLUS_EQ;
	v->a[30987] = anon_sym_DASH_EQ;
	v->a[30988] = anon_sym_STAR_EQ;
	v->a[30989] = anon_sym_SLASH_EQ;
	v->a[30990] = anon_sym_PERCENT_EQ;
	v->a[30991] = anon_sym_LT_LT_EQ;
	v->a[30992] = anon_sym_GT_GT_EQ;
	v->a[30993] = anon_sym_AMP_EQ;
	v->a[30994] = anon_sym_CARET_EQ;
	v->a[30995] = anon_sym_PIPE_EQ;
	v->a[30996] = anon_sym_EQ_EQ;
	v->a[30997] = anon_sym_BANG_EQ;
	v->a[30998] = anon_sym_LT_EQ;
	v->a[30999] = anon_sym_GT_EQ;
	small_parse_table_1550(v);
}

/* EOF small_parse_table_309.c */
