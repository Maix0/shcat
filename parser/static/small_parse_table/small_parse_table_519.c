/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_519.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2595(t_small_parse_table_array *v)
{
	v->a[51900] = aux_sym_number_token2;
	v->a[51901] = actions(1912);
	v->a[51902] = 1;
	v->a[51903] = anon_sym_DOLLAR_LBRACE;
	v->a[51904] = actions(1914);
	v->a[51905] = 1;
	v->a[51906] = anon_sym_DOLLAR_LPAREN;
	v->a[51907] = actions(1916);
	v->a[51908] = 1;
	v->a[51909] = anon_sym_BQUOTE;
	v->a[51910] = state(1655);
	v->a[51911] = 1;
	v->a[51912] = sym_concatenation;
	v->a[51913] = actions(1918);
	v->a[51914] = 2;
	v->a[51915] = sym_raw_string;
	v->a[51916] = sym_word;
	v->a[51917] = state(1501);
	v->a[51918] = 6;
	v->a[51919] = sym_arithmetic_expansion;
	small_parse_table_2596(v);
}

void	small_parse_table_2596(t_small_parse_table_array *v)
{
	v->a[51920] = sym_string;
	v->a[51921] = sym_number;
	v->a[51922] = sym_simple_expansion;
	v->a[51923] = sym_expansion;
	v->a[51924] = sym_command_substitution;
	v->a[51925] = actions(748);
	v->a[51926] = 13;
	v->a[51927] = anon_sym_AMP_AMP;
	v->a[51928] = anon_sym_PIPE_PIPE;
	v->a[51929] = anon_sym_LT;
	v->a[51930] = anon_sym_GT;
	v->a[51931] = anon_sym_GT_GT;
	v->a[51932] = anon_sym_AMP_GT;
	v->a[51933] = anon_sym_AMP_GT_GT;
	v->a[51934] = anon_sym_LT_AMP;
	v->a[51935] = anon_sym_GT_AMP;
	v->a[51936] = anon_sym_GT_PIPE;
	v->a[51937] = anon_sym_LT_AMP_DASH;
	v->a[51938] = anon_sym_GT_AMP_DASH;
	v->a[51939] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2597(v);
}

void	small_parse_table_2597(t_small_parse_table_array *v)
{
	v->a[51940] = 3;
	v->a[51941] = actions(3);
	v->a[51942] = 1;
	v->a[51943] = sym_comment;
	v->a[51944] = actions(1654);
	v->a[51945] = 2;
	v->a[51946] = sym_file_descriptor;
	v->a[51947] = sym_variable_name;
	v->a[51948] = actions(163);
	v->a[51949] = 29;
	v->a[51950] = anon_sym_for;
	v->a[51951] = anon_sym_while;
	v->a[51952] = anon_sym_until;
	v->a[51953] = anon_sym_do;
	v->a[51954] = anon_sym_if;
	v->a[51955] = anon_sym_case;
	v->a[51956] = anon_sym_LPAREN;
	v->a[51957] = anon_sym_LBRACE;
	v->a[51958] = anon_sym_BANG;
	v->a[51959] = anon_sym_LT;
	small_parse_table_2598(v);
}

void	small_parse_table_2598(t_small_parse_table_array *v)
{
	v->a[51960] = anon_sym_GT;
	v->a[51961] = anon_sym_GT_GT;
	v->a[51962] = anon_sym_AMP_GT;
	v->a[51963] = anon_sym_AMP_GT_GT;
	v->a[51964] = anon_sym_LT_AMP;
	v->a[51965] = anon_sym_GT_AMP;
	v->a[51966] = anon_sym_GT_PIPE;
	v->a[51967] = anon_sym_LT_AMP_DASH;
	v->a[51968] = anon_sym_GT_AMP_DASH;
	v->a[51969] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51970] = anon_sym_DOLLAR;
	v->a[51971] = anon_sym_DQUOTE;
	v->a[51972] = sym_raw_string;
	v->a[51973] = aux_sym_number_token1;
	v->a[51974] = aux_sym_number_token2;
	v->a[51975] = anon_sym_DOLLAR_LBRACE;
	v->a[51976] = anon_sym_DOLLAR_LPAREN;
	v->a[51977] = anon_sym_BQUOTE;
	v->a[51978] = sym_word;
	v->a[51979] = 4;
	small_parse_table_2599(v);
}

void	small_parse_table_2599(t_small_parse_table_array *v)
{
	v->a[51980] = actions(3);
	v->a[51981] = 1;
	v->a[51982] = sym_comment;
	v->a[51983] = actions(1920);
	v->a[51984] = 1;
	v->a[51985] = ts_builtin_sym_end;
	v->a[51986] = actions(1734);
	v->a[51987] = 2;
	v->a[51988] = sym_file_descriptor;
	v->a[51989] = sym_variable_name;
	v->a[51990] = actions(1730);
	v->a[51991] = 28;
	v->a[51992] = anon_sym_for;
	v->a[51993] = anon_sym_while;
	v->a[51994] = anon_sym_until;
	v->a[51995] = anon_sym_if;
	v->a[51996] = anon_sym_case;
	v->a[51997] = anon_sym_LPAREN;
	v->a[51998] = anon_sym_LBRACE;
	v->a[51999] = anon_sym_BANG;
	small_parse_table_2600(v);
}

/* EOF small_parse_table_519.c */
