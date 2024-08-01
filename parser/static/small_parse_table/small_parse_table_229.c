/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_229.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1145(t_small_parse_table_array *v)
{
	v->a[22900] = sym_variable_name;
	v->a[22901] = actions(1042);
	v->a[22902] = 2;
	v->a[22903] = anon_sym_esac;
	v->a[22904] = anon_sym_SEMI_SEMI;
	v->a[22905] = actions(1040);
	v->a[22906] = 20;
	v->a[22907] = anon_sym_for;
	v->a[22908] = anon_sym_while;
	v->a[22909] = anon_sym_until;
	v->a[22910] = anon_sym_if;
	v->a[22911] = anon_sym_case;
	v->a[22912] = anon_sym_LPAREN;
	v->a[22913] = anon_sym_LBRACE;
	v->a[22914] = anon_sym_BANG;
	v->a[22915] = anon_sym_LT;
	v->a[22916] = anon_sym_GT;
	v->a[22917] = anon_sym_GT_GT;
	v->a[22918] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22919] = anon_sym_DOLLAR;
	small_parse_table_1146(v);
}

void	small_parse_table_1146(t_small_parse_table_array *v)
{
	v->a[22920] = anon_sym_DQUOTE;
	v->a[22921] = sym_raw_string;
	v->a[22922] = sym_number;
	v->a[22923] = anon_sym_DOLLAR_LBRACE;
	v->a[22924] = anon_sym_DOLLAR_LPAREN;
	v->a[22925] = anon_sym_BQUOTE;
	v->a[22926] = sym_word;
	v->a[22927] = 15;
	v->a[22928] = actions(3);
	v->a[22929] = 1;
	v->a[22930] = sym_comment;
	v->a[22931] = actions(53);
	v->a[22932] = 1;
	v->a[22933] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[22934] = actions(55);
	v->a[22935] = 1;
	v->a[22936] = anon_sym_DOLLAR;
	v->a[22937] = actions(57);
	v->a[22938] = 1;
	v->a[22939] = anon_sym_DQUOTE;
	small_parse_table_1147(v);
}

void	small_parse_table_1147(t_small_parse_table_array *v)
{
	v->a[22940] = actions(61);
	v->a[22941] = 1;
	v->a[22942] = anon_sym_DOLLAR_LBRACE;
	v->a[22943] = actions(63);
	v->a[22944] = 1;
	v->a[22945] = anon_sym_DOLLAR_LPAREN;
	v->a[22946] = actions(65);
	v->a[22947] = 1;
	v->a[22948] = anon_sym_BQUOTE;
	v->a[22949] = actions(341);
	v->a[22950] = 1;
	v->a[22951] = sym_variable_name;
	v->a[22952] = state(162);
	v->a[22953] = 1;
	v->a[22954] = sym_command_name;
	v->a[22955] = state(555);
	v->a[22956] = 1;
	v->a[22957] = sym_concatenation;
	v->a[22958] = state(1083);
	v->a[22959] = 1;
	small_parse_table_1148(v);
}

void	small_parse_table_1148(t_small_parse_table_array *v)
{
	v->a[22960] = sym_file_redirect;
	v->a[22961] = state(792);
	v->a[22962] = 2;
	v->a[22963] = sym_variable_assignment;
	v->a[22964] = aux_sym_command_repeat1;
	v->a[22965] = actions(214);
	v->a[22966] = 3;
	v->a[22967] = sym_raw_string;
	v->a[22968] = sym_number;
	v->a[22969] = sym_word;
	v->a[22970] = actions(758);
	v->a[22971] = 3;
	v->a[22972] = anon_sym_LT;
	v->a[22973] = anon_sym_GT;
	v->a[22974] = anon_sym_GT_GT;
	v->a[22975] = state(277);
	v->a[22976] = 5;
	v->a[22977] = sym_arithmetic_expansion;
	v->a[22978] = sym_string;
	v->a[22979] = sym_simple_expansion;
	small_parse_table_1149(v);
}

void	small_parse_table_1149(t_small_parse_table_array *v)
{
	v->a[22980] = sym_expansion;
	v->a[22981] = sym_command_substitution;
	v->a[22982] = 3;
	v->a[22983] = actions(3);
	v->a[22984] = 1;
	v->a[22985] = sym_comment;
	v->a[22986] = actions(981);
	v->a[22987] = 2;
	v->a[22988] = sym__concat;
	v->a[22989] = sym__bare_dollar;
	v->a[22990] = actions(973);
	v->a[22991] = 21;
	v->a[22992] = anon_sym_esac;
	v->a[22993] = anon_sym_PIPE;
	v->a[22994] = anon_sym_SEMI_SEMI;
	v->a[22995] = anon_sym_AMP_AMP;
	v->a[22996] = anon_sym_PIPE_PIPE;
	v->a[22997] = anon_sym_LT;
	v->a[22998] = anon_sym_GT;
	v->a[22999] = anon_sym_GT_GT;
	small_parse_table_1150(v);
}

/* EOF small_parse_table_229.c */
