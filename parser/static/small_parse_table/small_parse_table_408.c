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
	v->a[40800] = sym_number;
	v->a[40801] = sym_word;
	v->a[40802] = state(760);
	v->a[40803] = 5;
	v->a[40804] = sym_arithmetic_expansion;
	v->a[40805] = sym_string;
	v->a[40806] = sym_simple_expansion;
	v->a[40807] = sym_expansion;
	v->a[40808] = sym_command_substitution;
	v->a[40809] = actions(1150);
	v->a[40810] = 7;
	v->a[40811] = anon_sym_LT;
	v->a[40812] = anon_sym_GT;
	v->a[40813] = anon_sym_GT_GT;
	v->a[40814] = anon_sym_LT_AMP;
	v->a[40815] = anon_sym_GT_AMP;
	v->a[40816] = anon_sym_GT_PIPE;
	v->a[40817] = anon_sym_LT_GT;
	v->a[40818] = 3;
	v->a[40819] = actions(3);
	small_parse_table_2041(v);
}

void	small_parse_table_2041(t_small_parse_table_array *v)
{
	v->a[40820] = 1;
	v->a[40821] = sym_comment;
	v->a[40822] = actions(1158);
	v->a[40823] = 2;
	v->a[40824] = sym_file_descriptor;
	v->a[40825] = sym__bare_dollar;
	v->a[40826] = actions(1154);
	v->a[40827] = 26;
	v->a[40828] = anon_sym_PIPE;
	v->a[40829] = anon_sym_RPAREN;
	v->a[40830] = anon_sym_SEMI_SEMI;
	v->a[40831] = anon_sym_AMP_AMP;
	v->a[40832] = anon_sym_PIPE_PIPE;
	v->a[40833] = anon_sym_LT;
	v->a[40834] = anon_sym_GT;
	v->a[40835] = anon_sym_GT_GT;
	v->a[40836] = anon_sym_LT_AMP;
	v->a[40837] = anon_sym_GT_AMP;
	v->a[40838] = anon_sym_GT_PIPE;
	v->a[40839] = anon_sym_LT_GT;
	small_parse_table_2042(v);
}

void	small_parse_table_2042(t_small_parse_table_array *v)
{
	v->a[40840] = anon_sym_LT_LT;
	v->a[40841] = anon_sym_LT_LT_DASH;
	v->a[40842] = aux_sym_heredoc_redirect_token1;
	v->a[40843] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40844] = anon_sym_AMP;
	v->a[40845] = anon_sym_DOLLAR;
	v->a[40846] = anon_sym_DQUOTE;
	v->a[40847] = sym_raw_string;
	v->a[40848] = sym_number;
	v->a[40849] = anon_sym_DOLLAR_LBRACE;
	v->a[40850] = anon_sym_DOLLAR_LPAREN;
	v->a[40851] = anon_sym_BQUOTE;
	v->a[40852] = sym_word;
	v->a[40853] = anon_sym_SEMI;
	v->a[40854] = 7;
	v->a[40855] = actions(3);
	v->a[40856] = 1;
	v->a[40857] = sym_comment;
	v->a[40858] = actions(1432);
	v->a[40859] = 1;
	small_parse_table_2043(v);
}

void	small_parse_table_2043(t_small_parse_table_array *v)
{
	v->a[40860] = sym_file_descriptor;
	v->a[40861] = actions(1435);
	v->a[40862] = 1;
	v->a[40863] = sym_variable_name;
	v->a[40864] = actions(1452);
	v->a[40865] = 1;
	v->a[40866] = anon_sym_RPAREN;
	v->a[40867] = actions(1429);
	v->a[40868] = 7;
	v->a[40869] = anon_sym_LT;
	v->a[40870] = anon_sym_GT;
	v->a[40871] = anon_sym_GT_GT;
	v->a[40872] = anon_sym_LT_AMP;
	v->a[40873] = anon_sym_GT_AMP;
	v->a[40874] = anon_sym_GT_PIPE;
	v->a[40875] = anon_sym_LT_GT;
	v->a[40876] = actions(1422);
	v->a[40877] = 9;
	v->a[40878] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40879] = anon_sym_DOLLAR;
	small_parse_table_2044(v);
}

void	small_parse_table_2044(t_small_parse_table_array *v)
{
	v->a[40880] = anon_sym_DQUOTE;
	v->a[40881] = sym_raw_string;
	v->a[40882] = sym_number;
	v->a[40883] = anon_sym_DOLLAR_LBRACE;
	v->a[40884] = anon_sym_DOLLAR_LPAREN;
	v->a[40885] = anon_sym_BQUOTE;
	v->a[40886] = sym_word;
	v->a[40887] = actions(1424);
	v->a[40888] = 9;
	v->a[40889] = anon_sym_PIPE;
	v->a[40890] = anon_sym_SEMI_SEMI;
	v->a[40891] = anon_sym_AMP_AMP;
	v->a[40892] = anon_sym_PIPE_PIPE;
	v->a[40893] = anon_sym_LT_LT;
	v->a[40894] = anon_sym_LT_LT_DASH;
	v->a[40895] = aux_sym_heredoc_redirect_token1;
	v->a[40896] = anon_sym_AMP;
	v->a[40897] = anon_sym_SEMI;
	v->a[40898] = 3;
	v->a[40899] = actions(3);
	small_parse_table_2045(v);
}

/* EOF small_parse_table_408.c */
