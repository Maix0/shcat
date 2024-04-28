/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2801.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14005(t_small_parse_table_array *v)
{
	v->a[280100] = sym__c_parenthesized_expression;
	v->a[280101] = sym_string;
	v->a[280102] = sym_number;
	v->a[280103] = sym_simple_expansion;
	v->a[280104] = sym_expansion;
	v->a[280105] = sym_command_substitution;
	v->a[280106] = 16;
	v->a[280107] = actions(71);
	v->a[280108] = 1;
	v->a[280109] = sym_comment;
	v->a[280110] = actions(11256);
	v->a[280111] = 1;
	v->a[280112] = anon_sym_DOLLAR;
	v->a[280113] = actions(11262);
	v->a[280114] = 1;
	v->a[280115] = aux_sym_number_token2;
	v->a[280116] = actions(12233);
	v->a[280117] = 1;
	v->a[280118] = anon_sym_LPAREN;
	v->a[280119] = actions(12237);
	small_parse_table_14006(v);
}

void	small_parse_table_14006(t_small_parse_table_array *v)
{
	v->a[280120] = 1;
	v->a[280121] = anon_sym_DQUOTE;
	v->a[280122] = actions(12239);
	v->a[280123] = 1;
	v->a[280124] = aux_sym_number_token1;
	v->a[280125] = actions(12241);
	v->a[280126] = 1;
	v->a[280127] = anon_sym_DOLLAR_LBRACE;
	v->a[280128] = actions(12243);
	v->a[280129] = 1;
	v->a[280130] = anon_sym_DOLLAR_LPAREN;
	v->a[280131] = actions(12245);
	v->a[280132] = 1;
	v->a[280133] = anon_sym_BQUOTE;
	v->a[280134] = actions(12247);
	v->a[280135] = 1;
	v->a[280136] = anon_sym_DOLLAR_BQUOTE;
	v->a[280137] = actions(12626);
	v->a[280138] = 1;
	v->a[280139] = aux_sym__c_word_token1;
	small_parse_table_14007(v);
}

void	small_parse_table_14007(t_small_parse_table_array *v)
{
	v->a[280140] = state(3113);
	v->a[280141] = 1;
	v->a[280142] = sym__c_postfix_expression;
	v->a[280143] = state(3116);
	v->a[280144] = 1;
	v->a[280145] = sym__c_binary_expression;
	v->a[280146] = state(3118);
	v->a[280147] = 1;
	v->a[280148] = sym__c_unary_expression;
	v->a[280149] = actions(12231);
	v->a[280150] = 2;
	v->a[280151] = anon_sym_PLUS_PLUS;
	v->a[280152] = anon_sym_DASH_DASH;
	v->a[280153] = state(2956);
	v->a[280154] = 7;
	v->a[280155] = sym__c_expression_not_assignment;
	v->a[280156] = sym__c_parenthesized_expression;
	v->a[280157] = sym_string;
	v->a[280158] = sym_number;
	v->a[280159] = sym_simple_expansion;
	small_parse_table_14008(v);
}

void	small_parse_table_14008(t_small_parse_table_array *v)
{
	v->a[280160] = sym_expansion;
	v->a[280161] = sym_command_substitution;
	v->a[280162] = 16;
	v->a[280163] = actions(71);
	v->a[280164] = 1;
	v->a[280165] = sym_comment;
	v->a[280166] = actions(11256);
	v->a[280167] = 1;
	v->a[280168] = anon_sym_DOLLAR;
	v->a[280169] = actions(11262);
	v->a[280170] = 1;
	v->a[280171] = aux_sym_number_token2;
	v->a[280172] = actions(12233);
	v->a[280173] = 1;
	v->a[280174] = anon_sym_LPAREN;
	v->a[280175] = actions(12237);
	v->a[280176] = 1;
	v->a[280177] = anon_sym_DQUOTE;
	v->a[280178] = actions(12239);
	v->a[280179] = 1;
	small_parse_table_14009(v);
}

void	small_parse_table_14009(t_small_parse_table_array *v)
{
	v->a[280180] = aux_sym_number_token1;
	v->a[280181] = actions(12241);
	v->a[280182] = 1;
	v->a[280183] = anon_sym_DOLLAR_LBRACE;
	v->a[280184] = actions(12243);
	v->a[280185] = 1;
	v->a[280186] = anon_sym_DOLLAR_LPAREN;
	v->a[280187] = actions(12245);
	v->a[280188] = 1;
	v->a[280189] = anon_sym_BQUOTE;
	v->a[280190] = actions(12247);
	v->a[280191] = 1;
	v->a[280192] = anon_sym_DOLLAR_BQUOTE;
	v->a[280193] = actions(12628);
	v->a[280194] = 1;
	v->a[280195] = aux_sym__c_word_token1;
	v->a[280196] = state(3113);
	v->a[280197] = 1;
	v->a[280198] = sym__c_postfix_expression;
	v->a[280199] = state(3116);
	small_parse_table_14010(v);
}

/* EOF small_parse_table_2801.c */
