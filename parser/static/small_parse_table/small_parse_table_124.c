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
	v->a[12400] = state(813);
	v->a[12401] = 1;
	v->a[12402] = sym_function_definition;
	v->a[12403] = state(878);
	v->a[12404] = 1;
	v->a[12405] = sym_redirected_statement;
	v->a[12406] = state(881);
	v->a[12407] = 1;
	v->a[12408] = sym_for_statement;
	v->a[12409] = state(890);
	v->a[12410] = 1;
	v->a[12411] = sym_while_statement;
	v->a[12412] = state(894);
	v->a[12413] = 1;
	v->a[12414] = sym_if_statement;
	v->a[12415] = state(896);
	v->a[12416] = 1;
	v->a[12417] = sym_case_statement;
	v->a[12418] = state(897);
	v->a[12419] = 1;
	small_parse_table_621(v);
}

void	small_parse_table_621(t_small_parse_table_array *v)
{
	v->a[12420] = sym_compound_statement;
	v->a[12421] = state(898);
	v->a[12422] = 1;
	v->a[12423] = sym_subshell;
	v->a[12424] = state(900);
	v->a[12425] = 1;
	v->a[12426] = sym__variable_assignments;
	v->a[12427] = state(901);
	v->a[12428] = 1;
	v->a[12429] = sym_list;
	v->a[12430] = state(902);
	v->a[12431] = 1;
	v->a[12432] = sym_negated_command;
	v->a[12433] = state(903);
	v->a[12434] = 1;
	v->a[12435] = sym_command;
	v->a[12436] = state(904);
	v->a[12437] = 1;
	v->a[12438] = sym_pipeline;
	v->a[12439] = state(1019);
	small_parse_table_622(v);
}

void	small_parse_table_622(t_small_parse_table_array *v)
{
	v->a[12440] = 1;
	v->a[12441] = aux_sym_redirected_statement_repeat2;
	v->a[12442] = state(1557);
	v->a[12443] = 1;
	v->a[12444] = sym__statement_not_pipeline;
	v->a[12445] = actions(11);
	v->a[12446] = 2;
	v->a[12447] = anon_sym_while;
	v->a[12448] = anon_sym_until;
	v->a[12449] = actions(214);
	v->a[12450] = 2;
	v->a[12451] = sym_raw_string;
	v->a[12452] = sym_number;
	v->a[12453] = actions(212);
	v->a[12454] = 3;
	v->a[12455] = anon_sym_LT;
	v->a[12456] = anon_sym_GT;
	v->a[12457] = anon_sym_GT_GT;
	v->a[12458] = state(277);
	v->a[12459] = 5;
	small_parse_table_623(v);
}

void	small_parse_table_623(t_small_parse_table_array *v)
{
	v->a[12460] = sym_arithmetic_expansion;
	v->a[12461] = sym_string;
	v->a[12462] = sym_simple_expansion;
	v->a[12463] = sym_expansion;
	v->a[12464] = sym_command_substitution;
	v->a[12465] = 29;
	v->a[12466] = actions(3);
	v->a[12467] = 1;
	v->a[12468] = sym_comment;
	v->a[12469] = actions(9);
	v->a[12470] = 1;
	v->a[12471] = anon_sym_for;
	v->a[12472] = actions(13);
	v->a[12473] = 1;
	v->a[12474] = anon_sym_if;
	v->a[12475] = actions(15);
	v->a[12476] = 1;
	v->a[12477] = anon_sym_case;
	v->a[12478] = actions(17);
	v->a[12479] = 1;
	small_parse_table_624(v);
}

void	small_parse_table_624(t_small_parse_table_array *v)
{
	v->a[12480] = anon_sym_LPAREN;
	v->a[12481] = actions(19);
	v->a[12482] = 1;
	v->a[12483] = anon_sym_LBRACE;
	v->a[12484] = actions(41);
	v->a[12485] = 1;
	v->a[12486] = sym_word;
	v->a[12487] = actions(49);
	v->a[12488] = 1;
	v->a[12489] = anon_sym_BANG;
	v->a[12490] = actions(53);
	v->a[12491] = 1;
	v->a[12492] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[12493] = actions(55);
	v->a[12494] = 1;
	v->a[12495] = anon_sym_DOLLAR;
	v->a[12496] = actions(57);
	v->a[12497] = 1;
	v->a[12498] = anon_sym_DQUOTE;
	v->a[12499] = actions(61);
	small_parse_table_625(v);
}

/* EOF small_parse_table_124.c */
