/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_139.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_695(t_small_parse_table_array *v)
{
	v->a[13900] = anon_sym_LT_AMP_DASH;
	v->a[13901] = anon_sym_GT_AMP_DASH;
	v->a[13902] = state(397);
	v->a[13903] = 6;
	v->a[13904] = sym_arithmetic_expansion;
	v->a[13905] = sym_string;
	v->a[13906] = sym_number;
	v->a[13907] = sym_simple_expansion;
	v->a[13908] = sym_expansion;
	v->a[13909] = sym_command_substitution;
	v->a[13910] = actions(59);
	v->a[13911] = 8;
	v->a[13912] = anon_sym_LT;
	v->a[13913] = anon_sym_GT;
	v->a[13914] = anon_sym_GT_GT;
	v->a[13915] = anon_sym_AMP_GT;
	v->a[13916] = anon_sym_AMP_GT_GT;
	v->a[13917] = anon_sym_LT_AMP;
	v->a[13918] = anon_sym_GT_AMP;
	v->a[13919] = anon_sym_GT_PIPE;
	small_parse_table_696(v);
}

void	small_parse_table_696(t_small_parse_table_array *v)
{
	v->a[13920] = state(1071);
	v->a[13921] = 12;
	v->a[13922] = sym_redirected_statement;
	v->a[13923] = sym_for_statement;
	v->a[13924] = sym_while_statement;
	v->a[13925] = sym_if_statement;
	v->a[13926] = sym_case_statement;
	v->a[13927] = sym_function_definition;
	v->a[13928] = sym_compound_statement;
	v->a[13929] = sym_subshell;
	v->a[13930] = sym_list;
	v->a[13931] = sym_negated_command;
	v->a[13932] = sym_command;
	v->a[13933] = sym_variable_assignments;
	v->a[13934] = 34;
	v->a[13935] = actions(3);
	v->a[13936] = 1;
	v->a[13937] = sym_comment;
	v->a[13938] = actions(9);
	v->a[13939] = 1;
	small_parse_table_697(v);
}

void	small_parse_table_697(t_small_parse_table_array *v)
{
	v->a[13940] = anon_sym_for;
	v->a[13941] = actions(13);
	v->a[13942] = 1;
	v->a[13943] = anon_sym_if;
	v->a[13944] = actions(15);
	v->a[13945] = 1;
	v->a[13946] = anon_sym_case;
	v->a[13947] = actions(17);
	v->a[13948] = 1;
	v->a[13949] = anon_sym_LPAREN;
	v->a[13950] = actions(19);
	v->a[13951] = 1;
	v->a[13952] = anon_sym_LBRACE;
	v->a[13953] = actions(63);
	v->a[13954] = 1;
	v->a[13955] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[13956] = actions(65);
	v->a[13957] = 1;
	v->a[13958] = anon_sym_DOLLAR;
	v->a[13959] = actions(67);
	small_parse_table_698(v);
}

void	small_parse_table_698(t_small_parse_table_array *v)
{
	v->a[13960] = 1;
	v->a[13961] = anon_sym_DQUOTE;
	v->a[13962] = actions(71);
	v->a[13963] = 1;
	v->a[13964] = aux_sym_number_token1;
	v->a[13965] = actions(73);
	v->a[13966] = 1;
	v->a[13967] = aux_sym_number_token2;
	v->a[13968] = actions(75);
	v->a[13969] = 1;
	v->a[13970] = anon_sym_DOLLAR_LBRACE;
	v->a[13971] = actions(77);
	v->a[13972] = 1;
	v->a[13973] = anon_sym_DOLLAR_LPAREN;
	v->a[13974] = actions(79);
	v->a[13975] = 1;
	v->a[13976] = anon_sym_BQUOTE;
	v->a[13977] = actions(248);
	v->a[13978] = 1;
	v->a[13979] = sym_word;
	small_parse_table_699(v);
}

void	small_parse_table_699(t_small_parse_table_array *v)
{
	v->a[13980] = actions(250);
	v->a[13981] = 1;
	v->a[13982] = anon_sym_BANG;
	v->a[13983] = actions(256);
	v->a[13984] = 1;
	v->a[13985] = sym_raw_string;
	v->a[13986] = actions(258);
	v->a[13987] = 1;
	v->a[13988] = sym_file_descriptor;
	v->a[13989] = actions(260);
	v->a[13990] = 1;
	v->a[13991] = sym_variable_name;
	v->a[13992] = state(141);
	v->a[13993] = 1;
	v->a[13994] = aux_sym__statements_repeat1;
	v->a[13995] = state(175);
	v->a[13996] = 1;
	v->a[13997] = sym_command_name;
	v->a[13998] = state(278);
	v->a[13999] = 1;
	small_parse_table_700(v);
}

/* EOF small_parse_table_139.c */
