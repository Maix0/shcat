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
	v->a[10817] = actions(59);
	v->a[10818] = 1;
	v->a[10819] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_541(v);
}

void	small_parse_table_541(t_small_parse_table_array *v)
{
	v->a[10820] = actions(61);
	v->a[10821] = 1;
	v->a[10822] = anon_sym_DOLLAR;
	v->a[10823] = actions(63);
	v->a[10824] = 1;
	v->a[10825] = anon_sym_DQUOTE;
	v->a[10826] = actions(67);
	v->a[10827] = 1;
	v->a[10828] = anon_sym_DOLLAR_LBRACE;
	v->a[10829] = actions(69);
	v->a[10830] = 1;
	v->a[10831] = anon_sym_DOLLAR_LPAREN;
	v->a[10832] = actions(71);
	v->a[10833] = 1;
	v->a[10834] = anon_sym_BQUOTE;
	v->a[10835] = actions(220);
	v->a[10836] = 1;
	v->a[10837] = sym_word;
	v->a[10838] = actions(222);
	v->a[10839] = 1;
	small_parse_table_542(v);
}

void	small_parse_table_542(t_small_parse_table_array *v)
{
	v->a[10840] = anon_sym_BANG;
	v->a[10841] = actions(230);
	v->a[10842] = 1;
	v->a[10843] = sym_file_descriptor;
	v->a[10844] = actions(232);
	v->a[10845] = 1;
	v->a[10846] = sym_variable_name;
	v->a[10847] = state(133);
	v->a[10848] = 1;
	v->a[10849] = aux_sym__statements_repeat1;
	v->a[10850] = state(180);
	v->a[10851] = 1;
	v->a[10852] = sym_command_name;
	v->a[10853] = state(231);
	v->a[10854] = 1;
	v->a[10855] = sym_variable_assignment;
	v->a[10856] = state(650);
	v->a[10857] = 1;
	v->a[10858] = sym_concatenation;
	v->a[10859] = state(710);
	small_parse_table_543(v);
}

void	small_parse_table_543(t_small_parse_table_array *v)
{
	v->a[10860] = 1;
	v->a[10861] = aux_sym_command_repeat1;
	v->a[10862] = state(728);
	v->a[10863] = 1;
	v->a[10864] = sym_file_redirect;
	v->a[10865] = state(1095);
	v->a[10866] = 1;
	v->a[10867] = sym_pipeline;
	v->a[10868] = state(1282);
	v->a[10869] = 1;
	v->a[10870] = aux_sym_redirected_statement_repeat2;
	v->a[10871] = state(2127);
	v->a[10872] = 1;
	v->a[10873] = sym__statement_not_pipeline;
	v->a[10874] = state(2275);
	v->a[10875] = 1;
	v->a[10876] = sym__statements;
	v->a[10877] = actions(11);
	v->a[10878] = 2;
	v->a[10879] = anon_sym_while;
	small_parse_table_544(v);
}

void	small_parse_table_544(t_small_parse_table_array *v)
{
	v->a[10880] = anon_sym_until;
	v->a[10881] = actions(226);
	v->a[10882] = 2;
	v->a[10883] = anon_sym_LT_AMP_DASH;
	v->a[10884] = anon_sym_GT_AMP_DASH;
	v->a[10885] = actions(228);
	v->a[10886] = 2;
	v->a[10887] = sym_raw_string;
	v->a[10888] = sym_number;
	v->a[10889] = state(382);
	v->a[10890] = 5;
	v->a[10891] = sym_arithmetic_expansion;
	v->a[10892] = sym_string;
	v->a[10893] = sym_simple_expansion;
	v->a[10894] = sym_expansion;
	v->a[10895] = sym_command_substitution;
	v->a[10896] = actions(224);
	v->a[10897] = 6;
	v->a[10898] = anon_sym_LT;
	v->a[10899] = anon_sym_GT;
	small_parse_table_545(v);
}

/* EOF small_parse_table_108.c */
