/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_829.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4145(t_small_parse_table_array *v)
{
	v->a[82900] = sym__arithmetic_binary_expression;
	v->a[82901] = actions(4618);
	v->a[82902] = 2;
	v->a[82903] = anon_sym_PLUS_PLUS;
	v->a[82904] = anon_sym_DASH_DASH;
	v->a[82905] = actions(4620);
	v->a[82906] = 2;
	v->a[82907] = anon_sym_DASH2;
	v->a[82908] = anon_sym_PLUS2;
	v->a[82909] = state(1621);
	v->a[82910] = 8;
	v->a[82911] = sym__arithmetic_expression;
	v->a[82912] = sym__arithmetic_literal;
	v->a[82913] = sym__arithmetic_parenthesized_expression;
	v->a[82914] = sym_string;
	v->a[82915] = sym_number;
	v->a[82916] = sym_simple_expansion;
	v->a[82917] = sym_expansion;
	v->a[82918] = sym_command_substitution;
	v->a[82919] = 21;
	small_parse_table_4146(v);
}

void	small_parse_table_4146(t_small_parse_table_array *v)
{
	v->a[82920] = actions(57);
	v->a[82921] = 1;
	v->a[82922] = sym_comment;
	v->a[82923] = actions(4328);
	v->a[82924] = 1;
	v->a[82925] = sym_word;
	v->a[82926] = actions(4340);
	v->a[82927] = 1;
	v->a[82928] = anon_sym_DOLLAR;
	v->a[82929] = actions(4346);
	v->a[82930] = 1;
	v->a[82931] = aux_sym_number_token1;
	v->a[82932] = actions(4348);
	v->a[82933] = 1;
	v->a[82934] = aux_sym_number_token2;
	v->a[82935] = actions(4352);
	v->a[82936] = 1;
	v->a[82937] = anon_sym_DOLLAR_LPAREN;
	v->a[82938] = actions(4360);
	v->a[82939] = 1;
	small_parse_table_4147(v);
}

void	small_parse_table_4147(t_small_parse_table_array *v)
{
	v->a[82940] = sym_extglob_pattern;
	v->a[82941] = actions(4362);
	v->a[82942] = 1;
	v->a[82943] = sym__brace_start;
	v->a[82944] = actions(4548);
	v->a[82945] = 1;
	v->a[82946] = anon_sym_LPAREN;
	v->a[82947] = actions(4550);
	v->a[82948] = 1;
	v->a[82949] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[82950] = actions(4552);
	v->a[82951] = 1;
	v->a[82952] = sym__special_character;
	v->a[82953] = actions(4554);
	v->a[82954] = 1;
	v->a[82955] = anon_sym_DQUOTE;
	v->a[82956] = actions(4556);
	v->a[82957] = 1;
	v->a[82958] = anon_sym_DOLLAR_LBRACE;
	v->a[82959] = actions(4558);
	small_parse_table_4148(v);
}

void	small_parse_table_4148(t_small_parse_table_array *v)
{
	v->a[82960] = 1;
	v->a[82961] = anon_sym_BQUOTE;
	v->a[82962] = actions(4560);
	v->a[82963] = 1;
	v->a[82964] = anon_sym_DOLLAR_BQUOTE;
	v->a[82965] = state(3393);
	v->a[82966] = 1;
	v->a[82967] = aux_sym__literal_repeat1;
	v->a[82968] = state(3875);
	v->a[82969] = 1;
	v->a[82970] = sym_last_case_item;
	v->a[82971] = actions(4358);
	v->a[82972] = 2;
	v->a[82973] = sym_test_operator;
	v->a[82974] = sym_raw_string;
	v->a[82975] = state(1881);
	v->a[82976] = 2;
	v->a[82977] = sym_case_item;
	v->a[82978] = aux_sym_case_statement_repeat1;
	v->a[82979] = state(3472);
	small_parse_table_4149(v);
}

void	small_parse_table_4149(t_small_parse_table_array *v)
{
	v->a[82980] = 2;
	v->a[82981] = sym_concatenation;
	v->a[82982] = sym__extglob_blob;
	v->a[82983] = state(3295);
	v->a[82984] = 7;
	v->a[82985] = sym_arithmetic_expansion;
	v->a[82986] = sym_brace_expression;
	v->a[82987] = sym_string;
	v->a[82988] = sym_number;
	v->a[82989] = sym_simple_expansion;
	v->a[82990] = sym_expansion;
	v->a[82991] = sym_command_substitution;
	v->a[82992] = 21;
	v->a[82993] = actions(57);
	v->a[82994] = 1;
	v->a[82995] = sym_comment;
	v->a[82996] = actions(4584);
	v->a[82997] = 1;
	v->a[82998] = anon_sym_LPAREN;
	v->a[82999] = actions(4586);
	small_parse_table_4150(v);
}

/* EOF small_parse_table_829.c */
