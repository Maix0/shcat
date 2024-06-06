/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_129.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_645(t_small_parse_table_array *v)
{
	v->a[12900] = 1;
	v->a[12901] = anon_sym_DOLLAR_LBRACE;
	v->a[12902] = actions(1266);
	v->a[12903] = 1;
	v->a[12904] = anon_sym_DOLLAR_LPAREN;
	v->a[12905] = actions(1268);
	v->a[12906] = 1;
	v->a[12907] = anon_sym_BQUOTE;
	v->a[12908] = actions(1270);
	v->a[12909] = 1;
	v->a[12910] = anon_sym_DOLLAR_BQUOTE;
	v->a[12911] = actions(1274);
	v->a[12912] = 1;
	v->a[12913] = sym__bare_dollar;
	v->a[12914] = actions(1276);
	v->a[12915] = 1;
	v->a[12916] = sym__brace_start;
	v->a[12917] = actions(2380);
	v->a[12918] = 1;
	v->a[12919] = sym__special_character;
	small_parse_table_646(v);
}

void	small_parse_table_646(t_small_parse_table_array *v)
{
	v->a[12920] = actions(2382);
	v->a[12921] = 1;
	v->a[12922] = sym_test_operator;
	v->a[12923] = state(497);
	v->a[12924] = 1;
	v->a[12925] = aux_sym_command_repeat2;
	v->a[12926] = state(1232);
	v->a[12927] = 1;
	v->a[12928] = aux_sym__literal_repeat1;
	v->a[12929] = state(1293);
	v->a[12930] = 1;
	v->a[12931] = sym_concatenation;
	v->a[12932] = state(2185);
	v->a[12933] = 1;
	v->a[12934] = sym_subshell;
	v->a[12935] = actions(695);
	v->a[12936] = 2;
	v->a[12937] = sym_file_descriptor;
	v->a[12938] = aux_sym_heredoc_redirect_token1;
	v->a[12939] = actions(2378);
	small_parse_table_647(v);
}

void	small_parse_table_647(t_small_parse_table_array *v)
{
	v->a[12940] = 2;
	v->a[12941] = sym_raw_string;
	v->a[12942] = sym_word;
	v->a[12943] = state(1356);
	v->a[12944] = 7;
	v->a[12945] = sym_arithmetic_expansion;
	v->a[12946] = sym_brace_expression;
	v->a[12947] = sym_string;
	v->a[12948] = sym_number;
	v->a[12949] = sym_simple_expansion;
	v->a[12950] = sym_expansion;
	v->a[12951] = sym_command_substitution;
	v->a[12952] = actions(691);
	v->a[12953] = 16;
	v->a[12954] = anon_sym_PIPE;
	v->a[12955] = anon_sym_PIPE_AMP;
	v->a[12956] = anon_sym_AMP_AMP;
	v->a[12957] = anon_sym_PIPE_PIPE;
	v->a[12958] = anon_sym_LT;
	v->a[12959] = anon_sym_GT;
	small_parse_table_648(v);
}

void	small_parse_table_648(t_small_parse_table_array *v)
{
	v->a[12960] = anon_sym_GT_GT;
	v->a[12961] = anon_sym_AMP_GT;
	v->a[12962] = anon_sym_AMP_GT_GT;
	v->a[12963] = anon_sym_LT_AMP;
	v->a[12964] = anon_sym_GT_AMP;
	v->a[12965] = anon_sym_GT_PIPE;
	v->a[12966] = anon_sym_LT_AMP_DASH;
	v->a[12967] = anon_sym_GT_AMP_DASH;
	v->a[12968] = anon_sym_LT_LT;
	v->a[12969] = anon_sym_LT_LT_DASH;
	v->a[12970] = 19;
	v->a[12971] = actions(3);
	v->a[12972] = 1;
	v->a[12973] = sym_comment;
	v->a[12974] = actions(2152);
	v->a[12975] = 1;
	v->a[12976] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[12977] = actions(2154);
	v->a[12978] = 1;
	v->a[12979] = anon_sym_DOLLAR;
	small_parse_table_649(v);
}

void	small_parse_table_649(t_small_parse_table_array *v)
{
	v->a[12980] = actions(2158);
	v->a[12981] = 1;
	v->a[12982] = anon_sym_DQUOTE;
	v->a[12983] = actions(2160);
	v->a[12984] = 1;
	v->a[12985] = aux_sym_number_token1;
	v->a[12986] = actions(2162);
	v->a[12987] = 1;
	v->a[12988] = aux_sym_number_token2;
	v->a[12989] = actions(2164);
	v->a[12990] = 1;
	v->a[12991] = anon_sym_DOLLAR_LBRACE;
	v->a[12992] = actions(2166);
	v->a[12993] = 1;
	v->a[12994] = anon_sym_DOLLAR_LPAREN;
	v->a[12995] = actions(2168);
	v->a[12996] = 1;
	v->a[12997] = anon_sym_BQUOTE;
	v->a[12998] = actions(2170);
	v->a[12999] = 1;
	small_parse_table_650(v);
}

/* EOF small_parse_table_129.c */
