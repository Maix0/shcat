/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1977.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9885(t_small_parse_table_array *v)
{
	v->a[197700] = anon_sym_LPAREN_LPAREN;
	v->a[197701] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[197702] = actions(8912);
	v->a[197703] = 2;
	v->a[197704] = sym_raw_string;
	v->a[197705] = sym_ansi_c_string;
	v->a[197706] = actions(8920);
	v->a[197707] = 2;
	v->a[197708] = anon_sym_LT_LPAREN;
	v->a[197709] = anon_sym_GT_LPAREN;
	v->a[197710] = state(702);
	v->a[197711] = 2;
	v->a[197712] = sym_concatenation;
	v->a[197713] = aux_sym_for_statement_repeat1;
	v->a[197714] = state(1630);
	v->a[197715] = 9;
	v->a[197716] = sym_arithmetic_expansion;
	v->a[197717] = sym_brace_expression;
	v->a[197718] = sym_string;
	v->a[197719] = sym_translated_string;
	small_parse_table_9886(v);
}

void	small_parse_table_9886(t_small_parse_table_array *v)
{
	v->a[197720] = sym_number;
	v->a[197721] = sym_simple_expansion;
	v->a[197722] = sym_expansion;
	v->a[197723] = sym_command_substitution;
	v->a[197724] = sym_process_substitution;
	v->a[197725] = 19;
	v->a[197726] = actions(3);
	v->a[197727] = 1;
	v->a[197728] = sym_comment;
	v->a[197729] = actions(8030);
	v->a[197730] = 1;
	v->a[197731] = anon_sym_SLASH;
	v->a[197732] = actions(8032);
	v->a[197733] = 1;
	v->a[197734] = anon_sym_PERCENT;
	v->a[197735] = actions(8034);
	v->a[197736] = 1;
	v->a[197737] = anon_sym_COLON;
	v->a[197738] = actions(8038);
	v->a[197739] = 1;
	small_parse_table_9887(v);
}

void	small_parse_table_9887(t_small_parse_table_array *v)
{
	v->a[197740] = anon_sym_RBRACE3;
	v->a[197741] = actions(8040);
	v->a[197742] = 1;
	v->a[197743] = anon_sym_AT;
	v->a[197744] = actions(8042);
	v->a[197745] = 1;
	v->a[197746] = anon_sym_STAR2;
	v->a[197747] = actions(8922);
	v->a[197748] = 1;
	v->a[197749] = anon_sym_LBRACK;
	v->a[197750] = state(6994);
	v->a[197751] = 1;
	v->a[197752] = sym__expansion_operator;
	v->a[197753] = state(6995);
	v->a[197754] = 1;
	v->a[197755] = sym__expansion_max_length;
	v->a[197756] = state(6999);
	v->a[197757] = 1;
	v->a[197758] = sym__expansion_regex_removal;
	v->a[197759] = state(7000);
	small_parse_table_9888(v);
}

void	small_parse_table_9888(t_small_parse_table_array *v)
{
	v->a[197760] = 1;
	v->a[197761] = sym__expansion_regex_replacement;
	v->a[197762] = state(7001);
	v->a[197763] = 1;
	v->a[197764] = sym__expansion_regex;
	v->a[197765] = state(7002);
	v->a[197766] = 1;
	v->a[197767] = sym__expansion_expression;
	v->a[197768] = actions(8028);
	v->a[197769] = 2;
	v->a[197770] = anon_sym_COMMA;
	v->a[197771] = anon_sym_CARET;
	v->a[197772] = actions(8048);
	v->a[197773] = 2;
	v->a[197774] = anon_sym_COMMA_COMMA;
	v->a[197775] = anon_sym_CARET_CARET;
	v->a[197776] = actions(8036);
	v->a[197777] = 3;
	v->a[197778] = sym__immediate_double_hash;
	v->a[197779] = anon_sym_POUND;
	small_parse_table_9889(v);
}

void	small_parse_table_9889(t_small_parse_table_array *v)
{
	v->a[197780] = anon_sym_PERCENT_PERCENT;
	v->a[197781] = actions(8046);
	v->a[197782] = 3;
	v->a[197783] = anon_sym_SLASH_SLASH;
	v->a[197784] = anon_sym_SLASH_POUND;
	v->a[197785] = anon_sym_SLASH_PERCENT;
	v->a[197786] = actions(8044);
	v->a[197787] = 8;
	v->a[197788] = anon_sym_EQ2;
	v->a[197789] = anon_sym_COLON_EQ;
	v->a[197790] = anon_sym_DASH3;
	v->a[197791] = anon_sym_COLON_DASH;
	v->a[197792] = anon_sym_PLUS3;
	v->a[197793] = anon_sym_COLON_PLUS;
	v->a[197794] = anon_sym_QMARK2;
	v->a[197795] = anon_sym_COLON_QMARK;
	v->a[197796] = 20;
	v->a[197797] = actions(71);
	v->a[197798] = 1;
	v->a[197799] = sym_comment;
	small_parse_table_9890(v);
}

/* EOF small_parse_table_1977.c */
