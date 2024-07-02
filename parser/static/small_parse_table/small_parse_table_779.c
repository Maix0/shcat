/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_779.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3895(t_small_parse_table_array *v)
{
	v->a[77900] = anon_sym_QMARK;
	v->a[77901] = anon_sym_DOLLAR;
	v->a[77902] = anon_sym_POUND;
	v->a[77903] = anon_sym_AT;
	v->a[77904] = anon_sym_0;
	v->a[77905] = anon_sym__;
	v->a[77906] = 4;
	v->a[77907] = actions(3);
	v->a[77908] = 1;
	v->a[77909] = sym_comment;
	v->a[77910] = actions(753);
	v->a[77911] = 1;
	v->a[77912] = sym_variable_name;
	v->a[77913] = actions(751);
	v->a[77914] = 2;
	v->a[77915] = aux_sym__simple_variable_name_token1;
	v->a[77916] = aux_sym__multiline_variable_name_token1;
	v->a[77917] = actions(749);
	v->a[77918] = 9;
	v->a[77919] = anon_sym_BANG;
	small_parse_table_3896(v);
}

void	small_parse_table_3896(t_small_parse_table_array *v)
{
	v->a[77920] = anon_sym_DASH;
	v->a[77921] = anon_sym_STAR;
	v->a[77922] = anon_sym_QMARK;
	v->a[77923] = anon_sym_DOLLAR;
	v->a[77924] = anon_sym_POUND;
	v->a[77925] = anon_sym_AT;
	v->a[77926] = anon_sym_0;
	v->a[77927] = anon_sym__;
	v->a[77928] = 10;
	v->a[77929] = actions(3);
	v->a[77930] = 1;
	v->a[77931] = sym_comment;
	v->a[77932] = actions(3104);
	v->a[77933] = 1;
	v->a[77934] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77935] = actions(3110);
	v->a[77936] = 1;
	v->a[77937] = sym_string_content;
	v->a[77938] = actions(3112);
	v->a[77939] = 1;
	small_parse_table_3897(v);
}

void	small_parse_table_3897(t_small_parse_table_array *v)
{
	v->a[77940] = anon_sym_DOLLAR_LBRACE;
	v->a[77941] = actions(3114);
	v->a[77942] = 1;
	v->a[77943] = anon_sym_DOLLAR_LPAREN;
	v->a[77944] = actions(3116);
	v->a[77945] = 1;
	v->a[77946] = anon_sym_BQUOTE;
	v->a[77947] = actions(3292);
	v->a[77948] = 1;
	v->a[77949] = anon_sym_DOLLAR;
	v->a[77950] = actions(3294);
	v->a[77951] = 1;
	v->a[77952] = anon_sym_DQUOTE;
	v->a[77953] = state(1661);
	v->a[77954] = 1;
	v->a[77955] = aux_sym_string_repeat1;
	v->a[77956] = state(1748);
	v->a[77957] = 4;
	v->a[77958] = sym_arithmetic_expansion;
	v->a[77959] = sym_simple_expansion;
	small_parse_table_3898(v);
}

void	small_parse_table_3898(t_small_parse_table_array *v)
{
	v->a[77960] = sym_expansion;
	v->a[77961] = sym_command_substitution;
	v->a[77962] = 4;
	v->a[77963] = actions(3);
	v->a[77964] = 1;
	v->a[77965] = sym_comment;
	v->a[77966] = actions(3010);
	v->a[77967] = 1;
	v->a[77968] = sym_variable_name;
	v->a[77969] = actions(3008);
	v->a[77970] = 2;
	v->a[77971] = aux_sym__simple_variable_name_token1;
	v->a[77972] = aux_sym__multiline_variable_name_token1;
	v->a[77973] = actions(3006);
	v->a[77974] = 9;
	v->a[77975] = anon_sym_BANG;
	v->a[77976] = anon_sym_DASH;
	v->a[77977] = anon_sym_STAR;
	v->a[77978] = anon_sym_QMARK;
	v->a[77979] = anon_sym_DOLLAR;
	small_parse_table_3899(v);
}

void	small_parse_table_3899(t_small_parse_table_array *v)
{
	v->a[77980] = anon_sym_POUND;
	v->a[77981] = anon_sym_AT;
	v->a[77982] = anon_sym_0;
	v->a[77983] = anon_sym__;
	v->a[77984] = 10;
	v->a[77985] = actions(3);
	v->a[77986] = 1;
	v->a[77987] = sym_comment;
	v->a[77988] = actions(3104);
	v->a[77989] = 1;
	v->a[77990] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77991] = actions(3110);
	v->a[77992] = 1;
	v->a[77993] = sym_string_content;
	v->a[77994] = actions(3112);
	v->a[77995] = 1;
	v->a[77996] = anon_sym_DOLLAR_LBRACE;
	v->a[77997] = actions(3114);
	v->a[77998] = 1;
	v->a[77999] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3900(v);
}

/* EOF small_parse_table_779.c */
