/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2701.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13505(t_small_parse_table_array *v)
{
	v->a[270100] = aux_sym__c_word_token1;
	v->a[270101] = actions(11812);
	v->a[270102] = 1;
	v->a[270103] = anon_sym_DOLLAR;
	v->a[270104] = actions(11814);
	v->a[270105] = 1;
	v->a[270106] = anon_sym_DQUOTE;
	v->a[270107] = actions(11816);
	v->a[270108] = 1;
	v->a[270109] = aux_sym_number_token1;
	v->a[270110] = actions(11818);
	v->a[270111] = 1;
	v->a[270112] = aux_sym_number_token2;
	v->a[270113] = actions(11820);
	v->a[270114] = 1;
	v->a[270115] = anon_sym_DOLLAR_LBRACE;
	v->a[270116] = actions(11822);
	v->a[270117] = 1;
	v->a[270118] = anon_sym_DOLLAR_LPAREN;
	v->a[270119] = actions(11824);
	small_parse_table_13506(v);
}

void	small_parse_table_13506(t_small_parse_table_array *v)
{
	v->a[270120] = 1;
	v->a[270121] = anon_sym_BQUOTE;
	v->a[270122] = actions(11826);
	v->a[270123] = 1;
	v->a[270124] = anon_sym_DOLLAR_BQUOTE;
	v->a[270125] = state(3285);
	v->a[270126] = 1;
	v->a[270127] = sym__c_postfix_expression;
	v->a[270128] = state(3286);
	v->a[270129] = 1;
	v->a[270130] = sym__c_binary_expression;
	v->a[270131] = state(3290);
	v->a[270132] = 1;
	v->a[270133] = sym__c_unary_expression;
	v->a[270134] = state(6738);
	v->a[270135] = 1;
	v->a[270136] = sym__c_expression;
	v->a[270137] = state(6768);
	v->a[270138] = 1;
	v->a[270139] = sym__c_variable_assignment;
	small_parse_table_13507(v);
}

void	small_parse_table_13507(t_small_parse_table_array *v)
{
	v->a[270140] = actions(11806);
	v->a[270141] = 2;
	v->a[270142] = anon_sym_PLUS_PLUS;
	v->a[270143] = anon_sym_DASH_DASH;
	v->a[270144] = state(3292);
	v->a[270145] = 7;
	v->a[270146] = sym__c_expression_not_assignment;
	v->a[270147] = sym__c_parenthesized_expression;
	v->a[270148] = sym_string;
	v->a[270149] = sym_number;
	v->a[270150] = sym_simple_expansion;
	v->a[270151] = sym_expansion;
	v->a[270152] = sym_command_substitution;
	v->a[270153] = 5;
	v->a[270154] = actions(3);
	v->a[270155] = 1;
	v->a[270156] = sym_comment;
	v->a[270157] = actions(12276);
	v->a[270158] = 1;
	v->a[270159] = sym__special_character;
	small_parse_table_13508(v);
}

void	small_parse_table_13508(t_small_parse_table_array *v)
{
	v->a[270160] = state(5021);
	v->a[270161] = 1;
	v->a[270162] = aux_sym__literal_repeat1;
	v->a[270163] = actions(5395);
	v->a[270164] = 3;
	v->a[270165] = sym_test_operator;
	v->a[270166] = sym__brace_start;
	v->a[270167] = aux_sym_heredoc_redirect_token1;
	v->a[270168] = actions(5393);
	v->a[270169] = 19;
	v->a[270170] = anon_sym_LPAREN_LPAREN;
	v->a[270171] = anon_sym_SEMI;
	v->a[270172] = anon_sym_AMP;
	v->a[270173] = anon_sym_SEMI_SEMI;
	v->a[270174] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[270175] = anon_sym_DOLLAR_LBRACK;
	v->a[270176] = anon_sym_DOLLAR;
	v->a[270177] = anon_sym_DQUOTE;
	v->a[270178] = sym_raw_string;
	v->a[270179] = sym_ansi_c_string;
	small_parse_table_13509(v);
}

void	small_parse_table_13509(t_small_parse_table_array *v)
{
	v->a[270180] = aux_sym_number_token1;
	v->a[270181] = aux_sym_number_token2;
	v->a[270182] = anon_sym_DOLLAR_LBRACE;
	v->a[270183] = anon_sym_DOLLAR_LPAREN;
	v->a[270184] = anon_sym_BQUOTE;
	v->a[270185] = anon_sym_DOLLAR_BQUOTE;
	v->a[270186] = anon_sym_LT_LPAREN;
	v->a[270187] = anon_sym_GT_LPAREN;
	v->a[270188] = sym_word;
	v->a[270189] = 3;
	v->a[270190] = actions(3);
	v->a[270191] = 1;
	v->a[270192] = sym_comment;
	v->a[270193] = actions(11739);
	v->a[270194] = 2;
	v->a[270195] = sym_file_descriptor;
	v->a[270196] = aux_sym_heredoc_redirect_token1;
	v->a[270197] = actions(11741);
	v->a[270198] = 22;
	v->a[270199] = anon_sym_SEMI;
	small_parse_table_13510(v);
}

/* EOF small_parse_table_2701.c */
