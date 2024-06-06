/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_839.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4195(t_small_parse_table_array *v)
{
	v->a[83900] = 1;
	v->a[83901] = anon_sym_DOLLAR;
	v->a[83902] = actions(4346);
	v->a[83903] = 1;
	v->a[83904] = aux_sym_number_token1;
	v->a[83905] = actions(4348);
	v->a[83906] = 1;
	v->a[83907] = aux_sym_number_token2;
	v->a[83908] = actions(4352);
	v->a[83909] = 1;
	v->a[83910] = anon_sym_DOLLAR_LPAREN;
	v->a[83911] = actions(4360);
	v->a[83912] = 1;
	v->a[83913] = sym_extglob_pattern;
	v->a[83914] = actions(4362);
	v->a[83915] = 1;
	v->a[83916] = sym__brace_start;
	v->a[83917] = actions(4548);
	v->a[83918] = 1;
	v->a[83919] = anon_sym_LPAREN;
	small_parse_table_4196(v);
}

void	small_parse_table_4196(t_small_parse_table_array *v)
{
	v->a[83920] = actions(4550);
	v->a[83921] = 1;
	v->a[83922] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[83923] = actions(4552);
	v->a[83924] = 1;
	v->a[83925] = sym__special_character;
	v->a[83926] = actions(4554);
	v->a[83927] = 1;
	v->a[83928] = anon_sym_DQUOTE;
	v->a[83929] = actions(4556);
	v->a[83930] = 1;
	v->a[83931] = anon_sym_DOLLAR_LBRACE;
	v->a[83932] = actions(4558);
	v->a[83933] = 1;
	v->a[83934] = anon_sym_BQUOTE;
	v->a[83935] = actions(4560);
	v->a[83936] = 1;
	v->a[83937] = anon_sym_DOLLAR_BQUOTE;
	v->a[83938] = state(3393);
	v->a[83939] = 1;
	small_parse_table_4197(v);
}

void	small_parse_table_4197(t_small_parse_table_array *v)
{
	v->a[83940] = aux_sym__literal_repeat1;
	v->a[83941] = state(3827);
	v->a[83942] = 1;
	v->a[83943] = sym_last_case_item;
	v->a[83944] = actions(4358);
	v->a[83945] = 2;
	v->a[83946] = sym_test_operator;
	v->a[83947] = sym_raw_string;
	v->a[83948] = state(1881);
	v->a[83949] = 2;
	v->a[83950] = sym_case_item;
	v->a[83951] = aux_sym_case_statement_repeat1;
	v->a[83952] = state(3472);
	v->a[83953] = 2;
	v->a[83954] = sym_concatenation;
	v->a[83955] = sym__extglob_blob;
	v->a[83956] = state(3295);
	v->a[83957] = 7;
	v->a[83958] = sym_arithmetic_expansion;
	v->a[83959] = sym_brace_expression;
	small_parse_table_4198(v);
}

void	small_parse_table_4198(t_small_parse_table_array *v)
{
	v->a[83960] = sym_string;
	v->a[83961] = sym_number;
	v->a[83962] = sym_simple_expansion;
	v->a[83963] = sym_expansion;
	v->a[83964] = sym_command_substitution;
	v->a[83965] = 21;
	v->a[83966] = actions(57);
	v->a[83967] = 1;
	v->a[83968] = sym_comment;
	v->a[83969] = actions(4328);
	v->a[83970] = 1;
	v->a[83971] = sym_word;
	v->a[83972] = actions(4340);
	v->a[83973] = 1;
	v->a[83974] = anon_sym_DOLLAR;
	v->a[83975] = actions(4346);
	v->a[83976] = 1;
	v->a[83977] = aux_sym_number_token1;
	v->a[83978] = actions(4348);
	v->a[83979] = 1;
	small_parse_table_4199(v);
}

void	small_parse_table_4199(t_small_parse_table_array *v)
{
	v->a[83980] = aux_sym_number_token2;
	v->a[83981] = actions(4352);
	v->a[83982] = 1;
	v->a[83983] = anon_sym_DOLLAR_LPAREN;
	v->a[83984] = actions(4360);
	v->a[83985] = 1;
	v->a[83986] = sym_extglob_pattern;
	v->a[83987] = actions(4362);
	v->a[83988] = 1;
	v->a[83989] = sym__brace_start;
	v->a[83990] = actions(4548);
	v->a[83991] = 1;
	v->a[83992] = anon_sym_LPAREN;
	v->a[83993] = actions(4550);
	v->a[83994] = 1;
	v->a[83995] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[83996] = actions(4552);
	v->a[83997] = 1;
	v->a[83998] = sym__special_character;
	v->a[83999] = actions(4554);
	small_parse_table_4200(v);
}

/* EOF small_parse_table_839.c */
