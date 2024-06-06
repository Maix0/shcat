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
	v->a[40800] = anon_sym_DOLLAR_LPAREN;
	v->a[40801] = anon_sym_BQUOTE;
	v->a[40802] = anon_sym_DOLLAR_BQUOTE;
	v->a[40803] = sym_word;
	v->a[40804] = anon_sym_SEMI;
	v->a[40805] = 6;
	v->a[40806] = actions(3);
	v->a[40807] = 1;
	v->a[40808] = sym_comment;
	v->a[40809] = actions(3576);
	v->a[40810] = 1;
	v->a[40811] = aux_sym_concatenation_token1;
	v->a[40812] = actions(3579);
	v->a[40813] = 1;
	v->a[40814] = sym__concat;
	v->a[40815] = state(915);
	v->a[40816] = 1;
	v->a[40817] = aux_sym_concatenation_repeat1;
	v->a[40818] = actions(2654);
	v->a[40819] = 5;
	small_parse_table_2041(v);
}

void	small_parse_table_2041(t_small_parse_table_array *v)
{
	v->a[40820] = sym_file_descriptor;
	v->a[40821] = sym_test_operator;
	v->a[40822] = sym__brace_start;
	v->a[40823] = ts_builtin_sym_end;
	v->a[40824] = aux_sym_heredoc_redirect_token1;
	v->a[40825] = actions(2652);
	v->a[40826] = 32;
	v->a[40827] = anon_sym_PIPE;
	v->a[40828] = anon_sym_SEMI_SEMI;
	v->a[40829] = anon_sym_PIPE_AMP;
	v->a[40830] = anon_sym_AMP_AMP;
	v->a[40831] = anon_sym_PIPE_PIPE;
	v->a[40832] = anon_sym_LT;
	v->a[40833] = anon_sym_GT;
	v->a[40834] = anon_sym_GT_GT;
	v->a[40835] = anon_sym_AMP_GT;
	v->a[40836] = anon_sym_AMP_GT_GT;
	v->a[40837] = anon_sym_LT_AMP;
	v->a[40838] = anon_sym_GT_AMP;
	v->a[40839] = anon_sym_GT_PIPE;
	small_parse_table_2042(v);
}

void	small_parse_table_2042(t_small_parse_table_array *v)
{
	v->a[40840] = anon_sym_LT_AMP_DASH;
	v->a[40841] = anon_sym_GT_AMP_DASH;
	v->a[40842] = anon_sym_LT_LT;
	v->a[40843] = anon_sym_LT_LT_DASH;
	v->a[40844] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40845] = anon_sym_AMP;
	v->a[40846] = anon_sym_DOLLAR;
	v->a[40847] = sym__special_character;
	v->a[40848] = anon_sym_DQUOTE;
	v->a[40849] = sym_raw_string;
	v->a[40850] = aux_sym_number_token1;
	v->a[40851] = aux_sym_number_token2;
	v->a[40852] = anon_sym_DOLLAR_LBRACE;
	v->a[40853] = anon_sym_DOLLAR_LPAREN;
	v->a[40854] = anon_sym_BQUOTE;
	v->a[40855] = anon_sym_DOLLAR_BQUOTE;
	v->a[40856] = aux_sym__simple_variable_name_token1;
	v->a[40857] = sym_word;
	v->a[40858] = anon_sym_SEMI;
	v->a[40859] = 3;
	small_parse_table_2043(v);
}

void	small_parse_table_2043(t_small_parse_table_array *v)
{
	v->a[40860] = actions(3);
	v->a[40861] = 1;
	v->a[40862] = sym_comment;
	v->a[40863] = actions(3066);
	v->a[40864] = 6;
	v->a[40865] = sym_file_descriptor;
	v->a[40866] = sym__concat;
	v->a[40867] = sym_test_operator;
	v->a[40868] = sym__bare_dollar;
	v->a[40869] = sym__brace_start;
	v->a[40870] = aux_sym_heredoc_redirect_token1;
	v->a[40871] = actions(3064);
	v->a[40872] = 34;
	v->a[40873] = anon_sym_PIPE;
	v->a[40874] = anon_sym_SEMI_SEMI;
	v->a[40875] = anon_sym_SEMI_AMP;
	v->a[40876] = anon_sym_SEMI_SEMI_AMP;
	v->a[40877] = anon_sym_PIPE_AMP;
	v->a[40878] = anon_sym_AMP_AMP;
	v->a[40879] = anon_sym_PIPE_PIPE;
	small_parse_table_2044(v);
}

void	small_parse_table_2044(t_small_parse_table_array *v)
{
	v->a[40880] = anon_sym_LT;
	v->a[40881] = anon_sym_GT;
	v->a[40882] = anon_sym_GT_GT;
	v->a[40883] = anon_sym_AMP_GT;
	v->a[40884] = anon_sym_AMP_GT_GT;
	v->a[40885] = anon_sym_LT_AMP;
	v->a[40886] = anon_sym_GT_AMP;
	v->a[40887] = anon_sym_GT_PIPE;
	v->a[40888] = anon_sym_LT_AMP_DASH;
	v->a[40889] = anon_sym_GT_AMP_DASH;
	v->a[40890] = anon_sym_LT_LT;
	v->a[40891] = anon_sym_LT_LT_DASH;
	v->a[40892] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[40893] = anon_sym_AMP;
	v->a[40894] = aux_sym_concatenation_token1;
	v->a[40895] = anon_sym_DOLLAR;
	v->a[40896] = sym__special_character;
	v->a[40897] = anon_sym_DQUOTE;
	v->a[40898] = sym_raw_string;
	v->a[40899] = aux_sym_number_token1;
	small_parse_table_2045(v);
}

/* EOF small_parse_table_408.c */
