/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_874.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4370(t_small_parse_table_array *v)
{
	v->a[87400] = actions(3453);
	v->a[87401] = 5;
	v->a[87402] = aux_sym_concatenation_token1;
	v->a[87403] = sym_raw_string;
	v->a[87404] = sym_number;
	v->a[87405] = sym__comment_word;
	v->a[87406] = sym_word;
	v->a[87407] = state(500);
	v->a[87408] = 5;
	v->a[87409] = sym_arithmetic_expansion;
	v->a[87410] = sym_string;
	v->a[87411] = sym_simple_expansion;
	v->a[87412] = sym_expansion;
	v->a[87413] = sym_command_substitution;
	v->a[87414] = 10;
	v->a[87415] = actions(3);
	v->a[87416] = 1;
	v->a[87417] = sym_comment;
	v->a[87418] = actions(824);
	v->a[87419] = 1;
	small_parse_table_4371(v);
}

void	small_parse_table_4371(t_small_parse_table_array *v)
{
	v->a[87420] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87421] = actions(828);
	v->a[87422] = 1;
	v->a[87423] = anon_sym_DQUOTE;
	v->a[87424] = actions(830);
	v->a[87425] = 1;
	v->a[87426] = anon_sym_DOLLAR_LBRACE;
	v->a[87427] = actions(832);
	v->a[87428] = 1;
	v->a[87429] = anon_sym_DOLLAR_LPAREN;
	v->a[87430] = actions(834);
	v->a[87431] = 1;
	v->a[87432] = anon_sym_BQUOTE;
	v->a[87433] = actions(3348);
	v->a[87434] = 1;
	v->a[87435] = sym__bare_dollar;
	v->a[87436] = actions(3547);
	v->a[87437] = 1;
	v->a[87438] = anon_sym_DOLLAR;
	v->a[87439] = actions(3346);
	small_parse_table_4372(v);
}

void	small_parse_table_4372(t_small_parse_table_array *v)
{
	v->a[87440] = 5;
	v->a[87441] = aux_sym_concatenation_token1;
	v->a[87442] = sym_raw_string;
	v->a[87443] = sym_number;
	v->a[87444] = sym__comment_word;
	v->a[87445] = sym_word;
	v->a[87446] = state(1185);
	v->a[87447] = 5;
	v->a[87448] = sym_arithmetic_expansion;
	v->a[87449] = sym_string;
	v->a[87450] = sym_simple_expansion;
	v->a[87451] = sym_expansion;
	v->a[87452] = sym_command_substitution;
	v->a[87453] = 12;
	v->a[87454] = actions(3);
	v->a[87455] = 1;
	v->a[87456] = sym_comment;
	v->a[87457] = actions(3156);
	v->a[87458] = 1;
	v->a[87459] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_4373(v);
}

void	small_parse_table_4373(t_small_parse_table_array *v)
{
	v->a[87460] = actions(3160);
	v->a[87461] = 1;
	v->a[87462] = anon_sym_DQUOTE;
	v->a[87463] = actions(3162);
	v->a[87464] = 1;
	v->a[87465] = anon_sym_DOLLAR_LBRACE;
	v->a[87466] = actions(3164);
	v->a[87467] = 1;
	v->a[87468] = anon_sym_DOLLAR_LPAREN;
	v->a[87469] = actions(3166);
	v->a[87470] = 1;
	v->a[87471] = anon_sym_BQUOTE;
	v->a[87472] = actions(3252);
	v->a[87473] = 1;
	v->a[87474] = anon_sym_DOLLAR;
	v->a[87475] = actions(3254);
	v->a[87476] = 1;
	v->a[87477] = sym__comment_word;
	v->a[87478] = actions(3256);
	v->a[87479] = 1;
	small_parse_table_4374(v);
}

void	small_parse_table_4374(t_small_parse_table_array *v)
{
	v->a[87480] = sym__empty_value;
	v->a[87481] = state(1236);
	v->a[87482] = 1;
	v->a[87483] = sym_concatenation;
	v->a[87484] = actions(3549);
	v->a[87485] = 3;
	v->a[87486] = sym_raw_string;
	v->a[87487] = sym_number;
	v->a[87488] = sym_word;
	v->a[87489] = state(1157);
	v->a[87490] = 5;
	v->a[87491] = sym_arithmetic_expansion;
	v->a[87492] = sym_string;
	v->a[87493] = sym_simple_expansion;
	v->a[87494] = sym_expansion;
	v->a[87495] = sym_command_substitution;
	v->a[87496] = 10;
	v->a[87497] = actions(3);
	v->a[87498] = 1;
	v->a[87499] = sym_comment;
	small_parse_table_4375(v);
}

/* EOF small_parse_table_874.c */
