/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_969.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4845(t_small_parse_table_array *v)
{
	v->a[96900] = 1;
	v->a[96901] = sym_comment;
	v->a[96902] = actions(1660);
	v->a[96903] = 1;
	v->a[96904] = sym_variable_name;
	v->a[96905] = actions(1658);
	v->a[96906] = 2;
	v->a[96907] = aux_sym__simple_variable_name_token1;
	v->a[96908] = aux_sym__multiline_variable_name_token1;
	v->a[96909] = actions(1656);
	v->a[96910] = 9;
	v->a[96911] = anon_sym_BANG;
	v->a[96912] = anon_sym_DASH;
	v->a[96913] = anon_sym_STAR;
	v->a[96914] = anon_sym_QMARK;
	v->a[96915] = anon_sym_DOLLAR;
	v->a[96916] = anon_sym_POUND;
	v->a[96917] = anon_sym_AT;
	v->a[96918] = anon_sym_0;
	v->a[96919] = anon_sym__;
	small_parse_table_4846(v);
}

void	small_parse_table_4846(t_small_parse_table_array *v)
{
	v->a[96920] = 4;
	v->a[96921] = actions(3);
	v->a[96922] = 1;
	v->a[96923] = sym_comment;
	v->a[96924] = actions(3330);
	v->a[96925] = 1;
	v->a[96926] = sym_variable_name;
	v->a[96927] = actions(3328);
	v->a[96928] = 2;
	v->a[96929] = aux_sym__simple_variable_name_token1;
	v->a[96930] = aux_sym__multiline_variable_name_token1;
	v->a[96931] = actions(3326);
	v->a[96932] = 9;
	v->a[96933] = anon_sym_BANG;
	v->a[96934] = anon_sym_DASH;
	v->a[96935] = anon_sym_STAR;
	v->a[96936] = anon_sym_QMARK;
	v->a[96937] = anon_sym_DOLLAR;
	v->a[96938] = anon_sym_POUND;
	v->a[96939] = anon_sym_AT;
	small_parse_table_4847(v);
}

void	small_parse_table_4847(t_small_parse_table_array *v)
{
	v->a[96940] = anon_sym_0;
	v->a[96941] = anon_sym__;
	v->a[96942] = 10;
	v->a[96943] = actions(3);
	v->a[96944] = 1;
	v->a[96945] = sym_comment;
	v->a[96946] = actions(3856);
	v->a[96947] = 1;
	v->a[96948] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[96949] = actions(3862);
	v->a[96950] = 1;
	v->a[96951] = sym_string_content;
	v->a[96952] = actions(3864);
	v->a[96953] = 1;
	v->a[96954] = anon_sym_DOLLAR_LBRACE;
	v->a[96955] = actions(3866);
	v->a[96956] = 1;
	v->a[96957] = anon_sym_DOLLAR_LPAREN;
	v->a[96958] = actions(3868);
	v->a[96959] = 1;
	small_parse_table_4848(v);
}

void	small_parse_table_4848(t_small_parse_table_array *v)
{
	v->a[96960] = anon_sym_BQUOTE;
	v->a[96961] = actions(4178);
	v->a[96962] = 1;
	v->a[96963] = anon_sym_DOLLAR;
	v->a[96964] = actions(4180);
	v->a[96965] = 1;
	v->a[96966] = anon_sym_DQUOTE;
	v->a[96967] = state(1993);
	v->a[96968] = 1;
	v->a[96969] = aux_sym_string_repeat1;
	v->a[96970] = state(2107);
	v->a[96971] = 4;
	v->a[96972] = sym_arithmetic_expansion;
	v->a[96973] = sym_simple_expansion;
	v->a[96974] = sym_expansion;
	v->a[96975] = sym_command_substitution;
	v->a[96976] = 10;
	v->a[96977] = actions(3);
	v->a[96978] = 1;
	v->a[96979] = sym_comment;
	small_parse_table_4849(v);
}

void	small_parse_table_4849(t_small_parse_table_array *v)
{
	v->a[96980] = actions(3856);
	v->a[96981] = 1;
	v->a[96982] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[96983] = actions(3862);
	v->a[96984] = 1;
	v->a[96985] = sym_string_content;
	v->a[96986] = actions(3864);
	v->a[96987] = 1;
	v->a[96988] = anon_sym_DOLLAR_LBRACE;
	v->a[96989] = actions(3866);
	v->a[96990] = 1;
	v->a[96991] = anon_sym_DOLLAR_LPAREN;
	v->a[96992] = actions(3868);
	v->a[96993] = 1;
	v->a[96994] = anon_sym_BQUOTE;
	v->a[96995] = actions(4182);
	v->a[96996] = 1;
	v->a[96997] = anon_sym_DOLLAR;
	v->a[96998] = actions(4184);
	v->a[96999] = 1;
	small_parse_table_4850(v);
}

/* EOF small_parse_table_969.c */
