/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2767.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13835(t_small_parse_table_array *v)
{
	v->a[276700] = 3;
	v->a[276701] = sym_file_redirect;
	v->a[276702] = sym_herestring_redirect;
	v->a[276703] = aux_sym_redirected_statement_repeat2;
	v->a[276704] = actions(11363);
	v->a[276705] = 5;
	v->a[276706] = anon_sym_PIPE_PIPE;
	v->a[276707] = anon_sym_AMP_AMP;
	v->a[276708] = anon_sym_PIPE_AMP;
	v->a[276709] = anon_sym_RBRACK;
	v->a[276710] = anon_sym_LT_LT_DASH;
	v->a[276711] = actions(12411);
	v->a[276712] = 5;
	v->a[276713] = anon_sym_LT;
	v->a[276714] = anon_sym_GT;
	v->a[276715] = anon_sym_AMP_GT;
	v->a[276716] = anon_sym_LT_AMP;
	v->a[276717] = anon_sym_GT_AMP;
	v->a[276718] = 16;
	v->a[276719] = actions(71);
	small_parse_table_13836(v);
}

void	small_parse_table_13836(t_small_parse_table_array *v)
{
	v->a[276720] = 1;
	v->a[276721] = sym_comment;
	v->a[276722] = actions(12167);
	v->a[276723] = 1;
	v->a[276724] = anon_sym_LPAREN;
	v->a[276725] = actions(12171);
	v->a[276726] = 1;
	v->a[276727] = anon_sym_DOLLAR;
	v->a[276728] = actions(12173);
	v->a[276729] = 1;
	v->a[276730] = anon_sym_DQUOTE;
	v->a[276731] = actions(12175);
	v->a[276732] = 1;
	v->a[276733] = aux_sym_number_token1;
	v->a[276734] = actions(12177);
	v->a[276735] = 1;
	v->a[276736] = aux_sym_number_token2;
	v->a[276737] = actions(12179);
	v->a[276738] = 1;
	v->a[276739] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_13837(v);
}

void	small_parse_table_13837(t_small_parse_table_array *v)
{
	v->a[276740] = actions(12181);
	v->a[276741] = 1;
	v->a[276742] = anon_sym_DOLLAR_LPAREN;
	v->a[276743] = actions(12183);
	v->a[276744] = 1;
	v->a[276745] = anon_sym_BQUOTE;
	v->a[276746] = actions(12185);
	v->a[276747] = 1;
	v->a[276748] = anon_sym_DOLLAR_BQUOTE;
	v->a[276749] = actions(12421);
	v->a[276750] = 1;
	v->a[276751] = aux_sym__c_word_token1;
	v->a[276752] = state(3442);
	v->a[276753] = 1;
	v->a[276754] = sym__c_unary_expression;
	v->a[276755] = state(3443);
	v->a[276756] = 1;
	v->a[276757] = sym__c_binary_expression;
	v->a[276758] = state(3444);
	v->a[276759] = 1;
	small_parse_table_13838(v);
}

void	small_parse_table_13838(t_small_parse_table_array *v)
{
	v->a[276760] = sym__c_postfix_expression;
	v->a[276761] = actions(12165);
	v->a[276762] = 2;
	v->a[276763] = anon_sym_PLUS_PLUS;
	v->a[276764] = anon_sym_DASH_DASH;
	v->a[276765] = state(3454);
	v->a[276766] = 7;
	v->a[276767] = sym__c_expression_not_assignment;
	v->a[276768] = sym__c_parenthesized_expression;
	v->a[276769] = sym_string;
	v->a[276770] = sym_number;
	v->a[276771] = sym_simple_expansion;
	v->a[276772] = sym_expansion;
	v->a[276773] = sym_command_substitution;
	v->a[276774] = 4;
	v->a[276775] = actions(71);
	v->a[276776] = 1;
	v->a[276777] = sym_comment;
	v->a[276778] = actions(12427);
	v->a[276779] = 1;
	small_parse_table_13839(v);
}

void	small_parse_table_13839(t_small_parse_table_array *v)
{
	v->a[276780] = anon_sym_esac;
	v->a[276781] = actions(12423);
	v->a[276782] = 6;
	v->a[276783] = anon_sym_LPAREN;
	v->a[276784] = anon_sym_DOLLAR;
	v->a[276785] = aux_sym_number_token1;
	v->a[276786] = aux_sym_number_token2;
	v->a[276787] = anon_sym_DOLLAR_LPAREN;
	v->a[276788] = sym_word;
	v->a[276789] = actions(12425);
	v->a[276790] = 15;
	v->a[276791] = sym_test_operator;
	v->a[276792] = sym_extglob_pattern;
	v->a[276793] = sym__brace_start;
	v->a[276794] = anon_sym_LPAREN_LPAREN;
	v->a[276795] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[276796] = anon_sym_DOLLAR_LBRACK;
	v->a[276797] = sym__special_character;
	v->a[276798] = anon_sym_DQUOTE;
	v->a[276799] = sym_raw_string;
	small_parse_table_13840(v);
}

/* EOF small_parse_table_2767.c */
