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
	v->a[38900] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38901] = anon_sym_AMP;
	v->a[38902] = aux_sym_concatenation_token1;
	v->a[38903] = anon_sym_DOLLAR;
	v->a[38904] = anon_sym_DQUOTE;
	v->a[38905] = sym_raw_string;
	v->a[38906] = sym_number;
	v->a[38907] = anon_sym_DOLLAR_LBRACE;
	v->a[38908] = anon_sym_DOLLAR_LPAREN;
	v->a[38909] = anon_sym_BQUOTE;
	v->a[38910] = sym_word;
	v->a[38911] = anon_sym_SEMI;
	v->a[38912] = 3;
	v->a[38913] = actions(3);
	v->a[38914] = 1;
	v->a[38915] = sym_comment;
	v->a[38916] = actions(1264);
	v->a[38917] = 3;
	v->a[38918] = sym_file_descriptor;
	v->a[38919] = sym__concat;
	small_parse_table_1946(v);
}

void	small_parse_table_1946(t_small_parse_table_array *v)
{
	v->a[38920] = sym_variable_name;
	v->a[38921] = actions(1266);
	v->a[38922] = 28;
	v->a[38923] = anon_sym_PIPE;
	v->a[38924] = anon_sym_RPAREN;
	v->a[38925] = anon_sym_SEMI_SEMI;
	v->a[38926] = anon_sym_AMP_AMP;
	v->a[38927] = anon_sym_PIPE_PIPE;
	v->a[38928] = anon_sym_LT;
	v->a[38929] = anon_sym_GT;
	v->a[38930] = anon_sym_GT_GT;
	v->a[38931] = anon_sym_LT_AMP;
	v->a[38932] = anon_sym_GT_AMP;
	v->a[38933] = anon_sym_GT_PIPE;
	v->a[38934] = anon_sym_LT_AMP_DASH;
	v->a[38935] = anon_sym_GT_AMP_DASH;
	v->a[38936] = anon_sym_LT_LT;
	v->a[38937] = anon_sym_LT_LT_DASH;
	v->a[38938] = aux_sym_heredoc_redirect_token1;
	v->a[38939] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1947(v);
}

void	small_parse_table_1947(t_small_parse_table_array *v)
{
	v->a[38940] = anon_sym_AMP;
	v->a[38941] = aux_sym_concatenation_token1;
	v->a[38942] = anon_sym_DOLLAR;
	v->a[38943] = anon_sym_DQUOTE;
	v->a[38944] = sym_raw_string;
	v->a[38945] = sym_number;
	v->a[38946] = anon_sym_DOLLAR_LBRACE;
	v->a[38947] = anon_sym_DOLLAR_LPAREN;
	v->a[38948] = anon_sym_BQUOTE;
	v->a[38949] = sym_word;
	v->a[38950] = anon_sym_SEMI;
	v->a[38951] = 14;
	v->a[38952] = actions(3);
	v->a[38953] = 1;
	v->a[38954] = sym_comment;
	v->a[38955] = actions(536);
	v->a[38956] = 1;
	v->a[38957] = sym_file_descriptor;
	v->a[38958] = actions(1406);
	v->a[38959] = 1;
	small_parse_table_1948(v);
}

void	small_parse_table_1948(t_small_parse_table_array *v)
{
	v->a[38960] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38961] = actions(1409);
	v->a[38962] = 1;
	v->a[38963] = anon_sym_DOLLAR;
	v->a[38964] = actions(1412);
	v->a[38965] = 1;
	v->a[38966] = anon_sym_DQUOTE;
	v->a[38967] = actions(1415);
	v->a[38968] = 1;
	v->a[38969] = anon_sym_DOLLAR_LBRACE;
	v->a[38970] = actions(1418);
	v->a[38971] = 1;
	v->a[38972] = anon_sym_DOLLAR_LPAREN;
	v->a[38973] = actions(1421);
	v->a[38974] = 1;
	v->a[38975] = anon_sym_BQUOTE;
	v->a[38976] = actions(1424);
	v->a[38977] = 1;
	v->a[38978] = sym__bare_dollar;
	v->a[38979] = state(535);
	small_parse_table_1949(v);
}

void	small_parse_table_1949(t_small_parse_table_array *v)
{
	v->a[38980] = 1;
	v->a[38981] = aux_sym_command_repeat2;
	v->a[38982] = state(1002);
	v->a[38983] = 1;
	v->a[38984] = sym_concatenation;
	v->a[38985] = actions(1403);
	v->a[38986] = 3;
	v->a[38987] = sym_raw_string;
	v->a[38988] = sym_number;
	v->a[38989] = sym_word;
	v->a[38990] = state(864);
	v->a[38991] = 5;
	v->a[38992] = sym_arithmetic_expansion;
	v->a[38993] = sym_string;
	v->a[38994] = sym_simple_expansion;
	v->a[38995] = sym_expansion;
	v->a[38996] = sym_command_substitution;
	v->a[38997] = actions(516);
	v->a[38998] = 13;
	v->a[38999] = anon_sym_PIPE;
	small_parse_table_1950(v);
}

/* EOF small_parse_table_389.c */
