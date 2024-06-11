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
	v->a[10800] = state(1331);
	v->a[10801] = 1;
	v->a[10802] = aux_sym_redirected_statement_repeat2;
	v->a[10803] = state(2252);
	v->a[10804] = 1;
	v->a[10805] = sym__statement_not_pipeline;
	v->a[10806] = state(2442);
	v->a[10807] = 1;
	v->a[10808] = sym__statements;
	v->a[10809] = actions(11);
	v->a[10810] = 2;
	v->a[10811] = anon_sym_while;
	v->a[10812] = anon_sym_until;
	v->a[10813] = actions(226);
	v->a[10814] = 2;
	v->a[10815] = anon_sym_LT_AMP_DASH;
	v->a[10816] = anon_sym_GT_AMP_DASH;
	v->a[10817] = actions(228);
	v->a[10818] = 2;
	v->a[10819] = sym_raw_string;
	small_parse_table_541(v);
}

void	small_parse_table_541(t_small_parse_table_array *v)
{
	v->a[10820] = sym_number;
	v->a[10821] = state(294);
	v->a[10822] = 5;
	v->a[10823] = sym_arithmetic_expansion;
	v->a[10824] = sym_string;
	v->a[10825] = sym_simple_expansion;
	v->a[10826] = sym_expansion;
	v->a[10827] = sym_command_substitution;
	v->a[10828] = actions(224);
	v->a[10829] = 8;
	v->a[10830] = anon_sym_LT;
	v->a[10831] = anon_sym_GT;
	v->a[10832] = anon_sym_GT_GT;
	v->a[10833] = anon_sym_AMP_GT;
	v->a[10834] = anon_sym_AMP_GT_GT;
	v->a[10835] = anon_sym_LT_AMP;
	v->a[10836] = anon_sym_GT_AMP;
	v->a[10837] = anon_sym_GT_PIPE;
	v->a[10838] = state(1188);
	v->a[10839] = 12;
	small_parse_table_542(v);
}

void	small_parse_table_542(t_small_parse_table_array *v)
{
	v->a[10840] = sym_redirected_statement;
	v->a[10841] = sym_for_statement;
	v->a[10842] = sym_while_statement;
	v->a[10843] = sym_if_statement;
	v->a[10844] = sym_case_statement;
	v->a[10845] = sym_function_definition;
	v->a[10846] = sym_compound_statement;
	v->a[10847] = sym_subshell;
	v->a[10848] = sym_list;
	v->a[10849] = sym_negated_command;
	v->a[10850] = sym_command;
	v->a[10851] = sym_variable_assignments;
	v->a[10852] = 32;
	v->a[10853] = actions(3);
	v->a[10854] = 1;
	v->a[10855] = sym_comment;
	v->a[10856] = actions(9);
	v->a[10857] = 1;
	v->a[10858] = anon_sym_for;
	v->a[10859] = actions(13);
	small_parse_table_543(v);
}

void	small_parse_table_543(t_small_parse_table_array *v)
{
	v->a[10860] = 1;
	v->a[10861] = anon_sym_if;
	v->a[10862] = actions(15);
	v->a[10863] = 1;
	v->a[10864] = anon_sym_case;
	v->a[10865] = actions(17);
	v->a[10866] = 1;
	v->a[10867] = anon_sym_LPAREN;
	v->a[10868] = actions(19);
	v->a[10869] = 1;
	v->a[10870] = anon_sym_LBRACE;
	v->a[10871] = actions(59);
	v->a[10872] = 1;
	v->a[10873] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[10874] = actions(61);
	v->a[10875] = 1;
	v->a[10876] = anon_sym_DOLLAR;
	v->a[10877] = actions(63);
	v->a[10878] = 1;
	v->a[10879] = anon_sym_DQUOTE;
	small_parse_table_544(v);
}

void	small_parse_table_544(t_small_parse_table_array *v)
{
	v->a[10880] = actions(67);
	v->a[10881] = 1;
	v->a[10882] = anon_sym_DOLLAR_LBRACE;
	v->a[10883] = actions(69);
	v->a[10884] = 1;
	v->a[10885] = anon_sym_DOLLAR_LPAREN;
	v->a[10886] = actions(71);
	v->a[10887] = 1;
	v->a[10888] = anon_sym_BQUOTE;
	v->a[10889] = actions(73);
	v->a[10890] = 1;
	v->a[10891] = sym_file_descriptor;
	v->a[10892] = actions(75);
	v->a[10893] = 1;
	v->a[10894] = sym_variable_name;
	v->a[10895] = actions(236);
	v->a[10896] = 1;
	v->a[10897] = sym_word;
	v->a[10898] = actions(238);
	v->a[10899] = 1;
	small_parse_table_545(v);
}

/* EOF small_parse_table_108.c */
