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
	v->a[12400] = 2;
	v->a[12401] = anon_sym_LT_AMP_DASH;
	v->a[12402] = anon_sym_GT_AMP_DASH;
	v->a[12403] = actions(228);
	v->a[12404] = 2;
	v->a[12405] = sym_raw_string;
	v->a[12406] = sym_number;
	v->a[12407] = state(299);
	v->a[12408] = 5;
	v->a[12409] = sym_arithmetic_expansion;
	v->a[12410] = sym_string;
	v->a[12411] = sym_simple_expansion;
	v->a[12412] = sym_expansion;
	v->a[12413] = sym_command_substitution;
	v->a[12414] = actions(224);
	v->a[12415] = 8;
	v->a[12416] = anon_sym_LT;
	v->a[12417] = anon_sym_GT;
	v->a[12418] = anon_sym_GT_GT;
	v->a[12419] = anon_sym_AMP_GT;
	small_parse_table_621(v);
}

void	small_parse_table_621(t_small_parse_table_array *v)
{
	v->a[12420] = anon_sym_AMP_GT_GT;
	v->a[12421] = anon_sym_LT_AMP;
	v->a[12422] = anon_sym_GT_AMP;
	v->a[12423] = anon_sym_GT_PIPE;
	v->a[12424] = state(1072);
	v->a[12425] = 12;
	v->a[12426] = sym_redirected_statement;
	v->a[12427] = sym_for_statement;
	v->a[12428] = sym_while_statement;
	v->a[12429] = sym_if_statement;
	v->a[12430] = sym_case_statement;
	v->a[12431] = sym_function_definition;
	v->a[12432] = sym_compound_statement;
	v->a[12433] = sym_subshell;
	v->a[12434] = sym_list;
	v->a[12435] = sym_negated_command;
	v->a[12436] = sym_command;
	v->a[12437] = sym__variable_assignments;
	v->a[12438] = 32;
	v->a[12439] = actions(3);
	small_parse_table_622(v);
}

void	small_parse_table_622(t_small_parse_table_array *v)
{
	v->a[12440] = 1;
	v->a[12441] = sym_comment;
	v->a[12442] = actions(9);
	v->a[12443] = 1;
	v->a[12444] = anon_sym_for;
	v->a[12445] = actions(13);
	v->a[12446] = 1;
	v->a[12447] = anon_sym_if;
	v->a[12448] = actions(15);
	v->a[12449] = 1;
	v->a[12450] = anon_sym_case;
	v->a[12451] = actions(17);
	v->a[12452] = 1;
	v->a[12453] = anon_sym_LPAREN;
	v->a[12454] = actions(19);
	v->a[12455] = 1;
	v->a[12456] = anon_sym_LBRACE;
	v->a[12457] = actions(59);
	v->a[12458] = 1;
	v->a[12459] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_623(v);
}

void	small_parse_table_623(t_small_parse_table_array *v)
{
	v->a[12460] = actions(61);
	v->a[12461] = 1;
	v->a[12462] = anon_sym_DOLLAR;
	v->a[12463] = actions(63);
	v->a[12464] = 1;
	v->a[12465] = anon_sym_DQUOTE;
	v->a[12466] = actions(67);
	v->a[12467] = 1;
	v->a[12468] = anon_sym_DOLLAR_LBRACE;
	v->a[12469] = actions(69);
	v->a[12470] = 1;
	v->a[12471] = anon_sym_DOLLAR_LPAREN;
	v->a[12472] = actions(71);
	v->a[12473] = 1;
	v->a[12474] = anon_sym_BQUOTE;
	v->a[12475] = actions(220);
	v->a[12476] = 1;
	v->a[12477] = sym_word;
	v->a[12478] = actions(222);
	v->a[12479] = 1;
	small_parse_table_624(v);
}

void	small_parse_table_624(t_small_parse_table_array *v)
{
	v->a[12480] = anon_sym_BANG;
	v->a[12481] = actions(230);
	v->a[12482] = 1;
	v->a[12483] = sym_file_descriptor;
	v->a[12484] = actions(232);
	v->a[12485] = 1;
	v->a[12486] = sym_variable_name;
	v->a[12487] = state(138);
	v->a[12488] = 1;
	v->a[12489] = aux_sym__statements_repeat1;
	v->a[12490] = state(185);
	v->a[12491] = 1;
	v->a[12492] = sym_command_name;
	v->a[12493] = state(235);
	v->a[12494] = 1;
	v->a[12495] = sym_variable_assignment;
	v->a[12496] = state(624);
	v->a[12497] = 1;
	v->a[12498] = sym_concatenation;
	v->a[12499] = state(725);
	small_parse_table_625(v);
}

/* EOF small_parse_table_124.c */
