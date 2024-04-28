/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2169.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10845(t_small_parse_table_array *v)
{
	v->a[216900] = actions(10340);
	v->a[216901] = 1;
	v->a[216902] = sym_word;
	v->a[216903] = actions(10344);
	v->a[216904] = 1;
	v->a[216905] = sym_test_operator;
	v->a[216906] = state(2569);
	v->a[216907] = 1;
	v->a[216908] = aux_sym__literal_repeat1;
	v->a[216909] = state(2623);
	v->a[216910] = 1;
	v->a[216911] = sym_concatenation;
	v->a[216912] = actions(9116);
	v->a[216913] = 2;
	v->a[216914] = anon_sym_LPAREN_LPAREN;
	v->a[216915] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[216916] = actions(9140);
	v->a[216917] = 2;
	v->a[216918] = anon_sym_LT_LPAREN;
	v->a[216919] = anon_sym_GT_LPAREN;
	small_parse_table_10846(v);
}

void	small_parse_table_10846(t_small_parse_table_array *v)
{
	v->a[216920] = actions(10342);
	v->a[216921] = 2;
	v->a[216922] = sym_raw_string;
	v->a[216923] = sym_ansi_c_string;
	v->a[216924] = state(2278);
	v->a[216925] = 9;
	v->a[216926] = sym_arithmetic_expansion;
	v->a[216927] = sym_brace_expression;
	v->a[216928] = sym_string;
	v->a[216929] = sym_translated_string;
	v->a[216930] = sym_number;
	v->a[216931] = sym_simple_expansion;
	v->a[216932] = sym_expansion;
	v->a[216933] = sym_command_substitution;
	v->a[216934] = sym_process_substitution;
	v->a[216935] = 18;
	v->a[216936] = actions(3);
	v->a[216937] = 1;
	v->a[216938] = sym_comment;
	v->a[216939] = actions(2604);
	small_parse_table_10847(v);
}

void	small_parse_table_10847(t_small_parse_table_array *v)
{
	v->a[216940] = 1;
	v->a[216941] = anon_sym_DOLLAR;
	v->a[216942] = actions(2610);
	v->a[216943] = 1;
	v->a[216944] = aux_sym_number_token1;
	v->a[216945] = actions(2612);
	v->a[216946] = 1;
	v->a[216947] = aux_sym_number_token2;
	v->a[216948] = actions(2616);
	v->a[216949] = 1;
	v->a[216950] = anon_sym_DOLLAR_LPAREN;
	v->a[216951] = actions(2626);
	v->a[216952] = 1;
	v->a[216953] = sym__brace_start;
	v->a[216954] = actions(8962);
	v->a[216955] = 1;
	v->a[216956] = anon_sym_DOLLAR_LBRACK;
	v->a[216957] = actions(8966);
	v->a[216958] = 1;
	v->a[216959] = anon_sym_DQUOTE;
	small_parse_table_10848(v);
}

void	small_parse_table_10848(t_small_parse_table_array *v)
{
	v->a[216960] = actions(8970);
	v->a[216961] = 1;
	v->a[216962] = anon_sym_DOLLAR_LBRACE;
	v->a[216963] = actions(8972);
	v->a[216964] = 1;
	v->a[216965] = anon_sym_BQUOTE;
	v->a[216966] = actions(8974);
	v->a[216967] = 1;
	v->a[216968] = anon_sym_DOLLAR_BQUOTE;
	v->a[216969] = actions(10246);
	v->a[216970] = 1;
	v->a[216971] = sym_word;
	v->a[216972] = actions(10254);
	v->a[216973] = 1;
	v->a[216974] = sym__comment_word;
	v->a[216975] = actions(8960);
	v->a[216976] = 2;
	v->a[216977] = anon_sym_LPAREN_LPAREN;
	v->a[216978] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[216979] = actions(8976);
	small_parse_table_10849(v);
}

void	small_parse_table_10849(t_small_parse_table_array *v)
{
	v->a[216980] = 2;
	v->a[216981] = anon_sym_LT_LPAREN;
	v->a[216982] = anon_sym_GT_LPAREN;
	v->a[216983] = actions(10250);
	v->a[216984] = 2;
	v->a[216985] = sym_test_operator;
	v->a[216986] = sym__special_character;
	v->a[216987] = actions(10252);
	v->a[216988] = 3;
	v->a[216989] = sym__bare_dollar;
	v->a[216990] = sym_raw_string;
	v->a[216991] = sym_ansi_c_string;
	v->a[216992] = state(1532);
	v->a[216993] = 9;
	v->a[216994] = sym_arithmetic_expansion;
	v->a[216995] = sym_brace_expression;
	v->a[216996] = sym_string;
	v->a[216997] = sym_translated_string;
	v->a[216998] = sym_number;
	v->a[216999] = sym_simple_expansion;
	small_parse_table_10850(v);
}

/* EOF small_parse_table_2169.c */
