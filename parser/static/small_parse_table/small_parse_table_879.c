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
	v->a[87900] = 1;
	v->a[87901] = sym_variable_name;
	v->a[87902] = actions(2139);
	v->a[87903] = 2;
	v->a[87904] = aux_sym__simple_variable_name_token1;
	v->a[87905] = aux_sym__multiline_variable_name_token1;
	v->a[87906] = actions(2137);
	v->a[87907] = 9;
	v->a[87908] = anon_sym_BANG;
	v->a[87909] = anon_sym_DASH;
	v->a[87910] = anon_sym_STAR;
	v->a[87911] = anon_sym_QMARK;
	v->a[87912] = anon_sym_DOLLAR;
	v->a[87913] = anon_sym_POUND;
	v->a[87914] = anon_sym_AT;
	v->a[87915] = anon_sym_0;
	v->a[87916] = anon_sym__;
	v->a[87917] = 4;
	v->a[87918] = actions(3);
	v->a[87919] = 1;
	small_parse_table_4396(v);
}

void	small_parse_table_4396(t_small_parse_table_array *v)
{
	v->a[87920] = sym_comment;
	v->a[87921] = actions(2207);
	v->a[87922] = 1;
	v->a[87923] = sym_variable_name;
	v->a[87924] = actions(2205);
	v->a[87925] = 2;
	v->a[87926] = aux_sym__simple_variable_name_token1;
	v->a[87927] = aux_sym__multiline_variable_name_token1;
	v->a[87928] = actions(2203);
	v->a[87929] = 9;
	v->a[87930] = anon_sym_BANG;
	v->a[87931] = anon_sym_DASH;
	v->a[87932] = anon_sym_STAR;
	v->a[87933] = anon_sym_QMARK;
	v->a[87934] = anon_sym_DOLLAR;
	v->a[87935] = anon_sym_POUND;
	v->a[87936] = anon_sym_AT;
	v->a[87937] = anon_sym_0;
	v->a[87938] = anon_sym__;
	v->a[87939] = 10;
	small_parse_table_4397(v);
}

void	small_parse_table_4397(t_small_parse_table_array *v)
{
	v->a[87940] = actions(3);
	v->a[87941] = 1;
	v->a[87942] = sym_comment;
	v->a[87943] = actions(3712);
	v->a[87944] = 1;
	v->a[87945] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87946] = actions(3716);
	v->a[87947] = 1;
	v->a[87948] = sym_string_content;
	v->a[87949] = actions(3718);
	v->a[87950] = 1;
	v->a[87951] = anon_sym_DOLLAR_LBRACE;
	v->a[87952] = actions(3720);
	v->a[87953] = 1;
	v->a[87954] = anon_sym_DOLLAR_LPAREN;
	v->a[87955] = actions(3722);
	v->a[87956] = 1;
	v->a[87957] = anon_sym_BQUOTE;
	v->a[87958] = actions(3756);
	v->a[87959] = 1;
	small_parse_table_4398(v);
}

void	small_parse_table_4398(t_small_parse_table_array *v)
{
	v->a[87960] = anon_sym_DOLLAR;
	v->a[87961] = actions(3758);
	v->a[87962] = 1;
	v->a[87963] = anon_sym_DQUOTE;
	v->a[87964] = state(1737);
	v->a[87965] = 1;
	v->a[87966] = aux_sym_string_repeat1;
	v->a[87967] = state(1869);
	v->a[87968] = 4;
	v->a[87969] = sym_arithmetic_expansion;
	v->a[87970] = sym_simple_expansion;
	v->a[87971] = sym_expansion;
	v->a[87972] = sym_command_substitution;
	v->a[87973] = 3;
	v->a[87974] = actions(3);
	v->a[87975] = 1;
	v->a[87976] = sym_comment;
	v->a[87977] = actions(3634);
	v->a[87978] = 1;
	v->a[87979] = sym_extglob_pattern;
	small_parse_table_4399(v);
}

void	small_parse_table_4399(t_small_parse_table_array *v)
{
	v->a[87980] = actions(3630);
	v->a[87981] = 11;
	v->a[87982] = anon_sym_LPAREN;
	v->a[87983] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87984] = anon_sym_DOLLAR;
	v->a[87985] = anon_sym_DQUOTE;
	v->a[87986] = sym_raw_string;
	v->a[87987] = aux_sym_number_token1;
	v->a[87988] = aux_sym_number_token2;
	v->a[87989] = anon_sym_DOLLAR_LBRACE;
	v->a[87990] = anon_sym_DOLLAR_LPAREN;
	v->a[87991] = anon_sym_BQUOTE;
	v->a[87992] = sym_word;
	v->a[87993] = 10;
	v->a[87994] = actions(3);
	v->a[87995] = 1;
	v->a[87996] = sym_comment;
	v->a[87997] = actions(3454);
	v->a[87998] = 1;
	v->a[87999] = anon_sym_DQUOTE;
	small_parse_table_4400(v);
}

/* EOF small_parse_table_879.c */
