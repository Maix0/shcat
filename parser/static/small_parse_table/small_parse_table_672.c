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
	v->a[67200] = 1;
	v->a[67201] = anon_sym_BQUOTE;
	v->a[67202] = actions(2575);
	v->a[67203] = 1;
	v->a[67204] = aux_sym_heredoc_redirect_token1;
	v->a[67205] = state(1331);
	v->a[67206] = 1;
	v->a[67207] = aux_sym__heredoc_command;
	v->a[67208] = state(1725);
	v->a[67209] = 1;
	v->a[67210] = sym_concatenation;
	v->a[67211] = actions(1057);
	v->a[67212] = 3;
	v->a[67213] = sym_raw_string;
	v->a[67214] = sym_number;
	v->a[67215] = sym_word;
	v->a[67216] = state(1589);
	v->a[67217] = 5;
	v->a[67218] = sym_arithmetic_expansion;
	v->a[67219] = sym_string;
	small_parse_table_3361(v);
}

void	small_parse_table_3361(t_small_parse_table_array *v)
{
	v->a[67220] = sym_simple_expansion;
	v->a[67221] = sym_expansion;
	v->a[67222] = sym_command_substitution;
	v->a[67223] = 12;
	v->a[67224] = actions(3);
	v->a[67225] = 1;
	v->a[67226] = sym_comment;
	v->a[67227] = actions(2336);
	v->a[67228] = 1;
	v->a[67229] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[67230] = actions(2338);
	v->a[67231] = 1;
	v->a[67232] = anon_sym_DOLLAR;
	v->a[67233] = actions(2340);
	v->a[67234] = 1;
	v->a[67235] = anon_sym_DQUOTE;
	v->a[67236] = actions(2342);
	v->a[67237] = 1;
	v->a[67238] = anon_sym_DOLLAR_LBRACE;
	v->a[67239] = actions(2344);
	small_parse_table_3362(v);
}

void	small_parse_table_3362(t_small_parse_table_array *v)
{
	v->a[67240] = 1;
	v->a[67241] = anon_sym_DOLLAR_LPAREN;
	v->a[67242] = actions(2346);
	v->a[67243] = 1;
	v->a[67244] = anon_sym_BQUOTE;
	v->a[67245] = actions(2516);
	v->a[67246] = 1;
	v->a[67247] = sym__comment_word;
	v->a[67248] = actions(2518);
	v->a[67249] = 1;
	v->a[67250] = sym__empty_value;
	v->a[67251] = state(1025);
	v->a[67252] = 1;
	v->a[67253] = sym_concatenation;
	v->a[67254] = actions(2577);
	v->a[67255] = 3;
	v->a[67256] = sym_raw_string;
	v->a[67257] = sym_number;
	v->a[67258] = sym_word;
	v->a[67259] = state(970);
	small_parse_table_3363(v);
}

void	small_parse_table_3363(t_small_parse_table_array *v)
{
	v->a[67260] = 5;
	v->a[67261] = sym_arithmetic_expansion;
	v->a[67262] = sym_string;
	v->a[67263] = sym_simple_expansion;
	v->a[67264] = sym_expansion;
	v->a[67265] = sym_command_substitution;
	v->a[67266] = 10;
	v->a[67267] = actions(3);
	v->a[67268] = 1;
	v->a[67269] = sym_comment;
	v->a[67270] = actions(1562);
	v->a[67271] = 1;
	v->a[67272] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[67273] = actions(1564);
	v->a[67274] = 1;
	v->a[67275] = anon_sym_DOLLAR;
	v->a[67276] = actions(1566);
	v->a[67277] = 1;
	v->a[67278] = anon_sym_DQUOTE;
	v->a[67279] = actions(1568);
	small_parse_table_3364(v);
}

void	small_parse_table_3364(t_small_parse_table_array *v)
{
	v->a[67280] = 1;
	v->a[67281] = anon_sym_DOLLAR_LBRACE;
	v->a[67282] = actions(1570);
	v->a[67283] = 1;
	v->a[67284] = anon_sym_DOLLAR_LPAREN;
	v->a[67285] = actions(1572);
	v->a[67286] = 1;
	v->a[67287] = anon_sym_BQUOTE;
	v->a[67288] = actions(2571);
	v->a[67289] = 1;
	v->a[67290] = sym__bare_dollar;
	v->a[67291] = actions(2567);
	v->a[67292] = 5;
	v->a[67293] = aux_sym_concatenation_token1;
	v->a[67294] = sym_raw_string;
	v->a[67295] = sym_number;
	v->a[67296] = sym__comment_word;
	v->a[67297] = sym_word;
	v->a[67298] = state(928);
	v->a[67299] = 5;
	small_parse_table_3365(v);
}

/* EOF small_parse_table_672.c */
