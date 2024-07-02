/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_789.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3945(t_small_parse_table_array *v)
{
	v->a[78900] = actions(3116);
	v->a[78901] = 1;
	v->a[78902] = anon_sym_BQUOTE;
	v->a[78903] = actions(3388);
	v->a[78904] = 1;
	v->a[78905] = anon_sym_DOLLAR;
	v->a[78906] = actions(3390);
	v->a[78907] = 1;
	v->a[78908] = anon_sym_DQUOTE;
	v->a[78909] = state(1661);
	v->a[78910] = 1;
	v->a[78911] = aux_sym_string_repeat1;
	v->a[78912] = state(1748);
	v->a[78913] = 4;
	v->a[78914] = sym_arithmetic_expansion;
	v->a[78915] = sym_simple_expansion;
	v->a[78916] = sym_expansion;
	v->a[78917] = sym_command_substitution;
	v->a[78918] = 10;
	v->a[78919] = actions(3);
	small_parse_table_3946(v);
}

void	small_parse_table_3946(t_small_parse_table_array *v)
{
	v->a[78920] = 1;
	v->a[78921] = sym_comment;
	v->a[78922] = actions(3104);
	v->a[78923] = 1;
	v->a[78924] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78925] = actions(3110);
	v->a[78926] = 1;
	v->a[78927] = sym_string_content;
	v->a[78928] = actions(3112);
	v->a[78929] = 1;
	v->a[78930] = anon_sym_DOLLAR_LBRACE;
	v->a[78931] = actions(3114);
	v->a[78932] = 1;
	v->a[78933] = anon_sym_DOLLAR_LPAREN;
	v->a[78934] = actions(3116);
	v->a[78935] = 1;
	v->a[78936] = anon_sym_BQUOTE;
	v->a[78937] = actions(3392);
	v->a[78938] = 1;
	v->a[78939] = anon_sym_DOLLAR;
	small_parse_table_3947(v);
}

void	small_parse_table_3947(t_small_parse_table_array *v)
{
	v->a[78940] = actions(3394);
	v->a[78941] = 1;
	v->a[78942] = anon_sym_DQUOTE;
	v->a[78943] = state(1696);
	v->a[78944] = 1;
	v->a[78945] = aux_sym_string_repeat1;
	v->a[78946] = state(1748);
	v->a[78947] = 4;
	v->a[78948] = sym_arithmetic_expansion;
	v->a[78949] = sym_simple_expansion;
	v->a[78950] = sym_expansion;
	v->a[78951] = sym_command_substitution;
	v->a[78952] = 4;
	v->a[78953] = actions(3);
	v->a[78954] = 1;
	v->a[78955] = sym_comment;
	v->a[78956] = actions(3400);
	v->a[78957] = 1;
	v->a[78958] = sym_variable_name;
	v->a[78959] = actions(3398);
	small_parse_table_3948(v);
}

void	small_parse_table_3948(t_small_parse_table_array *v)
{
	v->a[78960] = 2;
	v->a[78961] = aux_sym__simple_variable_name_token1;
	v->a[78962] = aux_sym__multiline_variable_name_token1;
	v->a[78963] = actions(3396);
	v->a[78964] = 9;
	v->a[78965] = anon_sym_BANG;
	v->a[78966] = anon_sym_DASH;
	v->a[78967] = anon_sym_STAR;
	v->a[78968] = anon_sym_QMARK;
	v->a[78969] = anon_sym_DOLLAR;
	v->a[78970] = anon_sym_POUND;
	v->a[78971] = anon_sym_AT;
	v->a[78972] = anon_sym_0;
	v->a[78973] = anon_sym__;
	v->a[78974] = 10;
	v->a[78975] = actions(3);
	v->a[78976] = 1;
	v->a[78977] = sym_comment;
	v->a[78978] = actions(3104);
	v->a[78979] = 1;
	small_parse_table_3949(v);
}

void	small_parse_table_3949(t_small_parse_table_array *v)
{
	v->a[78980] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78981] = actions(3110);
	v->a[78982] = 1;
	v->a[78983] = sym_string_content;
	v->a[78984] = actions(3112);
	v->a[78985] = 1;
	v->a[78986] = anon_sym_DOLLAR_LBRACE;
	v->a[78987] = actions(3114);
	v->a[78988] = 1;
	v->a[78989] = anon_sym_DOLLAR_LPAREN;
	v->a[78990] = actions(3116);
	v->a[78991] = 1;
	v->a[78992] = anon_sym_BQUOTE;
	v->a[78993] = actions(3402);
	v->a[78994] = 1;
	v->a[78995] = anon_sym_DOLLAR;
	v->a[78996] = actions(3404);
	v->a[78997] = 1;
	v->a[78998] = anon_sym_DQUOTE;
	v->a[78999] = state(1613);
	small_parse_table_3950(v);
}

/* EOF small_parse_table_789.c */
