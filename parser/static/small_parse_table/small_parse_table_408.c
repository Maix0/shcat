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
	v->a[40800] = 3;
	v->a[40801] = sym_raw_string;
	v->a[40802] = sym_number;
	v->a[40803] = sym_word;
	v->a[40804] = state(628);
	v->a[40805] = 5;
	v->a[40806] = sym_arithmetic_expansion;
	v->a[40807] = sym_string;
	v->a[40808] = sym_simple_expansion;
	v->a[40809] = sym_expansion;
	v->a[40810] = sym_command_substitution;
	v->a[40811] = actions(1162);
	v->a[40812] = 7;
	v->a[40813] = anon_sym_LT;
	v->a[40814] = anon_sym_GT;
	v->a[40815] = anon_sym_GT_GT;
	v->a[40816] = anon_sym_LT_AMP;
	v->a[40817] = anon_sym_GT_AMP;
	v->a[40818] = anon_sym_GT_PIPE;
	v->a[40819] = anon_sym_LT_GT;
	small_parse_table_2041(v);
}

void	small_parse_table_2041(t_small_parse_table_array *v)
{
	v->a[40820] = 7;
	v->a[40821] = actions(3);
	v->a[40822] = 1;
	v->a[40823] = sym_comment;
	v->a[40824] = actions(1081);
	v->a[40825] = 1;
	v->a[40826] = aux_sym_concatenation_token1;
	v->a[40827] = actions(1083);
	v->a[40828] = 1;
	v->a[40829] = sym__concat;
	v->a[40830] = actions(1445);
	v->a[40831] = 1;
	v->a[40832] = anon_sym_LPAREN;
	v->a[40833] = state(702);
	v->a[40834] = 1;
	v->a[40835] = aux_sym_concatenation_repeat1;
	v->a[40836] = actions(1051);
	v->a[40837] = 2;
	v->a[40838] = sym_file_descriptor;
	v->a[40839] = sym__bare_dollar;
	small_parse_table_2042(v);
}

void	small_parse_table_2042(t_small_parse_table_array *v)
{
	v->a[40840] = actions(1053);
	v->a[40841] = 22;
	v->a[40842] = anon_sym_PIPE;
	v->a[40843] = anon_sym_AMP_AMP;
	v->a[40844] = anon_sym_PIPE_PIPE;
	v->a[40845] = anon_sym_LT;
	v->a[40846] = anon_sym_GT;
	v->a[40847] = anon_sym_GT_GT;
	v->a[40848] = anon_sym_LT_AMP;
	v->a[40849] = anon_sym_GT_AMP;
	v->a[40850] = anon_sym_GT_PIPE;
	v->a[40851] = anon_sym_LT_GT;
	v->a[40852] = anon_sym_LT_LT;
	v->a[40853] = anon_sym_LT_LT_DASH;
	v->a[40854] = aux_sym_heredoc_redirect_token1;
	v->a[40855] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40856] = anon_sym_DOLLAR;
	v->a[40857] = anon_sym_DQUOTE;
	v->a[40858] = sym_raw_string;
	v->a[40859] = sym_number;
	small_parse_table_2043(v);
}

void	small_parse_table_2043(t_small_parse_table_array *v)
{
	v->a[40860] = anon_sym_DOLLAR_LBRACE;
	v->a[40861] = anon_sym_DOLLAR_LPAREN;
	v->a[40862] = anon_sym_BQUOTE;
	v->a[40863] = sym_word;
	v->a[40864] = 7;
	v->a[40865] = actions(3);
	v->a[40866] = 1;
	v->a[40867] = sym_comment;
	v->a[40868] = actions(1435);
	v->a[40869] = 1;
	v->a[40870] = sym_file_descriptor;
	v->a[40871] = actions(1438);
	v->a[40872] = 1;
	v->a[40873] = sym_variable_name;
	v->a[40874] = actions(1448);
	v->a[40875] = 1;
	v->a[40876] = anon_sym_RPAREN;
	v->a[40877] = actions(1432);
	v->a[40878] = 7;
	v->a[40879] = anon_sym_LT;
	small_parse_table_2044(v);
}

void	small_parse_table_2044(t_small_parse_table_array *v)
{
	v->a[40880] = anon_sym_GT;
	v->a[40881] = anon_sym_GT_GT;
	v->a[40882] = anon_sym_LT_AMP;
	v->a[40883] = anon_sym_GT_AMP;
	v->a[40884] = anon_sym_GT_PIPE;
	v->a[40885] = anon_sym_LT_GT;
	v->a[40886] = actions(1428);
	v->a[40887] = 9;
	v->a[40888] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40889] = anon_sym_DOLLAR;
	v->a[40890] = anon_sym_DQUOTE;
	v->a[40891] = sym_raw_string;
	v->a[40892] = sym_number;
	v->a[40893] = anon_sym_DOLLAR_LBRACE;
	v->a[40894] = anon_sym_DOLLAR_LPAREN;
	v->a[40895] = anon_sym_BQUOTE;
	v->a[40896] = sym_word;
	v->a[40897] = actions(1430);
	v->a[40898] = 9;
	v->a[40899] = anon_sym_PIPE;
	small_parse_table_2045(v);
}

/* EOF small_parse_table_408.c */
