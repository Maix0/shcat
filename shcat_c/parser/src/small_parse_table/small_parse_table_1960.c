/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1960.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9800(t_small_parse_table_array *v)
{
	v->a[196000] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[196001] = actions(3749);
	v->a[196002] = 2;
	v->a[196003] = anon_sym_LT_LPAREN;
	v->a[196004] = anon_sym_GT_LPAREN;
	v->a[196005] = actions(3713);
	v->a[196006] = 3;
	v->a[196007] = sym_raw_string;
	v->a[196008] = sym_ansi_c_string;
	v->a[196009] = sym_word;
	v->a[196010] = state(5062);
	v->a[196011] = 9;
	v->a[196012] = sym_arithmetic_expansion;
	v->a[196013] = sym_brace_expression;
	v->a[196014] = sym_string;
	v->a[196015] = sym_translated_string;
	v->a[196016] = sym_number;
	v->a[196017] = sym_simple_expansion;
	v->a[196018] = sym_expansion;
	v->a[196019] = sym_command_substitution;
	small_parse_table_9801(v);
}

void	small_parse_table_9801(t_small_parse_table_array *v)
{
	v->a[196020] = sym_process_substitution;
	v->a[196021] = 21;
	v->a[196022] = actions(71);
	v->a[196023] = 1;
	v->a[196024] = sym_comment;
	v->a[196025] = actions(2216);
	v->a[196026] = 1;
	v->a[196027] = anon_sym_RPAREN;
	v->a[196028] = actions(8752);
	v->a[196029] = 1;
	v->a[196030] = sym_word;
	v->a[196031] = actions(8758);
	v->a[196032] = 1;
	v->a[196033] = anon_sym_DOLLAR_LBRACK;
	v->a[196034] = actions(8761);
	v->a[196035] = 1;
	v->a[196036] = anon_sym_DOLLAR;
	v->a[196037] = actions(8764);
	v->a[196038] = 1;
	v->a[196039] = sym__special_character;
	small_parse_table_9802(v);
}

void	small_parse_table_9802(t_small_parse_table_array *v)
{
	v->a[196040] = actions(8767);
	v->a[196041] = 1;
	v->a[196042] = anon_sym_DQUOTE;
	v->a[196043] = actions(8773);
	v->a[196044] = 1;
	v->a[196045] = aux_sym_number_token1;
	v->a[196046] = actions(8776);
	v->a[196047] = 1;
	v->a[196048] = aux_sym_number_token2;
	v->a[196049] = actions(8779);
	v->a[196050] = 1;
	v->a[196051] = anon_sym_DOLLAR_LBRACE;
	v->a[196052] = actions(8782);
	v->a[196053] = 1;
	v->a[196054] = anon_sym_DOLLAR_LPAREN;
	v->a[196055] = actions(8785);
	v->a[196056] = 1;
	v->a[196057] = anon_sym_BQUOTE;
	v->a[196058] = actions(8788);
	v->a[196059] = 1;
	small_parse_table_9803(v);
}

void	small_parse_table_9803(t_small_parse_table_array *v)
{
	v->a[196060] = anon_sym_DOLLAR_BQUOTE;
	v->a[196061] = actions(8794);
	v->a[196062] = 1;
	v->a[196063] = sym_test_operator;
	v->a[196064] = actions(8797);
	v->a[196065] = 1;
	v->a[196066] = sym__brace_start;
	v->a[196067] = state(5365);
	v->a[196068] = 1;
	v->a[196069] = aux_sym__literal_repeat1;
	v->a[196070] = actions(8755);
	v->a[196071] = 2;
	v->a[196072] = anon_sym_LPAREN_LPAREN;
	v->a[196073] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[196074] = actions(8770);
	v->a[196075] = 2;
	v->a[196076] = sym_raw_string;
	v->a[196077] = sym_ansi_c_string;
	v->a[196078] = actions(8791);
	v->a[196079] = 2;
	small_parse_table_9804(v);
}

void	small_parse_table_9804(t_small_parse_table_array *v)
{
	v->a[196080] = anon_sym_LT_LPAREN;
	v->a[196081] = anon_sym_GT_LPAREN;
	v->a[196082] = state(3604);
	v->a[196083] = 2;
	v->a[196084] = sym_concatenation;
	v->a[196085] = aux_sym_for_statement_repeat1;
	v->a[196086] = state(5045);
	v->a[196087] = 9;
	v->a[196088] = sym_arithmetic_expansion;
	v->a[196089] = sym_brace_expression;
	v->a[196090] = sym_string;
	v->a[196091] = sym_translated_string;
	v->a[196092] = sym_number;
	v->a[196093] = sym_simple_expansion;
	v->a[196094] = sym_expansion;
	v->a[196095] = sym_command_substitution;
	v->a[196096] = sym_process_substitution;
	v->a[196097] = 21;
	v->a[196098] = actions(3);
	v->a[196099] = 1;
	small_parse_table_9805(v);
}

/* EOF small_parse_table_1960.c */
