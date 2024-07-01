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
	v->a[87900] = 10;
	v->a[87901] = actions(3);
	v->a[87902] = 1;
	v->a[87903] = sym_comment;
	v->a[87904] = actions(3414);
	v->a[87905] = 1;
	v->a[87906] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87907] = actions(3420);
	v->a[87908] = 1;
	v->a[87909] = sym_string_content;
	v->a[87910] = actions(3422);
	v->a[87911] = 1;
	v->a[87912] = anon_sym_DOLLAR_LBRACE;
	v->a[87913] = actions(3424);
	v->a[87914] = 1;
	v->a[87915] = anon_sym_DOLLAR_LPAREN;
	v->a[87916] = actions(3426);
	v->a[87917] = 1;
	v->a[87918] = anon_sym_BQUOTE;
	v->a[87919] = actions(3614);
	small_parse_table_4396(v);
}

void	small_parse_table_4396(t_small_parse_table_array *v)
{
	v->a[87920] = 1;
	v->a[87921] = anon_sym_DOLLAR;
	v->a[87922] = actions(3616);
	v->a[87923] = 1;
	v->a[87924] = anon_sym_DQUOTE;
	v->a[87925] = state(1906);
	v->a[87926] = 1;
	v->a[87927] = aux_sym_string_repeat1;
	v->a[87928] = state(1959);
	v->a[87929] = 4;
	v->a[87930] = sym_arithmetic_expansion;
	v->a[87931] = sym_simple_expansion;
	v->a[87932] = sym_expansion;
	v->a[87933] = sym_command_substitution;
	v->a[87934] = 4;
	v->a[87935] = actions(3);
	v->a[87936] = 1;
	v->a[87937] = sym_comment;
	v->a[87938] = actions(3610);
	v->a[87939] = 1;
	small_parse_table_4397(v);
}

void	small_parse_table_4397(t_small_parse_table_array *v)
{
	v->a[87940] = anon_sym_esac;
	v->a[87941] = actions(3612);
	v->a[87942] = 1;
	v->a[87943] = sym_extglob_pattern;
	v->a[87944] = actions(3608);
	v->a[87945] = 10;
	v->a[87946] = anon_sym_LPAREN;
	v->a[87947] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87948] = anon_sym_DOLLAR;
	v->a[87949] = anon_sym_DQUOTE;
	v->a[87950] = sym_raw_string;
	v->a[87951] = sym_number;
	v->a[87952] = anon_sym_DOLLAR_LBRACE;
	v->a[87953] = anon_sym_DOLLAR_LPAREN;
	v->a[87954] = anon_sym_BQUOTE;
	v->a[87955] = sym_word;
	v->a[87956] = 4;
	v->a[87957] = actions(3);
	v->a[87958] = 1;
	v->a[87959] = sym_comment;
	small_parse_table_4398(v);
}

void	small_parse_table_4398(t_small_parse_table_array *v)
{
	v->a[87960] = actions(3622);
	v->a[87961] = 1;
	v->a[87962] = sym_variable_name;
	v->a[87963] = actions(3620);
	v->a[87964] = 2;
	v->a[87965] = aux_sym__simple_variable_name_token1;
	v->a[87966] = aux_sym__multiline_variable_name_token1;
	v->a[87967] = actions(3618);
	v->a[87968] = 9;
	v->a[87969] = anon_sym_BANG;
	v->a[87970] = anon_sym_DASH;
	v->a[87971] = anon_sym_STAR;
	v->a[87972] = anon_sym_QMARK;
	v->a[87973] = anon_sym_DOLLAR;
	v->a[87974] = anon_sym_POUND;
	v->a[87975] = anon_sym_AT;
	v->a[87976] = anon_sym_0;
	v->a[87977] = anon_sym__;
	v->a[87978] = 10;
	v->a[87979] = actions(3);
	small_parse_table_4399(v);
}

void	small_parse_table_4399(t_small_parse_table_array *v)
{
	v->a[87980] = 1;
	v->a[87981] = sym_comment;
	v->a[87982] = actions(3414);
	v->a[87983] = 1;
	v->a[87984] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87985] = actions(3420);
	v->a[87986] = 1;
	v->a[87987] = sym_string_content;
	v->a[87988] = actions(3422);
	v->a[87989] = 1;
	v->a[87990] = anon_sym_DOLLAR_LBRACE;
	v->a[87991] = actions(3424);
	v->a[87992] = 1;
	v->a[87993] = anon_sym_DOLLAR_LPAREN;
	v->a[87994] = actions(3426);
	v->a[87995] = 1;
	v->a[87996] = anon_sym_BQUOTE;
	v->a[87997] = actions(3624);
	v->a[87998] = 1;
	v->a[87999] = anon_sym_DOLLAR;
	small_parse_table_4400(v);
}

/* EOF small_parse_table_879.c */
