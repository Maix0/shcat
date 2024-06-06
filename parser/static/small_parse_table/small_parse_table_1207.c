/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1207.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6035(t_small_parse_table_array *v)
{
	v->a[120700] = sym__brace_start;
	v->a[120701] = actions(6016);
	v->a[120702] = 1;
	v->a[120703] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[120704] = actions(6020);
	v->a[120705] = 1;
	v->a[120706] = anon_sym_DQUOTE;
	v->a[120707] = actions(6022);
	v->a[120708] = 1;
	v->a[120709] = anon_sym_DOLLAR_LBRACE;
	v->a[120710] = actions(6024);
	v->a[120711] = 1;
	v->a[120712] = anon_sym_BQUOTE;
	v->a[120713] = actions(6026);
	v->a[120714] = 1;
	v->a[120715] = anon_sym_DOLLAR_BQUOTE;
	v->a[120716] = actions(6523);
	v->a[120717] = 1;
	v->a[120718] = sym_word;
	v->a[120719] = actions(6525);
	small_parse_table_6036(v);
}

void	small_parse_table_6036(t_small_parse_table_array *v)
{
	v->a[120720] = 1;
	v->a[120721] = sym__special_character;
	v->a[120722] = actions(6529);
	v->a[120723] = 1;
	v->a[120724] = sym__comment_word;
	v->a[120725] = actions(7019);
	v->a[120726] = 1;
	v->a[120727] = anon_sym_DOLLAR;
	v->a[120728] = actions(6527);
	v->a[120729] = 3;
	v->a[120730] = sym_test_operator;
	v->a[120731] = sym__bare_dollar;
	v->a[120732] = sym_raw_string;
	v->a[120733] = state(1722);
	v->a[120734] = 7;
	v->a[120735] = sym_arithmetic_expansion;
	v->a[120736] = sym_brace_expression;
	v->a[120737] = sym_string;
	v->a[120738] = sym_number;
	v->a[120739] = sym_simple_expansion;
	small_parse_table_6037(v);
}

void	small_parse_table_6037(t_small_parse_table_array *v)
{
	v->a[120740] = sym_expansion;
	v->a[120741] = sym_command_substitution;
	v->a[120742] = 16;
	v->a[120743] = actions(3);
	v->a[120744] = 1;
	v->a[120745] = sym_comment;
	v->a[120746] = actions(3726);
	v->a[120747] = 1;
	v->a[120748] = aux_sym_number_token1;
	v->a[120749] = actions(3728);
	v->a[120750] = 1;
	v->a[120751] = aux_sym_number_token2;
	v->a[120752] = actions(3732);
	v->a[120753] = 1;
	v->a[120754] = anon_sym_DOLLAR_LPAREN;
	v->a[120755] = actions(3740);
	v->a[120756] = 1;
	v->a[120757] = sym__brace_start;
	v->a[120758] = actions(6016);
	v->a[120759] = 1;
	small_parse_table_6038(v);
}

void	small_parse_table_6038(t_small_parse_table_array *v)
{
	v->a[120760] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[120761] = actions(6020);
	v->a[120762] = 1;
	v->a[120763] = anon_sym_DQUOTE;
	v->a[120764] = actions(6022);
	v->a[120765] = 1;
	v->a[120766] = anon_sym_DOLLAR_LBRACE;
	v->a[120767] = actions(6024);
	v->a[120768] = 1;
	v->a[120769] = anon_sym_BQUOTE;
	v->a[120770] = actions(6026);
	v->a[120771] = 1;
	v->a[120772] = anon_sym_DOLLAR_BQUOTE;
	v->a[120773] = actions(6523);
	v->a[120774] = 1;
	v->a[120775] = sym_word;
	v->a[120776] = actions(6525);
	v->a[120777] = 1;
	v->a[120778] = sym__special_character;
	v->a[120779] = actions(6529);
	small_parse_table_6039(v);
}

void	small_parse_table_6039(t_small_parse_table_array *v)
{
	v->a[120780] = 1;
	v->a[120781] = sym__comment_word;
	v->a[120782] = actions(7021);
	v->a[120783] = 1;
	v->a[120784] = anon_sym_DOLLAR;
	v->a[120785] = actions(6527);
	v->a[120786] = 3;
	v->a[120787] = sym_test_operator;
	v->a[120788] = sym__bare_dollar;
	v->a[120789] = sym_raw_string;
	v->a[120790] = state(1722);
	v->a[120791] = 7;
	v->a[120792] = sym_arithmetic_expansion;
	v->a[120793] = sym_brace_expression;
	v->a[120794] = sym_string;
	v->a[120795] = sym_number;
	v->a[120796] = sym_simple_expansion;
	v->a[120797] = sym_expansion;
	v->a[120798] = sym_command_substitution;
	v->a[120799] = 16;
	small_parse_table_6040(v);
}

/* EOF small_parse_table_1207.c */
