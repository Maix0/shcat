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
	v->a[16900] = sym_concatenation;
	v->a[16901] = actions(2500);
	v->a[16902] = 2;
	v->a[16903] = sym_file_descriptor;
	v->a[16904] = aux_sym_heredoc_redirect_token1;
	v->a[16905] = actions(3363);
	v->a[16906] = 2;
	v->a[16907] = anon_sym_LPAREN_LPAREN;
	v->a[16908] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[16909] = actions(3385);
	v->a[16910] = 2;
	v->a[16911] = anon_sym_LT_LPAREN;
	v->a[16912] = anon_sym_GT_LPAREN;
	v->a[16913] = actions(3526);
	v->a[16914] = 3;
	v->a[16915] = sym_raw_string;
	v->a[16916] = sym_ansi_c_string;
	v->a[16917] = sym_word;
	v->a[16918] = state(4370);
	v->a[16919] = 9;
	small_parse_table_846(v);
}

void	small_parse_table_846(t_small_parse_table_array *v)
{
	v->a[16920] = sym_arithmetic_expansion;
	v->a[16921] = sym_brace_expression;
	v->a[16922] = sym_string;
	v->a[16923] = sym_translated_string;
	v->a[16924] = sym_number;
	v->a[16925] = sym_simple_expansion;
	v->a[16926] = sym_expansion;
	v->a[16927] = sym_command_substitution;
	v->a[16928] = sym_process_substitution;
	v->a[16929] = actions(2498);
	v->a[16930] = 22;
	v->a[16931] = anon_sym_SEMI;
	v->a[16932] = anon_sym_PIPE_PIPE;
	v->a[16933] = anon_sym_AMP_AMP;
	v->a[16934] = anon_sym_PIPE;
	v->a[16935] = anon_sym_AMP;
	v->a[16936] = anon_sym_LT;
	v->a[16937] = anon_sym_GT;
	v->a[16938] = anon_sym_LT_LT;
	v->a[16939] = anon_sym_GT_GT;
	small_parse_table_847(v);
}

void	small_parse_table_847(t_small_parse_table_array *v)
{
	v->a[16940] = anon_sym_esac;
	v->a[16941] = anon_sym_SEMI_SEMI;
	v->a[16942] = anon_sym_SEMI_AMP;
	v->a[16943] = anon_sym_SEMI_SEMI_AMP;
	v->a[16944] = anon_sym_PIPE_AMP;
	v->a[16945] = anon_sym_AMP_GT;
	v->a[16946] = anon_sym_AMP_GT_GT;
	v->a[16947] = anon_sym_LT_AMP;
	v->a[16948] = anon_sym_GT_AMP;
	v->a[16949] = anon_sym_GT_PIPE;
	v->a[16950] = anon_sym_LT_AMP_DASH;
	v->a[16951] = anon_sym_GT_AMP_DASH;
	v->a[16952] = anon_sym_LT_LT_DASH;
	v->a[16953] = 21;
	v->a[16954] = actions(3);
	v->a[16955] = 1;
	v->a[16956] = sym_comment;
	v->a[16957] = actions(3274);
	v->a[16958] = 1;
	v->a[16959] = anon_sym_DQUOTE;
	small_parse_table_848(v);
}

void	small_parse_table_848(t_small_parse_table_array *v)
{
	v->a[16960] = actions(3337);
	v->a[16961] = 1;
	v->a[16962] = anon_sym_DOLLAR_LBRACK;
	v->a[16963] = actions(3339);
	v->a[16964] = 1;
	v->a[16965] = anon_sym_DOLLAR;
	v->a[16966] = actions(3341);
	v->a[16967] = 1;
	v->a[16968] = sym__special_character;
	v->a[16969] = actions(3343);
	v->a[16970] = 1;
	v->a[16971] = aux_sym_number_token1;
	v->a[16972] = actions(3345);
	v->a[16973] = 1;
	v->a[16974] = aux_sym_number_token2;
	v->a[16975] = actions(3347);
	v->a[16976] = 1;
	v->a[16977] = anon_sym_DOLLAR_LBRACE;
	v->a[16978] = actions(3349);
	v->a[16979] = 1;
	small_parse_table_849(v);
}

void	small_parse_table_849(t_small_parse_table_array *v)
{
	v->a[16980] = anon_sym_DOLLAR_LPAREN;
	v->a[16981] = actions(3351);
	v->a[16982] = 1;
	v->a[16983] = anon_sym_BQUOTE;
	v->a[16984] = actions(3353);
	v->a[16985] = 1;
	v->a[16986] = anon_sym_DOLLAR_BQUOTE;
	v->a[16987] = actions(3357);
	v->a[16988] = 1;
	v->a[16989] = sym_test_operator;
	v->a[16990] = actions(3359);
	v->a[16991] = 1;
	v->a[16992] = sym__brace_start;
	v->a[16993] = state(2147);
	v->a[16994] = 1;
	v->a[16995] = aux_sym__literal_repeat1;
	v->a[16996] = actions(2096);
	v->a[16997] = 2;
	v->a[16998] = sym_file_descriptor;
	v->a[16999] = aux_sym_heredoc_redirect_token1;
	small_parse_table_850(v);
}

/* EOF small_parse_table_169.c */
