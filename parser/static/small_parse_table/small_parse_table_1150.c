/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1150.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5750(t_small_parse_table_array *v)
{
	v->a[115000] = actions(6707);
	v->a[115001] = 1;
	v->a[115002] = sym_word;
	v->a[115003] = actions(6709);
	v->a[115004] = 1;
	v->a[115005] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[115006] = actions(6711);
	v->a[115007] = 1;
	v->a[115008] = sym__special_character;
	v->a[115009] = actions(6713);
	v->a[115010] = 1;
	v->a[115011] = anon_sym_DQUOTE;
	v->a[115012] = actions(6717);
	v->a[115013] = 1;
	v->a[115014] = anon_sym_DOLLAR_LBRACE;
	v->a[115015] = actions(6719);
	v->a[115016] = 1;
	v->a[115017] = anon_sym_BQUOTE;
	v->a[115018] = actions(6721);
	v->a[115019] = 1;
	small_parse_table_5751(v);
}

void	small_parse_table_5751(t_small_parse_table_array *v)
{
	v->a[115020] = anon_sym_DOLLAR_BQUOTE;
	v->a[115021] = actions(6723);
	v->a[115022] = 1;
	v->a[115023] = sym__comment_word;
	v->a[115024] = actions(6715);
	v->a[115025] = 3;
	v->a[115026] = sym_test_operator;
	v->a[115027] = sym__bare_dollar;
	v->a[115028] = sym_raw_string;
	v->a[115029] = state(1158);
	v->a[115030] = 7;
	v->a[115031] = sym_arithmetic_expansion;
	v->a[115032] = sym_brace_expression;
	v->a[115033] = sym_string;
	v->a[115034] = sym_number;
	v->a[115035] = sym_simple_expansion;
	v->a[115036] = sym_expansion;
	v->a[115037] = sym_command_substitution;
	v->a[115038] = 16;
	v->a[115039] = actions(3);
	small_parse_table_5752(v);
}

void	small_parse_table_5752(t_small_parse_table_array *v)
{
	v->a[115040] = 1;
	v->a[115041] = sym_comment;
	v->a[115042] = actions(1156);
	v->a[115043] = 1;
	v->a[115044] = aux_sym_number_token1;
	v->a[115045] = actions(1158);
	v->a[115046] = 1;
	v->a[115047] = aux_sym_number_token2;
	v->a[115048] = actions(1162);
	v->a[115049] = 1;
	v->a[115050] = anon_sym_DOLLAR_LPAREN;
	v->a[115051] = actions(1172);
	v->a[115052] = 1;
	v->a[115053] = sym__brace_start;
	v->a[115054] = actions(6707);
	v->a[115055] = 1;
	v->a[115056] = sym_word;
	v->a[115057] = actions(6709);
	v->a[115058] = 1;
	v->a[115059] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_5753(v);
}

void	small_parse_table_5753(t_small_parse_table_array *v)
{
	v->a[115060] = actions(6711);
	v->a[115061] = 1;
	v->a[115062] = sym__special_character;
	v->a[115063] = actions(6713);
	v->a[115064] = 1;
	v->a[115065] = anon_sym_DQUOTE;
	v->a[115066] = actions(6717);
	v->a[115067] = 1;
	v->a[115068] = anon_sym_DOLLAR_LBRACE;
	v->a[115069] = actions(6719);
	v->a[115070] = 1;
	v->a[115071] = anon_sym_BQUOTE;
	v->a[115072] = actions(6721);
	v->a[115073] = 1;
	v->a[115074] = anon_sym_DOLLAR_BQUOTE;
	v->a[115075] = actions(6723);
	v->a[115076] = 1;
	v->a[115077] = sym__comment_word;
	v->a[115078] = actions(6725);
	v->a[115079] = 1;
	small_parse_table_5754(v);
}

void	small_parse_table_5754(t_small_parse_table_array *v)
{
	v->a[115080] = anon_sym_DOLLAR;
	v->a[115081] = actions(6715);
	v->a[115082] = 3;
	v->a[115083] = sym_test_operator;
	v->a[115084] = sym__bare_dollar;
	v->a[115085] = sym_raw_string;
	v->a[115086] = state(1158);
	v->a[115087] = 7;
	v->a[115088] = sym_arithmetic_expansion;
	v->a[115089] = sym_brace_expression;
	v->a[115090] = sym_string;
	v->a[115091] = sym_number;
	v->a[115092] = sym_simple_expansion;
	v->a[115093] = sym_expansion;
	v->a[115094] = sym_command_substitution;
	v->a[115095] = 16;
	v->a[115096] = actions(3);
	v->a[115097] = 1;
	v->a[115098] = sym_comment;
	v->a[115099] = actions(1156);
	small_parse_table_5755(v);
}

/* EOF small_parse_table_1150.c */
