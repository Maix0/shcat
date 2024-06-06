/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1197.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5985(t_small_parse_table_array *v)
{
	v->a[119700] = sym_comment;
	v->a[119701] = actions(2160);
	v->a[119702] = 1;
	v->a[119703] = aux_sym_number_token1;
	v->a[119704] = actions(2162);
	v->a[119705] = 1;
	v->a[119706] = aux_sym_number_token2;
	v->a[119707] = actions(2166);
	v->a[119708] = 1;
	v->a[119709] = anon_sym_DOLLAR_LPAREN;
	v->a[119710] = actions(2174);
	v->a[119711] = 1;
	v->a[119712] = sym__brace_start;
	v->a[119713] = actions(5989);
	v->a[119714] = 1;
	v->a[119715] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[119716] = actions(5993);
	v->a[119717] = 1;
	v->a[119718] = anon_sym_DQUOTE;
	v->a[119719] = actions(5995);
	small_parse_table_5986(v);
}

void	small_parse_table_5986(t_small_parse_table_array *v)
{
	v->a[119720] = 1;
	v->a[119721] = anon_sym_DOLLAR_LBRACE;
	v->a[119722] = actions(5997);
	v->a[119723] = 1;
	v->a[119724] = anon_sym_BQUOTE;
	v->a[119725] = actions(5999);
	v->a[119726] = 1;
	v->a[119727] = anon_sym_DOLLAR_BQUOTE;
	v->a[119728] = actions(6432);
	v->a[119729] = 1;
	v->a[119730] = sym_word;
	v->a[119731] = actions(6436);
	v->a[119732] = 1;
	v->a[119733] = sym__special_character;
	v->a[119734] = actions(6440);
	v->a[119735] = 1;
	v->a[119736] = sym__comment_word;
	v->a[119737] = actions(6991);
	v->a[119738] = 1;
	v->a[119739] = anon_sym_DOLLAR;
	small_parse_table_5987(v);
}

void	small_parse_table_5987(t_small_parse_table_array *v)
{
	v->a[119740] = actions(6438);
	v->a[119741] = 3;
	v->a[119742] = sym_test_operator;
	v->a[119743] = sym__bare_dollar;
	v->a[119744] = sym_raw_string;
	v->a[119745] = state(1201);
	v->a[119746] = 7;
	v->a[119747] = sym_arithmetic_expansion;
	v->a[119748] = sym_brace_expression;
	v->a[119749] = sym_string;
	v->a[119750] = sym_number;
	v->a[119751] = sym_simple_expansion;
	v->a[119752] = sym_expansion;
	v->a[119753] = sym_command_substitution;
	v->a[119754] = 16;
	v->a[119755] = actions(3);
	v->a[119756] = 1;
	v->a[119757] = sym_comment;
	v->a[119758] = actions(5483);
	v->a[119759] = 1;
	small_parse_table_5988(v);
}

void	small_parse_table_5988(t_small_parse_table_array *v)
{
	v->a[119760] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[119761] = actions(5489);
	v->a[119762] = 1;
	v->a[119763] = anon_sym_DQUOTE;
	v->a[119764] = actions(5493);
	v->a[119765] = 1;
	v->a[119766] = aux_sym_number_token1;
	v->a[119767] = actions(5495);
	v->a[119768] = 1;
	v->a[119769] = aux_sym_number_token2;
	v->a[119770] = actions(5497);
	v->a[119771] = 1;
	v->a[119772] = anon_sym_DOLLAR_LBRACE;
	v->a[119773] = actions(5499);
	v->a[119774] = 1;
	v->a[119775] = anon_sym_DOLLAR_LPAREN;
	v->a[119776] = actions(5501);
	v->a[119777] = 1;
	v->a[119778] = anon_sym_BQUOTE;
	v->a[119779] = actions(5503);
	small_parse_table_5989(v);
}

void	small_parse_table_5989(t_small_parse_table_array *v)
{
	v->a[119780] = 1;
	v->a[119781] = anon_sym_DOLLAR_BQUOTE;
	v->a[119782] = actions(5509);
	v->a[119783] = 1;
	v->a[119784] = sym__brace_start;
	v->a[119785] = actions(6963);
	v->a[119786] = 1;
	v->a[119787] = sym_word;
	v->a[119788] = actions(6965);
	v->a[119789] = 1;
	v->a[119790] = sym__special_character;
	v->a[119791] = actions(6969);
	v->a[119792] = 1;
	v->a[119793] = sym__comment_word;
	v->a[119794] = actions(6993);
	v->a[119795] = 1;
	v->a[119796] = anon_sym_DOLLAR;
	v->a[119797] = actions(6967);
	v->a[119798] = 3;
	v->a[119799] = sym_test_operator;
	small_parse_table_5990(v);
}

/* EOF small_parse_table_1197.c */
