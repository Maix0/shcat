/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2802.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14010(t_small_parse_table_array *v)
{
	v->a[280200] = 1;
	v->a[280201] = sym__c_binary_expression;
	v->a[280202] = state(3118);
	v->a[280203] = 1;
	v->a[280204] = sym__c_unary_expression;
	v->a[280205] = actions(12231);
	v->a[280206] = 2;
	v->a[280207] = anon_sym_PLUS_PLUS;
	v->a[280208] = anon_sym_DASH_DASH;
	v->a[280209] = state(2952);
	v->a[280210] = 7;
	v->a[280211] = sym__c_expression_not_assignment;
	v->a[280212] = sym__c_parenthesized_expression;
	v->a[280213] = sym_string;
	v->a[280214] = sym_number;
	v->a[280215] = sym_simple_expansion;
	v->a[280216] = sym_expansion;
	v->a[280217] = sym_command_substitution;
	v->a[280218] = 16;
	v->a[280219] = actions(71);
	small_parse_table_14011(v);
}

void	small_parse_table_14011(t_small_parse_table_array *v)
{
	v->a[280220] = 1;
	v->a[280221] = sym_comment;
	v->a[280222] = actions(11256);
	v->a[280223] = 1;
	v->a[280224] = anon_sym_DOLLAR;
	v->a[280225] = actions(11262);
	v->a[280226] = 1;
	v->a[280227] = aux_sym_number_token2;
	v->a[280228] = actions(12233);
	v->a[280229] = 1;
	v->a[280230] = anon_sym_LPAREN;
	v->a[280231] = actions(12237);
	v->a[280232] = 1;
	v->a[280233] = anon_sym_DQUOTE;
	v->a[280234] = actions(12239);
	v->a[280235] = 1;
	v->a[280236] = aux_sym_number_token1;
	v->a[280237] = actions(12241);
	v->a[280238] = 1;
	v->a[280239] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_14012(v);
}

void	small_parse_table_14012(t_small_parse_table_array *v)
{
	v->a[280240] = actions(12243);
	v->a[280241] = 1;
	v->a[280242] = anon_sym_DOLLAR_LPAREN;
	v->a[280243] = actions(12245);
	v->a[280244] = 1;
	v->a[280245] = anon_sym_BQUOTE;
	v->a[280246] = actions(12247);
	v->a[280247] = 1;
	v->a[280248] = anon_sym_DOLLAR_BQUOTE;
	v->a[280249] = actions(12630);
	v->a[280250] = 1;
	v->a[280251] = aux_sym__c_word_token1;
	v->a[280252] = state(3113);
	v->a[280253] = 1;
	v->a[280254] = sym__c_postfix_expression;
	v->a[280255] = state(3116);
	v->a[280256] = 1;
	v->a[280257] = sym__c_binary_expression;
	v->a[280258] = state(3118);
	v->a[280259] = 1;
	small_parse_table_14013(v);
}

void	small_parse_table_14013(t_small_parse_table_array *v)
{
	v->a[280260] = sym__c_unary_expression;
	v->a[280261] = actions(12231);
	v->a[280262] = 2;
	v->a[280263] = anon_sym_PLUS_PLUS;
	v->a[280264] = anon_sym_DASH_DASH;
	v->a[280265] = state(3036);
	v->a[280266] = 7;
	v->a[280267] = sym__c_expression_not_assignment;
	v->a[280268] = sym__c_parenthesized_expression;
	v->a[280269] = sym_string;
	v->a[280270] = sym_number;
	v->a[280271] = sym_simple_expansion;
	v->a[280272] = sym_expansion;
	v->a[280273] = sym_command_substitution;
	v->a[280274] = 4;
	v->a[280275] = actions(71);
	v->a[280276] = 1;
	v->a[280277] = sym_comment;
	v->a[280278] = actions(12636);
	v->a[280279] = 1;
	small_parse_table_14014(v);
}

void	small_parse_table_14014(t_small_parse_table_array *v)
{
	v->a[280280] = anon_sym_esac;
	v->a[280281] = actions(12632);
	v->a[280282] = 6;
	v->a[280283] = anon_sym_LPAREN;
	v->a[280284] = anon_sym_DOLLAR;
	v->a[280285] = aux_sym_number_token1;
	v->a[280286] = aux_sym_number_token2;
	v->a[280287] = anon_sym_DOLLAR_LPAREN;
	v->a[280288] = sym_word;
	v->a[280289] = actions(12634);
	v->a[280290] = 15;
	v->a[280291] = sym_test_operator;
	v->a[280292] = sym_extglob_pattern;
	v->a[280293] = sym__brace_start;
	v->a[280294] = anon_sym_LPAREN_LPAREN;
	v->a[280295] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[280296] = anon_sym_DOLLAR_LBRACK;
	v->a[280297] = sym__special_character;
	v->a[280298] = anon_sym_DQUOTE;
	v->a[280299] = sym_raw_string;
	small_parse_table_14015(v);
}

/* EOF small_parse_table_2802.c */
