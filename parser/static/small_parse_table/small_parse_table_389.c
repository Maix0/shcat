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
	v->a[38900] = 1;
	v->a[38901] = sym_variable_name;
	v->a[38902] = actions(1268);
	v->a[38903] = 1;
	v->a[38904] = anon_sym_BQUOTE;
	v->a[38905] = actions(1245);
	v->a[38906] = 23;
	v->a[38907] = anon_sym_for;
	v->a[38908] = anon_sym_while;
	v->a[38909] = anon_sym_until;
	v->a[38910] = anon_sym_if;
	v->a[38911] = anon_sym_case;
	v->a[38912] = anon_sym_LPAREN;
	v->a[38913] = anon_sym_LBRACE;
	v->a[38914] = anon_sym_BANG;
	v->a[38915] = anon_sym_LT;
	v->a[38916] = anon_sym_GT;
	v->a[38917] = anon_sym_GT_GT;
	v->a[38918] = anon_sym_LT_AMP;
	v->a[38919] = anon_sym_GT_AMP;
	small_parse_table_1946(v);
}

void	small_parse_table_1946(t_small_parse_table_array *v)
{
	v->a[38920] = anon_sym_GT_PIPE;
	v->a[38921] = anon_sym_LT_GT;
	v->a[38922] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38923] = anon_sym_DOLLAR;
	v->a[38924] = anon_sym_DQUOTE;
	v->a[38925] = sym_raw_string;
	v->a[38926] = sym_number;
	v->a[38927] = anon_sym_DOLLAR_LBRACE;
	v->a[38928] = anon_sym_DOLLAR_LPAREN;
	v->a[38929] = sym_word;
	v->a[38930] = 5;
	v->a[38931] = actions(3);
	v->a[38932] = 1;
	v->a[38933] = sym_comment;
	v->a[38934] = actions(1209);
	v->a[38935] = 1;
	v->a[38936] = aux_sym_concatenation_token1;
	v->a[38937] = actions(1457);
	v->a[38938] = 1;
	v->a[38939] = sym__concat;
	small_parse_table_1947(v);
}

void	small_parse_table_1947(t_small_parse_table_array *v)
{
	v->a[38940] = state(410);
	v->a[38941] = 1;
	v->a[38942] = aux_sym_concatenation_repeat1;
	v->a[38943] = actions(997);
	v->a[38944] = 22;
	v->a[38945] = anon_sym_PIPE;
	v->a[38946] = anon_sym_AMP_AMP;
	v->a[38947] = anon_sym_PIPE_PIPE;
	v->a[38948] = anon_sym_LT;
	v->a[38949] = anon_sym_GT;
	v->a[38950] = anon_sym_GT_GT;
	v->a[38951] = anon_sym_LT_AMP;
	v->a[38952] = anon_sym_GT_AMP;
	v->a[38953] = anon_sym_GT_PIPE;
	v->a[38954] = anon_sym_LT_GT;
	v->a[38955] = anon_sym_LT_LT;
	v->a[38956] = anon_sym_LT_LT_DASH;
	v->a[38957] = aux_sym_heredoc_redirect_token1;
	v->a[38958] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38959] = anon_sym_DOLLAR;
	small_parse_table_1948(v);
}

void	small_parse_table_1948(t_small_parse_table_array *v)
{
	v->a[38960] = anon_sym_DQUOTE;
	v->a[38961] = sym_raw_string;
	v->a[38962] = sym_number;
	v->a[38963] = anon_sym_DOLLAR_LBRACE;
	v->a[38964] = anon_sym_DOLLAR_LPAREN;
	v->a[38965] = anon_sym_BQUOTE;
	v->a[38966] = sym_word;
	v->a[38967] = 4;
	v->a[38968] = actions(3);
	v->a[38969] = 1;
	v->a[38970] = sym_comment;
	v->a[38971] = actions(1249);
	v->a[38972] = 1;
	v->a[38973] = sym_variable_name;
	v->a[38974] = actions(1268);
	v->a[38975] = 1;
	v->a[38976] = anon_sym_BQUOTE;
	v->a[38977] = actions(1245);
	v->a[38978] = 23;
	v->a[38979] = anon_sym_for;
	small_parse_table_1949(v);
}

void	small_parse_table_1949(t_small_parse_table_array *v)
{
	v->a[38980] = anon_sym_while;
	v->a[38981] = anon_sym_until;
	v->a[38982] = anon_sym_if;
	v->a[38983] = anon_sym_case;
	v->a[38984] = anon_sym_LPAREN;
	v->a[38985] = anon_sym_LBRACE;
	v->a[38986] = anon_sym_BANG;
	v->a[38987] = anon_sym_LT;
	v->a[38988] = anon_sym_GT;
	v->a[38989] = anon_sym_GT_GT;
	v->a[38990] = anon_sym_LT_AMP;
	v->a[38991] = anon_sym_GT_AMP;
	v->a[38992] = anon_sym_GT_PIPE;
	v->a[38993] = anon_sym_LT_GT;
	v->a[38994] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38995] = anon_sym_DOLLAR;
	v->a[38996] = anon_sym_DQUOTE;
	v->a[38997] = sym_raw_string;
	v->a[38998] = sym_number;
	v->a[38999] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1950(v);
}

/* EOF small_parse_table_389.c */
