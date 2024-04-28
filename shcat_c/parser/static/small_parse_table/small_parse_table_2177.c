/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2177.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10885(t_small_parse_table_array *v)
{
	v->a[217700] = aux_sym_number_token2;
	v->a[217701] = actions(4092);
	v->a[217702] = 1;
	v->a[217703] = anon_sym_DOLLAR_LPAREN;
	v->a[217704] = actions(4102);
	v->a[217705] = 1;
	v->a[217706] = sym__brace_start;
	v->a[217707] = actions(9306);
	v->a[217708] = 1;
	v->a[217709] = sym_word;
	v->a[217710] = actions(9310);
	v->a[217711] = 1;
	v->a[217712] = anon_sym_DOLLAR_LBRACK;
	v->a[217713] = actions(9316);
	v->a[217714] = 1;
	v->a[217715] = anon_sym_DQUOTE;
	v->a[217716] = actions(9320);
	v->a[217717] = 1;
	v->a[217718] = anon_sym_DOLLAR_LBRACE;
	v->a[217719] = actions(9322);
	small_parse_table_10886(v);
}

void	small_parse_table_10886(t_small_parse_table_array *v)
{
	v->a[217720] = 1;
	v->a[217721] = anon_sym_BQUOTE;
	v->a[217722] = actions(9324);
	v->a[217723] = 1;
	v->a[217724] = anon_sym_DOLLAR_BQUOTE;
	v->a[217725] = actions(9328);
	v->a[217726] = 1;
	v->a[217727] = sym__comment_word;
	v->a[217728] = actions(10378);
	v->a[217729] = 1;
	v->a[217730] = anon_sym_DOLLAR;
	v->a[217731] = actions(9308);
	v->a[217732] = 2;
	v->a[217733] = anon_sym_LPAREN_LPAREN;
	v->a[217734] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[217735] = actions(9314);
	v->a[217736] = 2;
	v->a[217737] = sym_test_operator;
	v->a[217738] = sym__special_character;
	v->a[217739] = actions(9326);
	small_parse_table_10887(v);
}

void	small_parse_table_10887(t_small_parse_table_array *v)
{
	v->a[217740] = 2;
	v->a[217741] = anon_sym_LT_LPAREN;
	v->a[217742] = anon_sym_GT_LPAREN;
	v->a[217743] = actions(9318);
	v->a[217744] = 3;
	v->a[217745] = sym__bare_dollar;
	v->a[217746] = sym_raw_string;
	v->a[217747] = sym_ansi_c_string;
	v->a[217748] = state(4566);
	v->a[217749] = 9;
	v->a[217750] = sym_arithmetic_expansion;
	v->a[217751] = sym_brace_expression;
	v->a[217752] = sym_string;
	v->a[217753] = sym_translated_string;
	v->a[217754] = sym_number;
	v->a[217755] = sym_simple_expansion;
	v->a[217756] = sym_expansion;
	v->a[217757] = sym_command_substitution;
	v->a[217758] = sym_process_substitution;
	v->a[217759] = 18;
	small_parse_table_10888(v);
}

void	small_parse_table_10888(t_small_parse_table_array *v)
{
	v->a[217760] = actions(3);
	v->a[217761] = 1;
	v->a[217762] = sym_comment;
	v->a[217763] = actions(4086);
	v->a[217764] = 1;
	v->a[217765] = aux_sym_number_token1;
	v->a[217766] = actions(4088);
	v->a[217767] = 1;
	v->a[217768] = aux_sym_number_token2;
	v->a[217769] = actions(4092);
	v->a[217770] = 1;
	v->a[217771] = anon_sym_DOLLAR_LPAREN;
	v->a[217772] = actions(4102);
	v->a[217773] = 1;
	v->a[217774] = sym__brace_start;
	v->a[217775] = actions(9306);
	v->a[217776] = 1;
	v->a[217777] = sym_word;
	v->a[217778] = actions(9310);
	v->a[217779] = 1;
	small_parse_table_10889(v);
}

void	small_parse_table_10889(t_small_parse_table_array *v)
{
	v->a[217780] = anon_sym_DOLLAR_LBRACK;
	v->a[217781] = actions(9316);
	v->a[217782] = 1;
	v->a[217783] = anon_sym_DQUOTE;
	v->a[217784] = actions(9320);
	v->a[217785] = 1;
	v->a[217786] = anon_sym_DOLLAR_LBRACE;
	v->a[217787] = actions(9322);
	v->a[217788] = 1;
	v->a[217789] = anon_sym_BQUOTE;
	v->a[217790] = actions(9324);
	v->a[217791] = 1;
	v->a[217792] = anon_sym_DOLLAR_BQUOTE;
	v->a[217793] = actions(9328);
	v->a[217794] = 1;
	v->a[217795] = sym__comment_word;
	v->a[217796] = actions(10380);
	v->a[217797] = 1;
	v->a[217798] = anon_sym_DOLLAR;
	v->a[217799] = actions(9308);
	small_parse_table_10890(v);
}

/* EOF small_parse_table_2177.c */
