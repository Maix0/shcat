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
	v->a[12401] = aux_sym_redirected_statement_repeat2;
	v->a[12402] = state(1609);
	v->a[12403] = 1;
	v->a[12404] = sym__statement_not_pipeline;
	v->a[12405] = actions(11);
	v->a[12406] = 2;
	v->a[12407] = anon_sym_while;
	v->a[12408] = anon_sym_until;
	v->a[12409] = actions(59);
	v->a[12410] = 2;
	v->a[12411] = sym_raw_string;
	v->a[12412] = sym_number;
	v->a[12413] = state(425);
	v->a[12414] = 5;
	v->a[12415] = sym_arithmetic_expansion;
	v->a[12416] = sym_string;
	v->a[12417] = sym_simple_expansion;
	v->a[12418] = sym_expansion;
	v->a[12419] = sym_command_substitution;
	small_parse_table_621(v);
}

void	small_parse_table_621(t_small_parse_table_array *v)
{
	v->a[12420] = actions(51);
	v->a[12421] = 7;
	v->a[12422] = anon_sym_LT;
	v->a[12423] = anon_sym_GT;
	v->a[12424] = anon_sym_GT_GT;
	v->a[12425] = anon_sym_LT_AMP;
	v->a[12426] = anon_sym_GT_AMP;
	v->a[12427] = anon_sym_GT_PIPE;
	v->a[12428] = anon_sym_LT_GT;
	v->a[12429] = state(933);
	v->a[12430] = 12;
	v->a[12431] = sym_redirected_statement;
	v->a[12432] = sym_for_statement;
	v->a[12433] = sym_while_statement;
	v->a[12434] = sym_if_statement;
	v->a[12435] = sym_case_statement;
	v->a[12436] = sym_function_definition;
	v->a[12437] = sym_compound_statement;
	v->a[12438] = sym_subshell;
	v->a[12439] = sym_list;
	small_parse_table_622(v);
}

void	small_parse_table_622(t_small_parse_table_array *v)
{
	v->a[12440] = sym_negated_command;
	v->a[12441] = sym_command;
	v->a[12442] = sym__variable_assignments;
	v->a[12443] = 40;
	v->a[12444] = actions(3);
	v->a[12445] = 1;
	v->a[12446] = sym_comment;
	v->a[12447] = actions(7);
	v->a[12448] = 1;
	v->a[12449] = sym_word;
	v->a[12450] = actions(9);
	v->a[12451] = 1;
	v->a[12452] = anon_sym_for;
	v->a[12453] = actions(13);
	v->a[12454] = 1;
	v->a[12455] = anon_sym_if;
	v->a[12456] = actions(15);
	v->a[12457] = 1;
	v->a[12458] = anon_sym_case;
	v->a[12459] = actions(17);
	small_parse_table_623(v);
}

void	small_parse_table_623(t_small_parse_table_array *v)
{
	v->a[12460] = 1;
	v->a[12461] = anon_sym_LPAREN;
	v->a[12462] = actions(19);
	v->a[12463] = 1;
	v->a[12464] = anon_sym_LBRACE;
	v->a[12465] = actions(21);
	v->a[12466] = 1;
	v->a[12467] = anon_sym_BANG;
	v->a[12468] = actions(25);
	v->a[12469] = 1;
	v->a[12470] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[12471] = actions(27);
	v->a[12472] = 1;
	v->a[12473] = anon_sym_DOLLAR;
	v->a[12474] = actions(29);
	v->a[12475] = 1;
	v->a[12476] = anon_sym_DQUOTE;
	v->a[12477] = actions(33);
	v->a[12478] = 1;
	v->a[12479] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_624(v);
}

void	small_parse_table_624(t_small_parse_table_array *v)
{
	v->a[12480] = actions(35);
	v->a[12481] = 1;
	v->a[12482] = anon_sym_DOLLAR_LPAREN;
	v->a[12483] = actions(37);
	v->a[12484] = 1;
	v->a[12485] = anon_sym_BQUOTE;
	v->a[12486] = actions(39);
	v->a[12487] = 1;
	v->a[12488] = sym_variable_name;
	v->a[12489] = state(105);
	v->a[12490] = 1;
	v->a[12491] = aux_sym__statements_repeat1;
	v->a[12492] = state(213);
	v->a[12493] = 1;
	v->a[12494] = sym_command_name;
	v->a[12495] = state(266);
	v->a[12496] = 1;
	v->a[12497] = sym_variable_assignment;
	v->a[12498] = state(542);
	v->a[12499] = 1;
	small_parse_table_625(v);
}

/* EOF small_parse_table_124.c */
