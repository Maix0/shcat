/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_579.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2895(t_small_parse_table_array *v)
{
	v->a[57900] = anon_sym_LPAREN;
	v->a[57901] = anon_sym_PIPE;
	v->a[57902] = anon_sym_AMP_AMP;
	v->a[57903] = anon_sym_PIPE_PIPE;
	v->a[57904] = anon_sym_LT;
	v->a[57905] = anon_sym_GT;
	v->a[57906] = anon_sym_GT_GT;
	v->a[57907] = anon_sym_AMP_GT;
	v->a[57908] = anon_sym_AMP_GT_GT;
	v->a[57909] = anon_sym_LT_AMP;
	v->a[57910] = anon_sym_GT_AMP;
	v->a[57911] = anon_sym_GT_PIPE;
	v->a[57912] = anon_sym_LT_AMP_DASH;
	v->a[57913] = anon_sym_GT_AMP_DASH;
	v->a[57914] = anon_sym_LT_LT;
	v->a[57915] = anon_sym_LT_LT_DASH;
	v->a[57916] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[57917] = anon_sym_DOLLAR;
	v->a[57918] = anon_sym_DQUOTE;
	v->a[57919] = sym_raw_string;
	small_parse_table_2896(v);
}

void	small_parse_table_2896(t_small_parse_table_array *v)
{
	v->a[57920] = aux_sym_number_token1;
	v->a[57921] = aux_sym_number_token2;
	v->a[57922] = anon_sym_DOLLAR_LBRACE;
	v->a[57923] = anon_sym_DOLLAR_LPAREN;
	v->a[57924] = anon_sym_BQUOTE;
	v->a[57925] = sym_word;
	v->a[57926] = 17;
	v->a[57927] = actions(1404);
	v->a[57928] = 1;
	v->a[57929] = sym_comment;
	v->a[57930] = actions(2077);
	v->a[57931] = 1;
	v->a[57932] = anon_sym_LPAREN;
	v->a[57933] = actions(2079);
	v->a[57934] = 1;
	v->a[57935] = anon_sym_BANG;
	v->a[57936] = actions(2085);
	v->a[57937] = 1;
	v->a[57938] = anon_sym_TILDE;
	v->a[57939] = actions(2087);
	small_parse_table_2897(v);
}

void	small_parse_table_2897(t_small_parse_table_array *v)
{
	v->a[57940] = 1;
	v->a[57941] = anon_sym_DOLLAR;
	v->a[57942] = actions(2089);
	v->a[57943] = 1;
	v->a[57944] = anon_sym_DQUOTE;
	v->a[57945] = actions(2091);
	v->a[57946] = 1;
	v->a[57947] = aux_sym_number_token1;
	v->a[57948] = actions(2093);
	v->a[57949] = 1;
	v->a[57950] = aux_sym_number_token2;
	v->a[57951] = actions(2095);
	v->a[57952] = 1;
	v->a[57953] = anon_sym_DOLLAR_LBRACE;
	v->a[57954] = actions(2097);
	v->a[57955] = 1;
	v->a[57956] = anon_sym_DOLLAR_LPAREN;
	v->a[57957] = actions(2099);
	v->a[57958] = 1;
	v->a[57959] = anon_sym_BQUOTE;
	small_parse_table_2898(v);
}

void	small_parse_table_2898(t_small_parse_table_array *v)
{
	v->a[57960] = actions(2101);
	v->a[57961] = 1;
	v->a[57962] = aux_sym__simple_variable_name_token1;
	v->a[57963] = actions(2103);
	v->a[57964] = 1;
	v->a[57965] = sym_variable_name;
	v->a[57966] = actions(2081);
	v->a[57967] = 2;
	v->a[57968] = anon_sym_PLUS_PLUS;
	v->a[57969] = anon_sym_DASH_DASH;
	v->a[57970] = actions(2083);
	v->a[57971] = 2;
	v->a[57972] = anon_sym_DASH2;
	v->a[57973] = anon_sym_PLUS2;
	v->a[57974] = state(588);
	v->a[57975] = 4;
	v->a[57976] = sym_string;
	v->a[57977] = sym_number;
	v->a[57978] = sym_simple_expansion;
	v->a[57979] = sym_expansion;
	small_parse_table_2899(v);
}

void	small_parse_table_2899(t_small_parse_table_array *v)
{
	v->a[57980] = state(552);
	v->a[57981] = 8;
	v->a[57982] = sym__arithmetic_expression;
	v->a[57983] = sym_arithmetic_literal;
	v->a[57984] = sym_arithmetic_binary_expression;
	v->a[57985] = sym_arithmetic_ternary_expression;
	v->a[57986] = sym_arithmetic_unary_expression;
	v->a[57987] = sym_arithmetic_postfix_expression;
	v->a[57988] = sym_arithmetic_parenthesized_expression;
	v->a[57989] = sym_command_substitution;
	v->a[57990] = 3;
	v->a[57991] = actions(3);
	v->a[57992] = 1;
	v->a[57993] = sym_comment;
	v->a[57994] = actions(1112);
	v->a[57995] = 2;
	v->a[57996] = sym_file_descriptor;
	v->a[57997] = sym__concat;
	v->a[57998] = actions(1114);
	v->a[57999] = 26;
	small_parse_table_2900(v);
}

/* EOF small_parse_table_579.c */
