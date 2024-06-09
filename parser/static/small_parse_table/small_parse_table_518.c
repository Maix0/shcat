/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_518.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2590(t_small_parse_table_array *v)
{
	v->a[51800] = aux_sym_number_token2;
	v->a[51801] = actions(1912);
	v->a[51802] = 1;
	v->a[51803] = anon_sym_DOLLAR_LBRACE;
	v->a[51804] = actions(1914);
	v->a[51805] = 1;
	v->a[51806] = anon_sym_DOLLAR_LPAREN;
	v->a[51807] = actions(1916);
	v->a[51808] = 1;
	v->a[51809] = anon_sym_BQUOTE;
	v->a[51810] = state(1665);
	v->a[51811] = 1;
	v->a[51812] = sym_concatenation;
	v->a[51813] = actions(1900);
	v->a[51814] = 2;
	v->a[51815] = sym_raw_string;
	v->a[51816] = sym_word;
	v->a[51817] = state(1502);
	v->a[51818] = 6;
	v->a[51819] = sym_arithmetic_expansion;
	small_parse_table_2591(v);
}

void	small_parse_table_2591(t_small_parse_table_array *v)
{
	v->a[51820] = sym_string;
	v->a[51821] = sym_number;
	v->a[51822] = sym_simple_expansion;
	v->a[51823] = sym_expansion;
	v->a[51824] = sym_command_substitution;
	v->a[51825] = actions(757);
	v->a[51826] = 13;
	v->a[51827] = anon_sym_AMP_AMP;
	v->a[51828] = anon_sym_PIPE_PIPE;
	v->a[51829] = anon_sym_LT;
	v->a[51830] = anon_sym_GT;
	v->a[51831] = anon_sym_GT_GT;
	v->a[51832] = anon_sym_AMP_GT;
	v->a[51833] = anon_sym_AMP_GT_GT;
	v->a[51834] = anon_sym_LT_AMP;
	v->a[51835] = anon_sym_GT_AMP;
	v->a[51836] = anon_sym_GT_PIPE;
	v->a[51837] = anon_sym_LT_AMP_DASH;
	v->a[51838] = anon_sym_GT_AMP_DASH;
	v->a[51839] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2592(v);
}

void	small_parse_table_2592(t_small_parse_table_array *v)
{
	v->a[51840] = 3;
	v->a[51841] = actions(3);
	v->a[51842] = 1;
	v->a[51843] = sym_comment;
	v->a[51844] = actions(1654);
	v->a[51845] = 2;
	v->a[51846] = sym_file_descriptor;
	v->a[51847] = sym_variable_name;
	v->a[51848] = actions(163);
	v->a[51849] = 29;
	v->a[51850] = anon_sym_for;
	v->a[51851] = anon_sym_while;
	v->a[51852] = anon_sym_until;
	v->a[51853] = anon_sym_if;
	v->a[51854] = anon_sym_case;
	v->a[51855] = anon_sym_LPAREN;
	v->a[51856] = anon_sym_LBRACE;
	v->a[51857] = anon_sym_RBRACE;
	v->a[51858] = anon_sym_BANG;
	v->a[51859] = anon_sym_LT;
	small_parse_table_2593(v);
}

void	small_parse_table_2593(t_small_parse_table_array *v)
{
	v->a[51860] = anon_sym_GT;
	v->a[51861] = anon_sym_GT_GT;
	v->a[51862] = anon_sym_AMP_GT;
	v->a[51863] = anon_sym_AMP_GT_GT;
	v->a[51864] = anon_sym_LT_AMP;
	v->a[51865] = anon_sym_GT_AMP;
	v->a[51866] = anon_sym_GT_PIPE;
	v->a[51867] = anon_sym_LT_AMP_DASH;
	v->a[51868] = anon_sym_GT_AMP_DASH;
	v->a[51869] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51870] = anon_sym_DOLLAR;
	v->a[51871] = anon_sym_DQUOTE;
	v->a[51872] = sym_raw_string;
	v->a[51873] = aux_sym_number_token1;
	v->a[51874] = aux_sym_number_token2;
	v->a[51875] = anon_sym_DOLLAR_LBRACE;
	v->a[51876] = anon_sym_DOLLAR_LPAREN;
	v->a[51877] = anon_sym_BQUOTE;
	v->a[51878] = sym_word;
	v->a[51879] = 14;
	small_parse_table_2594(v);
}

void	small_parse_table_2594(t_small_parse_table_array *v)
{
	v->a[51880] = actions(3);
	v->a[51881] = 1;
	v->a[51882] = sym_comment;
	v->a[51883] = actions(750);
	v->a[51884] = 1;
	v->a[51885] = sym_file_descriptor;
	v->a[51886] = actions(1902);
	v->a[51887] = 1;
	v->a[51888] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51889] = actions(1904);
	v->a[51890] = 1;
	v->a[51891] = anon_sym_DOLLAR;
	v->a[51892] = actions(1906);
	v->a[51893] = 1;
	v->a[51894] = anon_sym_DQUOTE;
	v->a[51895] = actions(1908);
	v->a[51896] = 1;
	v->a[51897] = aux_sym_number_token1;
	v->a[51898] = actions(1910);
	v->a[51899] = 1;
	small_parse_table_2595(v);
}

/* EOF small_parse_table_518.c */
