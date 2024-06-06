/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1147.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5735(t_small_parse_table_array *v)
{
	v->a[114700] = actions(705);
	v->a[114701] = 1;
	v->a[114702] = aux_sym_number_token1;
	v->a[114703] = actions(707);
	v->a[114704] = 1;
	v->a[114705] = aux_sym_number_token2;
	v->a[114706] = actions(711);
	v->a[114707] = 1;
	v->a[114708] = anon_sym_DOLLAR_LPAREN;
	v->a[114709] = actions(721);
	v->a[114710] = 1;
	v->a[114711] = sym__brace_start;
	v->a[114712] = actions(6661);
	v->a[114713] = 1;
	v->a[114714] = sym_word;
	v->a[114715] = actions(6663);
	v->a[114716] = 1;
	v->a[114717] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[114718] = actions(6667);
	v->a[114719] = 1;
	small_parse_table_5736(v);
}

void	small_parse_table_5736(t_small_parse_table_array *v)
{
	v->a[114720] = sym__special_character;
	v->a[114721] = actions(6669);
	v->a[114722] = 1;
	v->a[114723] = anon_sym_DQUOTE;
	v->a[114724] = actions(6673);
	v->a[114725] = 1;
	v->a[114726] = anon_sym_DOLLAR_LBRACE;
	v->a[114727] = actions(6675);
	v->a[114728] = 1;
	v->a[114729] = anon_sym_BQUOTE;
	v->a[114730] = actions(6677);
	v->a[114731] = 1;
	v->a[114732] = anon_sym_DOLLAR_BQUOTE;
	v->a[114733] = actions(6679);
	v->a[114734] = 1;
	v->a[114735] = sym__comment_word;
	v->a[114736] = actions(6681);
	v->a[114737] = 1;
	v->a[114738] = anon_sym_DOLLAR;
	v->a[114739] = actions(6671);
	small_parse_table_5737(v);
}

void	small_parse_table_5737(t_small_parse_table_array *v)
{
	v->a[114740] = 3;
	v->a[114741] = sym_test_operator;
	v->a[114742] = sym__bare_dollar;
	v->a[114743] = sym_raw_string;
	v->a[114744] = state(626);
	v->a[114745] = 7;
	v->a[114746] = sym_arithmetic_expansion;
	v->a[114747] = sym_brace_expression;
	v->a[114748] = sym_string;
	v->a[114749] = sym_number;
	v->a[114750] = sym_simple_expansion;
	v->a[114751] = sym_expansion;
	v->a[114752] = sym_command_substitution;
	v->a[114753] = 16;
	v->a[114754] = actions(3);
	v->a[114755] = 1;
	v->a[114756] = sym_comment;
	v->a[114757] = actions(4346);
	v->a[114758] = 1;
	v->a[114759] = aux_sym_number_token1;
	small_parse_table_5738(v);
}

void	small_parse_table_5738(t_small_parse_table_array *v)
{
	v->a[114760] = actions(4348);
	v->a[114761] = 1;
	v->a[114762] = aux_sym_number_token2;
	v->a[114763] = actions(4352);
	v->a[114764] = 1;
	v->a[114765] = anon_sym_DOLLAR_LPAREN;
	v->a[114766] = actions(4362);
	v->a[114767] = 1;
	v->a[114768] = sym__brace_start;
	v->a[114769] = actions(4550);
	v->a[114770] = 1;
	v->a[114771] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[114772] = actions(4554);
	v->a[114773] = 1;
	v->a[114774] = anon_sym_DQUOTE;
	v->a[114775] = actions(4556);
	v->a[114776] = 1;
	v->a[114777] = anon_sym_DOLLAR_LBRACE;
	v->a[114778] = actions(4558);
	v->a[114779] = 1;
	small_parse_table_5739(v);
}

void	small_parse_table_5739(t_small_parse_table_array *v)
{
	v->a[114780] = anon_sym_BQUOTE;
	v->a[114781] = actions(4560);
	v->a[114782] = 1;
	v->a[114783] = anon_sym_DOLLAR_BQUOTE;
	v->a[114784] = actions(6565);
	v->a[114785] = 1;
	v->a[114786] = sym_word;
	v->a[114787] = actions(6569);
	v->a[114788] = 1;
	v->a[114789] = sym__special_character;
	v->a[114790] = actions(6573);
	v->a[114791] = 1;
	v->a[114792] = sym__comment_word;
	v->a[114793] = actions(6683);
	v->a[114794] = 1;
	v->a[114795] = anon_sym_DOLLAR;
	v->a[114796] = actions(6571);
	v->a[114797] = 3;
	v->a[114798] = sym_test_operator;
	v->a[114799] = sym__bare_dollar;
	small_parse_table_5740(v);
}

/* EOF small_parse_table_1147.c */
