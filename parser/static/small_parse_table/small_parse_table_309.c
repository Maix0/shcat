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
	v->a[30900] = 1;
	v->a[30901] = sym_comment;
	v->a[30902] = actions(1156);
	v->a[30903] = 1;
	v->a[30904] = aux_sym_concatenation_token1;
	v->a[30905] = actions(1192);
	v->a[30906] = 1;
	v->a[30907] = sym__concat;
	v->a[30908] = state(387);
	v->a[30909] = 1;
	v->a[30910] = aux_sym_concatenation_repeat1;
	v->a[30911] = actions(1043);
	v->a[30912] = 2;
	v->a[30913] = sym_file_descriptor;
	v->a[30914] = sym_variable_name;
	v->a[30915] = actions(1045);
	v->a[30916] = 26;
	v->a[30917] = anon_sym_esac;
	v->a[30918] = anon_sym_PIPE;
	v->a[30919] = anon_sym_SEMI_SEMI;
	small_parse_table_1546(v);
}

void	small_parse_table_1546(t_small_parse_table_array *v)
{
	v->a[30920] = anon_sym_AMP_AMP;
	v->a[30921] = anon_sym_PIPE_PIPE;
	v->a[30922] = anon_sym_LT;
	v->a[30923] = anon_sym_GT;
	v->a[30924] = anon_sym_GT_GT;
	v->a[30925] = anon_sym_LT_AMP;
	v->a[30926] = anon_sym_GT_AMP;
	v->a[30927] = anon_sym_GT_PIPE;
	v->a[30928] = anon_sym_LT_GT;
	v->a[30929] = anon_sym_LT_LT;
	v->a[30930] = anon_sym_LT_LT_DASH;
	v->a[30931] = aux_sym_heredoc_redirect_token1;
	v->a[30932] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30933] = anon_sym_AMP;
	v->a[30934] = anon_sym_DOLLAR;
	v->a[30935] = anon_sym_DQUOTE;
	v->a[30936] = sym_raw_string;
	v->a[30937] = sym_number;
	v->a[30938] = anon_sym_DOLLAR_LBRACE;
	v->a[30939] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1547(v);
}

void	small_parse_table_1547(t_small_parse_table_array *v)
{
	v->a[30940] = anon_sym_BQUOTE;
	v->a[30941] = sym_word;
	v->a[30942] = anon_sym_SEMI;
	v->a[30943] = 3;
	v->a[30944] = actions(3);
	v->a[30945] = 1;
	v->a[30946] = sym_comment;
	v->a[30947] = actions(713);
	v->a[30948] = 3;
	v->a[30949] = sym_file_descriptor;
	v->a[30950] = sym__concat;
	v->a[30951] = sym__bare_dollar;
	v->a[30952] = actions(711);
	v->a[30953] = 28;
	v->a[30954] = anon_sym_LPAREN;
	v->a[30955] = anon_sym_PIPE;
	v->a[30956] = anon_sym_RPAREN;
	v->a[30957] = anon_sym_SEMI_SEMI;
	v->a[30958] = anon_sym_AMP_AMP;
	v->a[30959] = anon_sym_PIPE_PIPE;
	small_parse_table_1548(v);
}

void	small_parse_table_1548(t_small_parse_table_array *v)
{
	v->a[30960] = anon_sym_LT;
	v->a[30961] = anon_sym_GT;
	v->a[30962] = anon_sym_GT_GT;
	v->a[30963] = anon_sym_LT_AMP;
	v->a[30964] = anon_sym_GT_AMP;
	v->a[30965] = anon_sym_GT_PIPE;
	v->a[30966] = anon_sym_LT_GT;
	v->a[30967] = anon_sym_LT_LT;
	v->a[30968] = anon_sym_LT_LT_DASH;
	v->a[30969] = aux_sym_heredoc_redirect_token1;
	v->a[30970] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30971] = anon_sym_AMP;
	v->a[30972] = aux_sym_concatenation_token1;
	v->a[30973] = anon_sym_DOLLAR;
	v->a[30974] = anon_sym_DQUOTE;
	v->a[30975] = sym_raw_string;
	v->a[30976] = sym_number;
	v->a[30977] = anon_sym_DOLLAR_LBRACE;
	v->a[30978] = anon_sym_DOLLAR_LPAREN;
	v->a[30979] = anon_sym_BQUOTE;
	small_parse_table_1549(v);
}

void	small_parse_table_1549(t_small_parse_table_array *v)
{
	v->a[30980] = sym_word;
	v->a[30981] = anon_sym_SEMI;
	v->a[30982] = 20;
	v->a[30983] = actions(3);
	v->a[30984] = 1;
	v->a[30985] = sym_comment;
	v->a[30986] = actions(17);
	v->a[30987] = 1;
	v->a[30988] = anon_sym_LPAREN;
	v->a[30989] = actions(55);
	v->a[30990] = 1;
	v->a[30991] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30992] = actions(57);
	v->a[30993] = 1;
	v->a[30994] = anon_sym_DOLLAR;
	v->a[30995] = actions(59);
	v->a[30996] = 1;
	v->a[30997] = anon_sym_DQUOTE;
	v->a[30998] = actions(63);
	v->a[30999] = 1;
	small_parse_table_1550(v);
}

/* EOF small_parse_table_309.c */
