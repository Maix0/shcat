/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2100.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10500(t_small_parse_table_array *v)
{
	v->a[210000] = actions(9910);
	v->a[210001] = 1;
	v->a[210002] = anon_sym_DQUOTE;
	v->a[210003] = actions(9912);
	v->a[210004] = 1;
	v->a[210005] = aux_sym_number_token1;
	v->a[210006] = actions(9914);
	v->a[210007] = 1;
	v->a[210008] = aux_sym_number_token2;
	v->a[210009] = actions(9916);
	v->a[210010] = 1;
	v->a[210011] = anon_sym_DOLLAR_LBRACE;
	v->a[210012] = actions(9918);
	v->a[210013] = 1;
	v->a[210014] = anon_sym_DOLLAR_LPAREN;
	v->a[210015] = actions(9920);
	v->a[210016] = 1;
	v->a[210017] = anon_sym_BQUOTE;
	v->a[210018] = actions(9922);
	v->a[210019] = 1;
	small_parse_table_10501(v);
}

void	small_parse_table_10501(t_small_parse_table_array *v)
{
	v->a[210020] = anon_sym_DOLLAR_BQUOTE;
	v->a[210021] = actions(9924);
	v->a[210022] = 1;
	v->a[210023] = aux_sym__simple_variable_name_token1;
	v->a[210024] = state(3359);
	v->a[210025] = 1;
	v->a[210026] = sym__arithmetic_postfix_expression;
	v->a[210027] = state(3361);
	v->a[210028] = 1;
	v->a[210029] = sym__arithmetic_unary_expression;
	v->a[210030] = state(3367);
	v->a[210031] = 1;
	v->a[210032] = sym__arithmetic_ternary_expression;
	v->a[210033] = state(3375);
	v->a[210034] = 1;
	v->a[210035] = sym__arithmetic_binary_expression;
	v->a[210036] = actions(9902);
	v->a[210037] = 2;
	v->a[210038] = anon_sym_PLUS_PLUS2;
	v->a[210039] = anon_sym_DASH_DASH2;
	small_parse_table_10502(v);
}

void	small_parse_table_10502(t_small_parse_table_array *v)
{
	v->a[210040] = actions(9904);
	v->a[210041] = 2;
	v->a[210042] = anon_sym_DASH2;
	v->a[210043] = anon_sym_PLUS2;
	v->a[210044] = state(3188);
	v->a[210045] = 9;
	v->a[210046] = sym_subscript;
	v->a[210047] = sym__arithmetic_expression;
	v->a[210048] = sym__arithmetic_literal;
	v->a[210049] = sym__arithmetic_parenthesized_expression;
	v->a[210050] = sym_string;
	v->a[210051] = sym_number;
	v->a[210052] = sym_simple_expansion;
	v->a[210053] = sym_expansion;
	v->a[210054] = sym_command_substitution;
	v->a[210055] = 20;
	v->a[210056] = actions(71);
	v->a[210057] = 1;
	v->a[210058] = sym_comment;
	v->a[210059] = actions(1414);
	small_parse_table_10503(v);
}

void	small_parse_table_10503(t_small_parse_table_array *v)
{
	v->a[210060] = 1;
	v->a[210061] = anon_sym_DOLLAR;
	v->a[210062] = actions(1420);
	v->a[210063] = 1;
	v->a[210064] = aux_sym_number_token1;
	v->a[210065] = actions(1422);
	v->a[210066] = 1;
	v->a[210067] = aux_sym_number_token2;
	v->a[210068] = actions(1426);
	v->a[210069] = 1;
	v->a[210070] = anon_sym_DOLLAR_LPAREN;
	v->a[210071] = actions(1438);
	v->a[210072] = 1;
	v->a[210073] = sym__brace_start;
	v->a[210074] = actions(9094);
	v->a[210075] = 1;
	v->a[210076] = anon_sym_DOLLAR_LBRACK;
	v->a[210077] = actions(9096);
	v->a[210078] = 1;
	v->a[210079] = sym__special_character;
	small_parse_table_10504(v);
}

void	small_parse_table_10504(t_small_parse_table_array *v)
{
	v->a[210080] = actions(9098);
	v->a[210081] = 1;
	v->a[210082] = anon_sym_DQUOTE;
	v->a[210083] = actions(9102);
	v->a[210084] = 1;
	v->a[210085] = anon_sym_DOLLAR_LBRACE;
	v->a[210086] = actions(9104);
	v->a[210087] = 1;
	v->a[210088] = anon_sym_BQUOTE;
	v->a[210089] = actions(9106);
	v->a[210090] = 1;
	v->a[210091] = anon_sym_DOLLAR_BQUOTE;
	v->a[210092] = actions(9926);
	v->a[210093] = 1;
	v->a[210094] = sym_word;
	v->a[210095] = actions(9930);
	v->a[210096] = 1;
	v->a[210097] = sym_test_operator;
	v->a[210098] = state(1146);
	v->a[210099] = 1;
	small_parse_table_10505(v);
}

/* EOF small_parse_table_2100.c */
