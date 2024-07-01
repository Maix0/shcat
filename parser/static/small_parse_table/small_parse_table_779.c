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
	v->a[77900] = anon_sym_DOLLAR_LPAREN;
	v->a[77901] = actions(3083);
	v->a[77902] = 1;
	v->a[77903] = anon_sym_BQUOTE;
	v->a[77904] = actions(3259);
	v->a[77905] = 1;
	v->a[77906] = anon_sym_DOLLAR;
	v->a[77907] = actions(3261);
	v->a[77908] = 1;
	v->a[77909] = anon_sym_DQUOTE;
	v->a[77910] = state(1681);
	v->a[77911] = 1;
	v->a[77912] = aux_sym_string_repeat1;
	v->a[77913] = state(1739);
	v->a[77914] = 4;
	v->a[77915] = sym_arithmetic_expansion;
	v->a[77916] = sym_simple_expansion;
	v->a[77917] = sym_expansion;
	v->a[77918] = sym_command_substitution;
	v->a[77919] = 10;
	small_parse_table_3896(v);
}

void	small_parse_table_3896(t_small_parse_table_array *v)
{
	v->a[77920] = actions(3);
	v->a[77921] = 1;
	v->a[77922] = sym_comment;
	v->a[77923] = actions(3071);
	v->a[77924] = 1;
	v->a[77925] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77926] = actions(3077);
	v->a[77927] = 1;
	v->a[77928] = sym_string_content;
	v->a[77929] = actions(3079);
	v->a[77930] = 1;
	v->a[77931] = anon_sym_DOLLAR_LBRACE;
	v->a[77932] = actions(3081);
	v->a[77933] = 1;
	v->a[77934] = anon_sym_DOLLAR_LPAREN;
	v->a[77935] = actions(3083);
	v->a[77936] = 1;
	v->a[77937] = anon_sym_BQUOTE;
	v->a[77938] = actions(3263);
	v->a[77939] = 1;
	small_parse_table_3897(v);
}

void	small_parse_table_3897(t_small_parse_table_array *v)
{
	v->a[77940] = anon_sym_DOLLAR;
	v->a[77941] = actions(3265);
	v->a[77942] = 1;
	v->a[77943] = anon_sym_DQUOTE;
	v->a[77944] = state(1667);
	v->a[77945] = 1;
	v->a[77946] = aux_sym_string_repeat1;
	v->a[77947] = state(1739);
	v->a[77948] = 4;
	v->a[77949] = sym_arithmetic_expansion;
	v->a[77950] = sym_simple_expansion;
	v->a[77951] = sym_expansion;
	v->a[77952] = sym_command_substitution;
	v->a[77953] = 4;
	v->a[77954] = actions(3);
	v->a[77955] = 1;
	v->a[77956] = sym_comment;
	v->a[77957] = actions(3269);
	v->a[77958] = 1;
	v->a[77959] = anon_sym_esac;
	small_parse_table_3898(v);
}

void	small_parse_table_3898(t_small_parse_table_array *v)
{
	v->a[77960] = actions(3271);
	v->a[77961] = 1;
	v->a[77962] = sym_extglob_pattern;
	v->a[77963] = actions(3267);
	v->a[77964] = 10;
	v->a[77965] = anon_sym_LPAREN;
	v->a[77966] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77967] = anon_sym_DOLLAR;
	v->a[77968] = anon_sym_DQUOTE;
	v->a[77969] = sym_raw_string;
	v->a[77970] = sym_number;
	v->a[77971] = anon_sym_DOLLAR_LBRACE;
	v->a[77972] = anon_sym_DOLLAR_LPAREN;
	v->a[77973] = anon_sym_BQUOTE;
	v->a[77974] = sym_word;
	v->a[77975] = 4;
	v->a[77976] = actions(3);
	v->a[77977] = 1;
	v->a[77978] = sym_comment;
	v->a[77979] = actions(1039);
	small_parse_table_3899(v);
}

void	small_parse_table_3899(t_small_parse_table_array *v)
{
	v->a[77980] = 1;
	v->a[77981] = sym_variable_name;
	v->a[77982] = actions(1037);
	v->a[77983] = 2;
	v->a[77984] = aux_sym__simple_variable_name_token1;
	v->a[77985] = aux_sym__multiline_variable_name_token1;
	v->a[77986] = actions(1035);
	v->a[77987] = 9;
	v->a[77988] = anon_sym_BANG;
	v->a[77989] = anon_sym_DASH;
	v->a[77990] = anon_sym_STAR;
	v->a[77991] = anon_sym_QMARK;
	v->a[77992] = anon_sym_DOLLAR;
	v->a[77993] = anon_sym_POUND;
	v->a[77994] = anon_sym_AT;
	v->a[77995] = anon_sym_0;
	v->a[77996] = anon_sym__;
	v->a[77997] = 10;
	v->a[77998] = actions(3);
	v->a[77999] = 1;
	small_parse_table_3900(v);
}

/* EOF small_parse_table_779.c */
