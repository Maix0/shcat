/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2397.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11985(t_small_parse_table_array *v)
{
	v->a[239700] = 1;
	v->a[239701] = sym__c_terminator;
	v->a[239702] = state(6365);
	v->a[239703] = 1;
	v->a[239704] = sym__c_expression;
	v->a[239705] = state(6493);
	v->a[239706] = 1;
	v->a[239707] = sym__c_variable_assignment;
	v->a[239708] = state(6886);
	v->a[239709] = 1;
	v->a[239710] = sym__for_body;
	v->a[239711] = actions(11246);
	v->a[239712] = 2;
	v->a[239713] = anon_sym_SEMI;
	v->a[239714] = anon_sym_AMP;
	v->a[239715] = actions(11248);
	v->a[239716] = 2;
	v->a[239717] = anon_sym_PLUS_PLUS;
	v->a[239718] = anon_sym_DASH_DASH;
	v->a[239719] = state(3119);
	small_parse_table_11986(v);
}

void	small_parse_table_11986(t_small_parse_table_array *v)
{
	v->a[239720] = 7;
	v->a[239721] = sym__c_expression_not_assignment;
	v->a[239722] = sym__c_parenthesized_expression;
	v->a[239723] = sym_string;
	v->a[239724] = sym_number;
	v->a[239725] = sym_simple_expansion;
	v->a[239726] = sym_expansion;
	v->a[239727] = sym_command_substitution;
	v->a[239728] = 17;
	v->a[239729] = actions(3);
	v->a[239730] = 1;
	v->a[239731] = sym_comment;
	v->a[239732] = actions(8030);
	v->a[239733] = 1;
	v->a[239734] = anon_sym_SLASH;
	v->a[239735] = actions(8032);
	v->a[239736] = 1;
	v->a[239737] = anon_sym_PERCENT;
	v->a[239738] = actions(8034);
	v->a[239739] = 1;
	small_parse_table_11987(v);
}

void	small_parse_table_11987(t_small_parse_table_array *v)
{
	v->a[239740] = anon_sym_COLON;
	v->a[239741] = actions(8546);
	v->a[239742] = 1;
	v->a[239743] = anon_sym_AT;
	v->a[239744] = actions(8922);
	v->a[239745] = 1;
	v->a[239746] = anon_sym_LBRACK;
	v->a[239747] = state(7238);
	v->a[239748] = 1;
	v->a[239749] = sym__expansion_operator;
	v->a[239750] = state(7239);
	v->a[239751] = 1;
	v->a[239752] = sym__expansion_max_length;
	v->a[239753] = state(7240);
	v->a[239754] = 1;
	v->a[239755] = sym__expansion_regex_removal;
	v->a[239756] = state(7241);
	v->a[239757] = 1;
	v->a[239758] = sym__expansion_regex_replacement;
	v->a[239759] = state(7242);
	small_parse_table_11988(v);
}

void	small_parse_table_11988(t_small_parse_table_array *v)
{
	v->a[239760] = 1;
	v->a[239761] = sym__expansion_regex;
	v->a[239762] = state(7243);
	v->a[239763] = 1;
	v->a[239764] = sym__expansion_expression;
	v->a[239765] = actions(8028);
	v->a[239766] = 2;
	v->a[239767] = anon_sym_COMMA;
	v->a[239768] = anon_sym_CARET;
	v->a[239769] = actions(8048);
	v->a[239770] = 2;
	v->a[239771] = anon_sym_COMMA_COMMA;
	v->a[239772] = anon_sym_CARET_CARET;
	v->a[239773] = actions(8036);
	v->a[239774] = 3;
	v->a[239775] = sym__immediate_double_hash;
	v->a[239776] = anon_sym_POUND;
	v->a[239777] = anon_sym_PERCENT_PERCENT;
	v->a[239778] = actions(8046);
	v->a[239779] = 3;
	small_parse_table_11989(v);
}

void	small_parse_table_11989(t_small_parse_table_array *v)
{
	v->a[239780] = anon_sym_SLASH_SLASH;
	v->a[239781] = anon_sym_SLASH_POUND;
	v->a[239782] = anon_sym_SLASH_PERCENT;
	v->a[239783] = actions(8044);
	v->a[239784] = 8;
	v->a[239785] = anon_sym_EQ2;
	v->a[239786] = anon_sym_COLON_EQ;
	v->a[239787] = anon_sym_DASH3;
	v->a[239788] = anon_sym_COLON_DASH;
	v->a[239789] = anon_sym_PLUS3;
	v->a[239790] = anon_sym_COLON_PLUS;
	v->a[239791] = anon_sym_QMARK2;
	v->a[239792] = anon_sym_COLON_QMARK;
	v->a[239793] = 6;
	v->a[239794] = actions(3);
	v->a[239795] = 1;
	v->a[239796] = sym_comment;
	v->a[239797] = actions(11276);
	v->a[239798] = 1;
	v->a[239799] = aux_sym_concatenation_token1;
	small_parse_table_11990(v);
}

/* EOF small_parse_table_2397.c */
