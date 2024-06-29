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
	v->a[57900] = sym_arithmetic_literal;
	v->a[57901] = sym_arithmetic_binary_expression;
	v->a[57902] = sym_arithmetic_ternary_expression;
	v->a[57903] = sym_arithmetic_unary_expression;
	v->a[57904] = sym_arithmetic_postfix_expression;
	v->a[57905] = sym_arithmetic_parenthesized_expression;
	v->a[57906] = sym_command_substitution;
	v->a[57907] = 15;
	v->a[57908] = actions(1074);
	v->a[57909] = 1;
	v->a[57910] = sym_comment;
	v->a[57911] = actions(1951);
	v->a[57912] = 1;
	v->a[57913] = anon_sym_LPAREN;
	v->a[57914] = actions(1953);
	v->a[57915] = 1;
	v->a[57916] = anon_sym_BANG;
	v->a[57917] = actions(1959);
	v->a[57918] = 1;
	v->a[57919] = anon_sym_TILDE;
	small_parse_table_2896(v);
}

void	small_parse_table_2896(t_small_parse_table_array *v)
{
	v->a[57920] = actions(1961);
	v->a[57921] = 1;
	v->a[57922] = anon_sym_DOLLAR;
	v->a[57923] = actions(1963);
	v->a[57924] = 1;
	v->a[57925] = anon_sym_DQUOTE;
	v->a[57926] = actions(1967);
	v->a[57927] = 1;
	v->a[57928] = anon_sym_DOLLAR_LBRACE;
	v->a[57929] = actions(1969);
	v->a[57930] = 1;
	v->a[57931] = anon_sym_DOLLAR_LPAREN;
	v->a[57932] = actions(1971);
	v->a[57933] = 1;
	v->a[57934] = anon_sym_BQUOTE;
	v->a[57935] = actions(1973);
	v->a[57936] = 1;
	v->a[57937] = sym_variable_name;
	v->a[57938] = actions(1955);
	v->a[57939] = 2;
	small_parse_table_2897(v);
}

void	small_parse_table_2897(t_small_parse_table_array *v)
{
	v->a[57940] = anon_sym_PLUS_PLUS;
	v->a[57941] = anon_sym_DASH_DASH;
	v->a[57942] = actions(1957);
	v->a[57943] = 2;
	v->a[57944] = anon_sym_DASH2;
	v->a[57945] = anon_sym_PLUS2;
	v->a[57946] = actions(1965);
	v->a[57947] = 2;
	v->a[57948] = sym_number;
	v->a[57949] = aux_sym__simple_variable_name_token1;
	v->a[57950] = state(462);
	v->a[57951] = 3;
	v->a[57952] = sym_string;
	v->a[57953] = sym_simple_expansion;
	v->a[57954] = sym_expansion;
	v->a[57955] = state(572);
	v->a[57956] = 8;
	v->a[57957] = sym__arithmetic_expression;
	v->a[57958] = sym_arithmetic_literal;
	v->a[57959] = sym_arithmetic_binary_expression;
	small_parse_table_2898(v);
}

void	small_parse_table_2898(t_small_parse_table_array *v)
{
	v->a[57960] = sym_arithmetic_ternary_expression;
	v->a[57961] = sym_arithmetic_unary_expression;
	v->a[57962] = sym_arithmetic_postfix_expression;
	v->a[57963] = sym_arithmetic_parenthesized_expression;
	v->a[57964] = sym_command_substitution;
	v->a[57965] = 3;
	v->a[57966] = actions(3);
	v->a[57967] = 1;
	v->a[57968] = sym_comment;
	v->a[57969] = actions(1104);
	v->a[57970] = 5;
	v->a[57971] = sym_file_descriptor;
	v->a[57972] = sym__concat;
	v->a[57973] = sym_variable_name;
	v->a[57974] = ts_builtin_sym_end;
	v->a[57975] = aux_sym_heredoc_redirect_token1;
	v->a[57976] = actions(1102);
	v->a[57977] = 21;
	v->a[57978] = anon_sym_PIPE;
	v->a[57979] = anon_sym_RPAREN;
	small_parse_table_2899(v);
}

void	small_parse_table_2899(t_small_parse_table_array *v)
{
	v->a[57980] = anon_sym_SEMI_SEMI;
	v->a[57981] = anon_sym_AMP_AMP;
	v->a[57982] = anon_sym_PIPE_PIPE;
	v->a[57983] = anon_sym_LT;
	v->a[57984] = anon_sym_GT;
	v->a[57985] = anon_sym_GT_GT;
	v->a[57986] = anon_sym_AMP_GT;
	v->a[57987] = anon_sym_AMP_GT_GT;
	v->a[57988] = anon_sym_LT_AMP;
	v->a[57989] = anon_sym_GT_AMP;
	v->a[57990] = anon_sym_GT_PIPE;
	v->a[57991] = anon_sym_LT_AMP_DASH;
	v->a[57992] = anon_sym_GT_AMP_DASH;
	v->a[57993] = anon_sym_LT_LT;
	v->a[57994] = anon_sym_LT_LT_DASH;
	v->a[57995] = anon_sym_AMP;
	v->a[57996] = aux_sym_concatenation_token1;
	v->a[57997] = anon_sym_BQUOTE;
	v->a[57998] = anon_sym_SEMI;
	v->a[57999] = 6;
	small_parse_table_2900(v);
}

/* EOF small_parse_table_579.c */
