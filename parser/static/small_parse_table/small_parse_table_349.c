/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_349.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1745(t_small_parse_table_array *v)
{
	v->a[34900] = state(1341);
	v->a[34901] = 7;
	v->a[34902] = sym__arithmetic_expression;
	v->a[34903] = sym_arithmetic_literal;
	v->a[34904] = sym_arithmetic_binary_expression;
	v->a[34905] = sym_arithmetic_ternary_expression;
	v->a[34906] = sym_arithmetic_unary_expression;
	v->a[34907] = sym_arithmetic_postfix_expression;
	v->a[34908] = sym_arithmetic_parenthesized_expression;
	v->a[34909] = 3;
	v->a[34910] = actions(3);
	v->a[34911] = 1;
	v->a[34912] = sym_comment;
	v->a[34913] = actions(1108);
	v->a[34914] = 2;
	v->a[34915] = sym__concat;
	v->a[34916] = sym_variable_name;
	v->a[34917] = actions(1106);
	v->a[34918] = 17;
	v->a[34919] = anon_sym_PIPE;
	small_parse_table_1746(v);
}

void	small_parse_table_1746(t_small_parse_table_array *v)
{
	v->a[34920] = anon_sym_AMP_AMP;
	v->a[34921] = anon_sym_PIPE_PIPE;
	v->a[34922] = anon_sym_LT;
	v->a[34923] = anon_sym_GT;
	v->a[34924] = anon_sym_GT_GT;
	v->a[34925] = anon_sym_LT_LT;
	v->a[34926] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[34927] = aux_sym_concatenation_token1;
	v->a[34928] = anon_sym_DOLLAR;
	v->a[34929] = anon_sym_DQUOTE;
	v->a[34930] = sym_raw_string;
	v->a[34931] = sym_number;
	v->a[34932] = anon_sym_DOLLAR_LBRACE;
	v->a[34933] = anon_sym_DOLLAR_LPAREN;
	v->a[34934] = anon_sym_BQUOTE;
	v->a[34935] = sym_word;
	v->a[34936] = 3;
	v->a[34937] = actions(3);
	v->a[34938] = 1;
	v->a[34939] = sym_comment;
	small_parse_table_1747(v);
}

void	small_parse_table_1747(t_small_parse_table_array *v)
{
	v->a[34940] = actions(1046);
	v->a[34941] = 1;
	v->a[34942] = sym__concat;
	v->a[34943] = actions(1048);
	v->a[34944] = 18;
	v->a[34945] = anon_sym_SEMI_SEMI;
	v->a[34946] = anon_sym_AMP_AMP;
	v->a[34947] = anon_sym_PIPE_PIPE;
	v->a[34948] = anon_sym_LT;
	v->a[34949] = anon_sym_GT;
	v->a[34950] = anon_sym_GT_GT;
	v->a[34951] = aux_sym_heredoc_redirect_token1;
	v->a[34952] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[34953] = aux_sym_concatenation_token1;
	v->a[34954] = anon_sym_DOLLAR;
	v->a[34955] = anon_sym_DQUOTE;
	v->a[34956] = sym_raw_string;
	v->a[34957] = sym_number;
	v->a[34958] = anon_sym_DOLLAR_LBRACE;
	v->a[34959] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1748(v);
}

void	small_parse_table_1748(t_small_parse_table_array *v)
{
	v->a[34960] = anon_sym_BQUOTE;
	v->a[34961] = sym_word;
	v->a[34962] = anon_sym_SEMI;
	v->a[34963] = 10;
	v->a[34964] = actions(1424);
	v->a[34965] = 1;
	v->a[34966] = anon_sym_LPAREN;
	v->a[34967] = actions(1428);
	v->a[34968] = 1;
	v->a[34969] = anon_sym_DOLLAR;
	v->a[34970] = actions(1430);
	v->a[34971] = 1;
	v->a[34972] = anon_sym_DQUOTE;
	v->a[34973] = actions(1434);
	v->a[34974] = 1;
	v->a[34975] = anon_sym_DOLLAR_LBRACE;
	v->a[34976] = actions(1436);
	v->a[34977] = 1;
	v->a[34978] = sym_comment;
	v->a[34979] = actions(1438);
	small_parse_table_1749(v);
}

void	small_parse_table_1749(t_small_parse_table_array *v)
{
	v->a[34980] = 1;
	v->a[34981] = sym_variable_name;
	v->a[34982] = actions(1426);
	v->a[34983] = 2;
	v->a[34984] = anon_sym_DASH2;
	v->a[34985] = anon_sym_PLUS2;
	v->a[34986] = actions(1432);
	v->a[34987] = 2;
	v->a[34988] = sym_number;
	v->a[34989] = aux_sym__simple_variable_name_token1;
	v->a[34990] = state(1312);
	v->a[34991] = 3;
	v->a[34992] = sym_string;
	v->a[34993] = sym_simple_expansion;
	v->a[34994] = sym_expansion;
	v->a[34995] = state(1334);
	v->a[34996] = 7;
	v->a[34997] = sym__arithmetic_expression;
	v->a[34998] = sym_arithmetic_literal;
	v->a[34999] = sym_arithmetic_binary_expression;
	small_parse_table_1750(v);
}

/* EOF small_parse_table_349.c */
