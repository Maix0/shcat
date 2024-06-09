/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_559.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2795(t_small_parse_table_array *v)
{
	v->a[55900] = 1;
	v->a[55901] = aux_sym_number_token1;
	v->a[55902] = actions(1997);
	v->a[55903] = 1;
	v->a[55904] = aux_sym_number_token2;
	v->a[55905] = actions(1999);
	v->a[55906] = 1;
	v->a[55907] = anon_sym_DOLLAR_LBRACE;
	v->a[55908] = actions(2001);
	v->a[55909] = 1;
	v->a[55910] = anon_sym_DOLLAR_LPAREN;
	v->a[55911] = actions(2003);
	v->a[55912] = 1;
	v->a[55913] = anon_sym_BQUOTE;
	v->a[55914] = actions(2005);
	v->a[55915] = 1;
	v->a[55916] = aux_sym__simple_variable_name_token1;
	v->a[55917] = actions(2007);
	v->a[55918] = 1;
	v->a[55919] = sym_variable_name;
	small_parse_table_2796(v);
}

void	small_parse_table_2796(t_small_parse_table_array *v)
{
	v->a[55920] = actions(2063);
	v->a[55921] = 1;
	v->a[55922] = anon_sym_RPAREN_RPAREN;
	v->a[55923] = actions(1985);
	v->a[55924] = 2;
	v->a[55925] = anon_sym_PLUS_PLUS;
	v->a[55926] = anon_sym_DASH_DASH;
	v->a[55927] = actions(1987);
	v->a[55928] = 2;
	v->a[55929] = anon_sym_DASH2;
	v->a[55930] = anon_sym_PLUS2;
	v->a[55931] = state(530);
	v->a[55932] = 4;
	v->a[55933] = sym_string;
	v->a[55934] = sym_number;
	v->a[55935] = sym_simple_expansion;
	v->a[55936] = sym_expansion;
	v->a[55937] = state(594);
	v->a[55938] = 8;
	v->a[55939] = sym__arithmetic_expression;
	small_parse_table_2797(v);
}

void	small_parse_table_2797(t_small_parse_table_array *v)
{
	v->a[55940] = sym_arithmetic_literal;
	v->a[55941] = sym_arithmetic_binary_expression;
	v->a[55942] = sym_arithmetic_ternary_expression;
	v->a[55943] = sym_arithmetic_unary_expression;
	v->a[55944] = sym_arithmetic_postfix_expression;
	v->a[55945] = sym_arithmetic_parenthesized_expression;
	v->a[55946] = sym_command_substitution;
	v->a[55947] = 18;
	v->a[55948] = actions(1404);
	v->a[55949] = 1;
	v->a[55950] = sym_comment;
	v->a[55951] = actions(1979);
	v->a[55952] = 1;
	v->a[55953] = anon_sym_LPAREN;
	v->a[55954] = actions(1981);
	v->a[55955] = 1;
	v->a[55956] = anon_sym_BANG;
	v->a[55957] = actions(1989);
	v->a[55958] = 1;
	v->a[55959] = anon_sym_TILDE;
	small_parse_table_2798(v);
}

void	small_parse_table_2798(t_small_parse_table_array *v)
{
	v->a[55960] = actions(1991);
	v->a[55961] = 1;
	v->a[55962] = anon_sym_DOLLAR;
	v->a[55963] = actions(1993);
	v->a[55964] = 1;
	v->a[55965] = anon_sym_DQUOTE;
	v->a[55966] = actions(1995);
	v->a[55967] = 1;
	v->a[55968] = aux_sym_number_token1;
	v->a[55969] = actions(1997);
	v->a[55970] = 1;
	v->a[55971] = aux_sym_number_token2;
	v->a[55972] = actions(1999);
	v->a[55973] = 1;
	v->a[55974] = anon_sym_DOLLAR_LBRACE;
	v->a[55975] = actions(2001);
	v->a[55976] = 1;
	v->a[55977] = anon_sym_DOLLAR_LPAREN;
	v->a[55978] = actions(2003);
	v->a[55979] = 1;
	small_parse_table_2799(v);
}

void	small_parse_table_2799(t_small_parse_table_array *v)
{
	v->a[55980] = anon_sym_BQUOTE;
	v->a[55981] = actions(2005);
	v->a[55982] = 1;
	v->a[55983] = aux_sym__simple_variable_name_token1;
	v->a[55984] = actions(2007);
	v->a[55985] = 1;
	v->a[55986] = sym_variable_name;
	v->a[55987] = actions(2065);
	v->a[55988] = 1;
	v->a[55989] = anon_sym_RPAREN_RPAREN;
	v->a[55990] = actions(1985);
	v->a[55991] = 2;
	v->a[55992] = anon_sym_PLUS_PLUS;
	v->a[55993] = anon_sym_DASH_DASH;
	v->a[55994] = actions(1987);
	v->a[55995] = 2;
	v->a[55996] = anon_sym_DASH2;
	v->a[55997] = anon_sym_PLUS2;
	v->a[55998] = state(530);
	v->a[55999] = 4;
	small_parse_table_2800(v);
}

/* EOF small_parse_table_559.c */
