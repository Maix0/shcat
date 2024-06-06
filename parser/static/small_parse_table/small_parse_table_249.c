/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_249.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1245(t_small_parse_table_array *v)
{
	v->a[24900] = 1;
	v->a[24901] = aux_sym_number_token1;
	v->a[24902] = actions(99);
	v->a[24903] = 1;
	v->a[24904] = aux_sym_number_token2;
	v->a[24905] = actions(101);
	v->a[24906] = 1;
	v->a[24907] = anon_sym_DOLLAR_LBRACE;
	v->a[24908] = actions(103);
	v->a[24909] = 1;
	v->a[24910] = anon_sym_DOLLAR_LPAREN;
	v->a[24911] = actions(105);
	v->a[24912] = 1;
	v->a[24913] = anon_sym_BQUOTE;
	v->a[24914] = actions(107);
	v->a[24915] = 1;
	v->a[24916] = anon_sym_DOLLAR_BQUOTE;
	v->a[24917] = actions(111);
	v->a[24918] = 1;
	v->a[24919] = sym_variable_name;
	small_parse_table_1246(v);
}

void	small_parse_table_1246(t_small_parse_table_array *v)
{
	v->a[24920] = actions(113);
	v->a[24921] = 1;
	v->a[24922] = sym__brace_start;
	v->a[24923] = actions(2900);
	v->a[24924] = 1;
	v->a[24925] = sym_file_descriptor;
	v->a[24926] = actions(2935);
	v->a[24927] = 1;
	v->a[24928] = sym_word;
	v->a[24929] = actions(2937);
	v->a[24930] = 1;
	v->a[24931] = sym__special_character;
	v->a[24932] = state(340);
	v->a[24933] = 1;
	v->a[24934] = sym_command_name;
	v->a[24935] = state(1008);
	v->a[24936] = 1;
	v->a[24937] = aux_sym_command_repeat1;
	v->a[24938] = state(1048);
	v->a[24939] = 1;
	small_parse_table_1247(v);
}

void	small_parse_table_1247(t_small_parse_table_array *v)
{
	v->a[24940] = aux_sym__literal_repeat1;
	v->a[24941] = state(1192);
	v->a[24942] = 1;
	v->a[24943] = sym_concatenation;
	v->a[24944] = state(1352);
	v->a[24945] = 1;
	v->a[24946] = sym_variable_assignment;
	v->a[24947] = state(1995);
	v->a[24948] = 1;
	v->a[24949] = sym_file_redirect;
	v->a[24950] = state(2168);
	v->a[24951] = 1;
	v->a[24952] = sym_subshell;
	v->a[24953] = state(2169);
	v->a[24954] = 1;
	v->a[24955] = sym_command;
	v->a[24956] = actions(95);
	v->a[24957] = 2;
	v->a[24958] = sym_test_operator;
	v->a[24959] = sym_raw_string;
	small_parse_table_1248(v);
}

void	small_parse_table_1248(t_small_parse_table_array *v)
{
	v->a[24960] = actions(2896);
	v->a[24961] = 2;
	v->a[24962] = anon_sym_LT_AMP_DASH;
	v->a[24963] = anon_sym_GT_AMP_DASH;
	v->a[24964] = actions(2894);
	v->a[24965] = 3;
	v->a[24966] = anon_sym_GT_GT;
	v->a[24967] = anon_sym_AMP_GT_GT;
	v->a[24968] = anon_sym_GT_PIPE;
	v->a[24969] = actions(2892);
	v->a[24970] = 5;
	v->a[24971] = anon_sym_LT;
	v->a[24972] = anon_sym_GT;
	v->a[24973] = anon_sym_AMP_GT;
	v->a[24974] = anon_sym_LT_AMP;
	v->a[24975] = anon_sym_GT_AMP;
	v->a[24976] = state(834);
	v->a[24977] = 7;
	v->a[24978] = sym_arithmetic_expansion;
	v->a[24979] = sym_brace_expression;
	small_parse_table_1249(v);
}

void	small_parse_table_1249(t_small_parse_table_array *v)
{
	v->a[24980] = sym_string;
	v->a[24981] = sym_number;
	v->a[24982] = sym_simple_expansion;
	v->a[24983] = sym_expansion;
	v->a[24984] = sym_command_substitution;
	v->a[24985] = 3;
	v->a[24986] = actions(3);
	v->a[24987] = 1;
	v->a[24988] = sym_comment;
	v->a[24989] = actions(3034);
	v->a[24990] = 6;
	v->a[24991] = sym_file_descriptor;
	v->a[24992] = sym__concat;
	v->a[24993] = sym_test_operator;
	v->a[24994] = sym__bare_dollar;
	v->a[24995] = sym__brace_start;
	v->a[24996] = aux_sym_heredoc_redirect_token1;
	v->a[24997] = actions(3032);
	v->a[24998] = 36;
	v->a[24999] = anon_sym_esac;
	small_parse_table_1250(v);
}

/* EOF small_parse_table_249.c */
