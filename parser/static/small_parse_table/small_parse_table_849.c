/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_849.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4245(t_small_parse_table_array *v)
{
	v->a[84900] = actions(4590);
	v->a[84901] = 2;
	v->a[84902] = anon_sym_DASH2;
	v->a[84903] = anon_sym_PLUS2;
	v->a[84904] = state(1387);
	v->a[84905] = 8;
	v->a[84906] = sym__arithmetic_expression;
	v->a[84907] = sym__arithmetic_literal;
	v->a[84908] = sym__arithmetic_parenthesized_expression;
	v->a[84909] = sym_string;
	v->a[84910] = sym_number;
	v->a[84911] = sym_simple_expansion;
	v->a[84912] = sym_expansion;
	v->a[84913] = sym_command_substitution;
	v->a[84914] = 21;
	v->a[84915] = actions(57);
	v->a[84916] = 1;
	v->a[84917] = sym_comment;
	v->a[84918] = actions(4614);
	v->a[84919] = 1;
	small_parse_table_4246(v);
}

void	small_parse_table_4246(t_small_parse_table_array *v)
{
	v->a[84920] = anon_sym_LPAREN;
	v->a[84921] = actions(4616);
	v->a[84922] = 1;
	v->a[84923] = anon_sym_BANG;
	v->a[84924] = actions(4622);
	v->a[84925] = 1;
	v->a[84926] = anon_sym_TILDE;
	v->a[84927] = actions(4624);
	v->a[84928] = 1;
	v->a[84929] = anon_sym_DOLLAR;
	v->a[84930] = actions(4626);
	v->a[84931] = 1;
	v->a[84932] = anon_sym_DQUOTE;
	v->a[84933] = actions(4628);
	v->a[84934] = 1;
	v->a[84935] = aux_sym_number_token1;
	v->a[84936] = actions(4630);
	v->a[84937] = 1;
	v->a[84938] = aux_sym_number_token2;
	v->a[84939] = actions(4632);
	small_parse_table_4247(v);
}

void	small_parse_table_4247(t_small_parse_table_array *v)
{
	v->a[84940] = 1;
	v->a[84941] = anon_sym_DOLLAR_LBRACE;
	v->a[84942] = actions(4634);
	v->a[84943] = 1;
	v->a[84944] = anon_sym_DOLLAR_LPAREN;
	v->a[84945] = actions(4636);
	v->a[84946] = 1;
	v->a[84947] = anon_sym_BQUOTE;
	v->a[84948] = actions(4638);
	v->a[84949] = 1;
	v->a[84950] = anon_sym_DOLLAR_BQUOTE;
	v->a[84951] = actions(4725);
	v->a[84952] = 1;
	v->a[84953] = aux_sym__simple_variable_name_token1;
	v->a[84954] = actions(4727);
	v->a[84955] = 1;
	v->a[84956] = sym_variable_name;
	v->a[84957] = state(1637);
	v->a[84958] = 1;
	v->a[84959] = sym__arithmetic_postfix_expression;
	small_parse_table_4248(v);
}

void	small_parse_table_4248(t_small_parse_table_array *v)
{
	v->a[84960] = state(1638);
	v->a[84961] = 1;
	v->a[84962] = sym__arithmetic_unary_expression;
	v->a[84963] = state(1640);
	v->a[84964] = 1;
	v->a[84965] = sym__arithmetic_ternary_expression;
	v->a[84966] = state(1642);
	v->a[84967] = 1;
	v->a[84968] = sym__arithmetic_binary_expression;
	v->a[84969] = actions(4618);
	v->a[84970] = 2;
	v->a[84971] = anon_sym_PLUS_PLUS;
	v->a[84972] = anon_sym_DASH_DASH;
	v->a[84973] = actions(4620);
	v->a[84974] = 2;
	v->a[84975] = anon_sym_DASH2;
	v->a[84976] = anon_sym_PLUS2;
	v->a[84977] = state(1622);
	v->a[84978] = 8;
	v->a[84979] = sym__arithmetic_expression;
	small_parse_table_4249(v);
}

void	small_parse_table_4249(t_small_parse_table_array *v)
{
	v->a[84980] = sym__arithmetic_literal;
	v->a[84981] = sym__arithmetic_parenthesized_expression;
	v->a[84982] = sym_string;
	v->a[84983] = sym_number;
	v->a[84984] = sym_simple_expansion;
	v->a[84985] = sym_expansion;
	v->a[84986] = sym_command_substitution;
	v->a[84987] = 5;
	v->a[84988] = actions(57);
	v->a[84989] = 1;
	v->a[84990] = sym_comment;
	v->a[84991] = state(1766);
	v->a[84992] = 1;
	v->a[84993] = aux_sym_concatenation_repeat1;
	v->a[84994] = actions(4729);
	v->a[84995] = 2;
	v->a[84996] = sym__concat;
	v->a[84997] = aux_sym_concatenation_token1;
	v->a[84998] = actions(2652);
	v->a[84999] = 11;
	small_parse_table_4250(v);
}

/* EOF small_parse_table_849.c */
