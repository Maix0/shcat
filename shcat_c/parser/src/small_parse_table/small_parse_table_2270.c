/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2270.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11350(t_small_parse_table_array *v)
{
	v->a[227000] = sym_string;
	v->a[227001] = sym_translated_string;
	v->a[227002] = sym_number;
	v->a[227003] = sym_simple_expansion;
	v->a[227004] = sym_expansion;
	v->a[227005] = sym_command_substitution;
	v->a[227006] = sym_process_substitution;
	v->a[227007] = 21;
	v->a[227008] = actions(71);
	v->a[227009] = 1;
	v->a[227010] = sym_comment;
	v->a[227011] = actions(3602);
	v->a[227012] = 1;
	v->a[227013] = sym_variable_name;
	v->a[227014] = actions(9898);
	v->a[227015] = 1;
	v->a[227016] = anon_sym_LPAREN;
	v->a[227017] = actions(9900);
	v->a[227018] = 1;
	v->a[227019] = anon_sym_BANG;
	small_parse_table_11351(v);
}

void	small_parse_table_11351(t_small_parse_table_array *v)
{
	v->a[227020] = actions(9906);
	v->a[227021] = 1;
	v->a[227022] = anon_sym_TILDE;
	v->a[227023] = actions(9908);
	v->a[227024] = 1;
	v->a[227025] = anon_sym_DOLLAR;
	v->a[227026] = actions(9910);
	v->a[227027] = 1;
	v->a[227028] = anon_sym_DQUOTE;
	v->a[227029] = actions(9912);
	v->a[227030] = 1;
	v->a[227031] = aux_sym_number_token1;
	v->a[227032] = actions(9914);
	v->a[227033] = 1;
	v->a[227034] = aux_sym_number_token2;
	v->a[227035] = actions(9916);
	v->a[227036] = 1;
	v->a[227037] = anon_sym_DOLLAR_LBRACE;
	v->a[227038] = actions(9918);
	v->a[227039] = 1;
	small_parse_table_11352(v);
}

void	small_parse_table_11352(t_small_parse_table_array *v)
{
	v->a[227040] = anon_sym_DOLLAR_LPAREN;
	v->a[227041] = actions(9920);
	v->a[227042] = 1;
	v->a[227043] = anon_sym_BQUOTE;
	v->a[227044] = actions(9922);
	v->a[227045] = 1;
	v->a[227046] = anon_sym_DOLLAR_BQUOTE;
	v->a[227047] = actions(10784);
	v->a[227048] = 1;
	v->a[227049] = aux_sym__simple_variable_name_token1;
	v->a[227050] = state(3359);
	v->a[227051] = 1;
	v->a[227052] = sym__arithmetic_postfix_expression;
	v->a[227053] = state(3361);
	v->a[227054] = 1;
	v->a[227055] = sym__arithmetic_unary_expression;
	v->a[227056] = state(3367);
	v->a[227057] = 1;
	v->a[227058] = sym__arithmetic_ternary_expression;
	v->a[227059] = state(3375);
	small_parse_table_11353(v);
}

void	small_parse_table_11353(t_small_parse_table_array *v)
{
	v->a[227060] = 1;
	v->a[227061] = sym__arithmetic_binary_expression;
	v->a[227062] = actions(9902);
	v->a[227063] = 2;
	v->a[227064] = anon_sym_PLUS_PLUS2;
	v->a[227065] = anon_sym_DASH_DASH2;
	v->a[227066] = actions(9904);
	v->a[227067] = 2;
	v->a[227068] = anon_sym_DASH2;
	v->a[227069] = anon_sym_PLUS2;
	v->a[227070] = state(3258);
	v->a[227071] = 9;
	v->a[227072] = sym_subscript;
	v->a[227073] = sym__arithmetic_expression;
	v->a[227074] = sym__arithmetic_literal;
	v->a[227075] = sym__arithmetic_parenthesized_expression;
	v->a[227076] = sym_string;
	v->a[227077] = sym_number;
	v->a[227078] = sym_simple_expansion;
	v->a[227079] = sym_expansion;
	small_parse_table_11354(v);
}

void	small_parse_table_11354(t_small_parse_table_array *v)
{
	v->a[227080] = sym_command_substitution;
	v->a[227081] = 21;
	v->a[227082] = actions(71);
	v->a[227083] = 1;
	v->a[227084] = sym_comment;
	v->a[227085] = actions(3602);
	v->a[227086] = 1;
	v->a[227087] = sym_variable_name;
	v->a[227088] = actions(9898);
	v->a[227089] = 1;
	v->a[227090] = anon_sym_LPAREN;
	v->a[227091] = actions(9900);
	v->a[227092] = 1;
	v->a[227093] = anon_sym_BANG;
	v->a[227094] = actions(9906);
	v->a[227095] = 1;
	v->a[227096] = anon_sym_TILDE;
	v->a[227097] = actions(9908);
	v->a[227098] = 1;
	v->a[227099] = anon_sym_DOLLAR;
	small_parse_table_11355(v);
}

/* EOF small_parse_table_2270.c */
