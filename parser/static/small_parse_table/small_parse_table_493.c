/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_493.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2465(t_small_parse_table_array *v)
{
	v->a[49300] = actions(2293);
	v->a[49301] = 1;
	v->a[49302] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49303] = actions(2299);
	v->a[49304] = 1;
	v->a[49305] = sym_string_content;
	v->a[49306] = actions(2301);
	v->a[49307] = 1;
	v->a[49308] = anon_sym_DOLLAR_LBRACE;
	v->a[49309] = actions(2303);
	v->a[49310] = 1;
	v->a[49311] = anon_sym_DOLLAR_LPAREN;
	v->a[49312] = actions(2305);
	v->a[49313] = 1;
	v->a[49314] = anon_sym_BQUOTE;
	v->a[49315] = actions(2368);
	v->a[49316] = 1;
	v->a[49317] = anon_sym_DOLLAR;
	v->a[49318] = actions(2370);
	v->a[49319] = 1;
	small_parse_table_2466(v);
}

void	small_parse_table_2466(t_small_parse_table_array *v)
{
	v->a[49320] = anon_sym_DQUOTE;
	v->a[49321] = state(1176);
	v->a[49322] = 1;
	v->a[49323] = aux_sym_string_repeat1;
	v->a[49324] = state(1394);
	v->a[49325] = 4;
	v->a[49326] = sym_arithmetic_expansion;
	v->a[49327] = sym_simple_expansion;
	v->a[49328] = sym_expansion;
	v->a[49329] = sym_command_substitution;
	v->a[49330] = 4;
	v->a[49331] = actions(3);
	v->a[49332] = 1;
	v->a[49333] = sym_comment;
	v->a[49334] = actions(2374);
	v->a[49335] = 1;
	v->a[49336] = anon_sym_esac;
	v->a[49337] = actions(2376);
	v->a[49338] = 1;
	v->a[49339] = sym_extglob_pattern;
	small_parse_table_2467(v);
}

void	small_parse_table_2467(t_small_parse_table_array *v)
{
	v->a[49340] = actions(2372);
	v->a[49341] = 10;
	v->a[49342] = anon_sym_LPAREN;
	v->a[49343] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49344] = anon_sym_DOLLAR;
	v->a[49345] = anon_sym_DQUOTE;
	v->a[49346] = sym_raw_string;
	v->a[49347] = sym_number;
	v->a[49348] = anon_sym_DOLLAR_LBRACE;
	v->a[49349] = anon_sym_DOLLAR_LPAREN;
	v->a[49350] = anon_sym_BQUOTE;
	v->a[49351] = sym_word;
	v->a[49352] = 10;
	v->a[49353] = actions(3);
	v->a[49354] = 1;
	v->a[49355] = sym_comment;
	v->a[49356] = actions(2293);
	v->a[49357] = 1;
	v->a[49358] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49359] = actions(2299);
	small_parse_table_2468(v);
}

void	small_parse_table_2468(t_small_parse_table_array *v)
{
	v->a[49360] = 1;
	v->a[49361] = sym_string_content;
	v->a[49362] = actions(2301);
	v->a[49363] = 1;
	v->a[49364] = anon_sym_DOLLAR_LBRACE;
	v->a[49365] = actions(2303);
	v->a[49366] = 1;
	v->a[49367] = anon_sym_DOLLAR_LPAREN;
	v->a[49368] = actions(2305);
	v->a[49369] = 1;
	v->a[49370] = anon_sym_BQUOTE;
	v->a[49371] = actions(2378);
	v->a[49372] = 1;
	v->a[49373] = anon_sym_DOLLAR;
	v->a[49374] = actions(2380);
	v->a[49375] = 1;
	v->a[49376] = anon_sym_DQUOTE;
	v->a[49377] = state(1176);
	v->a[49378] = 1;
	v->a[49379] = aux_sym_string_repeat1;
	small_parse_table_2469(v);
}

void	small_parse_table_2469(t_small_parse_table_array *v)
{
	v->a[49380] = state(1394);
	v->a[49381] = 4;
	v->a[49382] = sym_arithmetic_expansion;
	v->a[49383] = sym_simple_expansion;
	v->a[49384] = sym_expansion;
	v->a[49385] = sym_command_substitution;
	v->a[49386] = 10;
	v->a[49387] = actions(3);
	v->a[49388] = 1;
	v->a[49389] = sym_comment;
	v->a[49390] = actions(2293);
	v->a[49391] = 1;
	v->a[49392] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[49393] = actions(2299);
	v->a[49394] = 1;
	v->a[49395] = sym_string_content;
	v->a[49396] = actions(2301);
	v->a[49397] = 1;
	v->a[49398] = anon_sym_DOLLAR_LBRACE;
	v->a[49399] = actions(2303);
	small_parse_table_2470(v);
}

/* EOF small_parse_table_493.c */
