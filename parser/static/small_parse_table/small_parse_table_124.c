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
	v->a[12400] = sym_compound_statement;
	v->a[12401] = sym_subshell;
	v->a[12402] = sym_list;
	v->a[12403] = sym_negated_command;
	v->a[12404] = sym_command;
	v->a[12405] = sym__variable_assignments;
	v->a[12406] = 31;
	v->a[12407] = actions(3);
	v->a[12408] = 1;
	v->a[12409] = sym_comment;
	v->a[12410] = actions(9);
	v->a[12411] = 1;
	v->a[12412] = anon_sym_for;
	v->a[12413] = actions(13);
	v->a[12414] = 1;
	v->a[12415] = anon_sym_if;
	v->a[12416] = actions(15);
	v->a[12417] = 1;
	v->a[12418] = anon_sym_case;
	v->a[12419] = actions(17);
	small_parse_table_621(v);
}

void	small_parse_table_621(t_small_parse_table_array *v)
{
	v->a[12420] = 1;
	v->a[12421] = anon_sym_LPAREN;
	v->a[12422] = actions(19);
	v->a[12423] = 1;
	v->a[12424] = anon_sym_LBRACE;
	v->a[12425] = actions(43);
	v->a[12426] = 1;
	v->a[12427] = sym_word;
	v->a[12428] = actions(51);
	v->a[12429] = 1;
	v->a[12430] = anon_sym_BANG;
	v->a[12431] = actions(55);
	v->a[12432] = 1;
	v->a[12433] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[12434] = actions(57);
	v->a[12435] = 1;
	v->a[12436] = anon_sym_DOLLAR;
	v->a[12437] = actions(59);
	v->a[12438] = 1;
	v->a[12439] = anon_sym_DQUOTE;
	small_parse_table_622(v);
}

void	small_parse_table_622(t_small_parse_table_array *v)
{
	v->a[12440] = actions(63);
	v->a[12441] = 1;
	v->a[12442] = anon_sym_DOLLAR_LBRACE;
	v->a[12443] = actions(65);
	v->a[12444] = 1;
	v->a[12445] = anon_sym_DOLLAR_LPAREN;
	v->a[12446] = actions(67);
	v->a[12447] = 1;
	v->a[12448] = anon_sym_BQUOTE;
	v->a[12449] = actions(69);
	v->a[12450] = 1;
	v->a[12451] = sym_file_descriptor;
	v->a[12452] = actions(71);
	v->a[12453] = 1;
	v->a[12454] = sym_variable_name;
	v->a[12455] = actions(253);
	v->a[12456] = 1;
	v->a[12457] = anon_sym_then;
	v->a[12458] = state(36);
	v->a[12459] = 1;
	small_parse_table_623(v);
}

void	small_parse_table_623(t_small_parse_table_array *v)
{
	v->a[12460] = aux_sym__terminated_statement;
	v->a[12461] = state(183);
	v->a[12462] = 1;
	v->a[12463] = sym_command_name;
	v->a[12464] = state(327);
	v->a[12465] = 1;
	v->a[12466] = sym_variable_assignment;
	v->a[12467] = state(655);
	v->a[12468] = 1;
	v->a[12469] = aux_sym_command_repeat1;
	v->a[12470] = state(661);
	v->a[12471] = 1;
	v->a[12472] = sym_concatenation;
	v->a[12473] = state(665);
	v->a[12474] = 1;
	v->a[12475] = sym_file_redirect;
	v->a[12476] = state(1142);
	v->a[12477] = 1;
	v->a[12478] = sym_pipeline;
	v->a[12479] = state(1198);
	small_parse_table_624(v);
}

void	small_parse_table_624(t_small_parse_table_array *v)
{
	v->a[12480] = 1;
	v->a[12481] = aux_sym_redirected_statement_repeat2;
	v->a[12482] = state(1901);
	v->a[12483] = 1;
	v->a[12484] = sym__statement_not_pipeline;
	v->a[12485] = actions(11);
	v->a[12486] = 2;
	v->a[12487] = anon_sym_while;
	v->a[12488] = anon_sym_until;
	v->a[12489] = actions(61);
	v->a[12490] = 2;
	v->a[12491] = sym_raw_string;
	v->a[12492] = sym_number;
	v->a[12493] = state(455);
	v->a[12494] = 5;
	v->a[12495] = sym_arithmetic_expansion;
	v->a[12496] = sym_string;
	v->a[12497] = sym_simple_expansion;
	v->a[12498] = sym_expansion;
	v->a[12499] = sym_command_substitution;
	small_parse_table_625(v);
}

/* EOF small_parse_table_124.c */
