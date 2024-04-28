/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2803.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14015(t_small_parse_table_array *v)
{
	v->a[280300] = sym_ansi_c_string;
	v->a[280301] = anon_sym_DOLLAR_LBRACE;
	v->a[280302] = anon_sym_BQUOTE;
	v->a[280303] = anon_sym_DOLLAR_BQUOTE;
	v->a[280304] = anon_sym_LT_LPAREN;
	v->a[280305] = anon_sym_GT_LPAREN;
	v->a[280306] = 16;
	v->a[280307] = actions(71);
	v->a[280308] = 1;
	v->a[280309] = sym_comment;
	v->a[280310] = actions(11256);
	v->a[280311] = 1;
	v->a[280312] = anon_sym_DOLLAR;
	v->a[280313] = actions(11262);
	v->a[280314] = 1;
	v->a[280315] = aux_sym_number_token2;
	v->a[280316] = actions(12233);
	v->a[280317] = 1;
	v->a[280318] = anon_sym_LPAREN;
	v->a[280319] = actions(12237);
	small_parse_table_14016(v);
}

void	small_parse_table_14016(t_small_parse_table_array *v)
{
	v->a[280320] = 1;
	v->a[280321] = anon_sym_DQUOTE;
	v->a[280322] = actions(12239);
	v->a[280323] = 1;
	v->a[280324] = aux_sym_number_token1;
	v->a[280325] = actions(12241);
	v->a[280326] = 1;
	v->a[280327] = anon_sym_DOLLAR_LBRACE;
	v->a[280328] = actions(12243);
	v->a[280329] = 1;
	v->a[280330] = anon_sym_DOLLAR_LPAREN;
	v->a[280331] = actions(12245);
	v->a[280332] = 1;
	v->a[280333] = anon_sym_BQUOTE;
	v->a[280334] = actions(12247);
	v->a[280335] = 1;
	v->a[280336] = anon_sym_DOLLAR_BQUOTE;
	v->a[280337] = actions(12638);
	v->a[280338] = 1;
	v->a[280339] = aux_sym__c_word_token1;
	small_parse_table_14017(v);
}

void	small_parse_table_14017(t_small_parse_table_array *v)
{
	v->a[280340] = state(3113);
	v->a[280341] = 1;
	v->a[280342] = sym__c_postfix_expression;
	v->a[280343] = state(3116);
	v->a[280344] = 1;
	v->a[280345] = sym__c_binary_expression;
	v->a[280346] = state(3118);
	v->a[280347] = 1;
	v->a[280348] = sym__c_unary_expression;
	v->a[280349] = actions(12231);
	v->a[280350] = 2;
	v->a[280351] = anon_sym_PLUS_PLUS;
	v->a[280352] = anon_sym_DASH_DASH;
	v->a[280353] = state(2947);
	v->a[280354] = 7;
	v->a[280355] = sym__c_expression_not_assignment;
	v->a[280356] = sym__c_parenthesized_expression;
	v->a[280357] = sym_string;
	v->a[280358] = sym_number;
	v->a[280359] = sym_simple_expansion;
	small_parse_table_14018(v);
}

void	small_parse_table_14018(t_small_parse_table_array *v)
{
	v->a[280360] = sym_expansion;
	v->a[280361] = sym_command_substitution;
	v->a[280362] = 4;
	v->a[280363] = actions(71);
	v->a[280364] = 1;
	v->a[280365] = sym_comment;
	v->a[280366] = actions(12644);
	v->a[280367] = 1;
	v->a[280368] = anon_sym_esac;
	v->a[280369] = actions(12640);
	v->a[280370] = 6;
	v->a[280371] = anon_sym_LPAREN;
	v->a[280372] = anon_sym_DOLLAR;
	v->a[280373] = aux_sym_number_token1;
	v->a[280374] = aux_sym_number_token2;
	v->a[280375] = anon_sym_DOLLAR_LPAREN;
	v->a[280376] = sym_word;
	v->a[280377] = actions(12642);
	v->a[280378] = 15;
	v->a[280379] = sym_test_operator;
	small_parse_table_14019(v);
}

void	small_parse_table_14019(t_small_parse_table_array *v)
{
	v->a[280380] = sym_extglob_pattern;
	v->a[280381] = sym__brace_start;
	v->a[280382] = anon_sym_LPAREN_LPAREN;
	v->a[280383] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[280384] = anon_sym_DOLLAR_LBRACK;
	v->a[280385] = sym__special_character;
	v->a[280386] = anon_sym_DQUOTE;
	v->a[280387] = sym_raw_string;
	v->a[280388] = sym_ansi_c_string;
	v->a[280389] = anon_sym_DOLLAR_LBRACE;
	v->a[280390] = anon_sym_BQUOTE;
	v->a[280391] = anon_sym_DOLLAR_BQUOTE;
	v->a[280392] = anon_sym_LT_LPAREN;
	v->a[280393] = anon_sym_GT_LPAREN;
	v->a[280394] = 9;
	v->a[280395] = actions(3);
	v->a[280396] = 1;
	v->a[280397] = sym_comment;
	v->a[280398] = actions(5142);
	v->a[280399] = 1;
	small_parse_table_14020(v);
}

/* EOF small_parse_table_2803.c */
