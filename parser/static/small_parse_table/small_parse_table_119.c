/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_119.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_595(t_small_parse_table_array *v)
{
	v->a[11900] = 1;
	v->a[11901] = anon_sym_DOLLAR_LPAREN;
	v->a[11902] = actions(2079);
	v->a[11903] = 1;
	v->a[11904] = anon_sym_BQUOTE;
	v->a[11905] = actions(2082);
	v->a[11906] = 1;
	v->a[11907] = anon_sym_DOLLAR_BQUOTE;
	v->a[11908] = actions(2091);
	v->a[11909] = 1;
	v->a[11910] = sym__brace_start;
	v->a[11911] = actions(2341);
	v->a[11912] = 1;
	v->a[11913] = sym__special_character;
	v->a[11914] = actions(2344);
	v->a[11915] = 1;
	v->a[11916] = aux_sym__simple_variable_name_token1;
	v->a[11917] = actions(2347);
	v->a[11918] = 1;
	v->a[11919] = sym_test_operator;
	small_parse_table_596(v);
}

void	small_parse_table_596(t_small_parse_table_array *v)
{
	v->a[11920] = state(1219);
	v->a[11921] = 1;
	v->a[11922] = aux_sym__literal_repeat1;
	v->a[11923] = actions(966);
	v->a[11924] = 2;
	v->a[11925] = sym_file_descriptor;
	v->a[11926] = aux_sym_heredoc_redirect_token1;
	v->a[11927] = actions(2338);
	v->a[11928] = 2;
	v->a[11929] = sym_raw_string;
	v->a[11930] = sym_word;
	v->a[11931] = state(412);
	v->a[11932] = 2;
	v->a[11933] = sym_concatenation;
	v->a[11934] = aux_sym_unset_command_repeat1;
	v->a[11935] = state(1088);
	v->a[11936] = 7;
	v->a[11937] = sym_arithmetic_expansion;
	v->a[11938] = sym_brace_expression;
	v->a[11939] = sym_string;
	small_parse_table_597(v);
}

void	small_parse_table_597(t_small_parse_table_array *v)
{
	v->a[11940] = sym_number;
	v->a[11941] = sym_simple_expansion;
	v->a[11942] = sym_expansion;
	v->a[11943] = sym_command_substitution;
	v->a[11944] = actions(964);
	v->a[11945] = 19;
	v->a[11946] = anon_sym_PIPE;
	v->a[11947] = anon_sym_SEMI_SEMI;
	v->a[11948] = anon_sym_PIPE_AMP;
	v->a[11949] = anon_sym_AMP_AMP;
	v->a[11950] = anon_sym_PIPE_PIPE;
	v->a[11951] = anon_sym_LT;
	v->a[11952] = anon_sym_GT;
	v->a[11953] = anon_sym_GT_GT;
	v->a[11954] = anon_sym_AMP_GT;
	v->a[11955] = anon_sym_AMP_GT_GT;
	v->a[11956] = anon_sym_LT_AMP;
	v->a[11957] = anon_sym_GT_AMP;
	v->a[11958] = anon_sym_GT_PIPE;
	v->a[11959] = anon_sym_LT_AMP_DASH;
	small_parse_table_598(v);
}

void	small_parse_table_598(t_small_parse_table_array *v)
{
	v->a[11960] = anon_sym_GT_AMP_DASH;
	v->a[11961] = anon_sym_LT_LT;
	v->a[11962] = anon_sym_LT_LT_DASH;
	v->a[11963] = anon_sym_AMP;
	v->a[11964] = anon_sym_SEMI;
	v->a[11965] = 6;
	v->a[11966] = actions(3);
	v->a[11967] = 1;
	v->a[11968] = sym_comment;
	v->a[11969] = state(1217);
	v->a[11970] = 1;
	v->a[11971] = aux_sym__literal_repeat1;
	v->a[11972] = state(1289);
	v->a[11973] = 1;
	v->a[11974] = sym_concatenation;
	v->a[11975] = actions(1530);
	v->a[11976] = 5;
	v->a[11977] = sym_file_descriptor;
	v->a[11978] = sym_variable_name;
	v->a[11979] = sym_test_operator;
	small_parse_table_599(v);
}

void	small_parse_table_599(t_small_parse_table_array *v)
{
	v->a[11980] = sym__brace_start;
	v->a[11981] = aux_sym_heredoc_redirect_token1;
	v->a[11982] = state(769);
	v->a[11983] = 7;
	v->a[11984] = sym_arithmetic_expansion;
	v->a[11985] = sym_brace_expression;
	v->a[11986] = sym_string;
	v->a[11987] = sym_number;
	v->a[11988] = sym_simple_expansion;
	v->a[11989] = sym_expansion;
	v->a[11990] = sym_command_substitution;
	v->a[11991] = actions(1528);
	v->a[11992] = 32;
	v->a[11993] = anon_sym_PIPE;
	v->a[11994] = anon_sym_RPAREN;
	v->a[11995] = anon_sym_SEMI_SEMI;
	v->a[11996] = anon_sym_PIPE_AMP;
	v->a[11997] = anon_sym_AMP_AMP;
	v->a[11998] = anon_sym_PIPE_PIPE;
	v->a[11999] = anon_sym_LT;
	small_parse_table_600(v);
}

/* EOF small_parse_table_119.c */
