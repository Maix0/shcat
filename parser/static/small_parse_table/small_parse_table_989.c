/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_989.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4945(t_small_parse_table_array *v)
{
	v->a[98900] = actions(5495);
	v->a[98901] = 1;
	v->a[98902] = aux_sym_number_token2;
	v->a[98903] = actions(5497);
	v->a[98904] = 1;
	v->a[98905] = anon_sym_DOLLAR_LBRACE;
	v->a[98906] = actions(5499);
	v->a[98907] = 1;
	v->a[98908] = anon_sym_DOLLAR_LPAREN;
	v->a[98909] = actions(5501);
	v->a[98910] = 1;
	v->a[98911] = anon_sym_BQUOTE;
	v->a[98912] = actions(5503);
	v->a[98913] = 1;
	v->a[98914] = anon_sym_DOLLAR_BQUOTE;
	v->a[98915] = actions(5505);
	v->a[98916] = 1;
	v->a[98917] = sym__comment_word;
	v->a[98918] = actions(5507);
	v->a[98919] = 1;
	small_parse_table_4946(v);
}

void	small_parse_table_4946(t_small_parse_table_array *v)
{
	v->a[98920] = sym__empty_value;
	v->a[98921] = actions(5509);
	v->a[98922] = 1;
	v->a[98923] = sym__brace_start;
	v->a[98924] = state(1893);
	v->a[98925] = 1;
	v->a[98926] = aux_sym__literal_repeat1;
	v->a[98927] = state(1978);
	v->a[98928] = 1;
	v->a[98929] = sym_concatenation;
	v->a[98930] = actions(5491);
	v->a[98931] = 2;
	v->a[98932] = sym_test_operator;
	v->a[98933] = sym_raw_string;
	v->a[98934] = state(1843);
	v->a[98935] = 7;
	v->a[98936] = sym_arithmetic_expansion;
	v->a[98937] = sym_brace_expression;
	v->a[98938] = sym_string;
	v->a[98939] = sym_number;
	small_parse_table_4947(v);
}

void	small_parse_table_4947(t_small_parse_table_array *v)
{
	v->a[98940] = sym_simple_expansion;
	v->a[98941] = sym_expansion;
	v->a[98942] = sym_command_substitution;
	v->a[98943] = 19;
	v->a[98944] = actions(3);
	v->a[98945] = 1;
	v->a[98946] = sym_comment;
	v->a[98947] = actions(731);
	v->a[98948] = 1;
	v->a[98949] = anon_sym_DOLLAR;
	v->a[98950] = actions(737);
	v->a[98951] = 1;
	v->a[98952] = aux_sym_number_token1;
	v->a[98953] = actions(739);
	v->a[98954] = 1;
	v->a[98955] = aux_sym_number_token2;
	v->a[98956] = actions(743);
	v->a[98957] = 1;
	v->a[98958] = anon_sym_DOLLAR_LPAREN;
	v->a[98959] = actions(755);
	small_parse_table_4948(v);
}

void	small_parse_table_4948(t_small_parse_table_array *v)
{
	v->a[98960] = 1;
	v->a[98961] = sym__brace_start;
	v->a[98962] = actions(5511);
	v->a[98963] = 1;
	v->a[98964] = sym_word;
	v->a[98965] = actions(5513);
	v->a[98966] = 1;
	v->a[98967] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[98968] = actions(5515);
	v->a[98969] = 1;
	v->a[98970] = sym__special_character;
	v->a[98971] = actions(5517);
	v->a[98972] = 1;
	v->a[98973] = anon_sym_DQUOTE;
	v->a[98974] = actions(5521);
	v->a[98975] = 1;
	v->a[98976] = anon_sym_DOLLAR_LBRACE;
	v->a[98977] = actions(5523);
	v->a[98978] = 1;
	v->a[98979] = anon_sym_BQUOTE;
	small_parse_table_4949(v);
}

void	small_parse_table_4949(t_small_parse_table_array *v)
{
	v->a[98980] = actions(5525);
	v->a[98981] = 1;
	v->a[98982] = anon_sym_DOLLAR_BQUOTE;
	v->a[98983] = actions(5527);
	v->a[98984] = 1;
	v->a[98985] = sym__comment_word;
	v->a[98986] = actions(5529);
	v->a[98987] = 1;
	v->a[98988] = sym__empty_value;
	v->a[98989] = state(639);
	v->a[98990] = 1;
	v->a[98991] = aux_sym__literal_repeat1;
	v->a[98992] = state(806);
	v->a[98993] = 1;
	v->a[98994] = sym_concatenation;
	v->a[98995] = actions(5519);
	v->a[98996] = 2;
	v->a[98997] = sym_test_operator;
	v->a[98998] = sym_raw_string;
	v->a[98999] = state(487);
	small_parse_table_4950(v);
}

/* EOF small_parse_table_989.c */
