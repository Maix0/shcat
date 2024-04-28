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
	v->a[11900] = sym_number;
	v->a[11901] = sym_simple_expansion;
	v->a[11902] = sym_expansion;
	v->a[11903] = sym_command_substitution;
	v->a[11904] = sym_process_substitution;
	v->a[11905] = actions(2214);
	v->a[11906] = 20;
	v->a[11907] = anon_sym_SEMI;
	v->a[11908] = anon_sym_PIPE_PIPE;
	v->a[11909] = anon_sym_AMP_AMP;
	v->a[11910] = anon_sym_PIPE;
	v->a[11911] = anon_sym_AMP;
	v->a[11912] = anon_sym_LT;
	v->a[11913] = anon_sym_GT;
	v->a[11914] = anon_sym_LT_LT;
	v->a[11915] = anon_sym_GT_GT;
	v->a[11916] = anon_sym_SEMI_SEMI;
	v->a[11917] = anon_sym_PIPE_AMP;
	v->a[11918] = anon_sym_AMP_GT;
	v->a[11919] = anon_sym_AMP_GT_GT;
	small_parse_table_596(v);
}

void	small_parse_table_596(t_small_parse_table_array *v)
{
	v->a[11920] = anon_sym_LT_AMP;
	v->a[11921] = anon_sym_GT_AMP;
	v->a[11922] = anon_sym_GT_PIPE;
	v->a[11923] = anon_sym_LT_AMP_DASH;
	v->a[11924] = anon_sym_GT_AMP_DASH;
	v->a[11925] = anon_sym_LT_LT_DASH;
	v->a[11926] = anon_sym_LT_LT_LT;
	v->a[11927] = 8;
	v->a[11928] = actions(3);
	v->a[11929] = 1;
	v->a[11930] = sym_comment;
	v->a[11931] = actions(2965);
	v->a[11932] = 1;
	v->a[11933] = anon_sym_DQUOTE;
	v->a[11934] = actions(2969);
	v->a[11935] = 1;
	v->a[11936] = sym_variable_name;
	v->a[11937] = state(1454);
	v->a[11938] = 1;
	v->a[11939] = sym_string;
	small_parse_table_597(v);
}

void	small_parse_table_597(t_small_parse_table_array *v)
{
	v->a[11940] = actions(2967);
	v->a[11941] = 2;
	v->a[11942] = aux_sym__simple_variable_name_token1;
	v->a[11943] = aux_sym__multiline_variable_name_token1;
	v->a[11944] = actions(1235);
	v->a[11945] = 3;
	v->a[11946] = sym_file_descriptor;
	v->a[11947] = sym_test_operator;
	v->a[11948] = sym__brace_start;
	v->a[11949] = actions(2963);
	v->a[11950] = 9;
	v->a[11951] = anon_sym_DASH;
	v->a[11952] = anon_sym_STAR;
	v->a[11953] = anon_sym_BANG;
	v->a[11954] = anon_sym_QMARK;
	v->a[11955] = anon_sym_DOLLAR;
	v->a[11956] = anon_sym_POUND;
	v->a[11957] = anon_sym_AT2;
	v->a[11958] = anon_sym_0;
	v->a[11959] = anon_sym__;
	small_parse_table_598(v);
}

void	small_parse_table_598(t_small_parse_table_array *v)
{
	v->a[11960] = actions(1227);
	v->a[11961] = 38;
	v->a[11962] = anon_sym_LPAREN_LPAREN;
	v->a[11963] = anon_sym_SEMI;
	v->a[11964] = anon_sym_PIPE_PIPE;
	v->a[11965] = anon_sym_AMP_AMP;
	v->a[11966] = anon_sym_PIPE;
	v->a[11967] = anon_sym_AMP;
	v->a[11968] = anon_sym_LT;
	v->a[11969] = anon_sym_GT;
	v->a[11970] = anon_sym_LT_LT;
	v->a[11971] = anon_sym_GT_GT;
	v->a[11972] = anon_sym_SEMI_SEMI;
	v->a[11973] = anon_sym_SEMI_AMP;
	v->a[11974] = anon_sym_SEMI_SEMI_AMP;
	v->a[11975] = anon_sym_PIPE_AMP;
	v->a[11976] = anon_sym_AMP_GT;
	v->a[11977] = anon_sym_AMP_GT_GT;
	v->a[11978] = anon_sym_LT_AMP;
	v->a[11979] = anon_sym_GT_AMP;
	small_parse_table_599(v);
}

void	small_parse_table_599(t_small_parse_table_array *v)
{
	v->a[11980] = anon_sym_GT_PIPE;
	v->a[11981] = anon_sym_LT_AMP_DASH;
	v->a[11982] = anon_sym_GT_AMP_DASH;
	v->a[11983] = anon_sym_LT_LT_DASH;
	v->a[11984] = aux_sym_heredoc_redirect_token1;
	v->a[11985] = anon_sym_LT_LT_LT;
	v->a[11986] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[11987] = anon_sym_DOLLAR_LBRACK;
	v->a[11988] = sym__special_character;
	v->a[11989] = sym_raw_string;
	v->a[11990] = sym_ansi_c_string;
	v->a[11991] = aux_sym_number_token1;
	v->a[11992] = aux_sym_number_token2;
	v->a[11993] = anon_sym_DOLLAR_LBRACE;
	v->a[11994] = anon_sym_DOLLAR_LPAREN;
	v->a[11995] = anon_sym_BQUOTE;
	v->a[11996] = anon_sym_DOLLAR_BQUOTE;
	v->a[11997] = anon_sym_LT_LPAREN;
	v->a[11998] = anon_sym_GT_LPAREN;
	v->a[11999] = sym_word;
	small_parse_table_600(v);
}

/* EOF small_parse_table_119.c */
