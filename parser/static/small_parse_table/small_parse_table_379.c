/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_379.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1895(t_small_parse_table_array *v)
{
	v->a[37900] = anon_sym_GT;
	v->a[37901] = anon_sym_GT_GT;
	v->a[37902] = anon_sym_LT_AMP;
	v->a[37903] = anon_sym_GT_AMP;
	v->a[37904] = anon_sym_GT_PIPE;
	v->a[37905] = anon_sym_LT_GT;
	v->a[37906] = anon_sym_LT_LT;
	v->a[37907] = anon_sym_LT_LT_DASH;
	v->a[37908] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37909] = anon_sym_DOLLAR;
	v->a[37910] = anon_sym_DQUOTE;
	v->a[37911] = sym_raw_string;
	v->a[37912] = sym_number;
	v->a[37913] = anon_sym_DOLLAR_LBRACE;
	v->a[37914] = anon_sym_DOLLAR_LPAREN;
	v->a[37915] = anon_sym_BQUOTE;
	v->a[37916] = sym_word;
	v->a[37917] = 3;
	v->a[37918] = actions(3);
	v->a[37919] = 1;
	small_parse_table_1896(v);
}

void	small_parse_table_1896(t_small_parse_table_array *v)
{
	v->a[37920] = sym_comment;
	v->a[37921] = actions(1092);
	v->a[37922] = 3;
	v->a[37923] = sym_file_descriptor;
	v->a[37924] = sym__concat;
	v->a[37925] = sym__bare_dollar;
	v->a[37926] = actions(1094);
	v->a[37927] = 27;
	v->a[37928] = anon_sym_esac;
	v->a[37929] = anon_sym_PIPE;
	v->a[37930] = anon_sym_SEMI_SEMI;
	v->a[37931] = anon_sym_AMP_AMP;
	v->a[37932] = anon_sym_PIPE_PIPE;
	v->a[37933] = anon_sym_LT;
	v->a[37934] = anon_sym_GT;
	v->a[37935] = anon_sym_GT_GT;
	v->a[37936] = anon_sym_LT_AMP;
	v->a[37937] = anon_sym_GT_AMP;
	v->a[37938] = anon_sym_GT_PIPE;
	v->a[37939] = anon_sym_LT_GT;
	small_parse_table_1897(v);
}

void	small_parse_table_1897(t_small_parse_table_array *v)
{
	v->a[37940] = anon_sym_LT_LT;
	v->a[37941] = anon_sym_LT_LT_DASH;
	v->a[37942] = aux_sym_heredoc_redirect_token1;
	v->a[37943] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37944] = anon_sym_AMP;
	v->a[37945] = aux_sym_concatenation_token1;
	v->a[37946] = anon_sym_DOLLAR;
	v->a[37947] = anon_sym_DQUOTE;
	v->a[37948] = sym_raw_string;
	v->a[37949] = sym_number;
	v->a[37950] = anon_sym_DOLLAR_LBRACE;
	v->a[37951] = anon_sym_DOLLAR_LPAREN;
	v->a[37952] = anon_sym_BQUOTE;
	v->a[37953] = sym_word;
	v->a[37954] = anon_sym_SEMI;
	v->a[37955] = 12;
	v->a[37956] = actions(3);
	v->a[37957] = 1;
	v->a[37958] = sym_comment;
	v->a[37959] = actions(1354);
	small_parse_table_1898(v);
}

void	small_parse_table_1898(t_small_parse_table_array *v)
{
	v->a[37960] = 1;
	v->a[37961] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37962] = actions(1357);
	v->a[37963] = 1;
	v->a[37964] = anon_sym_DOLLAR;
	v->a[37965] = actions(1360);
	v->a[37966] = 1;
	v->a[37967] = anon_sym_DQUOTE;
	v->a[37968] = actions(1363);
	v->a[37969] = 1;
	v->a[37970] = anon_sym_DOLLAR_LBRACE;
	v->a[37971] = actions(1366);
	v->a[37972] = 1;
	v->a[37973] = anon_sym_DOLLAR_LPAREN;
	v->a[37974] = actions(1369);
	v->a[37975] = 1;
	v->a[37976] = anon_sym_BQUOTE;
	v->a[37977] = actions(540);
	v->a[37978] = 2;
	v->a[37979] = sym_file_descriptor;
	small_parse_table_1899(v);
}

void	small_parse_table_1899(t_small_parse_table_array *v)
{
	v->a[37980] = sym_variable_name;
	v->a[37981] = state(555);
	v->a[37982] = 2;
	v->a[37983] = sym_concatenation;
	v->a[37984] = aux_sym_for_statement_repeat1;
	v->a[37985] = actions(1351);
	v->a[37986] = 3;
	v->a[37987] = sym_raw_string;
	v->a[37988] = sym_number;
	v->a[37989] = sym_word;
	v->a[37990] = state(802);
	v->a[37991] = 5;
	v->a[37992] = sym_arithmetic_expansion;
	v->a[37993] = sym_string;
	v->a[37994] = sym_simple_expansion;
	v->a[37995] = sym_expansion;
	v->a[37996] = sym_command_substitution;
	v->a[37997] = actions(520);
	v->a[37998] = 12;
	v->a[37999] = anon_sym_PIPE;
	small_parse_table_1900(v);
}

/* EOF small_parse_table_379.c */
