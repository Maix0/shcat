/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_389.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1945(t_small_parse_table_array *v)
{
	v->a[38900] = 3;
	v->a[38901] = sym_file_descriptor;
	v->a[38902] = sym__concat;
	v->a[38903] = ts_builtin_sym_end;
	v->a[38904] = actions(1180);
	v->a[38905] = 26;
	v->a[38906] = anon_sym_PIPE;
	v->a[38907] = anon_sym_SEMI_SEMI;
	v->a[38908] = anon_sym_AMP_AMP;
	v->a[38909] = anon_sym_PIPE_PIPE;
	v->a[38910] = anon_sym_LT;
	v->a[38911] = anon_sym_GT;
	v->a[38912] = anon_sym_GT_GT;
	v->a[38913] = anon_sym_LT_AMP;
	v->a[38914] = anon_sym_GT_AMP;
	v->a[38915] = anon_sym_GT_PIPE;
	v->a[38916] = anon_sym_LT_GT;
	v->a[38917] = anon_sym_LT_LT;
	v->a[38918] = anon_sym_LT_LT_DASH;
	v->a[38919] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1946(v);
}

void	small_parse_table_1946(t_small_parse_table_array *v)
{
	v->a[38920] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38921] = anon_sym_AMP;
	v->a[38922] = aux_sym_concatenation_token1;
	v->a[38923] = anon_sym_DOLLAR;
	v->a[38924] = anon_sym_DQUOTE;
	v->a[38925] = sym_raw_string;
	v->a[38926] = sym_number;
	v->a[38927] = anon_sym_DOLLAR_LBRACE;
	v->a[38928] = anon_sym_DOLLAR_LPAREN;
	v->a[38929] = anon_sym_BQUOTE;
	v->a[38930] = sym_word;
	v->a[38931] = anon_sym_SEMI;
	v->a[38932] = 12;
	v->a[38933] = actions(3);
	v->a[38934] = 1;
	v->a[38935] = sym_comment;
	v->a[38936] = actions(515);
	v->a[38937] = 1;
	v->a[38938] = sym_file_descriptor;
	v->a[38939] = actions(1381);
	small_parse_table_1947(v);
}

void	small_parse_table_1947(t_small_parse_table_array *v)
{
	v->a[38940] = 1;
	v->a[38941] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38942] = actions(1383);
	v->a[38943] = 1;
	v->a[38944] = anon_sym_DOLLAR;
	v->a[38945] = actions(1385);
	v->a[38946] = 1;
	v->a[38947] = anon_sym_DQUOTE;
	v->a[38948] = actions(1387);
	v->a[38949] = 1;
	v->a[38950] = anon_sym_DOLLAR_LBRACE;
	v->a[38951] = actions(1389);
	v->a[38952] = 1;
	v->a[38953] = anon_sym_DOLLAR_LPAREN;
	v->a[38954] = actions(1391);
	v->a[38955] = 1;
	v->a[38956] = anon_sym_BQUOTE;
	v->a[38957] = state(581);
	v->a[38958] = 2;
	v->a[38959] = sym_concatenation;
	small_parse_table_1948(v);
}

void	small_parse_table_1948(t_small_parse_table_array *v)
{
	v->a[38960] = aux_sym_for_statement_repeat1;
	v->a[38961] = actions(1379);
	v->a[38962] = 3;
	v->a[38963] = sym_raw_string;
	v->a[38964] = sym_number;
	v->a[38965] = sym_word;
	v->a[38966] = state(884);
	v->a[38967] = 5;
	v->a[38968] = sym_arithmetic_expansion;
	v->a[38969] = sym_string;
	v->a[38970] = sym_simple_expansion;
	v->a[38971] = sym_expansion;
	v->a[38972] = sym_command_substitution;
	v->a[38973] = actions(513);
	v->a[38974] = 12;
	v->a[38975] = anon_sym_PIPE;
	v->a[38976] = anon_sym_AMP_AMP;
	v->a[38977] = anon_sym_PIPE_PIPE;
	v->a[38978] = anon_sym_LT;
	v->a[38979] = anon_sym_GT;
	small_parse_table_1949(v);
}

void	small_parse_table_1949(t_small_parse_table_array *v)
{
	v->a[38980] = anon_sym_GT_GT;
	v->a[38981] = anon_sym_LT_AMP;
	v->a[38982] = anon_sym_GT_AMP;
	v->a[38983] = anon_sym_GT_PIPE;
	v->a[38984] = anon_sym_LT_GT;
	v->a[38985] = anon_sym_LT_LT;
	v->a[38986] = anon_sym_LT_LT_DASH;
	v->a[38987] = 12;
	v->a[38988] = actions(3);
	v->a[38989] = 1;
	v->a[38990] = sym_comment;
	v->a[38991] = actions(540);
	v->a[38992] = 1;
	v->a[38993] = sym_file_descriptor;
	v->a[38994] = actions(1396);
	v->a[38995] = 1;
	v->a[38996] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38997] = actions(1399);
	v->a[38998] = 1;
	v->a[38999] = anon_sym_DOLLAR;
	small_parse_table_1950(v);
}

/* EOF small_parse_table_389.c */
