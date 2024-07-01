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
	v->a[78900] = 4;
	v->a[78901] = sym_arithmetic_expansion;
	v->a[78902] = sym_simple_expansion;
	v->a[78903] = sym_expansion;
	v->a[78904] = sym_command_substitution;
	v->a[78905] = 4;
	v->a[78906] = actions(3);
	v->a[78907] = 1;
	v->a[78908] = sym_comment;
	v->a[78909] = actions(1029);
	v->a[78910] = 1;
	v->a[78911] = sym_variable_name;
	v->a[78912] = actions(1027);
	v->a[78913] = 2;
	v->a[78914] = aux_sym__simple_variable_name_token1;
	v->a[78915] = aux_sym__multiline_variable_name_token1;
	v->a[78916] = actions(1025);
	v->a[78917] = 9;
	v->a[78918] = anon_sym_BANG;
	v->a[78919] = anon_sym_DASH;
	small_parse_table_3946(v);
}

void	small_parse_table_3946(t_small_parse_table_array *v)
{
	v->a[78920] = anon_sym_STAR;
	v->a[78921] = anon_sym_QMARK;
	v->a[78922] = anon_sym_DOLLAR;
	v->a[78923] = anon_sym_POUND;
	v->a[78924] = anon_sym_AT;
	v->a[78925] = anon_sym_0;
	v->a[78926] = anon_sym__;
	v->a[78927] = 10;
	v->a[78928] = actions(3);
	v->a[78929] = 1;
	v->a[78930] = sym_comment;
	v->a[78931] = actions(3071);
	v->a[78932] = 1;
	v->a[78933] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78934] = actions(3077);
	v->a[78935] = 1;
	v->a[78936] = sym_string_content;
	v->a[78937] = actions(3079);
	v->a[78938] = 1;
	v->a[78939] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3947(v);
}

void	small_parse_table_3947(t_small_parse_table_array *v)
{
	v->a[78940] = actions(3081);
	v->a[78941] = 1;
	v->a[78942] = anon_sym_DOLLAR_LPAREN;
	v->a[78943] = actions(3083);
	v->a[78944] = 1;
	v->a[78945] = anon_sym_BQUOTE;
	v->a[78946] = actions(3387);
	v->a[78947] = 1;
	v->a[78948] = anon_sym_DOLLAR;
	v->a[78949] = actions(3389);
	v->a[78950] = 1;
	v->a[78951] = anon_sym_DQUOTE;
	v->a[78952] = state(1681);
	v->a[78953] = 1;
	v->a[78954] = aux_sym_string_repeat1;
	v->a[78955] = state(1739);
	v->a[78956] = 4;
	v->a[78957] = sym_arithmetic_expansion;
	v->a[78958] = sym_simple_expansion;
	v->a[78959] = sym_expansion;
	small_parse_table_3948(v);
}

void	small_parse_table_3948(t_small_parse_table_array *v)
{
	v->a[78960] = sym_command_substitution;
	v->a[78961] = 3;
	v->a[78962] = actions(3);
	v->a[78963] = 1;
	v->a[78964] = sym_comment;
	v->a[78965] = actions(3155);
	v->a[78966] = 1;
	v->a[78967] = sym_extglob_pattern;
	v->a[78968] = actions(3151);
	v->a[78969] = 10;
	v->a[78970] = anon_sym_LPAREN;
	v->a[78971] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78972] = anon_sym_DOLLAR;
	v->a[78973] = anon_sym_DQUOTE;
	v->a[78974] = sym_raw_string;
	v->a[78975] = sym_number;
	v->a[78976] = anon_sym_DOLLAR_LBRACE;
	v->a[78977] = anon_sym_DOLLAR_LPAREN;
	v->a[78978] = anon_sym_BQUOTE;
	v->a[78979] = sym_word;
	small_parse_table_3949(v);
}

void	small_parse_table_3949(t_small_parse_table_array *v)
{
	v->a[78980] = 3;
	v->a[78981] = actions(3);
	v->a[78982] = 1;
	v->a[78983] = sym_comment;
	v->a[78984] = actions(3343);
	v->a[78985] = 1;
	v->a[78986] = sym_extglob_pattern;
	v->a[78987] = actions(3339);
	v->a[78988] = 10;
	v->a[78989] = anon_sym_LPAREN;
	v->a[78990] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[78991] = anon_sym_DOLLAR;
	v->a[78992] = anon_sym_DQUOTE;
	v->a[78993] = sym_raw_string;
	v->a[78994] = sym_number;
	v->a[78995] = anon_sym_DOLLAR_LBRACE;
	v->a[78996] = anon_sym_DOLLAR_LPAREN;
	v->a[78997] = anon_sym_BQUOTE;
	v->a[78998] = sym_word;
	v->a[78999] = 3;
	small_parse_table_3950(v);
}

/* EOF small_parse_table_789.c */
