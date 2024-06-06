/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_859.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4295(t_small_parse_table_array *v)
{
	v->a[85900] = anon_sym_DOLLAR_LPAREN;
	v->a[85901] = actions(4360);
	v->a[85902] = 1;
	v->a[85903] = sym_extglob_pattern;
	v->a[85904] = actions(4362);
	v->a[85905] = 1;
	v->a[85906] = sym__brace_start;
	v->a[85907] = actions(4548);
	v->a[85908] = 1;
	v->a[85909] = anon_sym_LPAREN;
	v->a[85910] = actions(4550);
	v->a[85911] = 1;
	v->a[85912] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[85913] = actions(4552);
	v->a[85914] = 1;
	v->a[85915] = sym__special_character;
	v->a[85916] = actions(4554);
	v->a[85917] = 1;
	v->a[85918] = anon_sym_DQUOTE;
	v->a[85919] = actions(4556);
	small_parse_table_4296(v);
}

void	small_parse_table_4296(t_small_parse_table_array *v)
{
	v->a[85920] = 1;
	v->a[85921] = anon_sym_DOLLAR_LBRACE;
	v->a[85922] = actions(4558);
	v->a[85923] = 1;
	v->a[85924] = anon_sym_BQUOTE;
	v->a[85925] = actions(4560);
	v->a[85926] = 1;
	v->a[85927] = anon_sym_DOLLAR_BQUOTE;
	v->a[85928] = state(3393);
	v->a[85929] = 1;
	v->a[85930] = aux_sym__literal_repeat1;
	v->a[85931] = state(3944);
	v->a[85932] = 1;
	v->a[85933] = sym_last_case_item;
	v->a[85934] = actions(4358);
	v->a[85935] = 2;
	v->a[85936] = sym_test_operator;
	v->a[85937] = sym_raw_string;
	v->a[85938] = state(1881);
	v->a[85939] = 2;
	small_parse_table_4297(v);
}

void	small_parse_table_4297(t_small_parse_table_array *v)
{
	v->a[85940] = sym_case_item;
	v->a[85941] = aux_sym_case_statement_repeat1;
	v->a[85942] = state(3472);
	v->a[85943] = 2;
	v->a[85944] = sym_concatenation;
	v->a[85945] = sym__extglob_blob;
	v->a[85946] = state(3295);
	v->a[85947] = 7;
	v->a[85948] = sym_arithmetic_expansion;
	v->a[85949] = sym_brace_expression;
	v->a[85950] = sym_string;
	v->a[85951] = sym_number;
	v->a[85952] = sym_simple_expansion;
	v->a[85953] = sym_expansion;
	v->a[85954] = sym_command_substitution;
	v->a[85955] = 6;
	v->a[85956] = actions(57);
	v->a[85957] = 1;
	v->a[85958] = sym_comment;
	v->a[85959] = actions(4795);
	small_parse_table_4298(v);
}

void	small_parse_table_4298(t_small_parse_table_array *v)
{
	v->a[85960] = 1;
	v->a[85961] = aux_sym_concatenation_token1;
	v->a[85962] = actions(4797);
	v->a[85963] = 1;
	v->a[85964] = sym__concat;
	v->a[85965] = state(1766);
	v->a[85966] = 1;
	v->a[85967] = aux_sym_concatenation_repeat1;
	v->a[85968] = actions(2694);
	v->a[85969] = 11;
	v->a[85970] = anon_sym_LT;
	v->a[85971] = anon_sym_GT;
	v->a[85972] = anon_sym_AMP_GT;
	v->a[85973] = anon_sym_LT_AMP;
	v->a[85974] = anon_sym_GT_AMP;
	v->a[85975] = anon_sym_DOLLAR;
	v->a[85976] = aux_sym_number_token1;
	v->a[85977] = aux_sym_number_token2;
	v->a[85978] = anon_sym_DOLLAR_LPAREN;
	v->a[85979] = anon_sym_BQUOTE;
	small_parse_table_4299(v);
}

void	small_parse_table_4299(t_small_parse_table_array *v)
{
	v->a[85980] = sym_word;
	v->a[85981] = actions(2696);
	v->a[85982] = 15;
	v->a[85983] = sym_file_descriptor;
	v->a[85984] = sym_variable_name;
	v->a[85985] = sym_test_operator;
	v->a[85986] = sym__brace_start;
	v->a[85987] = anon_sym_GT_GT;
	v->a[85988] = anon_sym_AMP_GT_GT;
	v->a[85989] = anon_sym_GT_PIPE;
	v->a[85990] = anon_sym_LT_AMP_DASH;
	v->a[85991] = anon_sym_GT_AMP_DASH;
	v->a[85992] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[85993] = sym__special_character;
	v->a[85994] = anon_sym_DQUOTE;
	v->a[85995] = sym_raw_string;
	v->a[85996] = anon_sym_DOLLAR_LBRACE;
	v->a[85997] = anon_sym_DOLLAR_BQUOTE;
	v->a[85998] = 21;
	v->a[85999] = actions(57);
	small_parse_table_4300(v);
}

/* EOF small_parse_table_859.c */
