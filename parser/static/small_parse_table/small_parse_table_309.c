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
	v->a[30900] = anon_sym_GT_PIPE;
	v->a[30901] = anon_sym_LT_GT;
	v->a[30902] = anon_sym_LT_LT;
	v->a[30903] = anon_sym_LT_LT_DASH;
	v->a[30904] = aux_sym_heredoc_redirect_token1;
	v->a[30905] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30906] = anon_sym_DOLLAR;
	v->a[30907] = anon_sym_DQUOTE;
	v->a[30908] = sym_raw_string;
	v->a[30909] = sym_number;
	v->a[30910] = anon_sym_DOLLAR_LBRACE;
	v->a[30911] = anon_sym_DOLLAR_LPAREN;
	v->a[30912] = anon_sym_BQUOTE;
	v->a[30913] = sym_word;
	v->a[30914] = anon_sym_SEMI;
	v->a[30915] = 14;
	v->a[30916] = actions(3);
	v->a[30917] = 1;
	v->a[30918] = sym_comment;
	v->a[30919] = actions(564);
	small_parse_table_1546(v);
}

void	small_parse_table_1546(t_small_parse_table_array *v)
{
	v->a[30920] = 1;
	v->a[30921] = sym_file_descriptor;
	v->a[30922] = actions(1179);
	v->a[30923] = 1;
	v->a[30924] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[30925] = actions(1182);
	v->a[30926] = 1;
	v->a[30927] = anon_sym_DOLLAR;
	v->a[30928] = actions(1185);
	v->a[30929] = 1;
	v->a[30930] = anon_sym_DQUOTE;
	v->a[30931] = actions(1188);
	v->a[30932] = 1;
	v->a[30933] = anon_sym_DOLLAR_LBRACE;
	v->a[30934] = actions(1191);
	v->a[30935] = 1;
	v->a[30936] = anon_sym_DOLLAR_LPAREN;
	v->a[30937] = actions(1194);
	v->a[30938] = 1;
	v->a[30939] = anon_sym_BQUOTE;
	small_parse_table_1547(v);
}

void	small_parse_table_1547(t_small_parse_table_array *v)
{
	v->a[30940] = actions(1197);
	v->a[30941] = 1;
	v->a[30942] = sym__bare_dollar;
	v->a[30943] = state(385);
	v->a[30944] = 1;
	v->a[30945] = aux_sym_command_repeat2;
	v->a[30946] = state(904);
	v->a[30947] = 1;
	v->a[30948] = sym_concatenation;
	v->a[30949] = actions(1176);
	v->a[30950] = 3;
	v->a[30951] = sym_raw_string;
	v->a[30952] = sym_number;
	v->a[30953] = sym_word;
	v->a[30954] = state(811);
	v->a[30955] = 5;
	v->a[30956] = sym_arithmetic_expansion;
	v->a[30957] = sym_string;
	v->a[30958] = sym_simple_expansion;
	v->a[30959] = sym_expansion;
	small_parse_table_1548(v);
}

void	small_parse_table_1548(t_small_parse_table_array *v)
{
	v->a[30960] = sym_command_substitution;
	v->a[30961] = actions(544);
	v->a[30962] = 12;
	v->a[30963] = anon_sym_PIPE;
	v->a[30964] = anon_sym_AMP_AMP;
	v->a[30965] = anon_sym_PIPE_PIPE;
	v->a[30966] = anon_sym_LT;
	v->a[30967] = anon_sym_GT;
	v->a[30968] = anon_sym_GT_GT;
	v->a[30969] = anon_sym_LT_AMP;
	v->a[30970] = anon_sym_GT_AMP;
	v->a[30971] = anon_sym_GT_PIPE;
	v->a[30972] = anon_sym_LT_GT;
	v->a[30973] = anon_sym_LT_LT;
	v->a[30974] = anon_sym_LT_LT_DASH;
	v->a[30975] = 6;
	v->a[30976] = actions(3);
	v->a[30977] = 1;
	v->a[30978] = sym_comment;
	v->a[30979] = actions(1204);
	small_parse_table_1549(v);
}

void	small_parse_table_1549(t_small_parse_table_array *v)
{
	v->a[30980] = 1;
	v->a[30981] = aux_sym_concatenation_token1;
	v->a[30982] = actions(1206);
	v->a[30983] = 1;
	v->a[30984] = sym__concat;
	v->a[30985] = state(397);
	v->a[30986] = 1;
	v->a[30987] = aux_sym_concatenation_repeat1;
	v->a[30988] = actions(1200);
	v->a[30989] = 3;
	v->a[30990] = sym_file_descriptor;
	v->a[30991] = sym_variable_name;
	v->a[30992] = ts_builtin_sym_end;
	v->a[30993] = actions(1202);
	v->a[30994] = 24;
	v->a[30995] = anon_sym_PIPE;
	v->a[30996] = anon_sym_SEMI_SEMI;
	v->a[30997] = anon_sym_AMP_AMP;
	v->a[30998] = anon_sym_PIPE_PIPE;
	v->a[30999] = anon_sym_LT;
	small_parse_table_1550(v);
}

/* EOF small_parse_table_309.c */
