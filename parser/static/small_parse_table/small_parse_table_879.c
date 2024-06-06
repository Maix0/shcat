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
	v->a[87900] = anon_sym_PLUS_PLUS;
	v->a[87901] = anon_sym_DASH_DASH;
	v->a[87902] = actions(4590);
	v->a[87903] = 2;
	v->a[87904] = anon_sym_DASH2;
	v->a[87905] = anon_sym_PLUS2;
	v->a[87906] = state(1428);
	v->a[87907] = 8;
	v->a[87908] = sym__arithmetic_expression;
	v->a[87909] = sym__arithmetic_literal;
	v->a[87910] = sym__arithmetic_parenthesized_expression;
	v->a[87911] = sym_string;
	v->a[87912] = sym_number;
	v->a[87913] = sym_simple_expansion;
	v->a[87914] = sym_expansion;
	v->a[87915] = sym_command_substitution;
	v->a[87916] = 21;
	v->a[87917] = actions(57);
	v->a[87918] = 1;
	v->a[87919] = sym_comment;
	small_parse_table_4396(v);
}

void	small_parse_table_4396(t_small_parse_table_array *v)
{
	v->a[87920] = actions(4584);
	v->a[87921] = 1;
	v->a[87922] = anon_sym_LPAREN;
	v->a[87923] = actions(4586);
	v->a[87924] = 1;
	v->a[87925] = anon_sym_BANG;
	v->a[87926] = actions(4592);
	v->a[87927] = 1;
	v->a[87928] = anon_sym_TILDE;
	v->a[87929] = actions(4594);
	v->a[87930] = 1;
	v->a[87931] = anon_sym_DOLLAR;
	v->a[87932] = actions(4596);
	v->a[87933] = 1;
	v->a[87934] = anon_sym_DQUOTE;
	v->a[87935] = actions(4598);
	v->a[87936] = 1;
	v->a[87937] = aux_sym_number_token1;
	v->a[87938] = actions(4600);
	v->a[87939] = 1;
	small_parse_table_4397(v);
}

void	small_parse_table_4397(t_small_parse_table_array *v)
{
	v->a[87940] = aux_sym_number_token2;
	v->a[87941] = actions(4602);
	v->a[87942] = 1;
	v->a[87943] = anon_sym_DOLLAR_LBRACE;
	v->a[87944] = actions(4604);
	v->a[87945] = 1;
	v->a[87946] = anon_sym_DOLLAR_LPAREN;
	v->a[87947] = actions(4606);
	v->a[87948] = 1;
	v->a[87949] = anon_sym_BQUOTE;
	v->a[87950] = actions(4608);
	v->a[87951] = 1;
	v->a[87952] = anon_sym_DOLLAR_BQUOTE;
	v->a[87953] = actions(4873);
	v->a[87954] = 1;
	v->a[87955] = aux_sym__simple_variable_name_token1;
	v->a[87956] = actions(4875);
	v->a[87957] = 1;
	v->a[87958] = sym_variable_name;
	v->a[87959] = state(1476);
	small_parse_table_4398(v);
}

void	small_parse_table_4398(t_small_parse_table_array *v)
{
	v->a[87960] = 1;
	v->a[87961] = sym__arithmetic_postfix_expression;
	v->a[87962] = state(1478);
	v->a[87963] = 1;
	v->a[87964] = sym__arithmetic_unary_expression;
	v->a[87965] = state(1490);
	v->a[87966] = 1;
	v->a[87967] = sym__arithmetic_ternary_expression;
	v->a[87968] = state(1511);
	v->a[87969] = 1;
	v->a[87970] = sym__arithmetic_binary_expression;
	v->a[87971] = actions(4588);
	v->a[87972] = 2;
	v->a[87973] = anon_sym_PLUS_PLUS;
	v->a[87974] = anon_sym_DASH_DASH;
	v->a[87975] = actions(4590);
	v->a[87976] = 2;
	v->a[87977] = anon_sym_DASH2;
	v->a[87978] = anon_sym_PLUS2;
	v->a[87979] = state(1474);
	small_parse_table_4399(v);
}

void	small_parse_table_4399(t_small_parse_table_array *v)
{
	v->a[87980] = 8;
	v->a[87981] = sym__arithmetic_expression;
	v->a[87982] = sym__arithmetic_literal;
	v->a[87983] = sym__arithmetic_parenthesized_expression;
	v->a[87984] = sym_string;
	v->a[87985] = sym_number;
	v->a[87986] = sym_simple_expansion;
	v->a[87987] = sym_expansion;
	v->a[87988] = sym_command_substitution;
	v->a[87989] = 21;
	v->a[87990] = actions(57);
	v->a[87991] = 1;
	v->a[87992] = sym_comment;
	v->a[87993] = actions(4328);
	v->a[87994] = 1;
	v->a[87995] = sym_word;
	v->a[87996] = actions(4340);
	v->a[87997] = 1;
	v->a[87998] = anon_sym_DOLLAR;
	v->a[87999] = actions(4346);
	small_parse_table_4400(v);
}

/* EOF small_parse_table_879.c */
