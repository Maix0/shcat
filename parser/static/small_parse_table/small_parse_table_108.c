/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_108.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_540(t_small_parse_table_array *v)
{
	v->a[10800] = 1;
	v->a[10801] = anon_sym_DOLLAR_LPAREN;
	v->a[10802] = actions(67);
	v->a[10803] = 1;
	v->a[10804] = anon_sym_BQUOTE;
	v->a[10805] = actions(211);
	v->a[10806] = 1;
	v->a[10807] = sym_word;
	v->a[10808] = actions(213);
	v->a[10809] = 1;
	v->a[10810] = anon_sym_BANG;
	v->a[10811] = actions(219);
	v->a[10812] = 1;
	v->a[10813] = sym_file_descriptor;
	v->a[10814] = actions(221);
	v->a[10815] = 1;
	v->a[10816] = sym_variable_name;
	v->a[10817] = state(120);
	v->a[10818] = 1;
	v->a[10819] = aux_sym__statements_repeat1;
	small_parse_table_541(v);
}

void	small_parse_table_541(t_small_parse_table_array *v)
{
	v->a[10820] = state(177);
	v->a[10821] = 1;
	v->a[10822] = sym_command_name;
	v->a[10823] = state(208);
	v->a[10824] = 1;
	v->a[10825] = sym_variable_assignment;
	v->a[10826] = state(584);
	v->a[10827] = 1;
	v->a[10828] = sym_concatenation;
	v->a[10829] = state(620);
	v->a[10830] = 1;
	v->a[10831] = sym_file_redirect;
	v->a[10832] = state(639);
	v->a[10833] = 1;
	v->a[10834] = aux_sym_command_repeat1;
	v->a[10835] = state(1073);
	v->a[10836] = 1;
	v->a[10837] = sym_pipeline;
	v->a[10838] = state(1158);
	v->a[10839] = 1;
	small_parse_table_542(v);
}

void	small_parse_table_542(t_small_parse_table_array *v)
{
	v->a[10840] = aux_sym_redirected_statement_repeat2;
	v->a[10841] = state(1906);
	v->a[10842] = 1;
	v->a[10843] = sym__statement_not_pipeline;
	v->a[10844] = state(1953);
	v->a[10845] = 1;
	v->a[10846] = sym__statements;
	v->a[10847] = actions(11);
	v->a[10848] = 2;
	v->a[10849] = anon_sym_while;
	v->a[10850] = anon_sym_until;
	v->a[10851] = actions(217);
	v->a[10852] = 2;
	v->a[10853] = sym_raw_string;
	v->a[10854] = sym_number;
	v->a[10855] = state(347);
	v->a[10856] = 5;
	v->a[10857] = sym_arithmetic_expansion;
	v->a[10858] = sym_string;
	v->a[10859] = sym_simple_expansion;
	small_parse_table_543(v);
}

void	small_parse_table_543(t_small_parse_table_array *v)
{
	v->a[10860] = sym_expansion;
	v->a[10861] = sym_command_substitution;
	v->a[10862] = actions(215);
	v->a[10863] = 7;
	v->a[10864] = anon_sym_LT;
	v->a[10865] = anon_sym_GT;
	v->a[10866] = anon_sym_GT_GT;
	v->a[10867] = anon_sym_LT_AMP;
	v->a[10868] = anon_sym_GT_AMP;
	v->a[10869] = anon_sym_GT_PIPE;
	v->a[10870] = anon_sym_LT_GT;
	v->a[10871] = state(958);
	v->a[10872] = 12;
	v->a[10873] = sym_redirected_statement;
	v->a[10874] = sym_for_statement;
	v->a[10875] = sym_while_statement;
	v->a[10876] = sym_if_statement;
	v->a[10877] = sym_case_statement;
	v->a[10878] = sym_function_definition;
	v->a[10879] = sym_compound_statement;
	small_parse_table_544(v);
}

void	small_parse_table_544(t_small_parse_table_array *v)
{
	v->a[10880] = sym_subshell;
	v->a[10881] = sym_list;
	v->a[10882] = sym_negated_command;
	v->a[10883] = sym_command;
	v->a[10884] = sym__variable_assignments;
	v->a[10885] = 31;
	v->a[10886] = actions(3);
	v->a[10887] = 1;
	v->a[10888] = sym_comment;
	v->a[10889] = actions(9);
	v->a[10890] = 1;
	v->a[10891] = anon_sym_for;
	v->a[10892] = actions(13);
	v->a[10893] = 1;
	v->a[10894] = anon_sym_if;
	v->a[10895] = actions(15);
	v->a[10896] = 1;
	v->a[10897] = anon_sym_case;
	v->a[10898] = actions(17);
	v->a[10899] = 1;
	small_parse_table_545(v);
}

/* EOF small_parse_table_108.c */
