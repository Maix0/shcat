/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2781.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13905(t_small_parse_table_array *v)
{
	v->a[278100] = sym_raw_string;
	v->a[278101] = sym_ansi_c_string;
	v->a[278102] = anon_sym_DOLLAR_LBRACE;
	v->a[278103] = anon_sym_DOLLAR_BQUOTE;
	v->a[278104] = anon_sym_LT_LPAREN;
	v->a[278105] = anon_sym_GT_LPAREN;
	v->a[278106] = 4;
	v->a[278107] = actions(71);
	v->a[278108] = 1;
	v->a[278109] = sym_comment;
	v->a[278110] = actions(12471);
	v->a[278111] = 1;
	v->a[278112] = anon_sym_esac;
	v->a[278113] = actions(12467);
	v->a[278114] = 6;
	v->a[278115] = anon_sym_LPAREN;
	v->a[278116] = anon_sym_DOLLAR;
	v->a[278117] = aux_sym_number_token1;
	v->a[278118] = aux_sym_number_token2;
	v->a[278119] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_13906(v);
}

void	small_parse_table_13906(t_small_parse_table_array *v)
{
	v->a[278120] = sym_word;
	v->a[278121] = actions(12469);
	v->a[278122] = 15;
	v->a[278123] = sym_test_operator;
	v->a[278124] = sym_extglob_pattern;
	v->a[278125] = sym__brace_start;
	v->a[278126] = anon_sym_LPAREN_LPAREN;
	v->a[278127] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[278128] = anon_sym_DOLLAR_LBRACK;
	v->a[278129] = sym__special_character;
	v->a[278130] = anon_sym_DQUOTE;
	v->a[278131] = sym_raw_string;
	v->a[278132] = sym_ansi_c_string;
	v->a[278133] = anon_sym_DOLLAR_LBRACE;
	v->a[278134] = anon_sym_BQUOTE;
	v->a[278135] = anon_sym_DOLLAR_BQUOTE;
	v->a[278136] = anon_sym_LT_LPAREN;
	v->a[278137] = anon_sym_GT_LPAREN;
	v->a[278138] = 16;
	v->a[278139] = actions(71);
	small_parse_table_13907(v);
}

void	small_parse_table_13907(t_small_parse_table_array *v)
{
	v->a[278140] = 1;
	v->a[278141] = sym_comment;
	v->a[278142] = actions(12167);
	v->a[278143] = 1;
	v->a[278144] = anon_sym_LPAREN;
	v->a[278145] = actions(12171);
	v->a[278146] = 1;
	v->a[278147] = anon_sym_DOLLAR;
	v->a[278148] = actions(12173);
	v->a[278149] = 1;
	v->a[278150] = anon_sym_DQUOTE;
	v->a[278151] = actions(12175);
	v->a[278152] = 1;
	v->a[278153] = aux_sym_number_token1;
	v->a[278154] = actions(12177);
	v->a[278155] = 1;
	v->a[278156] = aux_sym_number_token2;
	v->a[278157] = actions(12179);
	v->a[278158] = 1;
	v->a[278159] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_13908(v);
}

void	small_parse_table_13908(t_small_parse_table_array *v)
{
	v->a[278160] = actions(12181);
	v->a[278161] = 1;
	v->a[278162] = anon_sym_DOLLAR_LPAREN;
	v->a[278163] = actions(12183);
	v->a[278164] = 1;
	v->a[278165] = anon_sym_BQUOTE;
	v->a[278166] = actions(12185);
	v->a[278167] = 1;
	v->a[278168] = anon_sym_DOLLAR_BQUOTE;
	v->a[278169] = actions(12514);
	v->a[278170] = 1;
	v->a[278171] = aux_sym__c_word_token1;
	v->a[278172] = state(3442);
	v->a[278173] = 1;
	v->a[278174] = sym__c_unary_expression;
	v->a[278175] = state(3443);
	v->a[278176] = 1;
	v->a[278177] = sym__c_binary_expression;
	v->a[278178] = state(3444);
	v->a[278179] = 1;
	small_parse_table_13909(v);
}

void	small_parse_table_13909(t_small_parse_table_array *v)
{
	v->a[278180] = sym__c_postfix_expression;
	v->a[278181] = actions(12165);
	v->a[278182] = 2;
	v->a[278183] = anon_sym_PLUS_PLUS;
	v->a[278184] = anon_sym_DASH_DASH;
	v->a[278185] = state(3384);
	v->a[278186] = 7;
	v->a[278187] = sym__c_expression_not_assignment;
	v->a[278188] = sym__c_parenthesized_expression;
	v->a[278189] = sym_string;
	v->a[278190] = sym_number;
	v->a[278191] = sym_simple_expansion;
	v->a[278192] = sym_expansion;
	v->a[278193] = sym_command_substitution;
	v->a[278194] = 16;
	v->a[278195] = actions(71);
	v->a[278196] = 1;
	v->a[278197] = sym_comment;
	v->a[278198] = actions(12167);
	v->a[278199] = 1;
	small_parse_table_13910(v);
}

/* EOF small_parse_table_2781.c */
