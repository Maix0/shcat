/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1918.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9590(t_small_parse_table_array *v)
{
	v->a[191800] = anon_sym_DOLLAR;
	v->a[191801] = anon_sym_POUND;
	v->a[191802] = anon_sym_AT2;
	v->a[191803] = anon_sym_0;
	v->a[191804] = anon_sym__;
	v->a[191805] = actions(1239);
	v->a[191806] = 18;
	v->a[191807] = anon_sym_PIPE_PIPE;
	v->a[191808] = anon_sym_AMP_AMP;
	v->a[191809] = anon_sym_PIPE;
	v->a[191810] = anon_sym_LT;
	v->a[191811] = anon_sym_GT;
	v->a[191812] = anon_sym_LT_LT;
	v->a[191813] = anon_sym_GT_GT;
	v->a[191814] = anon_sym_PIPE_AMP;
	v->a[191815] = anon_sym_RBRACK;
	v->a[191816] = anon_sym_AMP_GT;
	v->a[191817] = anon_sym_AMP_GT_GT;
	v->a[191818] = anon_sym_LT_AMP;
	v->a[191819] = anon_sym_GT_AMP;
	small_parse_table_9591(v);
}

void	small_parse_table_9591(t_small_parse_table_array *v)
{
	v->a[191820] = anon_sym_GT_PIPE;
	v->a[191821] = anon_sym_LT_AMP_DASH;
	v->a[191822] = anon_sym_GT_AMP_DASH;
	v->a[191823] = anon_sym_LT_LT_DASH;
	v->a[191824] = anon_sym_LT_LT_LT;
	v->a[191825] = 8;
	v->a[191826] = actions(3);
	v->a[191827] = 1;
	v->a[191828] = sym_comment;
	v->a[191829] = actions(1235);
	v->a[191830] = 1;
	v->a[191831] = sym_file_descriptor;
	v->a[191832] = actions(8556);
	v->a[191833] = 1;
	v->a[191834] = anon_sym_DQUOTE;
	v->a[191835] = actions(8560);
	v->a[191836] = 1;
	v->a[191837] = sym_variable_name;
	v->a[191838] = state(5364);
	v->a[191839] = 1;
	small_parse_table_9592(v);
}

void	small_parse_table_9592(t_small_parse_table_array *v)
{
	v->a[191840] = sym_string;
	v->a[191841] = actions(8558);
	v->a[191842] = 2;
	v->a[191843] = aux_sym__simple_variable_name_token1;
	v->a[191844] = aux_sym__multiline_variable_name_token1;
	v->a[191845] = actions(8554);
	v->a[191846] = 9;
	v->a[191847] = anon_sym_DASH;
	v->a[191848] = anon_sym_STAR;
	v->a[191849] = anon_sym_BANG;
	v->a[191850] = anon_sym_QMARK;
	v->a[191851] = anon_sym_DOLLAR;
	v->a[191852] = anon_sym_POUND;
	v->a[191853] = anon_sym_AT2;
	v->a[191854] = anon_sym_0;
	v->a[191855] = anon_sym__;
	v->a[191856] = actions(1227);
	v->a[191857] = 18;
	v->a[191858] = anon_sym_PIPE_PIPE;
	v->a[191859] = anon_sym_AMP_AMP;
	small_parse_table_9593(v);
}

void	small_parse_table_9593(t_small_parse_table_array *v)
{
	v->a[191860] = anon_sym_PIPE;
	v->a[191861] = anon_sym_LT;
	v->a[191862] = anon_sym_GT;
	v->a[191863] = anon_sym_LT_LT;
	v->a[191864] = anon_sym_GT_GT;
	v->a[191865] = anon_sym_PIPE_AMP;
	v->a[191866] = anon_sym_RBRACK;
	v->a[191867] = anon_sym_AMP_GT;
	v->a[191868] = anon_sym_AMP_GT_GT;
	v->a[191869] = anon_sym_LT_AMP;
	v->a[191870] = anon_sym_GT_AMP;
	v->a[191871] = anon_sym_GT_PIPE;
	v->a[191872] = anon_sym_LT_AMP_DASH;
	v->a[191873] = anon_sym_GT_AMP_DASH;
	v->a[191874] = anon_sym_LT_LT_DASH;
	v->a[191875] = anon_sym_LT_LT_LT;
	v->a[191876] = 5;
	v->a[191877] = actions(71);
	v->a[191878] = 1;
	v->a[191879] = sym_comment;
	small_parse_table_9594(v);
}

void	small_parse_table_9594(t_small_parse_table_array *v)
{
	v->a[191880] = actions(8552);
	v->a[191881] = 1;
	v->a[191882] = sym__special_character;
	v->a[191883] = state(3544);
	v->a[191884] = 1;
	v->a[191885] = aux_sym__literal_repeat1;
	v->a[191886] = actions(4564);
	v->a[191887] = 10;
	v->a[191888] = anon_sym_LT;
	v->a[191889] = anon_sym_GT;
	v->a[191890] = anon_sym_AMP_GT;
	v->a[191891] = anon_sym_LT_AMP;
	v->a[191892] = anon_sym_GT_AMP;
	v->a[191893] = anon_sym_DOLLAR;
	v->a[191894] = aux_sym_number_token1;
	v->a[191895] = aux_sym_number_token2;
	v->a[191896] = anon_sym_DOLLAR_LPAREN;
	v->a[191897] = sym_word;
	v->a[191898] = actions(4566);
	v->a[191899] = 21;
	small_parse_table_9595(v);
}

/* EOF small_parse_table_1918.c */
