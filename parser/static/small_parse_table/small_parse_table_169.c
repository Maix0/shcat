/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_169.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_845(t_small_parse_table_array *v)
{
	v->a[16900] = 7;
	v->a[16901] = sym_arithmetic_expansion;
	v->a[16902] = sym_brace_expression;
	v->a[16903] = sym_string;
	v->a[16904] = sym_number;
	v->a[16905] = sym_simple_expansion;
	v->a[16906] = sym_expansion;
	v->a[16907] = sym_command_substitution;
	v->a[16908] = actions(1337);
	v->a[16909] = 16;
	v->a[16910] = anon_sym_PIPE;
	v->a[16911] = anon_sym_PIPE_AMP;
	v->a[16912] = anon_sym_AMP_AMP;
	v->a[16913] = anon_sym_PIPE_PIPE;
	v->a[16914] = anon_sym_LT;
	v->a[16915] = anon_sym_GT;
	v->a[16916] = anon_sym_GT_GT;
	v->a[16917] = anon_sym_AMP_GT;
	v->a[16918] = anon_sym_AMP_GT_GT;
	v->a[16919] = anon_sym_LT_AMP;
	small_parse_table_846(v);
}

void	small_parse_table_846(t_small_parse_table_array *v)
{
	v->a[16920] = anon_sym_GT_AMP;
	v->a[16921] = anon_sym_GT_PIPE;
	v->a[16922] = anon_sym_LT_AMP_DASH;
	v->a[16923] = anon_sym_GT_AMP_DASH;
	v->a[16924] = anon_sym_LT_LT;
	v->a[16925] = anon_sym_LT_LT_DASH;
	v->a[16926] = 6;
	v->a[16927] = actions(3);
	v->a[16928] = 1;
	v->a[16929] = sym_comment;
	v->a[16930] = actions(2684);
	v->a[16931] = 1;
	v->a[16932] = aux_sym_concatenation_token1;
	v->a[16933] = actions(2686);
	v->a[16934] = 1;
	v->a[16935] = sym__concat;
	v->a[16936] = state(482);
	v->a[16937] = 1;
	v->a[16938] = aux_sym_concatenation_repeat1;
	v->a[16939] = actions(2664);
	small_parse_table_847(v);
}

void	small_parse_table_847(t_small_parse_table_array *v)
{
	v->a[16940] = 5;
	v->a[16941] = sym_file_descriptor;
	v->a[16942] = sym_test_operator;
	v->a[16943] = sym__bare_dollar;
	v->a[16944] = sym__brace_start;
	v->a[16945] = aux_sym_heredoc_redirect_token1;
	v->a[16946] = actions(2662);
	v->a[16947] = 35;
	v->a[16948] = anon_sym_esac;
	v->a[16949] = anon_sym_LPAREN;
	v->a[16950] = anon_sym_PIPE;
	v->a[16951] = anon_sym_SEMI_SEMI;
	v->a[16952] = anon_sym_SEMI_AMP;
	v->a[16953] = anon_sym_SEMI_SEMI_AMP;
	v->a[16954] = anon_sym_PIPE_AMP;
	v->a[16955] = anon_sym_AMP_AMP;
	v->a[16956] = anon_sym_PIPE_PIPE;
	v->a[16957] = anon_sym_LT;
	v->a[16958] = anon_sym_GT;
	v->a[16959] = anon_sym_GT_GT;
	small_parse_table_848(v);
}

void	small_parse_table_848(t_small_parse_table_array *v)
{
	v->a[16960] = anon_sym_AMP_GT;
	v->a[16961] = anon_sym_AMP_GT_GT;
	v->a[16962] = anon_sym_LT_AMP;
	v->a[16963] = anon_sym_GT_AMP;
	v->a[16964] = anon_sym_GT_PIPE;
	v->a[16965] = anon_sym_LT_AMP_DASH;
	v->a[16966] = anon_sym_GT_AMP_DASH;
	v->a[16967] = anon_sym_LT_LT;
	v->a[16968] = anon_sym_LT_LT_DASH;
	v->a[16969] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16970] = anon_sym_AMP;
	v->a[16971] = anon_sym_DOLLAR;
	v->a[16972] = sym__special_character;
	v->a[16973] = anon_sym_DQUOTE;
	v->a[16974] = sym_raw_string;
	v->a[16975] = aux_sym_number_token1;
	v->a[16976] = aux_sym_number_token2;
	v->a[16977] = anon_sym_DOLLAR_LBRACE;
	v->a[16978] = anon_sym_DOLLAR_LPAREN;
	v->a[16979] = anon_sym_BQUOTE;
	small_parse_table_849(v);
}

void	small_parse_table_849(t_small_parse_table_array *v)
{
	v->a[16980] = anon_sym_DOLLAR_BQUOTE;
	v->a[16981] = sym_word;
	v->a[16982] = anon_sym_SEMI;
	v->a[16983] = 6;
	v->a[16984] = actions(3);
	v->a[16985] = 1;
	v->a[16986] = sym_comment;
	v->a[16987] = actions(1806);
	v->a[16988] = 1;
	v->a[16989] = sym_variable_name;
	v->a[16990] = actions(1804);
	v->a[16991] = 2;
	v->a[16992] = aux_sym__simple_variable_name_token1;
	v->a[16993] = aux_sym__multiline_variable_name_token1;
	v->a[16994] = actions(816);
	v->a[16995] = 3;
	v->a[16996] = sym_file_descriptor;
	v->a[16997] = sym_test_operator;
	v->a[16998] = sym__brace_start;
	v->a[16999] = actions(1802);
	small_parse_table_850(v);
}

/* EOF small_parse_table_169.c */
