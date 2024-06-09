/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_124.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_620(t_small_parse_table_array *v)
{
	v->a[12400] = 1;
	v->a[12401] = sym_comment;
	v->a[12402] = actions(9);
	v->a[12403] = 1;
	v->a[12404] = anon_sym_for;
	v->a[12405] = actions(13);
	v->a[12406] = 1;
	v->a[12407] = anon_sym_if;
	v->a[12408] = actions(15);
	v->a[12409] = 1;
	v->a[12410] = anon_sym_case;
	v->a[12411] = actions(17);
	v->a[12412] = 1;
	v->a[12413] = anon_sym_LPAREN;
	v->a[12414] = actions(19);
	v->a[12415] = 1;
	v->a[12416] = anon_sym_LBRACE;
	v->a[12417] = actions(63);
	v->a[12418] = 1;
	v->a[12419] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_621(v);
}

void	small_parse_table_621(t_small_parse_table_array *v)
{
	v->a[12420] = actions(65);
	v->a[12421] = 1;
	v->a[12422] = anon_sym_DOLLAR;
	v->a[12423] = actions(67);
	v->a[12424] = 1;
	v->a[12425] = anon_sym_DQUOTE;
	v->a[12426] = actions(71);
	v->a[12427] = 1;
	v->a[12428] = aux_sym_number_token1;
	v->a[12429] = actions(73);
	v->a[12430] = 1;
	v->a[12431] = aux_sym_number_token2;
	v->a[12432] = actions(75);
	v->a[12433] = 1;
	v->a[12434] = anon_sym_DOLLAR_LBRACE;
	v->a[12435] = actions(77);
	v->a[12436] = 1;
	v->a[12437] = anon_sym_DOLLAR_LPAREN;
	v->a[12438] = actions(79);
	v->a[12439] = 1;
	small_parse_table_622(v);
}

void	small_parse_table_622(t_small_parse_table_array *v)
{
	v->a[12440] = anon_sym_BQUOTE;
	v->a[12441] = actions(248);
	v->a[12442] = 1;
	v->a[12443] = sym_word;
	v->a[12444] = actions(250);
	v->a[12445] = 1;
	v->a[12446] = anon_sym_BANG;
	v->a[12447] = actions(256);
	v->a[12448] = 1;
	v->a[12449] = sym_raw_string;
	v->a[12450] = actions(258);
	v->a[12451] = 1;
	v->a[12452] = sym_file_descriptor;
	v->a[12453] = actions(260);
	v->a[12454] = 1;
	v->a[12455] = sym_variable_name;
	v->a[12456] = state(141);
	v->a[12457] = 1;
	v->a[12458] = aux_sym__statements_repeat1;
	v->a[12459] = state(175);
	small_parse_table_623(v);
}

void	small_parse_table_623(t_small_parse_table_array *v)
{
	v->a[12460] = 1;
	v->a[12461] = sym_command_name;
	v->a[12462] = state(278);
	v->a[12463] = 1;
	v->a[12464] = sym_variable_assignment;
	v->a[12465] = state(567);
	v->a[12466] = 1;
	v->a[12467] = aux_sym_command_repeat1;
	v->a[12468] = state(582);
	v->a[12469] = 1;
	v->a[12470] = sym_concatenation;
	v->a[12471] = state(720);
	v->a[12472] = 1;
	v->a[12473] = sym_file_redirect;
	v->a[12474] = state(1100);
	v->a[12475] = 1;
	v->a[12476] = sym_pipeline;
	v->a[12477] = state(1196);
	v->a[12478] = 1;
	v->a[12479] = aux_sym_redirected_statement_repeat2;
	small_parse_table_624(v);
}

void	small_parse_table_624(t_small_parse_table_array *v)
{
	v->a[12480] = state(2037);
	v->a[12481] = 1;
	v->a[12482] = sym__statement_not_pipeline;
	v->a[12483] = state(2197);
	v->a[12484] = 1;
	v->a[12485] = sym__statements;
	v->a[12486] = actions(11);
	v->a[12487] = 2;
	v->a[12488] = anon_sym_while;
	v->a[12489] = anon_sym_until;
	v->a[12490] = actions(254);
	v->a[12491] = 2;
	v->a[12492] = anon_sym_LT_AMP_DASH;
	v->a[12493] = anon_sym_GT_AMP_DASH;
	v->a[12494] = state(295);
	v->a[12495] = 6;
	v->a[12496] = sym_arithmetic_expansion;
	v->a[12497] = sym_string;
	v->a[12498] = sym_number;
	v->a[12499] = sym_simple_expansion;
	small_parse_table_625(v);
}

/* EOF small_parse_table_124.c */
