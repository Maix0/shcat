/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2329.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11645(t_small_parse_table_array *v)
{
	v->a[232900] = sym_command_substitution;
	v->a[232901] = 20;
	v->a[232902] = actions(71);
	v->a[232903] = 1;
	v->a[232904] = sym_comment;
	v->a[232905] = actions(3787);
	v->a[232906] = 1;
	v->a[232907] = anon_sym_DOLLAR;
	v->a[232908] = actions(3793);
	v->a[232909] = 1;
	v->a[232910] = aux_sym_number_token1;
	v->a[232911] = actions(3795);
	v->a[232912] = 1;
	v->a[232913] = aux_sym_number_token2;
	v->a[232914] = actions(3799);
	v->a[232915] = 1;
	v->a[232916] = anon_sym_DOLLAR_LPAREN;
	v->a[232917] = actions(3809);
	v->a[232918] = 1;
	v->a[232919] = sym__brace_start;
	small_parse_table_11646(v);
}

void	small_parse_table_11646(t_small_parse_table_array *v)
{
	v->a[232920] = actions(9636);
	v->a[232921] = 1;
	v->a[232922] = anon_sym_DOLLAR_LBRACK;
	v->a[232923] = actions(9640);
	v->a[232924] = 1;
	v->a[232925] = anon_sym_DQUOTE;
	v->a[232926] = actions(9644);
	v->a[232927] = 1;
	v->a[232928] = anon_sym_DOLLAR_LBRACE;
	v->a[232929] = actions(9646);
	v->a[232930] = 1;
	v->a[232931] = anon_sym_BQUOTE;
	v->a[232932] = actions(9648);
	v->a[232933] = 1;
	v->a[232934] = anon_sym_DOLLAR_BQUOTE;
	v->a[232935] = actions(11010);
	v->a[232936] = 1;
	v->a[232937] = sym_word;
	v->a[232938] = actions(11012);
	v->a[232939] = 1;
	small_parse_table_11647(v);
}

void	small_parse_table_11647(t_small_parse_table_array *v)
{
	v->a[232940] = sym__special_character;
	v->a[232941] = actions(11016);
	v->a[232942] = 1;
	v->a[232943] = sym_test_operator;
	v->a[232944] = state(4294);
	v->a[232945] = 1;
	v->a[232946] = aux_sym__literal_repeat1;
	v->a[232947] = state(4861);
	v->a[232948] = 1;
	v->a[232949] = sym_concatenation;
	v->a[232950] = actions(9634);
	v->a[232951] = 2;
	v->a[232952] = anon_sym_LPAREN_LPAREN;
	v->a[232953] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[232954] = actions(9650);
	v->a[232955] = 2;
	v->a[232956] = anon_sym_LT_LPAREN;
	v->a[232957] = anon_sym_GT_LPAREN;
	v->a[232958] = actions(11014);
	v->a[232959] = 2;
	small_parse_table_11648(v);
}

void	small_parse_table_11648(t_small_parse_table_array *v)
{
	v->a[232960] = sym_raw_string;
	v->a[232961] = sym_ansi_c_string;
	v->a[232962] = state(4806);
	v->a[232963] = 9;
	v->a[232964] = sym_arithmetic_expansion;
	v->a[232965] = sym_brace_expression;
	v->a[232966] = sym_string;
	v->a[232967] = sym_translated_string;
	v->a[232968] = sym_number;
	v->a[232969] = sym_simple_expansion;
	v->a[232970] = sym_expansion;
	v->a[232971] = sym_command_substitution;
	v->a[232972] = sym_process_substitution;
	v->a[232973] = 20;
	v->a[232974] = actions(71);
	v->a[232975] = 1;
	v->a[232976] = sym_comment;
	v->a[232977] = actions(3787);
	v->a[232978] = 1;
	v->a[232979] = anon_sym_DOLLAR;
	small_parse_table_11649(v);
}

void	small_parse_table_11649(t_small_parse_table_array *v)
{
	v->a[232980] = actions(3793);
	v->a[232981] = 1;
	v->a[232982] = aux_sym_number_token1;
	v->a[232983] = actions(3795);
	v->a[232984] = 1;
	v->a[232985] = aux_sym_number_token2;
	v->a[232986] = actions(3799);
	v->a[232987] = 1;
	v->a[232988] = anon_sym_DOLLAR_LPAREN;
	v->a[232989] = actions(3809);
	v->a[232990] = 1;
	v->a[232991] = sym__brace_start;
	v->a[232992] = actions(9636);
	v->a[232993] = 1;
	v->a[232994] = anon_sym_DOLLAR_LBRACK;
	v->a[232995] = actions(9640);
	v->a[232996] = 1;
	v->a[232997] = anon_sym_DQUOTE;
	v->a[232998] = actions(9644);
	v->a[232999] = 1;
	small_parse_table_11650(v);
}

/* EOF small_parse_table_2329.c */
