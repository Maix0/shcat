/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_599.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2995(t_small_parse_table_array *v)
{
	v->a[59900] = 1;
	v->a[59901] = aux_sym_case_statement_repeat1;
	v->a[59902] = state(1713);
	v->a[59903] = 1;
	v->a[59904] = sym_case_item;
	v->a[59905] = state(2005);
	v->a[59906] = 1;
	v->a[59907] = sym__case_item_last;
	v->a[59908] = state(1873);
	v->a[59909] = 2;
	v->a[59910] = sym_concatenation;
	v->a[59911] = sym__extglob_blob;
	v->a[59912] = actions(1633);
	v->a[59913] = 3;
	v->a[59914] = sym_raw_string;
	v->a[59915] = sym_number;
	v->a[59916] = sym_word;
	v->a[59917] = state(1806);
	v->a[59918] = 5;
	v->a[59919] = sym_arithmetic_expansion;
	small_parse_table_2996(v);
}

void	small_parse_table_2996(t_small_parse_table_array *v)
{
	v->a[59920] = sym_string;
	v->a[59921] = sym_simple_expansion;
	v->a[59922] = sym_expansion;
	v->a[59923] = sym_command_substitution;
	v->a[59924] = 5;
	v->a[59925] = actions(3);
	v->a[59926] = 1;
	v->a[59927] = sym_comment;
	v->a[59928] = actions(2023);
	v->a[59929] = 1;
	v->a[59930] = sym_variable_name;
	v->a[59931] = actions(1959);
	v->a[59932] = 2;
	v->a[59933] = sym_file_descriptor;
	v->a[59934] = aux_sym_heredoc_redirect_token1;
	v->a[59935] = state(1081);
	v->a[59936] = 2;
	v->a[59937] = sym_variable_assignment;
	v->a[59938] = aux_sym__variable_assignments_repeat1;
	v->a[59939] = actions(1957);
	small_parse_table_2997(v);
}

void	small_parse_table_2997(t_small_parse_table_array *v)
{
	v->a[59940] = 16;
	v->a[59941] = anon_sym_PIPE;
	v->a[59942] = anon_sym_RPAREN;
	v->a[59943] = anon_sym_SEMI_SEMI;
	v->a[59944] = anon_sym_AMP_AMP;
	v->a[59945] = anon_sym_PIPE_PIPE;
	v->a[59946] = anon_sym_LT;
	v->a[59947] = anon_sym_GT;
	v->a[59948] = anon_sym_GT_GT;
	v->a[59949] = anon_sym_LT_AMP;
	v->a[59950] = anon_sym_GT_AMP;
	v->a[59951] = anon_sym_GT_PIPE;
	v->a[59952] = anon_sym_LT_GT;
	v->a[59953] = anon_sym_LT_LT;
	v->a[59954] = anon_sym_LT_LT_DASH;
	v->a[59955] = anon_sym_AMP;
	v->a[59956] = anon_sym_SEMI;
	v->a[59957] = 15;
	v->a[59958] = actions(3);
	v->a[59959] = 1;
	small_parse_table_2998(v);
}

void	small_parse_table_2998(t_small_parse_table_array *v)
{
	v->a[59960] = sym_comment;
	v->a[59961] = actions(1637);
	v->a[59962] = 1;
	v->a[59963] = anon_sym_LPAREN;
	v->a[59964] = actions(1641);
	v->a[59965] = 1;
	v->a[59966] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[59967] = actions(1643);
	v->a[59968] = 1;
	v->a[59969] = anon_sym_DOLLAR;
	v->a[59970] = actions(1645);
	v->a[59971] = 1;
	v->a[59972] = anon_sym_DQUOTE;
	v->a[59973] = actions(1647);
	v->a[59974] = 1;
	v->a[59975] = anon_sym_DOLLAR_LBRACE;
	v->a[59976] = actions(1649);
	v->a[59977] = 1;
	v->a[59978] = anon_sym_DOLLAR_LPAREN;
	v->a[59979] = actions(1651);
	small_parse_table_2999(v);
}

void	small_parse_table_2999(t_small_parse_table_array *v)
{
	v->a[59980] = 1;
	v->a[59981] = anon_sym_BQUOTE;
	v->a[59982] = actions(1653);
	v->a[59983] = 1;
	v->a[59984] = sym_extglob_pattern;
	v->a[59985] = state(1123);
	v->a[59986] = 1;
	v->a[59987] = aux_sym_case_statement_repeat1;
	v->a[59988] = state(1713);
	v->a[59989] = 1;
	v->a[59990] = sym_case_item;
	v->a[59991] = state(2029);
	v->a[59992] = 1;
	v->a[59993] = sym__case_item_last;
	v->a[59994] = state(1873);
	v->a[59995] = 2;
	v->a[59996] = sym_concatenation;
	v->a[59997] = sym__extglob_blob;
	v->a[59998] = actions(1633);
	v->a[59999] = 3;
	small_parse_table_3000(v);
}

/* EOF small_parse_table_599.c */
