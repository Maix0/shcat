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
	v->a[66400] = 1;
	v->a[66401] = sym_concatenation;
	v->a[66402] = actions(2478);
	v->a[66403] = 3;
	v->a[66404] = sym_raw_string;
	v->a[66405] = sym_number;
	v->a[66406] = sym_word;
	v->a[66407] = state(931);
	v->a[66408] = 5;
	v->a[66409] = sym_arithmetic_expansion;
	v->a[66410] = sym_string;
	v->a[66411] = sym_simple_expansion;
	v->a[66412] = sym_expansion;
	v->a[66413] = sym_command_substitution;
	v->a[66414] = 10;
	v->a[66415] = actions(3);
	v->a[66416] = 1;
	v->a[66417] = sym_comment;
	v->a[66418] = actions(2416);
	v->a[66419] = 1;
	small_parse_table_3321(v);
}

void	small_parse_table_3321(t_small_parse_table_array *v)
{
	v->a[66420] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66421] = actions(2420);
	v->a[66422] = 1;
	v->a[66423] = anon_sym_DQUOTE;
	v->a[66424] = actions(2422);
	v->a[66425] = 1;
	v->a[66426] = anon_sym_DOLLAR_LBRACE;
	v->a[66427] = actions(2424);
	v->a[66428] = 1;
	v->a[66429] = anon_sym_DOLLAR_LPAREN;
	v->a[66430] = actions(2426);
	v->a[66431] = 1;
	v->a[66432] = anon_sym_BQUOTE;
	v->a[66433] = actions(2428);
	v->a[66434] = 1;
	v->a[66435] = sym__bare_dollar;
	v->a[66436] = actions(2484);
	v->a[66437] = 1;
	v->a[66438] = anon_sym_DOLLAR;
	v->a[66439] = actions(2414);
	small_parse_table_3322(v);
}

void	small_parse_table_3322(t_small_parse_table_array *v)
{
	v->a[66440] = 5;
	v->a[66441] = aux_sym_concatenation_token1;
	v->a[66442] = sym_raw_string;
	v->a[66443] = sym_number;
	v->a[66444] = sym__comment_word;
	v->a[66445] = sym_word;
	v->a[66446] = state(1041);
	v->a[66447] = 5;
	v->a[66448] = sym_arithmetic_expansion;
	v->a[66449] = sym_string;
	v->a[66450] = sym_simple_expansion;
	v->a[66451] = sym_expansion;
	v->a[66452] = sym_command_substitution;
	v->a[66453] = 10;
	v->a[66454] = actions(3);
	v->a[66455] = 1;
	v->a[66456] = sym_comment;
	v->a[66457] = actions(443);
	v->a[66458] = 1;
	v->a[66459] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_3323(v);
}

void	small_parse_table_3323(t_small_parse_table_array *v)
{
	v->a[66460] = actions(447);
	v->a[66461] = 1;
	v->a[66462] = anon_sym_DQUOTE;
	v->a[66463] = actions(449);
	v->a[66464] = 1;
	v->a[66465] = anon_sym_DOLLAR_LBRACE;
	v->a[66466] = actions(451);
	v->a[66467] = 1;
	v->a[66468] = anon_sym_DOLLAR_LPAREN;
	v->a[66469] = actions(453);
	v->a[66470] = 1;
	v->a[66471] = anon_sym_BQUOTE;
	v->a[66472] = actions(2370);
	v->a[66473] = 1;
	v->a[66474] = sym__bare_dollar;
	v->a[66475] = actions(2486);
	v->a[66476] = 1;
	v->a[66477] = anon_sym_DOLLAR;
	v->a[66478] = actions(2368);
	v->a[66479] = 5;
	small_parse_table_3324(v);
}

void	small_parse_table_3324(t_small_parse_table_array *v)
{
	v->a[66480] = aux_sym_concatenation_token1;
	v->a[66481] = sym_raw_string;
	v->a[66482] = sym_number;
	v->a[66483] = sym__comment_word;
	v->a[66484] = sym_word;
	v->a[66485] = state(490);
	v->a[66486] = 5;
	v->a[66487] = sym_arithmetic_expansion;
	v->a[66488] = sym_string;
	v->a[66489] = sym_simple_expansion;
	v->a[66490] = sym_expansion;
	v->a[66491] = sym_command_substitution;
	v->a[66492] = 12;
	v->a[66493] = actions(3);
	v->a[66494] = 1;
	v->a[66495] = sym_comment;
	v->a[66496] = actions(2490);
	v->a[66497] = 1;
	v->a[66498] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66499] = actions(2492);
	small_parse_table_3325(v);
}

/* EOF small_parse_table_664.c */
