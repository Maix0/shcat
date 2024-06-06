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
	v->a[900] = sym_brace_expression;
	v->a[901] = sym_string;
	v->a[902] = sym_number;
	v->a[903] = sym_simple_expansion;
	v->a[904] = sym_expansion;
	v->a[905] = sym_command_substitution;
	v->a[906] = actions(820);
	v->a[907] = 21;
	v->a[908] = anon_sym_PIPE;
	v->a[909] = anon_sym_SEMI_SEMI;
	v->a[910] = anon_sym_SEMI_AMP;
	v->a[911] = anon_sym_SEMI_SEMI_AMP;
	v->a[912] = anon_sym_PIPE_AMP;
	v->a[913] = anon_sym_AMP_AMP;
	v->a[914] = anon_sym_PIPE_PIPE;
	v->a[915] = anon_sym_LT;
	v->a[916] = anon_sym_GT;
	v->a[917] = anon_sym_GT_GT;
	v->a[918] = anon_sym_AMP_GT;
	v->a[919] = anon_sym_AMP_GT_GT;
	small_parse_table_46(v);
}

void	small_parse_table_46(t_small_parse_table_array *v)
{
	v->a[920] = anon_sym_LT_AMP;
	v->a[921] = anon_sym_GT_AMP;
	v->a[922] = anon_sym_GT_PIPE;
	v->a[923] = anon_sym_LT_AMP_DASH;
	v->a[924] = anon_sym_GT_AMP_DASH;
	v->a[925] = anon_sym_LT_LT;
	v->a[926] = anon_sym_LT_LT_DASH;
	v->a[927] = anon_sym_AMP;
	v->a[928] = anon_sym_SEMI;
	v->a[929] = 23;
	v->a[930] = actions(3);
	v->a[931] = 1;
	v->a[932] = sym_comment;
	v->a[933] = actions(919);
	v->a[934] = 1;
	v->a[935] = anon_sym_LPAREN;
	v->a[936] = actions(921);
	v->a[937] = 1;
	v->a[938] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[939] = actions(923);
	small_parse_table_47(v);
}

void	small_parse_table_47(t_small_parse_table_array *v)
{
	v->a[940] = 1;
	v->a[941] = anon_sym_DOLLAR;
	v->a[942] = actions(925);
	v->a[943] = 1;
	v->a[944] = sym__special_character;
	v->a[945] = actions(927);
	v->a[946] = 1;
	v->a[947] = anon_sym_DQUOTE;
	v->a[948] = actions(929);
	v->a[949] = 1;
	v->a[950] = aux_sym_number_token1;
	v->a[951] = actions(931);
	v->a[952] = 1;
	v->a[953] = aux_sym_number_token2;
	v->a[954] = actions(933);
	v->a[955] = 1;
	v->a[956] = anon_sym_DOLLAR_LBRACE;
	v->a[957] = actions(935);
	v->a[958] = 1;
	v->a[959] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_48(v);
}

void	small_parse_table_48(t_small_parse_table_array *v)
{
	v->a[960] = actions(937);
	v->a[961] = 1;
	v->a[962] = anon_sym_BQUOTE;
	v->a[963] = actions(939);
	v->a[964] = 1;
	v->a[965] = anon_sym_DOLLAR_BQUOTE;
	v->a[966] = actions(941);
	v->a[967] = 1;
	v->a[968] = sym_test_operator;
	v->a[969] = actions(943);
	v->a[970] = 1;
	v->a[971] = sym__bare_dollar;
	v->a[972] = actions(945);
	v->a[973] = 1;
	v->a[974] = sym__brace_start;
	v->a[975] = state(327);
	v->a[976] = 1;
	v->a[977] = aux_sym_command_repeat2;
	v->a[978] = state(1039);
	v->a[979] = 1;
	small_parse_table_49(v);
}

void	small_parse_table_49(t_small_parse_table_array *v)
{
	v->a[980] = aux_sym__literal_repeat1;
	v->a[981] = state(1193);
	v->a[982] = 1;
	v->a[983] = sym_concatenation;
	v->a[984] = state(2415);
	v->a[985] = 1;
	v->a[986] = sym_subshell;
	v->a[987] = actions(695);
	v->a[988] = 2;
	v->a[989] = sym_file_descriptor;
	v->a[990] = aux_sym_heredoc_redirect_token1;
	v->a[991] = actions(917);
	v->a[992] = 2;
	v->a[993] = sym_raw_string;
	v->a[994] = sym_word;
	v->a[995] = state(692);
	v->a[996] = 7;
	v->a[997] = sym_arithmetic_expansion;
	v->a[998] = sym_brace_expression;
	v->a[999] = sym_string;
	small_parse_table_50(v);
}

/* EOF small_parse_table_9.c */
