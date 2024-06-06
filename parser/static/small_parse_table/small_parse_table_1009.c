/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1009.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5045(t_small_parse_table_array *v)
{
	v->a[100900] = 1;
	v->a[100901] = anon_sym_DOLLAR;
	v->a[100902] = actions(1017);
	v->a[100903] = 1;
	v->a[100904] = aux_sym_number_token1;
	v->a[100905] = actions(1019);
	v->a[100906] = 1;
	v->a[100907] = aux_sym_number_token2;
	v->a[100908] = actions(1023);
	v->a[100909] = 1;
	v->a[100910] = anon_sym_DOLLAR_LPAREN;
	v->a[100911] = actions(1035);
	v->a[100912] = 1;
	v->a[100913] = sym__brace_start;
	v->a[100914] = actions(5761);
	v->a[100915] = 1;
	v->a[100916] = sym_word;
	v->a[100917] = actions(5763);
	v->a[100918] = 1;
	v->a[100919] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_5046(v);
}

void	small_parse_table_5046(t_small_parse_table_array *v)
{
	v->a[100920] = actions(5765);
	v->a[100921] = 1;
	v->a[100922] = sym__special_character;
	v->a[100923] = actions(5767);
	v->a[100924] = 1;
	v->a[100925] = anon_sym_DQUOTE;
	v->a[100926] = actions(5771);
	v->a[100927] = 1;
	v->a[100928] = anon_sym_DOLLAR_LBRACE;
	v->a[100929] = actions(5773);
	v->a[100930] = 1;
	v->a[100931] = anon_sym_BQUOTE;
	v->a[100932] = actions(5775);
	v->a[100933] = 1;
	v->a[100934] = anon_sym_DOLLAR_BQUOTE;
	v->a[100935] = actions(5777);
	v->a[100936] = 1;
	v->a[100937] = sym__comment_word;
	v->a[100938] = actions(5779);
	v->a[100939] = 1;
	small_parse_table_5047(v);
}

void	small_parse_table_5047(t_small_parse_table_array *v)
{
	v->a[100940] = sym__empty_value;
	v->a[100941] = state(1117);
	v->a[100942] = 1;
	v->a[100943] = aux_sym__literal_repeat1;
	v->a[100944] = state(1238);
	v->a[100945] = 1;
	v->a[100946] = sym_concatenation;
	v->a[100947] = actions(5769);
	v->a[100948] = 2;
	v->a[100949] = sym_test_operator;
	v->a[100950] = sym_raw_string;
	v->a[100951] = state(1258);
	v->a[100952] = 7;
	v->a[100953] = sym_arithmetic_expansion;
	v->a[100954] = sym_brace_expression;
	v->a[100955] = sym_string;
	v->a[100956] = sym_number;
	v->a[100957] = sym_simple_expansion;
	v->a[100958] = sym_expansion;
	v->a[100959] = sym_command_substitution;
	small_parse_table_5048(v);
}

void	small_parse_table_5048(t_small_parse_table_array *v)
{
	v->a[100960] = 19;
	v->a[100961] = actions(3);
	v->a[100962] = 1;
	v->a[100963] = sym_comment;
	v->a[100964] = actions(2458);
	v->a[100965] = 1;
	v->a[100966] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[100967] = actions(2460);
	v->a[100968] = 1;
	v->a[100969] = anon_sym_DOLLAR;
	v->a[100970] = actions(2462);
	v->a[100971] = 1;
	v->a[100972] = sym__special_character;
	v->a[100973] = actions(2464);
	v->a[100974] = 1;
	v->a[100975] = anon_sym_DQUOTE;
	v->a[100976] = actions(2466);
	v->a[100977] = 1;
	v->a[100978] = aux_sym_number_token1;
	v->a[100979] = actions(2468);
	small_parse_table_5049(v);
}

void	small_parse_table_5049(t_small_parse_table_array *v)
{
	v->a[100980] = 1;
	v->a[100981] = aux_sym_number_token2;
	v->a[100982] = actions(2470);
	v->a[100983] = 1;
	v->a[100984] = anon_sym_DOLLAR_LBRACE;
	v->a[100985] = actions(2472);
	v->a[100986] = 1;
	v->a[100987] = anon_sym_DOLLAR_LPAREN;
	v->a[100988] = actions(2474);
	v->a[100989] = 1;
	v->a[100990] = anon_sym_BQUOTE;
	v->a[100991] = actions(2476);
	v->a[100992] = 1;
	v->a[100993] = anon_sym_DOLLAR_BQUOTE;
	v->a[100994] = actions(2480);
	v->a[100995] = 1;
	v->a[100996] = sym_test_operator;
	v->a[100997] = actions(2482);
	v->a[100998] = 1;
	v->a[100999] = sym__brace_start;
	small_parse_table_5050(v);
}

/* EOF small_parse_table_1009.c */
