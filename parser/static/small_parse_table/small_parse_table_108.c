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
	v->a[10801] = sym_comment;
	v->a[10802] = actions(9);
	v->a[10803] = 1;
	v->a[10804] = anon_sym_for;
	v->a[10805] = actions(13);
	v->a[10806] = 1;
	v->a[10807] = anon_sym_if;
	v->a[10808] = actions(15);
	v->a[10809] = 1;
	v->a[10810] = anon_sym_case;
	v->a[10811] = actions(17);
	v->a[10812] = 1;
	v->a[10813] = anon_sym_LPAREN;
	v->a[10814] = actions(19);
	v->a[10815] = 1;
	v->a[10816] = anon_sym_LBRACE;
	v->a[10817] = actions(53);
	v->a[10818] = 1;
	v->a[10819] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_541(v);
}

void	small_parse_table_541(t_small_parse_table_array *v)
{
	v->a[10820] = actions(55);
	v->a[10821] = 1;
	v->a[10822] = anon_sym_DOLLAR;
	v->a[10823] = actions(57);
	v->a[10824] = 1;
	v->a[10825] = anon_sym_DQUOTE;
	v->a[10826] = actions(61);
	v->a[10827] = 1;
	v->a[10828] = anon_sym_DOLLAR_LBRACE;
	v->a[10829] = actions(63);
	v->a[10830] = 1;
	v->a[10831] = anon_sym_DOLLAR_LPAREN;
	v->a[10832] = actions(65);
	v->a[10833] = 1;
	v->a[10834] = anon_sym_BQUOTE;
	v->a[10835] = actions(67);
	v->a[10836] = 1;
	v->a[10837] = sym_variable_name;
	v->a[10838] = actions(204);
	v->a[10839] = 1;
	small_parse_table_542(v);
}

void	small_parse_table_542(t_small_parse_table_array *v)
{
	v->a[10840] = sym_word;
	v->a[10841] = actions(206);
	v->a[10842] = 1;
	v->a[10843] = anon_sym_BANG;
	v->a[10844] = state(116);
	v->a[10845] = 1;
	v->a[10846] = aux_sym__statements_repeat1;
	v->a[10847] = state(179);
	v->a[10848] = 1;
	v->a[10849] = sym_command_name;
	v->a[10850] = state(208);
	v->a[10851] = 1;
	v->a[10852] = sym_variable_assignment;
	v->a[10853] = state(385);
	v->a[10854] = 1;
	v->a[10855] = aux_sym_command_repeat1;
	v->a[10856] = state(555);
	v->a[10857] = 1;
	v->a[10858] = sym_concatenation;
	v->a[10859] = state(599);
	small_parse_table_543(v);
}

void	small_parse_table_543(t_small_parse_table_array *v)
{
	v->a[10860] = 1;
	v->a[10861] = sym_file_redirect;
	v->a[10862] = state(969);
	v->a[10863] = 1;
	v->a[10864] = sym_pipeline;
	v->a[10865] = state(1006);
	v->a[10866] = 1;
	v->a[10867] = aux_sym_redirected_statement_repeat2;
	v->a[10868] = state(1560);
	v->a[10869] = 1;
	v->a[10870] = sym__statement_not_pipeline;
	v->a[10871] = state(1702);
	v->a[10872] = 1;
	v->a[10873] = sym__statements;
	v->a[10874] = actions(11);
	v->a[10875] = 2;
	v->a[10876] = anon_sym_while;
	v->a[10877] = anon_sym_until;
	v->a[10878] = actions(59);
	v->a[10879] = 2;
	small_parse_table_544(v);
}

void	small_parse_table_544(t_small_parse_table_array *v)
{
	v->a[10880] = sym_raw_string;
	v->a[10881] = sym_number;
	v->a[10882] = actions(51);
	v->a[10883] = 3;
	v->a[10884] = anon_sym_LT;
	v->a[10885] = anon_sym_GT;
	v->a[10886] = anon_sym_GT_GT;
	v->a[10887] = state(401);
	v->a[10888] = 5;
	v->a[10889] = sym_arithmetic_expansion;
	v->a[10890] = sym_string;
	v->a[10891] = sym_simple_expansion;
	v->a[10892] = sym_expansion;
	v->a[10893] = sym_command_substitution;
	v->a[10894] = state(820);
	v->a[10895] = 12;
	v->a[10896] = sym_redirected_statement;
	v->a[10897] = sym_for_statement;
	v->a[10898] = sym_while_statement;
	v->a[10899] = sym_if_statement;
	small_parse_table_545(v);
}

/* EOF small_parse_table_108.c */
