/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_299.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1495(t_small_parse_table_array *v)
{
	v->a[29900] = state(661);
	v->a[29901] = 1;
	v->a[29902] = sym_concatenation;
	v->a[29903] = state(668);
	v->a[29904] = 1;
	v->a[29905] = sym_variable_assignment;
	v->a[29906] = state(1121);
	v->a[29907] = 1;
	v->a[29908] = sym_command;
	v->a[29909] = state(1171);
	v->a[29910] = 1;
	v->a[29911] = sym_subshell;
	v->a[29912] = state(1203);
	v->a[29913] = 1;
	v->a[29914] = sym_file_redirect;
	v->a[29915] = actions(217);
	v->a[29916] = 3;
	v->a[29917] = sym_raw_string;
	v->a[29918] = sym_number;
	v->a[29919] = sym_word;
	small_parse_table_1496(v);
}

void	small_parse_table_1496(t_small_parse_table_array *v)
{
	v->a[29920] = state(374);
	v->a[29921] = 5;
	v->a[29922] = sym_arithmetic_expansion;
	v->a[29923] = sym_string;
	v->a[29924] = sym_simple_expansion;
	v->a[29925] = sym_expansion;
	v->a[29926] = sym_command_substitution;
	v->a[29927] = actions(1093);
	v->a[29928] = 7;
	v->a[29929] = anon_sym_LT;
	v->a[29930] = anon_sym_GT;
	v->a[29931] = anon_sym_GT_GT;
	v->a[29932] = anon_sym_LT_AMP;
	v->a[29933] = anon_sym_GT_AMP;
	v->a[29934] = anon_sym_GT_PIPE;
	v->a[29935] = anon_sym_LT_GT;
	v->a[29936] = 20;
	v->a[29937] = actions(3);
	v->a[29938] = 1;
	v->a[29939] = sym_comment;
	small_parse_table_1497(v);
}

void	small_parse_table_1497(t_small_parse_table_array *v)
{
	v->a[29940] = actions(97);
	v->a[29941] = 1;
	v->a[29942] = anon_sym_LPAREN;
	v->a[29943] = actions(107);
	v->a[29944] = 1;
	v->a[29945] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29946] = actions(109);
	v->a[29947] = 1;
	v->a[29948] = anon_sym_DOLLAR;
	v->a[29949] = actions(111);
	v->a[29950] = 1;
	v->a[29951] = anon_sym_DQUOTE;
	v->a[29952] = actions(115);
	v->a[29953] = 1;
	v->a[29954] = anon_sym_DOLLAR_LBRACE;
	v->a[29955] = actions(117);
	v->a[29956] = 1;
	v->a[29957] = anon_sym_DOLLAR_LPAREN;
	v->a[29958] = actions(119);
	v->a[29959] = 1;
	small_parse_table_1498(v);
}

void	small_parse_table_1498(t_small_parse_table_array *v)
{
	v->a[29960] = anon_sym_BQUOTE;
	v->a[29961] = actions(123);
	v->a[29962] = 1;
	v->a[29963] = sym_variable_name;
	v->a[29964] = actions(1095);
	v->a[29965] = 1;
	v->a[29966] = sym_file_descriptor;
	v->a[29967] = state(173);
	v->a[29968] = 1;
	v->a[29969] = sym_command_name;
	v->a[29970] = state(597);
	v->a[29971] = 1;
	v->a[29972] = aux_sym_command_repeat1;
	v->a[29973] = state(598);
	v->a[29974] = 1;
	v->a[29975] = sym_concatenation;
	v->a[29976] = state(713);
	v->a[29977] = 1;
	v->a[29978] = sym_variable_assignment;
	v->a[29979] = state(1203);
	small_parse_table_1499(v);
}

void	small_parse_table_1499(t_small_parse_table_array *v)
{
	v->a[29980] = 1;
	v->a[29981] = sym_file_redirect;
	v->a[29982] = state(1357);
	v->a[29983] = 1;
	v->a[29984] = sym_subshell;
	v->a[29985] = state(1361);
	v->a[29986] = 1;
	v->a[29987] = sym_command;
	v->a[29988] = actions(113);
	v->a[29989] = 3;
	v->a[29990] = sym_raw_string;
	v->a[29991] = sym_number;
	v->a[29992] = sym_word;
	v->a[29993] = state(378);
	v->a[29994] = 5;
	v->a[29995] = sym_arithmetic_expansion;
	v->a[29996] = sym_string;
	v->a[29997] = sym_simple_expansion;
	v->a[29998] = sym_expansion;
	v->a[29999] = sym_command_substitution;
	small_parse_table_1500(v);
}

/* EOF small_parse_table_299.c */
