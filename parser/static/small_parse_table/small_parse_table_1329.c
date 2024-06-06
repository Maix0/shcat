/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1329.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6645(t_small_parse_table_array *v)
{
	v->a[132900] = 9;
	v->a[132901] = anon_sym_BANG;
	v->a[132902] = anon_sym_DASH;
	v->a[132903] = anon_sym_STAR;
	v->a[132904] = anon_sym_QMARK;
	v->a[132905] = anon_sym_DOLLAR;
	v->a[132906] = anon_sym_POUND;
	v->a[132907] = anon_sym_AT;
	v->a[132908] = anon_sym_0;
	v->a[132909] = anon_sym__;
	v->a[132910] = 9;
	v->a[132911] = actions(57);
	v->a[132912] = 1;
	v->a[132913] = sym_comment;
	v->a[132914] = actions(7453);
	v->a[132915] = 1;
	v->a[132916] = anon_sym_DQUOTE;
	v->a[132917] = actions(7455);
	v->a[132918] = 1;
	v->a[132919] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_6646(v);
}

void	small_parse_table_6646(t_small_parse_table_array *v)
{
	v->a[132920] = actions(7636);
	v->a[132921] = 1;
	v->a[132922] = anon_sym_DOLLAR;
	v->a[132923] = actions(7638);
	v->a[132924] = 1;
	v->a[132925] = anon_sym_DOLLAR_LPAREN;
	v->a[132926] = actions(7640);
	v->a[132927] = 1;
	v->a[132928] = anon_sym_BQUOTE;
	v->a[132929] = actions(7642);
	v->a[132930] = 1;
	v->a[132931] = anon_sym_DOLLAR_BQUOTE;
	v->a[132932] = actions(7634);
	v->a[132933] = 4;
	v->a[132934] = sym_variable_name;
	v->a[132935] = sym__expansion_word;
	v->a[132936] = sym_raw_string;
	v->a[132937] = sym_word;
	v->a[132938] = state(3499);
	v->a[132939] = 4;
	small_parse_table_6647(v);
}

void	small_parse_table_6647(t_small_parse_table_array *v)
{
	v->a[132940] = sym_string;
	v->a[132941] = sym_simple_expansion;
	v->a[132942] = sym_expansion;
	v->a[132943] = sym_command_substitution;
	v->a[132944] = 6;
	v->a[132945] = actions(3);
	v->a[132946] = 1;
	v->a[132947] = sym_comment;
	v->a[132948] = actions(7534);
	v->a[132949] = 1;
	v->a[132950] = sym_string_content;
	v->a[132951] = actions(7538);
	v->a[132952] = 1;
	v->a[132953] = sym_variable_name;
	v->a[132954] = actions(7644);
	v->a[132955] = 1;
	v->a[132956] = anon_sym_DQUOTE;
	v->a[132957] = actions(7536);
	v->a[132958] = 2;
	v->a[132959] = aux_sym__simple_variable_name_token1;
	small_parse_table_6648(v);
}

void	small_parse_table_6648(t_small_parse_table_array *v)
{
	v->a[132960] = aux_sym__multiline_variable_name_token1;
	v->a[132961] = actions(7530);
	v->a[132962] = 9;
	v->a[132963] = anon_sym_BANG;
	v->a[132964] = anon_sym_DASH;
	v->a[132965] = anon_sym_STAR;
	v->a[132966] = anon_sym_QMARK;
	v->a[132967] = anon_sym_DOLLAR;
	v->a[132968] = anon_sym_POUND;
	v->a[132969] = anon_sym_AT;
	v->a[132970] = anon_sym_0;
	v->a[132971] = anon_sym__;
	v->a[132972] = 6;
	v->a[132973] = actions(3);
	v->a[132974] = 1;
	v->a[132975] = sym_comment;
	v->a[132976] = actions(7534);
	v->a[132977] = 1;
	v->a[132978] = sym_string_content;
	v->a[132979] = actions(7538);
	small_parse_table_6649(v);
}

void	small_parse_table_6649(t_small_parse_table_array *v)
{
	v->a[132980] = 1;
	v->a[132981] = sym_variable_name;
	v->a[132982] = actions(7646);
	v->a[132983] = 1;
	v->a[132984] = anon_sym_DQUOTE;
	v->a[132985] = actions(7536);
	v->a[132986] = 2;
	v->a[132987] = aux_sym__simple_variable_name_token1;
	v->a[132988] = aux_sym__multiline_variable_name_token1;
	v->a[132989] = actions(7530);
	v->a[132990] = 9;
	v->a[132991] = anon_sym_BANG;
	v->a[132992] = anon_sym_DASH;
	v->a[132993] = anon_sym_STAR;
	v->a[132994] = anon_sym_QMARK;
	v->a[132995] = anon_sym_DOLLAR;
	v->a[132996] = anon_sym_POUND;
	v->a[132997] = anon_sym_AT;
	v->a[132998] = anon_sym_0;
	v->a[132999] = anon_sym__;
	small_parse_table_6650(v);
}

/* EOF small_parse_table_1329.c */
