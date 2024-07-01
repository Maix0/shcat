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
	v->a[12400] = anon_sym_BANG;
	v->a[12401] = actions(230);
	v->a[12402] = 1;
	v->a[12403] = sym_file_descriptor;
	v->a[12404] = actions(232);
	v->a[12405] = 1;
	v->a[12406] = sym_variable_name;
	v->a[12407] = state(133);
	v->a[12408] = 1;
	v->a[12409] = aux_sym__statements_repeat1;
	v->a[12410] = state(180);
	v->a[12411] = 1;
	v->a[12412] = sym_command_name;
	v->a[12413] = state(231);
	v->a[12414] = 1;
	v->a[12415] = sym_variable_assignment;
	v->a[12416] = state(650);
	v->a[12417] = 1;
	v->a[12418] = sym_concatenation;
	v->a[12419] = state(699);
	small_parse_table_621(v);
}

void	small_parse_table_621(t_small_parse_table_array *v)
{
	v->a[12420] = 1;
	v->a[12421] = sym_file_redirect;
	v->a[12422] = state(710);
	v->a[12423] = 1;
	v->a[12424] = aux_sym_command_repeat1;
	v->a[12425] = state(1095);
	v->a[12426] = 1;
	v->a[12427] = sym_pipeline;
	v->a[12428] = state(1282);
	v->a[12429] = 1;
	v->a[12430] = aux_sym_redirected_statement_repeat2;
	v->a[12431] = state(2127);
	v->a[12432] = 1;
	v->a[12433] = sym__statement_not_pipeline;
	v->a[12434] = state(2135);
	v->a[12435] = 1;
	v->a[12436] = sym__statements;
	v->a[12437] = actions(11);
	v->a[12438] = 2;
	v->a[12439] = anon_sym_while;
	small_parse_table_622(v);
}

void	small_parse_table_622(t_small_parse_table_array *v)
{
	v->a[12440] = anon_sym_until;
	v->a[12441] = actions(226);
	v->a[12442] = 2;
	v->a[12443] = anon_sym_LT_AMP_DASH;
	v->a[12444] = anon_sym_GT_AMP_DASH;
	v->a[12445] = actions(228);
	v->a[12446] = 2;
	v->a[12447] = sym_raw_string;
	v->a[12448] = sym_number;
	v->a[12449] = state(382);
	v->a[12450] = 5;
	v->a[12451] = sym_arithmetic_expansion;
	v->a[12452] = sym_string;
	v->a[12453] = sym_simple_expansion;
	v->a[12454] = sym_expansion;
	v->a[12455] = sym_command_substitution;
	v->a[12456] = actions(224);
	v->a[12457] = 6;
	v->a[12458] = anon_sym_LT;
	v->a[12459] = anon_sym_GT;
	small_parse_table_623(v);
}

void	small_parse_table_623(t_small_parse_table_array *v)
{
	v->a[12460] = anon_sym_GT_GT;
	v->a[12461] = anon_sym_LT_AMP;
	v->a[12462] = anon_sym_GT_AMP;
	v->a[12463] = anon_sym_GT_PIPE;
	v->a[12464] = state(1087);
	v->a[12465] = 12;
	v->a[12466] = sym_redirected_statement;
	v->a[12467] = sym_for_statement;
	v->a[12468] = sym_while_statement;
	v->a[12469] = sym_if_statement;
	v->a[12470] = sym_case_statement;
	v->a[12471] = sym_function_definition;
	v->a[12472] = sym_compound_statement;
	v->a[12473] = sym_subshell;
	v->a[12474] = sym_list;
	v->a[12475] = sym_negated_command;
	v->a[12476] = sym_command;
	v->a[12477] = sym__variable_assignments;
	v->a[12478] = 32;
	v->a[12479] = actions(3);
	small_parse_table_624(v);
}

void	small_parse_table_624(t_small_parse_table_array *v)
{
	v->a[12480] = 1;
	v->a[12481] = sym_comment;
	v->a[12482] = actions(9);
	v->a[12483] = 1;
	v->a[12484] = anon_sym_for;
	v->a[12485] = actions(13);
	v->a[12486] = 1;
	v->a[12487] = anon_sym_if;
	v->a[12488] = actions(15);
	v->a[12489] = 1;
	v->a[12490] = anon_sym_case;
	v->a[12491] = actions(17);
	v->a[12492] = 1;
	v->a[12493] = anon_sym_LPAREN;
	v->a[12494] = actions(19);
	v->a[12495] = 1;
	v->a[12496] = anon_sym_LBRACE;
	v->a[12497] = actions(59);
	v->a[12498] = 1;
	v->a[12499] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_625(v);
}

/* EOF small_parse_table_124.c */
