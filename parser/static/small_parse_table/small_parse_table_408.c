/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_408.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2040(t_small_parse_table_array *v)
{
	v->a[40800] = anon_sym_DOLLAR;
	v->a[40801] = anon_sym_DQUOTE;
	v->a[40802] = sym_raw_string;
	v->a[40803] = sym_number;
	v->a[40804] = anon_sym_DOLLAR_LBRACE;
	v->a[40805] = anon_sym_DOLLAR_LPAREN;
	v->a[40806] = anon_sym_BQUOTE;
	v->a[40807] = sym_word;
	v->a[40808] = anon_sym_SEMI;
	v->a[40809] = 3;
	v->a[40810] = actions(3);
	v->a[40811] = 1;
	v->a[40812] = sym_comment;
	v->a[40813] = actions(445);
	v->a[40814] = 1;
	v->a[40815] = sym__concat;
	v->a[40816] = actions(443);
	v->a[40817] = 22;
	v->a[40818] = anon_sym_SEMI_SEMI;
	v->a[40819] = anon_sym_AMP_AMP;
	small_parse_table_2041(v);
}

void	small_parse_table_2041(t_small_parse_table_array *v)
{
	v->a[40820] = anon_sym_PIPE_PIPE;
	v->a[40821] = anon_sym_LT;
	v->a[40822] = anon_sym_GT;
	v->a[40823] = anon_sym_GT_GT;
	v->a[40824] = anon_sym_LT_AMP;
	v->a[40825] = anon_sym_GT_AMP;
	v->a[40826] = anon_sym_GT_PIPE;
	v->a[40827] = anon_sym_LT_GT;
	v->a[40828] = aux_sym_heredoc_redirect_token1;
	v->a[40829] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40830] = aux_sym_concatenation_token1;
	v->a[40831] = anon_sym_DOLLAR;
	v->a[40832] = anon_sym_DQUOTE;
	v->a[40833] = sym_raw_string;
	v->a[40834] = sym_number;
	v->a[40835] = anon_sym_DOLLAR_LBRACE;
	v->a[40836] = anon_sym_DOLLAR_LPAREN;
	v->a[40837] = anon_sym_BQUOTE;
	v->a[40838] = sym_word;
	v->a[40839] = anon_sym_SEMI;
	small_parse_table_2042(v);
}

void	small_parse_table_2042(t_small_parse_table_array *v)
{
	v->a[40840] = 5;
	v->a[40841] = actions(3);
	v->a[40842] = 1;
	v->a[40843] = sym_comment;
	v->a[40844] = actions(1520);
	v->a[40845] = 1;
	v->a[40846] = sym_variable_name;
	v->a[40847] = actions(1518);
	v->a[40848] = 2;
	v->a[40849] = aux_sym__simple_variable_name_token1;
	v->a[40850] = aux_sym__multiline_variable_name_token1;
	v->a[40851] = actions(1516);
	v->a[40852] = 8;
	v->a[40853] = anon_sym_BANG;
	v->a[40854] = anon_sym_DASH;
	v->a[40855] = anon_sym_STAR;
	v->a[40856] = anon_sym_QMARK;
	v->a[40857] = anon_sym_DOLLAR;
	v->a[40858] = anon_sym_POUND;
	v->a[40859] = anon_sym_AT;
	small_parse_table_2043(v);
}

void	small_parse_table_2043(t_small_parse_table_array *v)
{
	v->a[40860] = anon_sym_0;
	v->a[40861] = actions(345);
	v->a[40862] = 12;
	v->a[40863] = anon_sym_PIPE;
	v->a[40864] = anon_sym_AMP_AMP;
	v->a[40865] = anon_sym_PIPE_PIPE;
	v->a[40866] = anon_sym_LT;
	v->a[40867] = anon_sym_GT;
	v->a[40868] = anon_sym_GT_GT;
	v->a[40869] = anon_sym_LT_AMP;
	v->a[40870] = anon_sym_GT_AMP;
	v->a[40871] = anon_sym_GT_PIPE;
	v->a[40872] = anon_sym_LT_GT;
	v->a[40873] = anon_sym_LT_LT;
	v->a[40874] = anon_sym_LT_LT_DASH;
	v->a[40875] = 3;
	v->a[40876] = actions(3);
	v->a[40877] = 1;
	v->a[40878] = sym_comment;
	v->a[40879] = actions(1011);
	small_parse_table_2044(v);
}

void	small_parse_table_2044(t_small_parse_table_array *v)
{
	v->a[40880] = 1;
	v->a[40881] = sym__concat;
	v->a[40882] = actions(1003);
	v->a[40883] = 22;
	v->a[40884] = anon_sym_PIPE;
	v->a[40885] = anon_sym_AMP_AMP;
	v->a[40886] = anon_sym_PIPE_PIPE;
	v->a[40887] = anon_sym_LT;
	v->a[40888] = anon_sym_GT;
	v->a[40889] = anon_sym_GT_GT;
	v->a[40890] = anon_sym_LT_AMP;
	v->a[40891] = anon_sym_GT_AMP;
	v->a[40892] = anon_sym_GT_PIPE;
	v->a[40893] = anon_sym_LT_GT;
	v->a[40894] = anon_sym_LT_LT;
	v->a[40895] = anon_sym_LT_LT_DASH;
	v->a[40896] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40897] = aux_sym_concatenation_token1;
	v->a[40898] = anon_sym_DOLLAR;
	v->a[40899] = anon_sym_DQUOTE;
	small_parse_table_2045(v);
}

/* EOF small_parse_table_408.c */
