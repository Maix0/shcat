/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_539.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2695(t_small_parse_table_array *v)
{
	v->a[53900] = 1;
	v->a[53901] = aux_sym_concatenation_repeat1;
	v->a[53902] = actions(1194);
	v->a[53903] = 2;
	v->a[53904] = sym_file_descriptor;
	v->a[53905] = sym__bare_dollar;
	v->a[53906] = actions(1189);
	v->a[53907] = 22;
	v->a[53908] = anon_sym_PIPE;
	v->a[53909] = anon_sym_AMP_AMP;
	v->a[53910] = anon_sym_PIPE_PIPE;
	v->a[53911] = anon_sym_LT;
	v->a[53912] = anon_sym_GT;
	v->a[53913] = anon_sym_GT_GT;
	v->a[53914] = anon_sym_LT_AMP;
	v->a[53915] = anon_sym_GT_AMP;
	v->a[53916] = anon_sym_GT_PIPE;
	v->a[53917] = anon_sym_LT_AMP_DASH;
	v->a[53918] = anon_sym_GT_AMP_DASH;
	v->a[53919] = anon_sym_LT_LT;
	small_parse_table_2696(v);
}

void	small_parse_table_2696(t_small_parse_table_array *v)
{
	v->a[53920] = anon_sym_LT_LT_DASH;
	v->a[53921] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[53922] = anon_sym_DOLLAR;
	v->a[53923] = anon_sym_DQUOTE;
	v->a[53924] = sym_raw_string;
	v->a[53925] = sym_number;
	v->a[53926] = anon_sym_DOLLAR_LBRACE;
	v->a[53927] = anon_sym_DOLLAR_LPAREN;
	v->a[53928] = anon_sym_BQUOTE;
	v->a[53929] = sym_word;
	v->a[53930] = 16;
	v->a[53931] = actions(870);
	v->a[53932] = 1;
	v->a[53933] = sym_comment;
	v->a[53934] = actions(1744);
	v->a[53935] = 1;
	v->a[53936] = anon_sym_LPAREN;
	v->a[53937] = actions(1746);
	v->a[53938] = 1;
	v->a[53939] = anon_sym_BANG;
	small_parse_table_2697(v);
}

void	small_parse_table_2697(t_small_parse_table_array *v)
{
	v->a[53940] = actions(1754);
	v->a[53941] = 1;
	v->a[53942] = anon_sym_TILDE;
	v->a[53943] = actions(1756);
	v->a[53944] = 1;
	v->a[53945] = anon_sym_DOLLAR;
	v->a[53946] = actions(1758);
	v->a[53947] = 1;
	v->a[53948] = anon_sym_DQUOTE;
	v->a[53949] = actions(1762);
	v->a[53950] = 1;
	v->a[53951] = anon_sym_DOLLAR_LBRACE;
	v->a[53952] = actions(1764);
	v->a[53953] = 1;
	v->a[53954] = anon_sym_DOLLAR_LPAREN;
	v->a[53955] = actions(1766);
	v->a[53956] = 1;
	v->a[53957] = anon_sym_BQUOTE;
	v->a[53958] = actions(1768);
	v->a[53959] = 1;
	small_parse_table_2698(v);
}

void	small_parse_table_2698(t_small_parse_table_array *v)
{
	v->a[53960] = sym_variable_name;
	v->a[53961] = actions(1894);
	v->a[53962] = 1;
	v->a[53963] = anon_sym_RPAREN_RPAREN;
	v->a[53964] = actions(1750);
	v->a[53965] = 2;
	v->a[53966] = anon_sym_PLUS_PLUS;
	v->a[53967] = anon_sym_DASH_DASH;
	v->a[53968] = actions(1752);
	v->a[53969] = 2;
	v->a[53970] = anon_sym_DASH2;
	v->a[53971] = anon_sym_PLUS2;
	v->a[53972] = actions(1760);
	v->a[53973] = 2;
	v->a[53974] = sym_number;
	v->a[53975] = aux_sym__simple_variable_name_token1;
	v->a[53976] = state(271);
	v->a[53977] = 3;
	v->a[53978] = sym_string;
	v->a[53979] = sym_simple_expansion;
	small_parse_table_2699(v);
}

void	small_parse_table_2699(t_small_parse_table_array *v)
{
	v->a[53980] = sym_expansion;
	v->a[53981] = state(373);
	v->a[53982] = 8;
	v->a[53983] = sym__arithmetic_expression;
	v->a[53984] = sym_arithmetic_literal;
	v->a[53985] = sym_arithmetic_binary_expression;
	v->a[53986] = sym_arithmetic_ternary_expression;
	v->a[53987] = sym_arithmetic_unary_expression;
	v->a[53988] = sym_arithmetic_postfix_expression;
	v->a[53989] = sym_arithmetic_parenthesized_expression;
	v->a[53990] = sym_command_substitution;
	v->a[53991] = 16;
	v->a[53992] = actions(870);
	v->a[53993] = 1;
	v->a[53994] = sym_comment;
	v->a[53995] = actions(1744);
	v->a[53996] = 1;
	v->a[53997] = anon_sym_LPAREN;
	v->a[53998] = actions(1746);
	v->a[53999] = 1;
	small_parse_table_2700(v);
}

/* EOF small_parse_table_539.c */
