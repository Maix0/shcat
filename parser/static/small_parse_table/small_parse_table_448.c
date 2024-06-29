/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_448.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2240(t_small_parse_table_array *v)
{
	v->a[44800] = anon_sym_DOLLAR_LPAREN;
	v->a[44801] = actions(1493);
	v->a[44802] = 1;
	v->a[44803] = anon_sym_BQUOTE;
	v->a[44804] = state(653);
	v->a[44805] = 2;
	v->a[44806] = sym_concatenation;
	v->a[44807] = aux_sym_for_statement_repeat1;
	v->a[44808] = actions(1481);
	v->a[44809] = 3;
	v->a[44810] = sym_raw_string;
	v->a[44811] = sym_number;
	v->a[44812] = sym_word;
	v->a[44813] = state(856);
	v->a[44814] = 5;
	v->a[44815] = sym_arithmetic_expansion;
	v->a[44816] = sym_string;
	v->a[44817] = sym_simple_expansion;
	v->a[44818] = sym_expansion;
	v->a[44819] = sym_command_substitution;
	small_parse_table_2241(v);
}

void	small_parse_table_2241(t_small_parse_table_array *v)
{
	v->a[44820] = actions(546);
	v->a[44821] = 15;
	v->a[44822] = anon_sym_PIPE;
	v->a[44823] = anon_sym_AMP_AMP;
	v->a[44824] = anon_sym_PIPE_PIPE;
	v->a[44825] = anon_sym_LT;
	v->a[44826] = anon_sym_GT;
	v->a[44827] = anon_sym_GT_GT;
	v->a[44828] = anon_sym_AMP_GT;
	v->a[44829] = anon_sym_AMP_GT_GT;
	v->a[44830] = anon_sym_LT_AMP;
	v->a[44831] = anon_sym_GT_AMP;
	v->a[44832] = anon_sym_GT_PIPE;
	v->a[44833] = anon_sym_LT_AMP_DASH;
	v->a[44834] = anon_sym_GT_AMP_DASH;
	v->a[44835] = anon_sym_LT_LT;
	v->a[44836] = anon_sym_LT_LT_DASH;
	v->a[44837] = 3;
	v->a[44838] = actions(3);
	v->a[44839] = 1;
	small_parse_table_2242(v);
}

void	small_parse_table_2242(t_small_parse_table_array *v)
{
	v->a[44840] = sym_comment;
	v->a[44841] = actions(1056);
	v->a[44842] = 2;
	v->a[44843] = sym_file_descriptor;
	v->a[44844] = sym__concat;
	v->a[44845] = actions(1058);
	v->a[44846] = 30;
	v->a[44847] = anon_sym_PIPE;
	v->a[44848] = anon_sym_RPAREN;
	v->a[44849] = anon_sym_SEMI_SEMI;
	v->a[44850] = anon_sym_AMP_AMP;
	v->a[44851] = anon_sym_PIPE_PIPE;
	v->a[44852] = anon_sym_LT;
	v->a[44853] = anon_sym_GT;
	v->a[44854] = anon_sym_GT_GT;
	v->a[44855] = anon_sym_AMP_GT;
	v->a[44856] = anon_sym_AMP_GT_GT;
	v->a[44857] = anon_sym_LT_AMP;
	v->a[44858] = anon_sym_GT_AMP;
	v->a[44859] = anon_sym_GT_PIPE;
	small_parse_table_2243(v);
}

void	small_parse_table_2243(t_small_parse_table_array *v)
{
	v->a[44860] = anon_sym_LT_AMP_DASH;
	v->a[44861] = anon_sym_GT_AMP_DASH;
	v->a[44862] = anon_sym_LT_LT;
	v->a[44863] = anon_sym_LT_LT_DASH;
	v->a[44864] = aux_sym_heredoc_redirect_token1;
	v->a[44865] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44866] = anon_sym_AMP;
	v->a[44867] = aux_sym_concatenation_token1;
	v->a[44868] = anon_sym_DOLLAR;
	v->a[44869] = anon_sym_DQUOTE;
	v->a[44870] = sym_raw_string;
	v->a[44871] = sym_number;
	v->a[44872] = anon_sym_DOLLAR_LBRACE;
	v->a[44873] = anon_sym_DOLLAR_LPAREN;
	v->a[44874] = anon_sym_BQUOTE;
	v->a[44875] = sym_word;
	v->a[44876] = anon_sym_SEMI;
	v->a[44877] = 12;
	v->a[44878] = actions(3);
	v->a[44879] = 1;
	small_parse_table_2244(v);
}

void	small_parse_table_2244(t_small_parse_table_array *v)
{
	v->a[44880] = sym_comment;
	v->a[44881] = actions(536);
	v->a[44882] = 1;
	v->a[44883] = sym_file_descriptor;
	v->a[44884] = actions(1498);
	v->a[44885] = 1;
	v->a[44886] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44887] = actions(1501);
	v->a[44888] = 1;
	v->a[44889] = anon_sym_DOLLAR;
	v->a[44890] = actions(1504);
	v->a[44891] = 1;
	v->a[44892] = anon_sym_DQUOTE;
	v->a[44893] = actions(1507);
	v->a[44894] = 1;
	v->a[44895] = anon_sym_DOLLAR_LBRACE;
	v->a[44896] = actions(1510);
	v->a[44897] = 1;
	v->a[44898] = anon_sym_DOLLAR_LPAREN;
	v->a[44899] = actions(1513);
	small_parse_table_2245(v);
}

/* EOF small_parse_table_448.c */
