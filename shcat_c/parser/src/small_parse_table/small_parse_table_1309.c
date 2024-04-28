/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1309.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6545(t_small_parse_table_array *v)
{
	v->a[130900] = 14;
	v->a[130901] = anon_sym_PIPE;
	v->a[130902] = anon_sym_LT;
	v->a[130903] = anon_sym_GT;
	v->a[130904] = anon_sym_LT_LT;
	v->a[130905] = anon_sym_AMP_GT;
	v->a[130906] = anon_sym_LT_AMP;
	v->a[130907] = anon_sym_GT_AMP;
	v->a[130908] = anon_sym_DOLLAR;
	v->a[130909] = sym__special_character;
	v->a[130910] = aux_sym_number_token1;
	v->a[130911] = aux_sym_number_token2;
	v->a[130912] = anon_sym_DOLLAR_LPAREN;
	v->a[130913] = anon_sym_BQUOTE;
	v->a[130914] = sym_word;
	v->a[130915] = actions(5395);
	v->a[130916] = 23;
	v->a[130917] = sym_file_descriptor;
	v->a[130918] = sym_test_operator;
	v->a[130919] = sym__brace_start;
	small_parse_table_6546(v);
}

void	small_parse_table_6546(t_small_parse_table_array *v)
{
	v->a[130920] = anon_sym_LPAREN_LPAREN;
	v->a[130921] = anon_sym_PIPE_PIPE;
	v->a[130922] = anon_sym_AMP_AMP;
	v->a[130923] = anon_sym_GT_GT;
	v->a[130924] = anon_sym_PIPE_AMP;
	v->a[130925] = anon_sym_RBRACK;
	v->a[130926] = anon_sym_AMP_GT_GT;
	v->a[130927] = anon_sym_GT_PIPE;
	v->a[130928] = anon_sym_LT_AMP_DASH;
	v->a[130929] = anon_sym_GT_AMP_DASH;
	v->a[130930] = anon_sym_LT_LT_DASH;
	v->a[130931] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[130932] = anon_sym_DOLLAR_LBRACK;
	v->a[130933] = anon_sym_DQUOTE;
	v->a[130934] = sym_raw_string;
	v->a[130935] = sym_ansi_c_string;
	v->a[130936] = anon_sym_DOLLAR_LBRACE;
	v->a[130937] = anon_sym_DOLLAR_BQUOTE;
	v->a[130938] = anon_sym_LT_LPAREN;
	v->a[130939] = anon_sym_GT_LPAREN;
	small_parse_table_6547(v);
}

void	small_parse_table_6547(t_small_parse_table_array *v)
{
	v->a[130940] = 6;
	v->a[130941] = actions(71);
	v->a[130942] = 1;
	v->a[130943] = sym_comment;
	v->a[130944] = actions(1077);
	v->a[130945] = 1;
	v->a[130946] = aux_sym_concatenation_token1;
	v->a[130947] = actions(6702);
	v->a[130948] = 1;
	v->a[130949] = sym__concat;
	v->a[130950] = state(2464);
	v->a[130951] = 1;
	v->a[130952] = aux_sym_concatenation_repeat1;
	v->a[130953] = actions(1265);
	v->a[130954] = 14;
	v->a[130955] = anon_sym_EQ;
	v->a[130956] = anon_sym_PIPE;
	v->a[130957] = anon_sym_CARET;
	v->a[130958] = anon_sym_AMP;
	v->a[130959] = anon_sym_LT;
	small_parse_table_6548(v);
}

void	small_parse_table_6548(t_small_parse_table_array *v)
{
	v->a[130960] = anon_sym_GT;
	v->a[130961] = anon_sym_LT_LT;
	v->a[130962] = anon_sym_GT_GT;
	v->a[130963] = anon_sym_PLUS;
	v->a[130964] = anon_sym_DASH;
	v->a[130965] = anon_sym_STAR;
	v->a[130966] = anon_sym_SLASH;
	v->a[130967] = anon_sym_PERCENT;
	v->a[130968] = anon_sym_STAR_STAR;
	v->a[130969] = actions(1267);
	v->a[130970] = 23;
	v->a[130971] = sym_test_operator;
	v->a[130972] = anon_sym_PLUS_PLUS;
	v->a[130973] = anon_sym_DASH_DASH;
	v->a[130974] = anon_sym_PLUS_EQ;
	v->a[130975] = anon_sym_DASH_EQ;
	v->a[130976] = anon_sym_STAR_EQ;
	v->a[130977] = anon_sym_SLASH_EQ;
	v->a[130978] = anon_sym_PERCENT_EQ;
	v->a[130979] = anon_sym_STAR_STAR_EQ;
	small_parse_table_6549(v);
}

void	small_parse_table_6549(t_small_parse_table_array *v)
{
	v->a[130980] = anon_sym_LT_LT_EQ;
	v->a[130981] = anon_sym_GT_GT_EQ;
	v->a[130982] = anon_sym_AMP_EQ;
	v->a[130983] = anon_sym_CARET_EQ;
	v->a[130984] = anon_sym_PIPE_EQ;
	v->a[130985] = anon_sym_PIPE_PIPE;
	v->a[130986] = anon_sym_AMP_AMP;
	v->a[130987] = anon_sym_EQ_EQ;
	v->a[130988] = anon_sym_BANG_EQ;
	v->a[130989] = anon_sym_LT_EQ;
	v->a[130990] = anon_sym_GT_EQ;
	v->a[130991] = anon_sym_RPAREN;
	v->a[130992] = anon_sym_EQ_TILDE;
	v->a[130993] = anon_sym_QMARK;
	v->a[130994] = 3;
	v->a[130995] = actions(71);
	v->a[130996] = 1;
	v->a[130997] = sym_comment;
	v->a[130998] = actions(1261);
	v->a[130999] = 14;
	small_parse_table_6550(v);
}

/* EOF small_parse_table_1309.c */
