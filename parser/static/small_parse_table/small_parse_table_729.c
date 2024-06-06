/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_729.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3645(t_small_parse_table_array *v)
{
	v->a[72900] = sym_test_operator;
	v->a[72901] = actions(4360);
	v->a[72902] = 1;
	v->a[72903] = sym_extglob_pattern;
	v->a[72904] = actions(4362);
	v->a[72905] = 1;
	v->a[72906] = sym__brace_start;
	v->a[72907] = actions(4396);
	v->a[72908] = 1;
	v->a[72909] = anon_sym_esac;
	v->a[72910] = actions(4400);
	v->a[72911] = 1;
	v->a[72912] = aux_sym_heredoc_redirect_token1;
	v->a[72913] = state(3393);
	v->a[72914] = 1;
	v->a[72915] = aux_sym__literal_repeat1;
	v->a[72916] = state(3943);
	v->a[72917] = 1;
	v->a[72918] = sym_last_case_item;
	v->a[72919] = actions(4328);
	small_parse_table_3646(v);
}

void	small_parse_table_3646(t_small_parse_table_array *v)
{
	v->a[72920] = 2;
	v->a[72921] = sym_raw_string;
	v->a[72922] = sym_word;
	v->a[72923] = state(1813);
	v->a[72924] = 2;
	v->a[72925] = sym_case_item;
	v->a[72926] = aux_sym_case_statement_repeat1;
	v->a[72927] = state(3472);
	v->a[72928] = 2;
	v->a[72929] = sym_concatenation;
	v->a[72930] = sym__extglob_blob;
	v->a[72931] = actions(4398);
	v->a[72932] = 3;
	v->a[72933] = anon_sym_SEMI_SEMI;
	v->a[72934] = anon_sym_AMP;
	v->a[72935] = anon_sym_SEMI;
	v->a[72936] = state(3295);
	v->a[72937] = 7;
	v->a[72938] = sym_arithmetic_expansion;
	v->a[72939] = sym_brace_expression;
	small_parse_table_3647(v);
}

void	small_parse_table_3647(t_small_parse_table_array *v)
{
	v->a[72940] = sym_string;
	v->a[72941] = sym_number;
	v->a[72942] = sym_simple_expansion;
	v->a[72943] = sym_expansion;
	v->a[72944] = sym_command_substitution;
	v->a[72945] = 3;
	v->a[72946] = actions(57);
	v->a[72947] = 1;
	v->a[72948] = sym_comment;
	v->a[72949] = actions(3060);
	v->a[72950] = 13;
	v->a[72951] = anon_sym_PIPE;
	v->a[72952] = anon_sym_LT;
	v->a[72953] = anon_sym_GT;
	v->a[72954] = anon_sym_AMP_GT;
	v->a[72955] = anon_sym_LT_AMP;
	v->a[72956] = anon_sym_GT_AMP;
	v->a[72957] = anon_sym_LT_LT;
	v->a[72958] = anon_sym_DOLLAR;
	v->a[72959] = aux_sym_number_token1;
	small_parse_table_3648(v);
}

void	small_parse_table_3648(t_small_parse_table_array *v)
{
	v->a[72960] = aux_sym_number_token2;
	v->a[72961] = anon_sym_DOLLAR_LPAREN;
	v->a[72962] = anon_sym_BQUOTE;
	v->a[72963] = sym_word;
	v->a[72964] = actions(3062);
	v->a[72965] = 21;
	v->a[72966] = sym_file_descriptor;
	v->a[72967] = sym__concat;
	v->a[72968] = sym_variable_name;
	v->a[72969] = sym_test_operator;
	v->a[72970] = sym__brace_start;
	v->a[72971] = anon_sym_PIPE_AMP;
	v->a[72972] = anon_sym_AMP_AMP;
	v->a[72973] = anon_sym_PIPE_PIPE;
	v->a[72974] = anon_sym_GT_GT;
	v->a[72975] = anon_sym_AMP_GT_GT;
	v->a[72976] = anon_sym_GT_PIPE;
	v->a[72977] = anon_sym_LT_AMP_DASH;
	v->a[72978] = anon_sym_GT_AMP_DASH;
	v->a[72979] = anon_sym_LT_LT_DASH;
	small_parse_table_3649(v);
}

void	small_parse_table_3649(t_small_parse_table_array *v)
{
	v->a[72980] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[72981] = aux_sym_concatenation_token1;
	v->a[72982] = sym__special_character;
	v->a[72983] = anon_sym_DQUOTE;
	v->a[72984] = sym_raw_string;
	v->a[72985] = anon_sym_DOLLAR_LBRACE;
	v->a[72986] = anon_sym_DOLLAR_BQUOTE;
	v->a[72987] = 3;
	v->a[72988] = actions(57);
	v->a[72989] = 1;
	v->a[72990] = sym_comment;
	v->a[72991] = actions(2906);
	v->a[72992] = 14;
	v->a[72993] = anon_sym_PIPE;
	v->a[72994] = anon_sym_LT;
	v->a[72995] = anon_sym_GT;
	v->a[72996] = anon_sym_AMP_GT;
	v->a[72997] = anon_sym_LT_AMP;
	v->a[72998] = anon_sym_GT_AMP;
	v->a[72999] = anon_sym_LT_LT;
	small_parse_table_3650(v);
}

/* EOF small_parse_table_729.c */
