/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_580.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2900(t_small_parse_table_array *v)
{
	v->a[58000] = anon_sym_PIPE;
	v->a[58001] = anon_sym_AMP_AMP;
	v->a[58002] = anon_sym_PIPE_PIPE;
	v->a[58003] = anon_sym_LT;
	v->a[58004] = anon_sym_GT;
	v->a[58005] = anon_sym_GT_GT;
	v->a[58006] = anon_sym_AMP_GT;
	v->a[58007] = anon_sym_AMP_GT_GT;
	v->a[58008] = anon_sym_LT_AMP;
	v->a[58009] = anon_sym_GT_AMP;
	v->a[58010] = anon_sym_GT_PIPE;
	v->a[58011] = anon_sym_LT_AMP_DASH;
	v->a[58012] = anon_sym_GT_AMP_DASH;
	v->a[58013] = anon_sym_LT_LT;
	v->a[58014] = anon_sym_LT_LT_DASH;
	v->a[58015] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[58016] = aux_sym_concatenation_token1;
	v->a[58017] = anon_sym_DOLLAR;
	v->a[58018] = anon_sym_DQUOTE;
	v->a[58019] = sym_raw_string;
	small_parse_table_2901(v);
}

void	small_parse_table_2901(t_small_parse_table_array *v)
{
	v->a[58020] = aux_sym_number_token1;
	v->a[58021] = aux_sym_number_token2;
	v->a[58022] = anon_sym_DOLLAR_LBRACE;
	v->a[58023] = anon_sym_DOLLAR_LPAREN;
	v->a[58024] = anon_sym_BQUOTE;
	v->a[58025] = sym_word;
	v->a[58026] = 17;
	v->a[58027] = actions(1404);
	v->a[58028] = 1;
	v->a[58029] = sym_comment;
	v->a[58030] = actions(2077);
	v->a[58031] = 1;
	v->a[58032] = anon_sym_LPAREN;
	v->a[58033] = actions(2079);
	v->a[58034] = 1;
	v->a[58035] = anon_sym_BANG;
	v->a[58036] = actions(2085);
	v->a[58037] = 1;
	v->a[58038] = anon_sym_TILDE;
	v->a[58039] = actions(2087);
	small_parse_table_2902(v);
}

void	small_parse_table_2902(t_small_parse_table_array *v)
{
	v->a[58040] = 1;
	v->a[58041] = anon_sym_DOLLAR;
	v->a[58042] = actions(2089);
	v->a[58043] = 1;
	v->a[58044] = anon_sym_DQUOTE;
	v->a[58045] = actions(2091);
	v->a[58046] = 1;
	v->a[58047] = aux_sym_number_token1;
	v->a[58048] = actions(2093);
	v->a[58049] = 1;
	v->a[58050] = aux_sym_number_token2;
	v->a[58051] = actions(2095);
	v->a[58052] = 1;
	v->a[58053] = anon_sym_DOLLAR_LBRACE;
	v->a[58054] = actions(2097);
	v->a[58055] = 1;
	v->a[58056] = anon_sym_DOLLAR_LPAREN;
	v->a[58057] = actions(2099);
	v->a[58058] = 1;
	v->a[58059] = anon_sym_BQUOTE;
	small_parse_table_2903(v);
}

void	small_parse_table_2903(t_small_parse_table_array *v)
{
	v->a[58060] = actions(2101);
	v->a[58061] = 1;
	v->a[58062] = aux_sym__simple_variable_name_token1;
	v->a[58063] = actions(2103);
	v->a[58064] = 1;
	v->a[58065] = sym_variable_name;
	v->a[58066] = actions(2081);
	v->a[58067] = 2;
	v->a[58068] = anon_sym_PLUS_PLUS;
	v->a[58069] = anon_sym_DASH_DASH;
	v->a[58070] = actions(2083);
	v->a[58071] = 2;
	v->a[58072] = anon_sym_DASH2;
	v->a[58073] = anon_sym_PLUS2;
	v->a[58074] = state(588);
	v->a[58075] = 4;
	v->a[58076] = sym_string;
	v->a[58077] = sym_number;
	v->a[58078] = sym_simple_expansion;
	v->a[58079] = sym_expansion;
	small_parse_table_2904(v);
}

void	small_parse_table_2904(t_small_parse_table_array *v)
{
	v->a[58080] = state(625);
	v->a[58081] = 8;
	v->a[58082] = sym__arithmetic_expression;
	v->a[58083] = sym_arithmetic_literal;
	v->a[58084] = sym_arithmetic_binary_expression;
	v->a[58085] = sym_arithmetic_ternary_expression;
	v->a[58086] = sym_arithmetic_unary_expression;
	v->a[58087] = sym_arithmetic_postfix_expression;
	v->a[58088] = sym_arithmetic_parenthesized_expression;
	v->a[58089] = sym_command_substitution;
	v->a[58090] = 19;
	v->a[58091] = actions(3);
	v->a[58092] = 1;
	v->a[58093] = sym_comment;
	v->a[58094] = actions(2115);
	v->a[58095] = 1;
	v->a[58096] = anon_sym_LPAREN;
	v->a[58097] = actions(2119);
	v->a[58098] = 1;
	v->a[58099] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2905(v);
}

/* EOF small_parse_table_580.c */
