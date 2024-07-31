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
	v->a[10801] = sym__statements;
	v->a[10802] = actions(11);
	v->a[10803] = 2;
	v->a[10804] = anon_sym_while;
	v->a[10805] = anon_sym_until;
	v->a[10806] = actions(212);
	v->a[10807] = 2;
	v->a[10808] = sym_raw_string;
	v->a[10809] = sym_number;
	v->a[10810] = state(327);
	v->a[10811] = 5;
	v->a[10812] = sym_arithmetic_expansion;
	v->a[10813] = sym_string;
	v->a[10814] = sym_simple_expansion;
	v->a[10815] = sym_expansion;
	v->a[10816] = sym_command_substitution;
	v->a[10817] = actions(210);
	v->a[10818] = 7;
	v->a[10819] = anon_sym_LT;
	small_parse_table_541(v);
}

void	small_parse_table_541(t_small_parse_table_array *v)
{
	v->a[10820] = anon_sym_GT;
	v->a[10821] = anon_sym_GT_GT;
	v->a[10822] = anon_sym_LT_AMP;
	v->a[10823] = anon_sym_GT_AMP;
	v->a[10824] = anon_sym_GT_PIPE;
	v->a[10825] = anon_sym_LT_GT;
	v->a[10826] = state(884);
	v->a[10827] = 12;
	v->a[10828] = sym_redirected_statement;
	v->a[10829] = sym_for_statement;
	v->a[10830] = sym_while_statement;
	v->a[10831] = sym_if_statement;
	v->a[10832] = sym_case_statement;
	v->a[10833] = sym_function_definition;
	v->a[10834] = sym_compound_statement;
	v->a[10835] = sym_subshell;
	v->a[10836] = sym_list;
	v->a[10837] = sym_negated_command;
	v->a[10838] = sym_command;
	v->a[10839] = sym__variable_assignments;
	small_parse_table_542(v);
}

void	small_parse_table_542(t_small_parse_table_array *v)
{
	v->a[10840] = 30;
	v->a[10841] = actions(3);
	v->a[10842] = 1;
	v->a[10843] = sym_comment;
	v->a[10844] = actions(133);
	v->a[10845] = 1;
	v->a[10846] = sym_word;
	v->a[10847] = actions(136);
	v->a[10848] = 1;
	v->a[10849] = anon_sym_for;
	v->a[10850] = actions(142);
	v->a[10851] = 1;
	v->a[10852] = anon_sym_if;
	v->a[10853] = actions(145);
	v->a[10854] = 1;
	v->a[10855] = anon_sym_RBRACE;
	v->a[10856] = actions(147);
	v->a[10857] = 1;
	v->a[10858] = anon_sym_case;
	v->a[10859] = actions(150);
	small_parse_table_543(v);
}

void	small_parse_table_543(t_small_parse_table_array *v)
{
	v->a[10860] = 1;
	v->a[10861] = anon_sym_LPAREN;
	v->a[10862] = actions(153);
	v->a[10863] = 1;
	v->a[10864] = anon_sym_LBRACE;
	v->a[10865] = actions(156);
	v->a[10866] = 1;
	v->a[10867] = anon_sym_BANG;
	v->a[10868] = actions(162);
	v->a[10869] = 1;
	v->a[10870] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[10871] = actions(165);
	v->a[10872] = 1;
	v->a[10873] = anon_sym_DOLLAR;
	v->a[10874] = actions(168);
	v->a[10875] = 1;
	v->a[10876] = anon_sym_DQUOTE;
	v->a[10877] = actions(174);
	v->a[10878] = 1;
	v->a[10879] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_544(v);
}

void	small_parse_table_544(t_small_parse_table_array *v)
{
	v->a[10880] = actions(177);
	v->a[10881] = 1;
	v->a[10882] = anon_sym_DOLLAR_LPAREN;
	v->a[10883] = actions(180);
	v->a[10884] = 1;
	v->a[10885] = anon_sym_BQUOTE;
	v->a[10886] = actions(183);
	v->a[10887] = 1;
	v->a[10888] = sym_variable_name;
	v->a[10889] = state(95);
	v->a[10890] = 1;
	v->a[10891] = aux_sym__terminated_statement;
	v->a[10892] = state(271);
	v->a[10893] = 1;
	v->a[10894] = sym_command_name;
	v->a[10895] = state(302);
	v->a[10896] = 1;
	v->a[10897] = sym_variable_assignment;
	v->a[10898] = state(482);
	v->a[10899] = 1;
	small_parse_table_545(v);
}

/* EOF small_parse_table_108.c */
