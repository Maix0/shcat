/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_879.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4395(t_small_parse_table_array *v)
{
	v->a[87900] = sym__concat;
	v->a[87901] = state(1580);
	v->a[87902] = 1;
	v->a[87903] = aux_sym_concatenation_repeat1;
	v->a[87904] = actions(957);
	v->a[87905] = 10;
	v->a[87906] = aux_sym_heredoc_redirect_token1;
	v->a[87907] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87908] = anon_sym_DOLLAR;
	v->a[87909] = anon_sym_DQUOTE;
	v->a[87910] = sym_raw_string;
	v->a[87911] = sym_number;
	v->a[87912] = anon_sym_DOLLAR_LBRACE;
	v->a[87913] = anon_sym_DOLLAR_LPAREN;
	v->a[87914] = anon_sym_BQUOTE;
	v->a[87915] = sym_word;
	v->a[87916] = 7;
	v->a[87917] = actions(3);
	v->a[87918] = 1;
	v->a[87919] = sym_comment;
	small_parse_table_4396(v);
}

void	small_parse_table_4396(t_small_parse_table_array *v)
{
	v->a[87920] = actions(3336);
	v->a[87921] = 1;
	v->a[87922] = aux_sym__simple_variable_name_token1;
	v->a[87923] = actions(3340);
	v->a[87924] = 1;
	v->a[87925] = sym_variable_name;
	v->a[87926] = actions(3366);
	v->a[87927] = 1;
	v->a[87928] = anon_sym_RBRACE;
	v->a[87929] = state(2206);
	v->a[87930] = 1;
	v->a[87931] = sym__expansion_body;
	v->a[87932] = actions(3338);
	v->a[87933] = 2;
	v->a[87934] = anon_sym_0;
	v->a[87935] = anon_sym__;
	v->a[87936] = actions(3334);
	v->a[87937] = 7;
	v->a[87938] = anon_sym_BANG;
	v->a[87939] = anon_sym_DASH;
	small_parse_table_4397(v);
}

void	small_parse_table_4397(t_small_parse_table_array *v)
{
	v->a[87940] = anon_sym_STAR;
	v->a[87941] = anon_sym_QMARK;
	v->a[87942] = anon_sym_DOLLAR;
	v->a[87943] = anon_sym_POUND;
	v->a[87944] = anon_sym_AT;
	v->a[87945] = 7;
	v->a[87946] = actions(3);
	v->a[87947] = 1;
	v->a[87948] = sym_comment;
	v->a[87949] = actions(3336);
	v->a[87950] = 1;
	v->a[87951] = aux_sym__simple_variable_name_token1;
	v->a[87952] = actions(3340);
	v->a[87953] = 1;
	v->a[87954] = sym_variable_name;
	v->a[87955] = actions(3368);
	v->a[87956] = 1;
	v->a[87957] = anon_sym_RBRACE;
	v->a[87958] = state(2279);
	v->a[87959] = 1;
	small_parse_table_4398(v);
}

void	small_parse_table_4398(t_small_parse_table_array *v)
{
	v->a[87960] = sym__expansion_body;
	v->a[87961] = actions(3338);
	v->a[87962] = 2;
	v->a[87963] = anon_sym_0;
	v->a[87964] = anon_sym__;
	v->a[87965] = actions(3334);
	v->a[87966] = 7;
	v->a[87967] = anon_sym_BANG;
	v->a[87968] = anon_sym_DASH;
	v->a[87969] = anon_sym_STAR;
	v->a[87970] = anon_sym_QMARK;
	v->a[87971] = anon_sym_DOLLAR;
	v->a[87972] = anon_sym_POUND;
	v->a[87973] = anon_sym_AT;
	v->a[87974] = 7;
	v->a[87975] = actions(3);
	v->a[87976] = 1;
	v->a[87977] = sym_comment;
	v->a[87978] = actions(3336);
	v->a[87979] = 1;
	small_parse_table_4399(v);
}

void	small_parse_table_4399(t_small_parse_table_array *v)
{
	v->a[87980] = aux_sym__simple_variable_name_token1;
	v->a[87981] = actions(3340);
	v->a[87982] = 1;
	v->a[87983] = sym_variable_name;
	v->a[87984] = actions(3370);
	v->a[87985] = 1;
	v->a[87986] = anon_sym_RBRACE;
	v->a[87987] = state(2150);
	v->a[87988] = 1;
	v->a[87989] = sym__expansion_body;
	v->a[87990] = actions(3338);
	v->a[87991] = 2;
	v->a[87992] = anon_sym_0;
	v->a[87993] = anon_sym__;
	v->a[87994] = actions(3334);
	v->a[87995] = 7;
	v->a[87996] = anon_sym_BANG;
	v->a[87997] = anon_sym_DASH;
	v->a[87998] = anon_sym_STAR;
	v->a[87999] = anon_sym_QMARK;
	small_parse_table_4400(v);
}

/* EOF small_parse_table_879.c */
