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
	v->a[44800] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44801] = anon_sym_DOLLAR;
	v->a[44802] = anon_sym_DQUOTE;
	v->a[44803] = sym_raw_string;
	v->a[44804] = sym_number;
	v->a[44805] = anon_sym_DOLLAR_LBRACE;
	v->a[44806] = anon_sym_DOLLAR_LPAREN;
	v->a[44807] = anon_sym_BQUOTE;
	v->a[44808] = sym_word;
	v->a[44809] = actions(1553);
	v->a[44810] = 18;
	v->a[44811] = anon_sym_esac;
	v->a[44812] = anon_sym_PIPE;
	v->a[44813] = anon_sym_SEMI_SEMI;
	v->a[44814] = anon_sym_AMP_AMP;
	v->a[44815] = anon_sym_PIPE_PIPE;
	v->a[44816] = anon_sym_LT;
	v->a[44817] = anon_sym_GT;
	v->a[44818] = anon_sym_GT_GT;
	v->a[44819] = anon_sym_LT_AMP;
	small_parse_table_2241(v);
}

void	small_parse_table_2241(t_small_parse_table_array *v)
{
	v->a[44820] = anon_sym_GT_AMP;
	v->a[44821] = anon_sym_GT_PIPE;
	v->a[44822] = anon_sym_LT_AMP_DASH;
	v->a[44823] = anon_sym_GT_AMP_DASH;
	v->a[44824] = anon_sym_LT_LT;
	v->a[44825] = anon_sym_LT_LT_DASH;
	v->a[44826] = aux_sym_heredoc_redirect_token1;
	v->a[44827] = anon_sym_AMP;
	v->a[44828] = anon_sym_SEMI;
	v->a[44829] = 6;
	v->a[44830] = actions(3);
	v->a[44831] = 1;
	v->a[44832] = sym_comment;
	v->a[44833] = actions(1530);
	v->a[44834] = 1;
	v->a[44835] = sym_file_descriptor;
	v->a[44836] = actions(1533);
	v->a[44837] = 1;
	v->a[44838] = sym_variable_name;
	v->a[44839] = actions(1527);
	small_parse_table_2242(v);
}

void	small_parse_table_2242(t_small_parse_table_array *v)
{
	v->a[44840] = 8;
	v->a[44841] = anon_sym_LT;
	v->a[44842] = anon_sym_GT;
	v->a[44843] = anon_sym_GT_GT;
	v->a[44844] = anon_sym_LT_AMP;
	v->a[44845] = anon_sym_GT_AMP;
	v->a[44846] = anon_sym_GT_PIPE;
	v->a[44847] = anon_sym_LT_AMP_DASH;
	v->a[44848] = anon_sym_GT_AMP_DASH;
	v->a[44849] = actions(1520);
	v->a[44850] = 9;
	v->a[44851] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[44852] = anon_sym_DOLLAR;
	v->a[44853] = anon_sym_DQUOTE;
	v->a[44854] = sym_raw_string;
	v->a[44855] = sym_number;
	v->a[44856] = anon_sym_DOLLAR_LBRACE;
	v->a[44857] = anon_sym_DOLLAR_LPAREN;
	v->a[44858] = anon_sym_BQUOTE;
	v->a[44859] = sym_word;
	small_parse_table_2243(v);
}

void	small_parse_table_2243(t_small_parse_table_array *v)
{
	v->a[44860] = actions(1522);
	v->a[44861] = 10;
	v->a[44862] = anon_sym_esac;
	v->a[44863] = anon_sym_PIPE;
	v->a[44864] = anon_sym_SEMI_SEMI;
	v->a[44865] = anon_sym_AMP_AMP;
	v->a[44866] = anon_sym_PIPE_PIPE;
	v->a[44867] = anon_sym_LT_LT;
	v->a[44868] = anon_sym_LT_LT_DASH;
	v->a[44869] = aux_sym_heredoc_redirect_token1;
	v->a[44870] = anon_sym_AMP;
	v->a[44871] = anon_sym_SEMI;
	v->a[44872] = 5;
	v->a[44873] = actions(3);
	v->a[44874] = 1;
	v->a[44875] = sym_comment;
	v->a[44876] = actions(1559);
	v->a[44877] = 1;
	v->a[44878] = anon_sym_LF;
	v->a[44879] = state(678);
	small_parse_table_2244(v);
}

void	small_parse_table_2244(t_small_parse_table_array *v)
{
	v->a[44880] = 1;
	v->a[44881] = aux_sym__case_item_last_repeat2;
	v->a[44882] = actions(1562);
	v->a[44883] = 2;
	v->a[44884] = sym_file_descriptor;
	v->a[44885] = sym_variable_name;
	v->a[44886] = actions(1557);
	v->a[44887] = 25;
	v->a[44888] = anon_sym_for;
	v->a[44889] = anon_sym_while;
	v->a[44890] = anon_sym_until;
	v->a[44891] = anon_sym_if;
	v->a[44892] = anon_sym_case;
	v->a[44893] = anon_sym_LPAREN;
	v->a[44894] = anon_sym_LBRACE;
	v->a[44895] = anon_sym_BANG;
	v->a[44896] = anon_sym_LT;
	v->a[44897] = anon_sym_GT;
	v->a[44898] = anon_sym_GT_GT;
	v->a[44899] = anon_sym_LT_AMP;
	small_parse_table_2245(v);
}

/* EOF small_parse_table_448.c */
