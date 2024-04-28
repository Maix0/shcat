/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2394.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11970(t_small_parse_table_array *v)
{
	v->a[239400] = anon_sym_DASH2;
	v->a[239401] = anon_sym_PLUS2;
	v->a[239402] = state(3192);
	v->a[239403] = 9;
	v->a[239404] = sym_subscript;
	v->a[239405] = sym__arithmetic_expression;
	v->a[239406] = sym__arithmetic_literal;
	v->a[239407] = sym__arithmetic_parenthesized_expression;
	v->a[239408] = sym_string;
	v->a[239409] = sym_number;
	v->a[239410] = sym_simple_expansion;
	v->a[239411] = sym_expansion;
	v->a[239412] = sym_command_substitution;
	v->a[239413] = 8;
	v->a[239414] = actions(3);
	v->a[239415] = 1;
	v->a[239416] = sym_comment;
	v->a[239417] = actions(1235);
	v->a[239418] = 1;
	v->a[239419] = sym_file_descriptor;
	small_parse_table_11971(v);
}

void	small_parse_table_11971(t_small_parse_table_array *v)
{
	v->a[239420] = actions(5874);
	v->a[239421] = 1;
	v->a[239422] = anon_sym_DQUOTE;
	v->a[239423] = actions(11244);
	v->a[239424] = 1;
	v->a[239425] = sym_variable_name;
	v->a[239426] = state(5696);
	v->a[239427] = 1;
	v->a[239428] = sym_string;
	v->a[239429] = actions(11242);
	v->a[239430] = 2;
	v->a[239431] = aux_sym__simple_variable_name_token1;
	v->a[239432] = aux_sym__multiline_variable_name_token1;
	v->a[239433] = actions(11240);
	v->a[239434] = 9;
	v->a[239435] = anon_sym_DASH;
	v->a[239436] = anon_sym_STAR;
	v->a[239437] = anon_sym_BANG;
	v->a[239438] = anon_sym_QMARK;
	v->a[239439] = anon_sym_DOLLAR;
	small_parse_table_11972(v);
}

void	small_parse_table_11972(t_small_parse_table_array *v)
{
	v->a[239440] = anon_sym_POUND;
	v->a[239441] = anon_sym_AT2;
	v->a[239442] = anon_sym_0;
	v->a[239443] = anon_sym__;
	v->a[239444] = actions(1227);
	v->a[239445] = 14;
	v->a[239446] = anon_sym_PIPE_PIPE;
	v->a[239447] = anon_sym_AMP_AMP;
	v->a[239448] = anon_sym_LT;
	v->a[239449] = anon_sym_GT;
	v->a[239450] = anon_sym_GT_GT;
	v->a[239451] = anon_sym_AMP_GT;
	v->a[239452] = anon_sym_AMP_GT_GT;
	v->a[239453] = anon_sym_LT_AMP;
	v->a[239454] = anon_sym_GT_AMP;
	v->a[239455] = anon_sym_GT_PIPE;
	v->a[239456] = anon_sym_LT_AMP_DASH;
	v->a[239457] = anon_sym_GT_AMP_DASH;
	v->a[239458] = aux_sym_heredoc_redirect_token1;
	v->a[239459] = anon_sym_LT_LT_LT;
	small_parse_table_11973(v);
}

void	small_parse_table_11973(t_small_parse_table_array *v)
{
	v->a[239460] = 22;
	v->a[239461] = actions(3);
	v->a[239462] = 1;
	v->a[239463] = sym_comment;
	v->a[239464] = actions(11250);
	v->a[239465] = 1;
	v->a[239466] = anon_sym_LPAREN;
	v->a[239467] = actions(11252);
	v->a[239468] = 1;
	v->a[239469] = aux_sym__c_word_token1;
	v->a[239470] = actions(11254);
	v->a[239471] = 1;
	v->a[239472] = aux_sym_heredoc_redirect_token1;
	v->a[239473] = actions(11256);
	v->a[239474] = 1;
	v->a[239475] = anon_sym_DOLLAR;
	v->a[239476] = actions(11258);
	v->a[239477] = 1;
	v->a[239478] = anon_sym_DQUOTE;
	v->a[239479] = actions(11260);
	small_parse_table_11974(v);
}

void	small_parse_table_11974(t_small_parse_table_array *v)
{
	v->a[239480] = 1;
	v->a[239481] = aux_sym_number_token1;
	v->a[239482] = actions(11262);
	v->a[239483] = 1;
	v->a[239484] = aux_sym_number_token2;
	v->a[239485] = actions(11264);
	v->a[239486] = 1;
	v->a[239487] = anon_sym_DOLLAR_LBRACE;
	v->a[239488] = actions(11266);
	v->a[239489] = 1;
	v->a[239490] = anon_sym_DOLLAR_LPAREN;
	v->a[239491] = actions(11268);
	v->a[239492] = 1;
	v->a[239493] = anon_sym_BQUOTE;
	v->a[239494] = actions(11270);
	v->a[239495] = 1;
	v->a[239496] = anon_sym_DOLLAR_BQUOTE;
	v->a[239497] = state(3113);
	v->a[239498] = 1;
	v->a[239499] = sym__c_postfix_expression;
	small_parse_table_11975(v);
}

/* EOF small_parse_table_2394.c */
