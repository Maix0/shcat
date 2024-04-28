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
	v->a[10800] = actions(1241);
	v->a[10801] = 3;
	v->a[10802] = sym_file_descriptor;
	v->a[10803] = sym_test_operator;
	v->a[10804] = sym__brace_start;
	v->a[10805] = actions(2943);
	v->a[10806] = 9;
	v->a[10807] = anon_sym_DASH;
	v->a[10808] = anon_sym_STAR;
	v->a[10809] = anon_sym_BANG;
	v->a[10810] = anon_sym_QMARK;
	v->a[10811] = anon_sym_DOLLAR;
	v->a[10812] = anon_sym_POUND;
	v->a[10813] = anon_sym_AT2;
	v->a[10814] = anon_sym_0;
	v->a[10815] = anon_sym__;
	v->a[10816] = actions(1239);
	v->a[10817] = 38;
	v->a[10818] = anon_sym_LPAREN_LPAREN;
	v->a[10819] = anon_sym_SEMI;
	small_parse_table_541(v);
}

void	small_parse_table_541(t_small_parse_table_array *v)
{
	v->a[10820] = anon_sym_PIPE_PIPE;
	v->a[10821] = anon_sym_AMP_AMP;
	v->a[10822] = anon_sym_PIPE;
	v->a[10823] = anon_sym_AMP;
	v->a[10824] = anon_sym_LT;
	v->a[10825] = anon_sym_GT;
	v->a[10826] = anon_sym_LT_LT;
	v->a[10827] = anon_sym_GT_GT;
	v->a[10828] = anon_sym_esac;
	v->a[10829] = anon_sym_SEMI_SEMI;
	v->a[10830] = anon_sym_SEMI_AMP;
	v->a[10831] = anon_sym_SEMI_SEMI_AMP;
	v->a[10832] = anon_sym_PIPE_AMP;
	v->a[10833] = anon_sym_AMP_GT;
	v->a[10834] = anon_sym_AMP_GT_GT;
	v->a[10835] = anon_sym_LT_AMP;
	v->a[10836] = anon_sym_GT_AMP;
	v->a[10837] = anon_sym_GT_PIPE;
	v->a[10838] = anon_sym_LT_AMP_DASH;
	v->a[10839] = anon_sym_GT_AMP_DASH;
	small_parse_table_542(v);
}

void	small_parse_table_542(t_small_parse_table_array *v)
{
	v->a[10840] = anon_sym_LT_LT_DASH;
	v->a[10841] = aux_sym_heredoc_redirect_token1;
	v->a[10842] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[10843] = anon_sym_DOLLAR_LBRACK;
	v->a[10844] = sym__special_character;
	v->a[10845] = sym_raw_string;
	v->a[10846] = sym_ansi_c_string;
	v->a[10847] = aux_sym_number_token1;
	v->a[10848] = aux_sym_number_token2;
	v->a[10849] = anon_sym_DOLLAR_LBRACE;
	v->a[10850] = anon_sym_DOLLAR_LPAREN;
	v->a[10851] = anon_sym_BQUOTE;
	v->a[10852] = anon_sym_DOLLAR_BQUOTE;
	v->a[10853] = anon_sym_LT_LPAREN;
	v->a[10854] = anon_sym_GT_LPAREN;
	v->a[10855] = sym_word;
	v->a[10856] = 8;
	v->a[10857] = actions(3);
	v->a[10858] = 1;
	v->a[10859] = sym_comment;
	small_parse_table_543(v);
}

void	small_parse_table_543(t_small_parse_table_array *v)
{
	v->a[10860] = actions(2578);
	v->a[10861] = 1;
	v->a[10862] = anon_sym_DQUOTE;
	v->a[10863] = actions(2953);
	v->a[10864] = 1;
	v->a[10865] = sym_variable_name;
	v->a[10866] = state(1585);
	v->a[10867] = 1;
	v->a[10868] = sym_string;
	v->a[10869] = actions(2951);
	v->a[10870] = 2;
	v->a[10871] = aux_sym__simple_variable_name_token1;
	v->a[10872] = aux_sym__multiline_variable_name_token1;
	v->a[10873] = actions(1235);
	v->a[10874] = 3;
	v->a[10875] = sym_file_descriptor;
	v->a[10876] = sym_test_operator;
	v->a[10877] = sym__brace_start;
	v->a[10878] = actions(2949);
	v->a[10879] = 9;
	small_parse_table_544(v);
}

void	small_parse_table_544(t_small_parse_table_array *v)
{
	v->a[10880] = anon_sym_DASH;
	v->a[10881] = anon_sym_STAR;
	v->a[10882] = anon_sym_BANG;
	v->a[10883] = anon_sym_QMARK;
	v->a[10884] = anon_sym_DOLLAR;
	v->a[10885] = anon_sym_POUND;
	v->a[10886] = anon_sym_AT2;
	v->a[10887] = anon_sym_0;
	v->a[10888] = anon_sym__;
	v->a[10889] = actions(1227);
	v->a[10890] = 38;
	v->a[10891] = anon_sym_LPAREN_LPAREN;
	v->a[10892] = anon_sym_SEMI;
	v->a[10893] = anon_sym_PIPE_PIPE;
	v->a[10894] = anon_sym_AMP_AMP;
	v->a[10895] = anon_sym_PIPE;
	v->a[10896] = anon_sym_AMP;
	v->a[10897] = anon_sym_LT;
	v->a[10898] = anon_sym_GT;
	v->a[10899] = anon_sym_LT_LT;
	small_parse_table_545(v);
}

/* EOF small_parse_table_108.c */
