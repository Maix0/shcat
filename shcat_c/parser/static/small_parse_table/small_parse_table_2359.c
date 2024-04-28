/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2359.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11795(t_small_parse_table_array *v)
{
	v->a[235900] = sym_simple_expansion;
	v->a[235901] = sym_expansion;
	v->a[235902] = sym_command_substitution;
	v->a[235903] = 20;
	v->a[235904] = actions(71);
	v->a[235905] = 1;
	v->a[235906] = sym_comment;
	v->a[235907] = actions(4080);
	v->a[235908] = 1;
	v->a[235909] = anon_sym_DOLLAR;
	v->a[235910] = actions(4086);
	v->a[235911] = 1;
	v->a[235912] = aux_sym_number_token1;
	v->a[235913] = actions(4088);
	v->a[235914] = 1;
	v->a[235915] = aux_sym_number_token2;
	v->a[235916] = actions(4092);
	v->a[235917] = 1;
	v->a[235918] = anon_sym_DOLLAR_LPAREN;
	v->a[235919] = actions(4102);
	small_parse_table_11796(v);
}

void	small_parse_table_11796(t_small_parse_table_array *v)
{
	v->a[235920] = 1;
	v->a[235921] = sym__brace_start;
	v->a[235922] = actions(9310);
	v->a[235923] = 1;
	v->a[235924] = anon_sym_DOLLAR_LBRACK;
	v->a[235925] = actions(9316);
	v->a[235926] = 1;
	v->a[235927] = anon_sym_DQUOTE;
	v->a[235928] = actions(9320);
	v->a[235929] = 1;
	v->a[235930] = anon_sym_DOLLAR_LBRACE;
	v->a[235931] = actions(9322);
	v->a[235932] = 1;
	v->a[235933] = anon_sym_BQUOTE;
	v->a[235934] = actions(9324);
	v->a[235935] = 1;
	v->a[235936] = anon_sym_DOLLAR_BQUOTE;
	v->a[235937] = actions(11104);
	v->a[235938] = 1;
	v->a[235939] = sym__special_character;
	small_parse_table_11797(v);
}

void	small_parse_table_11797(t_small_parse_table_array *v)
{
	v->a[235940] = actions(11112);
	v->a[235941] = 1;
	v->a[235942] = sym_word;
	v->a[235943] = actions(11116);
	v->a[235944] = 1;
	v->a[235945] = sym_test_operator;
	v->a[235946] = state(4421);
	v->a[235947] = 1;
	v->a[235948] = aux_sym__literal_repeat1;
	v->a[235949] = state(4869);
	v->a[235950] = 1;
	v->a[235951] = sym_concatenation;
	v->a[235952] = actions(9308);
	v->a[235953] = 2;
	v->a[235954] = anon_sym_LPAREN_LPAREN;
	v->a[235955] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[235956] = actions(9326);
	v->a[235957] = 2;
	v->a[235958] = anon_sym_LT_LPAREN;
	v->a[235959] = anon_sym_GT_LPAREN;
	small_parse_table_11798(v);
}

void	small_parse_table_11798(t_small_parse_table_array *v)
{
	v->a[235960] = actions(11114);
	v->a[235961] = 2;
	v->a[235962] = sym_raw_string;
	v->a[235963] = sym_ansi_c_string;
	v->a[235964] = state(4684);
	v->a[235965] = 9;
	v->a[235966] = sym_arithmetic_expansion;
	v->a[235967] = sym_brace_expression;
	v->a[235968] = sym_string;
	v->a[235969] = sym_translated_string;
	v->a[235970] = sym_number;
	v->a[235971] = sym_simple_expansion;
	v->a[235972] = sym_expansion;
	v->a[235973] = sym_command_substitution;
	v->a[235974] = sym_process_substitution;
	v->a[235975] = 18;
	v->a[235976] = actions(3);
	v->a[235977] = 1;
	v->a[235978] = sym_comment;
	v->a[235979] = actions(8474);
	small_parse_table_11799(v);
}

void	small_parse_table_11799(t_small_parse_table_array *v)
{
	v->a[235980] = 1;
	v->a[235981] = anon_sym_DOLLAR_LBRACK;
	v->a[235982] = actions(8476);
	v->a[235983] = 1;
	v->a[235984] = anon_sym_DOLLAR;
	v->a[235985] = actions(8480);
	v->a[235986] = 1;
	v->a[235987] = anon_sym_DQUOTE;
	v->a[235988] = actions(8484);
	v->a[235989] = 1;
	v->a[235990] = aux_sym_number_token1;
	v->a[235991] = actions(8486);
	v->a[235992] = 1;
	v->a[235993] = aux_sym_number_token2;
	v->a[235994] = actions(8488);
	v->a[235995] = 1;
	v->a[235996] = anon_sym_DOLLAR_LBRACE;
	v->a[235997] = actions(8490);
	v->a[235998] = 1;
	v->a[235999] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_11800(v);
}

/* EOF small_parse_table_2359.c */
