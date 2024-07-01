/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_672.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3360(t_small_parse_table_array *v)
{
	v->a[67200] = actions(2556);
	v->a[67201] = 1;
	v->a[67202] = anon_sym_DOLLAR;
	v->a[67203] = actions(2558);
	v->a[67204] = 1;
	v->a[67205] = sym__bare_dollar;
	v->a[67206] = actions(2554);
	v->a[67207] = 5;
	v->a[67208] = aux_sym_concatenation_token1;
	v->a[67209] = sym_raw_string;
	v->a[67210] = sym_number;
	v->a[67211] = sym__comment_word;
	v->a[67212] = sym_word;
	v->a[67213] = state(474);
	v->a[67214] = 5;
	v->a[67215] = sym_arithmetic_expansion;
	v->a[67216] = sym_string;
	v->a[67217] = sym_simple_expansion;
	v->a[67218] = sym_expansion;
	v->a[67219] = sym_command_substitution;
	small_parse_table_3361(v);
}

void	small_parse_table_3361(t_small_parse_table_array *v)
{
	v->a[67220] = 12;
	v->a[67221] = actions(3);
	v->a[67222] = 1;
	v->a[67223] = sym_comment;
	v->a[67224] = actions(2374);
	v->a[67225] = 1;
	v->a[67226] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[67227] = actions(2378);
	v->a[67228] = 1;
	v->a[67229] = anon_sym_DQUOTE;
	v->a[67230] = actions(2380);
	v->a[67231] = 1;
	v->a[67232] = anon_sym_DOLLAR_LBRACE;
	v->a[67233] = actions(2382);
	v->a[67234] = 1;
	v->a[67235] = anon_sym_DOLLAR_LPAREN;
	v->a[67236] = actions(2384);
	v->a[67237] = 1;
	v->a[67238] = anon_sym_BQUOTE;
	v->a[67239] = actions(2562);
	small_parse_table_3362(v);
}

void	small_parse_table_3362(t_small_parse_table_array *v)
{
	v->a[67240] = 1;
	v->a[67241] = anon_sym_DOLLAR;
	v->a[67242] = actions(2564);
	v->a[67243] = 1;
	v->a[67244] = sym__comment_word;
	v->a[67245] = actions(2566);
	v->a[67246] = 1;
	v->a[67247] = sym__empty_value;
	v->a[67248] = state(1486);
	v->a[67249] = 1;
	v->a[67250] = sym_concatenation;
	v->a[67251] = actions(2560);
	v->a[67252] = 3;
	v->a[67253] = sym_raw_string;
	v->a[67254] = sym_number;
	v->a[67255] = sym_word;
	v->a[67256] = state(1360);
	v->a[67257] = 5;
	v->a[67258] = sym_arithmetic_expansion;
	v->a[67259] = sym_string;
	small_parse_table_3363(v);
}

void	small_parse_table_3363(t_small_parse_table_array *v)
{
	v->a[67260] = sym_simple_expansion;
	v->a[67261] = sym_expansion;
	v->a[67262] = sym_command_substitution;
	v->a[67263] = 11;
	v->a[67264] = actions(3);
	v->a[67265] = 1;
	v->a[67266] = sym_comment;
	v->a[67267] = actions(1638);
	v->a[67268] = 1;
	v->a[67269] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[67270] = actions(1640);
	v->a[67271] = 1;
	v->a[67272] = anon_sym_DOLLAR;
	v->a[67273] = actions(1642);
	v->a[67274] = 1;
	v->a[67275] = anon_sym_DQUOTE;
	v->a[67276] = actions(1644);
	v->a[67277] = 1;
	v->a[67278] = anon_sym_DOLLAR_LBRACE;
	v->a[67279] = actions(1646);
	small_parse_table_3364(v);
}

void	small_parse_table_3364(t_small_parse_table_array *v)
{
	v->a[67280] = 1;
	v->a[67281] = anon_sym_DOLLAR_LPAREN;
	v->a[67282] = actions(1648);
	v->a[67283] = 1;
	v->a[67284] = anon_sym_BQUOTE;
	v->a[67285] = actions(1650);
	v->a[67286] = 1;
	v->a[67287] = sym_extglob_pattern;
	v->a[67288] = state(1903);
	v->a[67289] = 2;
	v->a[67290] = sym_concatenation;
	v->a[67291] = sym__extglob_blob;
	v->a[67292] = actions(2568);
	v->a[67293] = 3;
	v->a[67294] = sym_raw_string;
	v->a[67295] = sym_number;
	v->a[67296] = sym_word;
	v->a[67297] = state(1831);
	v->a[67298] = 5;
	v->a[67299] = sym_arithmetic_expansion;
	small_parse_table_3365(v);
}

/* EOF small_parse_table_672.c */
