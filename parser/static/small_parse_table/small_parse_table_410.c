/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_410.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2050(t_small_parse_table_array *v)
{
	v->a[41000] = sym_file_descriptor;
	v->a[41001] = sym__concat;
	v->a[41002] = sym_variable_name;
	v->a[41003] = actions(1245);
	v->a[41004] = 31;
	v->a[41005] = anon_sym_PIPE;
	v->a[41006] = anon_sym_RPAREN;
	v->a[41007] = anon_sym_SEMI_SEMI;
	v->a[41008] = anon_sym_AMP_AMP;
	v->a[41009] = anon_sym_PIPE_PIPE;
	v->a[41010] = anon_sym_LT;
	v->a[41011] = anon_sym_GT;
	v->a[41012] = anon_sym_GT_GT;
	v->a[41013] = anon_sym_AMP_GT;
	v->a[41014] = anon_sym_AMP_GT_GT;
	v->a[41015] = anon_sym_LT_AMP;
	v->a[41016] = anon_sym_GT_AMP;
	v->a[41017] = anon_sym_GT_PIPE;
	v->a[41018] = anon_sym_LT_AMP_DASH;
	v->a[41019] = anon_sym_GT_AMP_DASH;
	small_parse_table_2051(v);
}

void	small_parse_table_2051(t_small_parse_table_array *v)
{
	v->a[41020] = anon_sym_LT_LT;
	v->a[41021] = anon_sym_LT_LT_DASH;
	v->a[41022] = aux_sym_heredoc_redirect_token1;
	v->a[41023] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41024] = anon_sym_AMP;
	v->a[41025] = aux_sym_concatenation_token1;
	v->a[41026] = anon_sym_DOLLAR;
	v->a[41027] = anon_sym_DQUOTE;
	v->a[41028] = sym_raw_string;
	v->a[41029] = aux_sym_number_token1;
	v->a[41030] = aux_sym_number_token2;
	v->a[41031] = anon_sym_DOLLAR_LBRACE;
	v->a[41032] = anon_sym_DOLLAR_LPAREN;
	v->a[41033] = anon_sym_BQUOTE;
	v->a[41034] = sym_word;
	v->a[41035] = anon_sym_SEMI;
	v->a[41036] = 14;
	v->a[41037] = actions(3);
	v->a[41038] = 1;
	v->a[41039] = sym_comment;
	small_parse_table_2052(v);
}

void	small_parse_table_2052(t_small_parse_table_array *v)
{
	v->a[41040] = actions(755);
	v->a[41041] = 1;
	v->a[41042] = sym_file_descriptor;
	v->a[41043] = actions(905);
	v->a[41044] = 1;
	v->a[41045] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[41046] = actions(907);
	v->a[41047] = 1;
	v->a[41048] = anon_sym_DOLLAR;
	v->a[41049] = actions(909);
	v->a[41050] = 1;
	v->a[41051] = anon_sym_DQUOTE;
	v->a[41052] = actions(911);
	v->a[41053] = 1;
	v->a[41054] = aux_sym_number_token1;
	v->a[41055] = actions(913);
	v->a[41056] = 1;
	v->a[41057] = aux_sym_number_token2;
	v->a[41058] = actions(915);
	v->a[41059] = 1;
	small_parse_table_2053(v);
}

void	small_parse_table_2053(t_small_parse_table_array *v)
{
	v->a[41060] = anon_sym_DOLLAR_LBRACE;
	v->a[41061] = actions(917);
	v->a[41062] = 1;
	v->a[41063] = anon_sym_DOLLAR_LPAREN;
	v->a[41064] = actions(919);
	v->a[41065] = 1;
	v->a[41066] = anon_sym_BQUOTE;
	v->a[41067] = state(1099);
	v->a[41068] = 1;
	v->a[41069] = sym_concatenation;
	v->a[41070] = actions(1539);
	v->a[41071] = 2;
	v->a[41072] = sym_raw_string;
	v->a[41073] = sym_word;
	v->a[41074] = state(1303);
	v->a[41075] = 6;
	v->a[41076] = sym_arithmetic_expansion;
	v->a[41077] = sym_string;
	v->a[41078] = sym_number;
	v->a[41079] = sym_simple_expansion;
	small_parse_table_2054(v);
}

void	small_parse_table_2054(t_small_parse_table_array *v)
{
	v->a[41080] = sym_expansion;
	v->a[41081] = sym_command_substitution;
	v->a[41082] = actions(757);
	v->a[41083] = 16;
	v->a[41084] = anon_sym_PIPE;
	v->a[41085] = anon_sym_AMP_AMP;
	v->a[41086] = anon_sym_PIPE_PIPE;
	v->a[41087] = anon_sym_LT;
	v->a[41088] = anon_sym_GT;
	v->a[41089] = anon_sym_GT_GT;
	v->a[41090] = anon_sym_AMP_GT;
	v->a[41091] = anon_sym_AMP_GT_GT;
	v->a[41092] = anon_sym_LT_AMP;
	v->a[41093] = anon_sym_GT_AMP;
	v->a[41094] = anon_sym_GT_PIPE;
	v->a[41095] = anon_sym_LT_AMP_DASH;
	v->a[41096] = anon_sym_GT_AMP_DASH;
	v->a[41097] = anon_sym_LT_LT;
	v->a[41098] = anon_sym_LT_LT_DASH;
	v->a[41099] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2055(v);
}

/* EOF small_parse_table_410.c */
