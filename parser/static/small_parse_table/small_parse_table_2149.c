/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2149.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10745(t_small_parse_table_array *v)
{
	v->a[214900] = sym__special_character;
	v->a[214901] = actions(10260);
	v->a[214902] = 3;
	v->a[214903] = sym__bare_dollar;
	v->a[214904] = sym_raw_string;
	v->a[214905] = sym_ansi_c_string;
	v->a[214906] = state(2450);
	v->a[214907] = 9;
	v->a[214908] = sym_arithmetic_expansion;
	v->a[214909] = sym_brace_expression;
	v->a[214910] = sym_string;
	v->a[214911] = sym_translated_string;
	v->a[214912] = sym_number;
	v->a[214913] = sym_simple_expansion;
	v->a[214914] = sym_expansion;
	v->a[214915] = sym_command_substitution;
	v->a[214916] = sym_process_substitution;
	v->a[214917] = 18;
	v->a[214918] = actions(3);
	v->a[214919] = 1;
	small_parse_table_10746(v);
}

void	small_parse_table_10746(t_small_parse_table_array *v)
{
	v->a[214920] = sym_comment;
	v->a[214921] = actions(4767);
	v->a[214922] = 1;
	v->a[214923] = anon_sym_DOLLAR_LBRACK;
	v->a[214924] = actions(4769);
	v->a[214925] = 1;
	v->a[214926] = anon_sym_DOLLAR;
	v->a[214927] = actions(4773);
	v->a[214928] = 1;
	v->a[214929] = anon_sym_DQUOTE;
	v->a[214930] = actions(4777);
	v->a[214931] = 1;
	v->a[214932] = aux_sym_number_token1;
	v->a[214933] = actions(4779);
	v->a[214934] = 1;
	v->a[214935] = aux_sym_number_token2;
	v->a[214936] = actions(4781);
	v->a[214937] = 1;
	v->a[214938] = anon_sym_DOLLAR_LBRACE;
	v->a[214939] = actions(4783);
	small_parse_table_10747(v);
}

void	small_parse_table_10747(t_small_parse_table_array *v)
{
	v->a[214940] = 1;
	v->a[214941] = anon_sym_DOLLAR_LPAREN;
	v->a[214942] = actions(4785);
	v->a[214943] = 1;
	v->a[214944] = anon_sym_BQUOTE;
	v->a[214945] = actions(4787);
	v->a[214946] = 1;
	v->a[214947] = anon_sym_DOLLAR_BQUOTE;
	v->a[214948] = actions(4793);
	v->a[214949] = 1;
	v->a[214950] = sym__brace_start;
	v->a[214951] = actions(10264);
	v->a[214952] = 1;
	v->a[214953] = sym_word;
	v->a[214954] = actions(10270);
	v->a[214955] = 1;
	v->a[214956] = sym__comment_word;
	v->a[214957] = actions(4765);
	v->a[214958] = 2;
	v->a[214959] = anon_sym_LPAREN_LPAREN;
	small_parse_table_10748(v);
}

void	small_parse_table_10748(t_small_parse_table_array *v)
{
	v->a[214960] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[214961] = actions(4789);
	v->a[214962] = 2;
	v->a[214963] = anon_sym_LT_LPAREN;
	v->a[214964] = anon_sym_GT_LPAREN;
	v->a[214965] = actions(10266);
	v->a[214966] = 2;
	v->a[214967] = sym_test_operator;
	v->a[214968] = sym__special_character;
	v->a[214969] = actions(10268);
	v->a[214970] = 3;
	v->a[214971] = sym__bare_dollar;
	v->a[214972] = sym_raw_string;
	v->a[214973] = sym_ansi_c_string;
	v->a[214974] = state(5387);
	v->a[214975] = 9;
	v->a[214976] = sym_arithmetic_expansion;
	v->a[214977] = sym_brace_expression;
	v->a[214978] = sym_string;
	v->a[214979] = sym_translated_string;
	small_parse_table_10749(v);
}

void	small_parse_table_10749(t_small_parse_table_array *v)
{
	v->a[214980] = sym_number;
	v->a[214981] = sym_simple_expansion;
	v->a[214982] = sym_expansion;
	v->a[214983] = sym_command_substitution;
	v->a[214984] = sym_process_substitution;
	v->a[214985] = 18;
	v->a[214986] = actions(3);
	v->a[214987] = 1;
	v->a[214988] = sym_comment;
	v->a[214989] = actions(5112);
	v->a[214990] = 1;
	v->a[214991] = anon_sym_DOLLAR_LBRACK;
	v->a[214992] = actions(5118);
	v->a[214993] = 1;
	v->a[214994] = anon_sym_DQUOTE;
	v->a[214995] = actions(5122);
	v->a[214996] = 1;
	v->a[214997] = aux_sym_number_token1;
	v->a[214998] = actions(5124);
	v->a[214999] = 1;
	small_parse_table_10750(v);
}

/* EOF small_parse_table_2149.c */
