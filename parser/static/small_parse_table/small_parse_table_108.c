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
	v->a[10800] = anon_sym_LT_AMP;
	v->a[10801] = anon_sym_GT_AMP;
	v->a[10802] = anon_sym_GT_PIPE;
	v->a[10803] = anon_sym_LT_AMP_DASH;
	v->a[10804] = anon_sym_GT_AMP_DASH;
	v->a[10805] = anon_sym_LT_LT;
	v->a[10806] = anon_sym_LT_LT_DASH;
	v->a[10807] = aux_sym_heredoc_redirect_token1;
	v->a[10808] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[10809] = anon_sym_AMP;
	v->a[10810] = sym__special_character;
	v->a[10811] = anon_sym_DQUOTE;
	v->a[10812] = sym_raw_string;
	v->a[10813] = aux_sym_number_token1;
	v->a[10814] = aux_sym_number_token2;
	v->a[10815] = anon_sym_DOLLAR_LBRACE;
	v->a[10816] = anon_sym_DOLLAR_LPAREN;
	v->a[10817] = anon_sym_BQUOTE;
	v->a[10818] = anon_sym_DOLLAR_BQUOTE;
	v->a[10819] = sym_word;
	small_parse_table_541(v);
}

void	small_parse_table_541(t_small_parse_table_array *v)
{
	v->a[10820] = anon_sym_SEMI;
	v->a[10821] = 19;
	v->a[10822] = actions(3);
	v->a[10823] = 1;
	v->a[10824] = sym_comment;
	v->a[10825] = actions(2178);
	v->a[10826] = 1;
	v->a[10827] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[10828] = actions(2180);
	v->a[10829] = 1;
	v->a[10830] = anon_sym_DOLLAR;
	v->a[10831] = actions(2182);
	v->a[10832] = 1;
	v->a[10833] = sym__special_character;
	v->a[10834] = actions(2184);
	v->a[10835] = 1;
	v->a[10836] = anon_sym_DQUOTE;
	v->a[10837] = actions(2186);
	v->a[10838] = 1;
	v->a[10839] = aux_sym_number_token1;
	small_parse_table_542(v);
}

void	small_parse_table_542(t_small_parse_table_array *v)
{
	v->a[10840] = actions(2188);
	v->a[10841] = 1;
	v->a[10842] = aux_sym_number_token2;
	v->a[10843] = actions(2190);
	v->a[10844] = 1;
	v->a[10845] = anon_sym_DOLLAR_LBRACE;
	v->a[10846] = actions(2192);
	v->a[10847] = 1;
	v->a[10848] = anon_sym_DOLLAR_LPAREN;
	v->a[10849] = actions(2194);
	v->a[10850] = 1;
	v->a[10851] = anon_sym_BQUOTE;
	v->a[10852] = actions(2196);
	v->a[10853] = 1;
	v->a[10854] = anon_sym_DOLLAR_BQUOTE;
	v->a[10855] = actions(2200);
	v->a[10856] = 1;
	v->a[10857] = sym__brace_start;
	v->a[10858] = actions(2282);
	v->a[10859] = 1;
	small_parse_table_543(v);
}

void	small_parse_table_543(t_small_parse_table_array *v)
{
	v->a[10860] = sym_test_operator;
	v->a[10861] = state(2099);
	v->a[10862] = 1;
	v->a[10863] = aux_sym__literal_repeat1;
	v->a[10864] = state(2376);
	v->a[10865] = 1;
	v->a[10866] = sym_concatenation;
	v->a[10867] = actions(1534);
	v->a[10868] = 2;
	v->a[10869] = sym_file_descriptor;
	v->a[10870] = aux_sym_heredoc_redirect_token1;
	v->a[10871] = actions(2280);
	v->a[10872] = 2;
	v->a[10873] = sym_raw_string;
	v->a[10874] = sym_word;
	v->a[10875] = state(1972);
	v->a[10876] = 7;
	v->a[10877] = sym_arithmetic_expansion;
	v->a[10878] = sym_brace_expression;
	v->a[10879] = sym_string;
	small_parse_table_544(v);
}

void	small_parse_table_544(t_small_parse_table_array *v)
{
	v->a[10880] = sym_number;
	v->a[10881] = sym_simple_expansion;
	v->a[10882] = sym_expansion;
	v->a[10883] = sym_command_substitution;
	v->a[10884] = actions(1532);
	v->a[10885] = 21;
	v->a[10886] = anon_sym_PIPE;
	v->a[10887] = anon_sym_SEMI_SEMI;
	v->a[10888] = anon_sym_SEMI_AMP;
	v->a[10889] = anon_sym_SEMI_SEMI_AMP;
	v->a[10890] = anon_sym_PIPE_AMP;
	v->a[10891] = anon_sym_AMP_AMP;
	v->a[10892] = anon_sym_PIPE_PIPE;
	v->a[10893] = anon_sym_LT;
	v->a[10894] = anon_sym_GT;
	v->a[10895] = anon_sym_GT_GT;
	v->a[10896] = anon_sym_AMP_GT;
	v->a[10897] = anon_sym_AMP_GT_GT;
	v->a[10898] = anon_sym_LT_AMP;
	v->a[10899] = anon_sym_GT_AMP;
	small_parse_table_545(v);
}

/* EOF small_parse_table_108.c */
