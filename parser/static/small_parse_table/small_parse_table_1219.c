/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1219.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6095(t_small_parse_table_array *v)
{
	v->a[121900] = anon_sym_DQUOTE;
	v->a[121901] = actions(97);
	v->a[121902] = 1;
	v->a[121903] = aux_sym_number_token1;
	v->a[121904] = actions(99);
	v->a[121905] = 1;
	v->a[121906] = aux_sym_number_token2;
	v->a[121907] = actions(101);
	v->a[121908] = 1;
	v->a[121909] = anon_sym_DOLLAR_LBRACE;
	v->a[121910] = actions(103);
	v->a[121911] = 1;
	v->a[121912] = anon_sym_DOLLAR_LPAREN;
	v->a[121913] = actions(105);
	v->a[121914] = 1;
	v->a[121915] = anon_sym_BQUOTE;
	v->a[121916] = actions(107);
	v->a[121917] = 1;
	v->a[121918] = anon_sym_DOLLAR_BQUOTE;
	v->a[121919] = actions(113);
	small_parse_table_6096(v);
}

void	small_parse_table_6096(t_small_parse_table_array *v)
{
	v->a[121920] = 1;
	v->a[121921] = sym__brace_start;
	v->a[121922] = actions(6845);
	v->a[121923] = 1;
	v->a[121924] = sym_word;
	v->a[121925] = actions(6849);
	v->a[121926] = 1;
	v->a[121927] = sym__special_character;
	v->a[121928] = actions(6853);
	v->a[121929] = 1;
	v->a[121930] = sym__comment_word;
	v->a[121931] = actions(7051);
	v->a[121932] = 1;
	v->a[121933] = anon_sym_DOLLAR;
	v->a[121934] = actions(6851);
	v->a[121935] = 3;
	v->a[121936] = sym_test_operator;
	v->a[121937] = sym__bare_dollar;
	v->a[121938] = sym_raw_string;
	v->a[121939] = state(853);
	small_parse_table_6097(v);
}

void	small_parse_table_6097(t_small_parse_table_array *v)
{
	v->a[121940] = 7;
	v->a[121941] = sym_arithmetic_expansion;
	v->a[121942] = sym_brace_expression;
	v->a[121943] = sym_string;
	v->a[121944] = sym_number;
	v->a[121945] = sym_simple_expansion;
	v->a[121946] = sym_expansion;
	v->a[121947] = sym_command_substitution;
	v->a[121948] = 16;
	v->a[121949] = actions(3);
	v->a[121950] = 1;
	v->a[121951] = sym_comment;
	v->a[121952] = actions(1739);
	v->a[121953] = 1;
	v->a[121954] = anon_sym_DOLLAR;
	v->a[121955] = actions(1745);
	v->a[121956] = 1;
	v->a[121957] = aux_sym_number_token1;
	v->a[121958] = actions(1747);
	v->a[121959] = 1;
	small_parse_table_6098(v);
}

void	small_parse_table_6098(t_small_parse_table_array *v)
{
	v->a[121960] = aux_sym_number_token2;
	v->a[121961] = actions(1751);
	v->a[121962] = 1;
	v->a[121963] = anon_sym_DOLLAR_LPAREN;
	v->a[121964] = actions(1761);
	v->a[121965] = 1;
	v->a[121966] = sym__brace_start;
	v->a[121967] = actions(6789);
	v->a[121968] = 1;
	v->a[121969] = sym_word;
	v->a[121970] = actions(6791);
	v->a[121971] = 1;
	v->a[121972] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[121973] = actions(6795);
	v->a[121974] = 1;
	v->a[121975] = sym__special_character;
	v->a[121976] = actions(6797);
	v->a[121977] = 1;
	v->a[121978] = anon_sym_DQUOTE;
	v->a[121979] = actions(6801);
	small_parse_table_6099(v);
}

void	small_parse_table_6099(t_small_parse_table_array *v)
{
	v->a[121980] = 1;
	v->a[121981] = anon_sym_DOLLAR_LBRACE;
	v->a[121982] = actions(6803);
	v->a[121983] = 1;
	v->a[121984] = anon_sym_BQUOTE;
	v->a[121985] = actions(6805);
	v->a[121986] = 1;
	v->a[121987] = anon_sym_DOLLAR_BQUOTE;
	v->a[121988] = actions(6807);
	v->a[121989] = 1;
	v->a[121990] = sym__comment_word;
	v->a[121991] = actions(6799);
	v->a[121992] = 3;
	v->a[121993] = sym_test_operator;
	v->a[121994] = sym__bare_dollar;
	v->a[121995] = sym_raw_string;
	v->a[121996] = state(1108);
	v->a[121997] = 7;
	v->a[121998] = sym_arithmetic_expansion;
	v->a[121999] = sym_brace_expression;
	small_parse_table_6100(v);
}

/* EOF small_parse_table_1219.c */
