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
	v->a[10800] = sym_variable_assignment;
	v->a[10801] = state(582);
	v->a[10802] = 1;
	v->a[10803] = sym_concatenation;
	v->a[10804] = state(614);
	v->a[10805] = 1;
	v->a[10806] = aux_sym_command_repeat1;
	v->a[10807] = state(769);
	v->a[10808] = 1;
	v->a[10809] = sym_file_redirect;
	v->a[10810] = state(1133);
	v->a[10811] = 1;
	v->a[10812] = aux_sym_redirected_statement_repeat2;
	v->a[10813] = state(1142);
	v->a[10814] = 1;
	v->a[10815] = sym_pipeline;
	v->a[10816] = state(2041);
	v->a[10817] = 1;
	v->a[10818] = sym__statement_not_pipeline;
	v->a[10819] = state(2199);
	small_parse_table_541(v);
}

void	small_parse_table_541(t_small_parse_table_array *v)
{
	v->a[10820] = 1;
	v->a[10821] = sym__statements;
	v->a[10822] = actions(11);
	v->a[10823] = 2;
	v->a[10824] = anon_sym_while;
	v->a[10825] = anon_sym_until;
	v->a[10826] = actions(61);
	v->a[10827] = 2;
	v->a[10828] = anon_sym_LT_AMP_DASH;
	v->a[10829] = anon_sym_GT_AMP_DASH;
	v->a[10830] = state(397);
	v->a[10831] = 6;
	v->a[10832] = sym_arithmetic_expansion;
	v->a[10833] = sym_string;
	v->a[10834] = sym_number;
	v->a[10835] = sym_simple_expansion;
	v->a[10836] = sym_expansion;
	v->a[10837] = sym_command_substitution;
	v->a[10838] = actions(59);
	v->a[10839] = 8;
	small_parse_table_542(v);
}

void	small_parse_table_542(t_small_parse_table_array *v)
{
	v->a[10840] = anon_sym_LT;
	v->a[10841] = anon_sym_GT;
	v->a[10842] = anon_sym_GT_GT;
	v->a[10843] = anon_sym_AMP_GT;
	v->a[10844] = anon_sym_AMP_GT_GT;
	v->a[10845] = anon_sym_LT_AMP;
	v->a[10846] = anon_sym_GT_AMP;
	v->a[10847] = anon_sym_GT_PIPE;
	v->a[10848] = state(1071);
	v->a[10849] = 12;
	v->a[10850] = sym_redirected_statement;
	v->a[10851] = sym_for_statement;
	v->a[10852] = sym_while_statement;
	v->a[10853] = sym_if_statement;
	v->a[10854] = sym_case_statement;
	v->a[10855] = sym_function_definition;
	v->a[10856] = sym_compound_statement;
	v->a[10857] = sym_subshell;
	v->a[10858] = sym_list;
	v->a[10859] = sym_negated_command;
	small_parse_table_543(v);
}

void	small_parse_table_543(t_small_parse_table_array *v)
{
	v->a[10860] = sym_command;
	v->a[10861] = sym_variable_assignments;
	v->a[10862] = 34;
	v->a[10863] = actions(3);
	v->a[10864] = 1;
	v->a[10865] = sym_comment;
	v->a[10866] = actions(9);
	v->a[10867] = 1;
	v->a[10868] = anon_sym_for;
	v->a[10869] = actions(13);
	v->a[10870] = 1;
	v->a[10871] = anon_sym_if;
	v->a[10872] = actions(15);
	v->a[10873] = 1;
	v->a[10874] = anon_sym_case;
	v->a[10875] = actions(17);
	v->a[10876] = 1;
	v->a[10877] = anon_sym_LPAREN;
	v->a[10878] = actions(19);
	v->a[10879] = 1;
	small_parse_table_544(v);
}

void	small_parse_table_544(t_small_parse_table_array *v)
{
	v->a[10880] = anon_sym_LBRACE;
	v->a[10881] = actions(49);
	v->a[10882] = 1;
	v->a[10883] = sym_word;
	v->a[10884] = actions(57);
	v->a[10885] = 1;
	v->a[10886] = anon_sym_BANG;
	v->a[10887] = actions(63);
	v->a[10888] = 1;
	v->a[10889] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[10890] = actions(65);
	v->a[10891] = 1;
	v->a[10892] = anon_sym_DOLLAR;
	v->a[10893] = actions(67);
	v->a[10894] = 1;
	v->a[10895] = anon_sym_DQUOTE;
	v->a[10896] = actions(69);
	v->a[10897] = 1;
	v->a[10898] = sym_raw_string;
	v->a[10899] = actions(71);
	small_parse_table_545(v);
}

/* EOF small_parse_table_108.c */
