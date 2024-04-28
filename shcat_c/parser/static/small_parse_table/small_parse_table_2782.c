/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2782.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13910(t_small_parse_table_array *v)
{
	v->a[278200] = anon_sym_LPAREN;
	v->a[278201] = actions(12171);
	v->a[278202] = 1;
	v->a[278203] = anon_sym_DOLLAR;
	v->a[278204] = actions(12173);
	v->a[278205] = 1;
	v->a[278206] = anon_sym_DQUOTE;
	v->a[278207] = actions(12175);
	v->a[278208] = 1;
	v->a[278209] = aux_sym_number_token1;
	v->a[278210] = actions(12177);
	v->a[278211] = 1;
	v->a[278212] = aux_sym_number_token2;
	v->a[278213] = actions(12179);
	v->a[278214] = 1;
	v->a[278215] = anon_sym_DOLLAR_LBRACE;
	v->a[278216] = actions(12181);
	v->a[278217] = 1;
	v->a[278218] = anon_sym_DOLLAR_LPAREN;
	v->a[278219] = actions(12183);
	small_parse_table_13911(v);
}

void	small_parse_table_13911(t_small_parse_table_array *v)
{
	v->a[278220] = 1;
	v->a[278221] = anon_sym_BQUOTE;
	v->a[278222] = actions(12185);
	v->a[278223] = 1;
	v->a[278224] = anon_sym_DOLLAR_BQUOTE;
	v->a[278225] = actions(12516);
	v->a[278226] = 1;
	v->a[278227] = aux_sym__c_word_token1;
	v->a[278228] = state(3442);
	v->a[278229] = 1;
	v->a[278230] = sym__c_unary_expression;
	v->a[278231] = state(3443);
	v->a[278232] = 1;
	v->a[278233] = sym__c_binary_expression;
	v->a[278234] = state(3444);
	v->a[278235] = 1;
	v->a[278236] = sym__c_postfix_expression;
	v->a[278237] = actions(12165);
	v->a[278238] = 2;
	v->a[278239] = anon_sym_PLUS_PLUS;
	small_parse_table_13912(v);
}

void	small_parse_table_13912(t_small_parse_table_array *v)
{
	v->a[278240] = anon_sym_DASH_DASH;
	v->a[278241] = state(3381);
	v->a[278242] = 7;
	v->a[278243] = sym__c_expression_not_assignment;
	v->a[278244] = sym__c_parenthesized_expression;
	v->a[278245] = sym_string;
	v->a[278246] = sym_number;
	v->a[278247] = sym_simple_expansion;
	v->a[278248] = sym_expansion;
	v->a[278249] = sym_command_substitution;
	v->a[278250] = 3;
	v->a[278251] = actions(71);
	v->a[278252] = 1;
	v->a[278253] = sym_comment;
	v->a[278254] = actions(1348);
	v->a[278255] = 6;
	v->a[278256] = anon_sym_DOLLAR;
	v->a[278257] = aux_sym_number_token1;
	v->a[278258] = aux_sym_number_token2;
	v->a[278259] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_13913(v);
}

void	small_parse_table_13913(t_small_parse_table_array *v)
{
	v->a[278260] = anon_sym_BQUOTE;
	v->a[278261] = sym_word;
	v->a[278262] = actions(1350);
	v->a[278263] = 16;
	v->a[278264] = sym__concat;
	v->a[278265] = sym_test_operator;
	v->a[278266] = sym__brace_start;
	v->a[278267] = anon_sym_LPAREN_LPAREN;
	v->a[278268] = anon_sym_RPAREN;
	v->a[278269] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[278270] = anon_sym_DOLLAR_LBRACK;
	v->a[278271] = aux_sym_concatenation_token1;
	v->a[278272] = sym__special_character;
	v->a[278273] = anon_sym_DQUOTE;
	v->a[278274] = sym_raw_string;
	v->a[278275] = sym_ansi_c_string;
	v->a[278276] = anon_sym_DOLLAR_LBRACE;
	v->a[278277] = anon_sym_DOLLAR_BQUOTE;
	v->a[278278] = anon_sym_LT_LPAREN;
	v->a[278279] = anon_sym_GT_LPAREN;
	small_parse_table_13914(v);
}

void	small_parse_table_13914(t_small_parse_table_array *v)
{
	v->a[278280] = 9;
	v->a[278281] = actions(71);
	v->a[278282] = 1;
	v->a[278283] = sym_comment;
	v->a[278284] = actions(12527);
	v->a[278285] = 1;
	v->a[278286] = anon_sym_LT_LT_LT;
	v->a[278287] = actions(12530);
	v->a[278288] = 1;
	v->a[278289] = sym_file_descriptor;
	v->a[278290] = actions(11307);
	v->a[278291] = 2;
	v->a[278292] = anon_sym_PIPE;
	v->a[278293] = anon_sym_LT_LT;
	v->a[278294] = actions(12524);
	v->a[278295] = 2;
	v->a[278296] = anon_sym_LT_AMP_DASH;
	v->a[278297] = anon_sym_GT_AMP_DASH;
	v->a[278298] = actions(12521);
	v->a[278299] = 3;
	small_parse_table_13915(v);
}

/* EOF small_parse_table_2782.c */
