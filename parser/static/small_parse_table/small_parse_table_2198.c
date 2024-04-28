/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2198.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10990(t_small_parse_table_array *v)
{
	v->a[219800] = anon_sym_BQUOTE;
	v->a[219801] = actions(727);
	v->a[219802] = 1;
	v->a[219803] = anon_sym_DOLLAR_BQUOTE;
	v->a[219804] = actions(737);
	v->a[219805] = 1;
	v->a[219806] = sym__brace_start;
	v->a[219807] = actions(10464);
	v->a[219808] = 1;
	v->a[219809] = sym_word;
	v->a[219810] = actions(10470);
	v->a[219811] = 1;
	v->a[219812] = sym__comment_word;
	v->a[219813] = actions(705);
	v->a[219814] = 2;
	v->a[219815] = anon_sym_LPAREN_LPAREN;
	v->a[219816] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[219817] = actions(729);
	v->a[219818] = 2;
	v->a[219819] = anon_sym_LT_LPAREN;
	small_parse_table_10991(v);
}

void	small_parse_table_10991(t_small_parse_table_array *v)
{
	v->a[219820] = anon_sym_GT_LPAREN;
	v->a[219821] = actions(10466);
	v->a[219822] = 2;
	v->a[219823] = sym_test_operator;
	v->a[219824] = sym__special_character;
	v->a[219825] = actions(10468);
	v->a[219826] = 3;
	v->a[219827] = sym__bare_dollar;
	v->a[219828] = sym_raw_string;
	v->a[219829] = sym_ansi_c_string;
	v->a[219830] = state(999);
	v->a[219831] = 9;
	v->a[219832] = sym_arithmetic_expansion;
	v->a[219833] = sym_brace_expression;
	v->a[219834] = sym_string;
	v->a[219835] = sym_translated_string;
	v->a[219836] = sym_number;
	v->a[219837] = sym_simple_expansion;
	v->a[219838] = sym_expansion;
	v->a[219839] = sym_command_substitution;
	small_parse_table_10992(v);
}

void	small_parse_table_10992(t_small_parse_table_array *v)
{
	v->a[219840] = sym_process_substitution;
	v->a[219841] = 18;
	v->a[219842] = actions(3);
	v->a[219843] = 1;
	v->a[219844] = sym_comment;
	v->a[219845] = actions(8372);
	v->a[219846] = 1;
	v->a[219847] = anon_sym_DOLLAR_LBRACK;
	v->a[219848] = actions(8374);
	v->a[219849] = 1;
	v->a[219850] = anon_sym_DOLLAR;
	v->a[219851] = actions(8378);
	v->a[219852] = 1;
	v->a[219853] = anon_sym_DQUOTE;
	v->a[219854] = actions(8382);
	v->a[219855] = 1;
	v->a[219856] = aux_sym_number_token1;
	v->a[219857] = actions(8384);
	v->a[219858] = 1;
	v->a[219859] = aux_sym_number_token2;
	small_parse_table_10993(v);
}

void	small_parse_table_10993(t_small_parse_table_array *v)
{
	v->a[219860] = actions(8386);
	v->a[219861] = 1;
	v->a[219862] = anon_sym_DOLLAR_LBRACE;
	v->a[219863] = actions(8388);
	v->a[219864] = 1;
	v->a[219865] = anon_sym_DOLLAR_LPAREN;
	v->a[219866] = actions(8390);
	v->a[219867] = 1;
	v->a[219868] = anon_sym_BQUOTE;
	v->a[219869] = actions(8392);
	v->a[219870] = 1;
	v->a[219871] = anon_sym_DOLLAR_BQUOTE;
	v->a[219872] = actions(8402);
	v->a[219873] = 1;
	v->a[219874] = sym__brace_start;
	v->a[219875] = actions(10472);
	v->a[219876] = 1;
	v->a[219877] = sym_word;
	v->a[219878] = actions(10478);
	v->a[219879] = 1;
	small_parse_table_10994(v);
}

void	small_parse_table_10994(t_small_parse_table_array *v)
{
	v->a[219880] = sym__comment_word;
	v->a[219881] = actions(8368);
	v->a[219882] = 2;
	v->a[219883] = anon_sym_LPAREN_LPAREN;
	v->a[219884] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[219885] = actions(8394);
	v->a[219886] = 2;
	v->a[219887] = anon_sym_LT_LPAREN;
	v->a[219888] = anon_sym_GT_LPAREN;
	v->a[219889] = actions(10474);
	v->a[219890] = 2;
	v->a[219891] = sym_test_operator;
	v->a[219892] = sym__special_character;
	v->a[219893] = actions(10476);
	v->a[219894] = 3;
	v->a[219895] = sym__bare_dollar;
	v->a[219896] = sym_raw_string;
	v->a[219897] = sym_ansi_c_string;
	v->a[219898] = state(4285);
	v->a[219899] = 9;
	small_parse_table_10995(v);
}

/* EOF small_parse_table_2198.c */
