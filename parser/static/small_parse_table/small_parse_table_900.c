/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_900.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4500(t_small_parse_table_array *v)
{
	v->a[90000] = sym__arithmetic_unary_expression;
	v->a[90001] = state(1490);
	v->a[90002] = 1;
	v->a[90003] = sym__arithmetic_ternary_expression;
	v->a[90004] = state(1511);
	v->a[90005] = 1;
	v->a[90006] = sym__arithmetic_binary_expression;
	v->a[90007] = actions(4588);
	v->a[90008] = 2;
	v->a[90009] = anon_sym_PLUS_PLUS;
	v->a[90010] = anon_sym_DASH_DASH;
	v->a[90011] = actions(4590);
	v->a[90012] = 2;
	v->a[90013] = anon_sym_DASH2;
	v->a[90014] = anon_sym_PLUS2;
	v->a[90015] = state(1672);
	v->a[90016] = 8;
	v->a[90017] = sym__arithmetic_expression;
	v->a[90018] = sym__arithmetic_literal;
	v->a[90019] = sym__arithmetic_parenthesized_expression;
	small_parse_table_4501(v);
}

void	small_parse_table_4501(t_small_parse_table_array *v)
{
	v->a[90020] = sym_string;
	v->a[90021] = sym_number;
	v->a[90022] = sym_simple_expansion;
	v->a[90023] = sym_expansion;
	v->a[90024] = sym_command_substitution;
	v->a[90025] = 21;
	v->a[90026] = actions(57);
	v->a[90027] = 1;
	v->a[90028] = sym_comment;
	v->a[90029] = actions(4584);
	v->a[90030] = 1;
	v->a[90031] = anon_sym_LPAREN;
	v->a[90032] = actions(4586);
	v->a[90033] = 1;
	v->a[90034] = anon_sym_BANG;
	v->a[90035] = actions(4592);
	v->a[90036] = 1;
	v->a[90037] = anon_sym_TILDE;
	v->a[90038] = actions(4594);
	v->a[90039] = 1;
	small_parse_table_4502(v);
}

void	small_parse_table_4502(t_small_parse_table_array *v)
{
	v->a[90040] = anon_sym_DOLLAR;
	v->a[90041] = actions(4596);
	v->a[90042] = 1;
	v->a[90043] = anon_sym_DQUOTE;
	v->a[90044] = actions(4598);
	v->a[90045] = 1;
	v->a[90046] = aux_sym_number_token1;
	v->a[90047] = actions(4600);
	v->a[90048] = 1;
	v->a[90049] = aux_sym_number_token2;
	v->a[90050] = actions(4602);
	v->a[90051] = 1;
	v->a[90052] = anon_sym_DOLLAR_LBRACE;
	v->a[90053] = actions(4604);
	v->a[90054] = 1;
	v->a[90055] = anon_sym_DOLLAR_LPAREN;
	v->a[90056] = actions(4606);
	v->a[90057] = 1;
	v->a[90058] = anon_sym_BQUOTE;
	v->a[90059] = actions(4608);
	small_parse_table_4503(v);
}

void	small_parse_table_4503(t_small_parse_table_array *v)
{
	v->a[90060] = 1;
	v->a[90061] = anon_sym_DOLLAR_BQUOTE;
	v->a[90062] = actions(4969);
	v->a[90063] = 1;
	v->a[90064] = aux_sym__simple_variable_name_token1;
	v->a[90065] = actions(4971);
	v->a[90066] = 1;
	v->a[90067] = sym_variable_name;
	v->a[90068] = state(1476);
	v->a[90069] = 1;
	v->a[90070] = sym__arithmetic_postfix_expression;
	v->a[90071] = state(1478);
	v->a[90072] = 1;
	v->a[90073] = sym__arithmetic_unary_expression;
	v->a[90074] = state(1490);
	v->a[90075] = 1;
	v->a[90076] = sym__arithmetic_ternary_expression;
	v->a[90077] = state(1511);
	v->a[90078] = 1;
	v->a[90079] = sym__arithmetic_binary_expression;
	small_parse_table_4504(v);
}

void	small_parse_table_4504(t_small_parse_table_array *v)
{
	v->a[90080] = actions(4588);
	v->a[90081] = 2;
	v->a[90082] = anon_sym_PLUS_PLUS;
	v->a[90083] = anon_sym_DASH_DASH;
	v->a[90084] = actions(4590);
	v->a[90085] = 2;
	v->a[90086] = anon_sym_DASH2;
	v->a[90087] = anon_sym_PLUS2;
	v->a[90088] = state(1464);
	v->a[90089] = 8;
	v->a[90090] = sym__arithmetic_expression;
	v->a[90091] = sym__arithmetic_literal;
	v->a[90092] = sym__arithmetic_parenthesized_expression;
	v->a[90093] = sym_string;
	v->a[90094] = sym_number;
	v->a[90095] = sym_simple_expansion;
	v->a[90096] = sym_expansion;
	v->a[90097] = sym_command_substitution;
	v->a[90098] = 21;
	v->a[90099] = actions(57);
	small_parse_table_4505(v);
}

/* EOF small_parse_table_900.c */
