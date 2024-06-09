/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_797.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3985(t_small_parse_table_array *v)
{
	v->a[79700] = sym_expansion;
	v->a[79701] = sym_command_substitution;
	v->a[79702] = 12;
	v->a[79703] = actions(3);
	v->a[79704] = 1;
	v->a[79705] = sym_comment;
	v->a[79706] = actions(2825);
	v->a[79707] = 1;
	v->a[79708] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79709] = actions(2827);
	v->a[79710] = 1;
	v->a[79711] = anon_sym_DOLLAR;
	v->a[79712] = actions(2829);
	v->a[79713] = 1;
	v->a[79714] = anon_sym_DQUOTE;
	v->a[79715] = actions(2831);
	v->a[79716] = 1;
	v->a[79717] = aux_sym_number_token1;
	v->a[79718] = actions(2833);
	v->a[79719] = 1;
	small_parse_table_3986(v);
}

void	small_parse_table_3986(t_small_parse_table_array *v)
{
	v->a[79720] = aux_sym_number_token2;
	v->a[79721] = actions(2835);
	v->a[79722] = 1;
	v->a[79723] = anon_sym_DOLLAR_LBRACE;
	v->a[79724] = actions(2837);
	v->a[79725] = 1;
	v->a[79726] = anon_sym_DOLLAR_LPAREN;
	v->a[79727] = actions(2839);
	v->a[79728] = 1;
	v->a[79729] = anon_sym_BQUOTE;
	v->a[79730] = actions(3254);
	v->a[79731] = 1;
	v->a[79732] = sym__bare_dollar;
	v->a[79733] = actions(3250);
	v->a[79734] = 3;
	v->a[79735] = sym_raw_string;
	v->a[79736] = sym__comment_word;
	v->a[79737] = sym_word;
	v->a[79738] = state(447);
	v->a[79739] = 6;
	small_parse_table_3987(v);
}

void	small_parse_table_3987(t_small_parse_table_array *v)
{
	v->a[79740] = sym_arithmetic_expansion;
	v->a[79741] = sym_string;
	v->a[79742] = sym_number;
	v->a[79743] = sym_simple_expansion;
	v->a[79744] = sym_expansion;
	v->a[79745] = sym_command_substitution;
	v->a[79746] = 12;
	v->a[79747] = actions(3);
	v->a[79748] = 1;
	v->a[79749] = sym_comment;
	v->a[79750] = actions(2851);
	v->a[79751] = 1;
	v->a[79752] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79753] = actions(2853);
	v->a[79754] = 1;
	v->a[79755] = anon_sym_DOLLAR;
	v->a[79756] = actions(2855);
	v->a[79757] = 1;
	v->a[79758] = anon_sym_DQUOTE;
	v->a[79759] = actions(2857);
	small_parse_table_3988(v);
}

void	small_parse_table_3988(t_small_parse_table_array *v)
{
	v->a[79760] = 1;
	v->a[79761] = aux_sym_number_token1;
	v->a[79762] = actions(2859);
	v->a[79763] = 1;
	v->a[79764] = aux_sym_number_token2;
	v->a[79765] = actions(2861);
	v->a[79766] = 1;
	v->a[79767] = anon_sym_DOLLAR_LBRACE;
	v->a[79768] = actions(2863);
	v->a[79769] = 1;
	v->a[79770] = anon_sym_DOLLAR_LPAREN;
	v->a[79771] = actions(2865);
	v->a[79772] = 1;
	v->a[79773] = anon_sym_BQUOTE;
	v->a[79774] = actions(3298);
	v->a[79775] = 2;
	v->a[79776] = sym_raw_string;
	v->a[79777] = sym_word;
	v->a[79778] = state(776);
	v->a[79779] = 2;
	small_parse_table_3989(v);
}

void	small_parse_table_3989(t_small_parse_table_array *v)
{
	v->a[79780] = sym_concatenation;
	v->a[79781] = aux_sym_for_statement_repeat1;
	v->a[79782] = state(985);
	v->a[79783] = 6;
	v->a[79784] = sym_arithmetic_expansion;
	v->a[79785] = sym_string;
	v->a[79786] = sym_number;
	v->a[79787] = sym_simple_expansion;
	v->a[79788] = sym_expansion;
	v->a[79789] = sym_command_substitution;
	v->a[79790] = 12;
	v->a[79791] = actions(3);
	v->a[79792] = 1;
	v->a[79793] = sym_comment;
	v->a[79794] = actions(1015);
	v->a[79795] = 1;
	v->a[79796] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79797] = actions(1019);
	v->a[79798] = 1;
	v->a[79799] = anon_sym_DQUOTE;
	small_parse_table_3990(v);
}

/* EOF small_parse_table_797.c */
