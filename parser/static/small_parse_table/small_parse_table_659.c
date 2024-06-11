/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_659.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3295(t_small_parse_table_array *v)
{
	v->a[65900] = sym_arithmetic_ternary_expression;
	v->a[65901] = sym_arithmetic_unary_expression;
	v->a[65902] = sym_arithmetic_postfix_expression;
	v->a[65903] = sym_arithmetic_parenthesized_expression;
	v->a[65904] = sym_command_substitution;
	v->a[65905] = 15;
	v->a[65906] = actions(1094);
	v->a[65907] = 1;
	v->a[65908] = sym_comment;
	v->a[65909] = actions(2003);
	v->a[65910] = 1;
	v->a[65911] = anon_sym_LPAREN;
	v->a[65912] = actions(2005);
	v->a[65913] = 1;
	v->a[65914] = anon_sym_BANG;
	v->a[65915] = actions(2011);
	v->a[65916] = 1;
	v->a[65917] = anon_sym_TILDE;
	v->a[65918] = actions(2013);
	v->a[65919] = 1;
	small_parse_table_3296(v);
}

void	small_parse_table_3296(t_small_parse_table_array *v)
{
	v->a[65920] = anon_sym_DOLLAR;
	v->a[65921] = actions(2015);
	v->a[65922] = 1;
	v->a[65923] = anon_sym_DQUOTE;
	v->a[65924] = actions(2019);
	v->a[65925] = 1;
	v->a[65926] = anon_sym_DOLLAR_LBRACE;
	v->a[65927] = actions(2021);
	v->a[65928] = 1;
	v->a[65929] = anon_sym_DOLLAR_LPAREN;
	v->a[65930] = actions(2023);
	v->a[65931] = 1;
	v->a[65932] = anon_sym_BQUOTE;
	v->a[65933] = actions(2025);
	v->a[65934] = 1;
	v->a[65935] = sym_variable_name;
	v->a[65936] = actions(2007);
	v->a[65937] = 2;
	v->a[65938] = anon_sym_PLUS_PLUS;
	v->a[65939] = anon_sym_DASH_DASH;
	small_parse_table_3297(v);
}

void	small_parse_table_3297(t_small_parse_table_array *v)
{
	v->a[65940] = actions(2009);
	v->a[65941] = 2;
	v->a[65942] = anon_sym_DASH2;
	v->a[65943] = anon_sym_PLUS2;
	v->a[65944] = actions(2017);
	v->a[65945] = 2;
	v->a[65946] = sym_number;
	v->a[65947] = aux_sym__simple_variable_name_token1;
	v->a[65948] = state(503);
	v->a[65949] = 3;
	v->a[65950] = sym_string;
	v->a[65951] = sym_simple_expansion;
	v->a[65952] = sym_expansion;
	v->a[65953] = state(586);
	v->a[65954] = 8;
	v->a[65955] = sym__arithmetic_expression;
	v->a[65956] = sym_arithmetic_literal;
	v->a[65957] = sym_arithmetic_binary_expression;
	v->a[65958] = sym_arithmetic_ternary_expression;
	v->a[65959] = sym_arithmetic_unary_expression;
	small_parse_table_3298(v);
}

void	small_parse_table_3298(t_small_parse_table_array *v)
{
	v->a[65960] = sym_arithmetic_postfix_expression;
	v->a[65961] = sym_arithmetic_parenthesized_expression;
	v->a[65962] = sym_command_substitution;
	v->a[65963] = 17;
	v->a[65964] = actions(3);
	v->a[65965] = 1;
	v->a[65966] = sym_comment;
	v->a[65967] = actions(1959);
	v->a[65968] = 1;
	v->a[65969] = anon_sym_LPAREN;
	v->a[65970] = actions(1963);
	v->a[65971] = 1;
	v->a[65972] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[65973] = actions(1965);
	v->a[65974] = 1;
	v->a[65975] = anon_sym_DOLLAR;
	v->a[65976] = actions(1967);
	v->a[65977] = 1;
	v->a[65978] = anon_sym_DQUOTE;
	v->a[65979] = actions(1969);
	small_parse_table_3299(v);
}

void	small_parse_table_3299(t_small_parse_table_array *v)
{
	v->a[65980] = 1;
	v->a[65981] = anon_sym_DOLLAR_LBRACE;
	v->a[65982] = actions(1971);
	v->a[65983] = 1;
	v->a[65984] = anon_sym_DOLLAR_LPAREN;
	v->a[65985] = actions(1973);
	v->a[65986] = 1;
	v->a[65987] = anon_sym_BQUOTE;
	v->a[65988] = actions(1975);
	v->a[65989] = 1;
	v->a[65990] = sym_extglob_pattern;
	v->a[65991] = actions(2031);
	v->a[65992] = 1;
	v->a[65993] = anon_sym_esac;
	v->a[65994] = state(1490);
	v->a[65995] = 1;
	v->a[65996] = aux_sym_case_statement_repeat1;
	v->a[65997] = state(2080);
	v->a[65998] = 1;
	v->a[65999] = sym_case_item;
	small_parse_table_3300(v);
}

/* EOF small_parse_table_659.c */
