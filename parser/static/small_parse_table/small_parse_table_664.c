/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_664.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3320(t_small_parse_table_array *v)
{
	v->a[66400] = actions(2514);
	v->a[66401] = 3;
	v->a[66402] = sym_raw_string;
	v->a[66403] = sym_number;
	v->a[66404] = sym_word;
	v->a[66405] = state(989);
	v->a[66406] = 5;
	v->a[66407] = sym_arithmetic_expansion;
	v->a[66408] = sym_string;
	v->a[66409] = sym_simple_expansion;
	v->a[66410] = sym_expansion;
	v->a[66411] = sym_command_substitution;
	v->a[66412] = 12;
	v->a[66413] = actions(3);
	v->a[66414] = 1;
	v->a[66415] = sym_comment;
	v->a[66416] = actions(2336);
	v->a[66417] = 1;
	v->a[66418] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66419] = actions(2338);
	small_parse_table_3321(v);
}

void	small_parse_table_3321(t_small_parse_table_array *v)
{
	v->a[66420] = 1;
	v->a[66421] = anon_sym_DOLLAR;
	v->a[66422] = actions(2340);
	v->a[66423] = 1;
	v->a[66424] = anon_sym_DQUOTE;
	v->a[66425] = actions(2342);
	v->a[66426] = 1;
	v->a[66427] = anon_sym_DOLLAR_LBRACE;
	v->a[66428] = actions(2344);
	v->a[66429] = 1;
	v->a[66430] = anon_sym_DOLLAR_LPAREN;
	v->a[66431] = actions(2346);
	v->a[66432] = 1;
	v->a[66433] = anon_sym_BQUOTE;
	v->a[66434] = actions(2516);
	v->a[66435] = 1;
	v->a[66436] = sym__comment_word;
	v->a[66437] = actions(2518);
	v->a[66438] = 1;
	v->a[66439] = sym__empty_value;
	small_parse_table_3322(v);
}

void	small_parse_table_3322(t_small_parse_table_array *v)
{
	v->a[66440] = state(1025);
	v->a[66441] = 1;
	v->a[66442] = sym_concatenation;
	v->a[66443] = actions(2520);
	v->a[66444] = 3;
	v->a[66445] = sym_raw_string;
	v->a[66446] = sym_number;
	v->a[66447] = sym_word;
	v->a[66448] = state(1002);
	v->a[66449] = 5;
	v->a[66450] = sym_arithmetic_expansion;
	v->a[66451] = sym_string;
	v->a[66452] = sym_simple_expansion;
	v->a[66453] = sym_expansion;
	v->a[66454] = sym_command_substitution;
	v->a[66455] = 10;
	v->a[66456] = actions(3);
	v->a[66457] = 1;
	v->a[66458] = sym_comment;
	v->a[66459] = actions(25);
	small_parse_table_3323(v);
}

void	small_parse_table_3323(t_small_parse_table_array *v)
{
	v->a[66460] = 1;
	v->a[66461] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66462] = actions(27);
	v->a[66463] = 1;
	v->a[66464] = anon_sym_DOLLAR;
	v->a[66465] = actions(29);
	v->a[66466] = 1;
	v->a[66467] = anon_sym_DQUOTE;
	v->a[66468] = actions(33);
	v->a[66469] = 1;
	v->a[66470] = anon_sym_DOLLAR_LBRACE;
	v->a[66471] = actions(35);
	v->a[66472] = 1;
	v->a[66473] = anon_sym_DOLLAR_LPAREN;
	v->a[66474] = actions(37);
	v->a[66475] = 1;
	v->a[66476] = anon_sym_BQUOTE;
	v->a[66477] = actions(2510);
	v->a[66478] = 1;
	v->a[66479] = sym__bare_dollar;
	small_parse_table_3324(v);
}

void	small_parse_table_3324(t_small_parse_table_array *v)
{
	v->a[66480] = actions(2506);
	v->a[66481] = 5;
	v->a[66482] = aux_sym_concatenation_token1;
	v->a[66483] = sym_raw_string;
	v->a[66484] = sym_number;
	v->a[66485] = sym__comment_word;
	v->a[66486] = sym_word;
	v->a[66487] = state(428);
	v->a[66488] = 5;
	v->a[66489] = sym_arithmetic_expansion;
	v->a[66490] = sym_string;
	v->a[66491] = sym_simple_expansion;
	v->a[66492] = sym_expansion;
	v->a[66493] = sym_command_substitution;
	v->a[66494] = 5;
	v->a[66495] = actions(3);
	v->a[66496] = 1;
	v->a[66497] = sym_comment;
	v->a[66498] = actions(2522);
	v->a[66499] = 1;
	small_parse_table_3325(v);
}

/* EOF small_parse_table_664.c */
