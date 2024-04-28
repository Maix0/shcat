/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_9.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_45(t_small_parse_table_array *v)
{
	v->a[900] = actions(1615);
	v->a[901] = 2;
	v->a[902] = sym_file_descriptor;
	v->a[903] = aux_sym_heredoc_redirect_token1;
	v->a[904] = actions(1400);
	v->a[905] = 3;
	v->a[906] = sym_raw_string;
	v->a[907] = sym_ansi_c_string;
	v->a[908] = sym_word;
	v->a[909] = state(874);
	v->a[910] = 9;
	v->a[911] = sym_arithmetic_expansion;
	v->a[912] = sym_brace_expression;
	v->a[913] = sym_string;
	v->a[914] = sym_translated_string;
	v->a[915] = sym_number;
	v->a[916] = sym_simple_expansion;
	v->a[917] = sym_expansion;
	v->a[918] = sym_command_substitution;
	v->a[919] = sym_process_substitution;
	small_parse_table_46(v);
}

void	small_parse_table_46(t_small_parse_table_array *v)
{
	v->a[920] = actions(1613);
	v->a[921] = 22;
	v->a[922] = anon_sym_SEMI;
	v->a[923] = anon_sym_PIPE_PIPE;
	v->a[924] = anon_sym_AMP_AMP;
	v->a[925] = anon_sym_PIPE;
	v->a[926] = anon_sym_AMP;
	v->a[927] = anon_sym_LT;
	v->a[928] = anon_sym_GT;
	v->a[929] = anon_sym_LT_LT;
	v->a[930] = anon_sym_GT_GT;
	v->a[931] = anon_sym_esac;
	v->a[932] = anon_sym_SEMI_SEMI;
	v->a[933] = anon_sym_SEMI_AMP;
	v->a[934] = anon_sym_SEMI_SEMI_AMP;
	v->a[935] = anon_sym_PIPE_AMP;
	v->a[936] = anon_sym_AMP_GT;
	v->a[937] = anon_sym_AMP_GT_GT;
	v->a[938] = anon_sym_LT_AMP;
	v->a[939] = anon_sym_GT_AMP;
	small_parse_table_47(v);
}

void	small_parse_table_47(t_small_parse_table_array *v)
{
	v->a[940] = anon_sym_GT_PIPE;
	v->a[941] = anon_sym_LT_AMP_DASH;
	v->a[942] = anon_sym_GT_AMP_DASH;
	v->a[943] = anon_sym_LT_LT_DASH;
	v->a[944] = 28;
	v->a[945] = actions(3);
	v->a[946] = 1;
	v->a[947] = sym_comment;
	v->a[948] = actions(19);
	v->a[949] = 1;
	v->a[950] = anon_sym_LPAREN;
	v->a[951] = actions(1547);
	v->a[952] = 1;
	v->a[953] = anon_sym_LT_LT_LT;
	v->a[954] = actions(1549);
	v->a[955] = 1;
	v->a[956] = anon_sym_DOLLAR_LBRACK;
	v->a[957] = actions(1551);
	v->a[958] = 1;
	v->a[959] = anon_sym_DOLLAR;
	small_parse_table_48(v);
}

void	small_parse_table_48(t_small_parse_table_array *v)
{
	v->a[960] = actions(1553);
	v->a[961] = 1;
	v->a[962] = sym__special_character;
	v->a[963] = actions(1555);
	v->a[964] = 1;
	v->a[965] = anon_sym_DQUOTE;
	v->a[966] = actions(1557);
	v->a[967] = 1;
	v->a[968] = aux_sym_number_token1;
	v->a[969] = actions(1559);
	v->a[970] = 1;
	v->a[971] = aux_sym_number_token2;
	v->a[972] = actions(1561);
	v->a[973] = 1;
	v->a[974] = anon_sym_DOLLAR_LBRACE;
	v->a[975] = actions(1563);
	v->a[976] = 1;
	v->a[977] = anon_sym_DOLLAR_LPAREN;
	v->a[978] = actions(1565);
	v->a[979] = 1;
	small_parse_table_49(v);
}

void	small_parse_table_49(t_small_parse_table_array *v)
{
	v->a[980] = anon_sym_BQUOTE;
	v->a[981] = actions(1567);
	v->a[982] = 1;
	v->a[983] = anon_sym_DOLLAR_BQUOTE;
	v->a[984] = actions(1571);
	v->a[985] = 1;
	v->a[986] = sym_test_operator;
	v->a[987] = actions(1573);
	v->a[988] = 1;
	v->a[989] = sym__bare_dollar;
	v->a[990] = actions(1575);
	v->a[991] = 1;
	v->a[992] = sym__brace_start;
	v->a[993] = state(561);
	v->a[994] = 1;
	v->a[995] = aux_sym_command_repeat2;
	v->a[996] = state(1321);
	v->a[997] = 1;
	v->a[998] = aux_sym__literal_repeat1;
	v->a[999] = state(1712);
	small_parse_table_50(v);
}

/* EOF small_parse_table_9.c */
