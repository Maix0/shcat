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
	v->a[13900] = sym_command;
	v->a[13901] = sym__variable_assignments;
	v->a[13902] = 32;
	v->a[13903] = actions(3);
	v->a[13904] = 1;
	v->a[13905] = sym_comment;
	v->a[13906] = actions(9);
	v->a[13907] = 1;
	v->a[13908] = anon_sym_for;
	v->a[13909] = actions(13);
	v->a[13910] = 1;
	v->a[13911] = anon_sym_if;
	v->a[13912] = actions(15);
	v->a[13913] = 1;
	v->a[13914] = anon_sym_case;
	v->a[13915] = actions(17);
	v->a[13916] = 1;
	v->a[13917] = anon_sym_LPAREN;
	v->a[13918] = actions(19);
	v->a[13919] = 1;
	small_parse_table_696(v);
}

void	small_parse_table_696(t_small_parse_table_array *v)
{
	v->a[13920] = anon_sym_LBRACE;
	v->a[13921] = actions(45);
	v->a[13922] = 1;
	v->a[13923] = sym_word;
	v->a[13924] = actions(53);
	v->a[13925] = 1;
	v->a[13926] = anon_sym_BANG;
	v->a[13927] = actions(59);
	v->a[13928] = 1;
	v->a[13929] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[13930] = actions(61);
	v->a[13931] = 1;
	v->a[13932] = anon_sym_DOLLAR;
	v->a[13933] = actions(63);
	v->a[13934] = 1;
	v->a[13935] = anon_sym_DQUOTE;
	v->a[13936] = actions(67);
	v->a[13937] = 1;
	v->a[13938] = anon_sym_DOLLAR_LBRACE;
	v->a[13939] = actions(69);
	small_parse_table_697(v);
}

void	small_parse_table_697(t_small_parse_table_array *v)
{
	v->a[13940] = 1;
	v->a[13941] = anon_sym_DOLLAR_LPAREN;
	v->a[13942] = actions(71);
	v->a[13943] = 1;
	v->a[13944] = anon_sym_BQUOTE;
	v->a[13945] = actions(73);
	v->a[13946] = 1;
	v->a[13947] = sym_file_descriptor;
	v->a[13948] = actions(75);
	v->a[13949] = 1;
	v->a[13950] = sym_variable_name;
	v->a[13951] = actions(264);
	v->a[13952] = 1;
	v->a[13953] = anon_sym_then;
	v->a[13954] = state(36);
	v->a[13955] = 1;
	v->a[13956] = aux_sym__terminated_statement;
	v->a[13957] = state(191);
	v->a[13958] = 1;
	v->a[13959] = sym_command_name;
	small_parse_table_698(v);
}

void	small_parse_table_698(t_small_parse_table_array *v)
{
	v->a[13960] = state(252);
	v->a[13961] = 1;
	v->a[13962] = sym_variable_assignment;
	v->a[13963] = state(624);
	v->a[13964] = 1;
	v->a[13965] = sym_concatenation;
	v->a[13966] = state(726);
	v->a[13967] = 1;
	v->a[13968] = sym_file_redirect;
	v->a[13969] = state(733);
	v->a[13970] = 1;
	v->a[13971] = aux_sym_command_repeat1;
	v->a[13972] = state(1246);
	v->a[13973] = 1;
	v->a[13974] = sym_pipeline;
	v->a[13975] = state(1307);
	v->a[13976] = 1;
	v->a[13977] = aux_sym_redirected_statement_repeat2;
	v->a[13978] = state(2117);
	v->a[13979] = 1;
	small_parse_table_699(v);
}

void	small_parse_table_699(t_small_parse_table_array *v)
{
	v->a[13980] = sym__statement_not_pipeline;
	v->a[13981] = actions(11);
	v->a[13982] = 2;
	v->a[13983] = anon_sym_while;
	v->a[13984] = anon_sym_until;
	v->a[13985] = actions(57);
	v->a[13986] = 2;
	v->a[13987] = anon_sym_LT_AMP_DASH;
	v->a[13988] = anon_sym_GT_AMP_DASH;
	v->a[13989] = actions(65);
	v->a[13990] = 2;
	v->a[13991] = sym_raw_string;
	v->a[13992] = sym_number;
	v->a[13993] = state(420);
	v->a[13994] = 5;
	v->a[13995] = sym_arithmetic_expansion;
	v->a[13996] = sym_string;
	v->a[13997] = sym_simple_expansion;
	v->a[13998] = sym_expansion;
	v->a[13999] = sym_command_substitution;
	small_parse_table_700(v);
}

/* EOF small_parse_table_139.c */
