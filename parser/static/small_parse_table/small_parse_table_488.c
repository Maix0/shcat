/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_488.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2440(t_small_parse_table_array *v)
{
	v->a[48800] = sym_word;
	v->a[48801] = 4;
	v->a[48802] = actions(3);
	v->a[48803] = 1;
	v->a[48804] = sym_comment;
	v->a[48805] = actions(1424);
	v->a[48806] = 1;
	v->a[48807] = anon_sym_BQUOTE;
	v->a[48808] = actions(1426);
	v->a[48809] = 2;
	v->a[48810] = sym_file_descriptor;
	v->a[48811] = sym_variable_name;
	v->a[48812] = actions(1422);
	v->a[48813] = 23;
	v->a[48814] = anon_sym_for;
	v->a[48815] = anon_sym_while;
	v->a[48816] = anon_sym_until;
	v->a[48817] = anon_sym_if;
	v->a[48818] = anon_sym_case;
	v->a[48819] = anon_sym_LPAREN;
	small_parse_table_2441(v);
}

void	small_parse_table_2441(t_small_parse_table_array *v)
{
	v->a[48820] = anon_sym_LBRACE;
	v->a[48821] = anon_sym_BANG;
	v->a[48822] = anon_sym_LT;
	v->a[48823] = anon_sym_GT;
	v->a[48824] = anon_sym_GT_GT;
	v->a[48825] = anon_sym_LT_AMP;
	v->a[48826] = anon_sym_GT_AMP;
	v->a[48827] = anon_sym_GT_PIPE;
	v->a[48828] = anon_sym_LT_GT;
	v->a[48829] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48830] = anon_sym_DOLLAR;
	v->a[48831] = anon_sym_DQUOTE;
	v->a[48832] = sym_raw_string;
	v->a[48833] = sym_number;
	v->a[48834] = anon_sym_DOLLAR_LBRACE;
	v->a[48835] = anon_sym_DOLLAR_LPAREN;
	v->a[48836] = sym_word;
	v->a[48837] = 3;
	v->a[48838] = actions(3);
	v->a[48839] = 1;
	small_parse_table_2442(v);
}

void	small_parse_table_2442(t_small_parse_table_array *v)
{
	v->a[48840] = sym_comment;
	v->a[48841] = actions(713);
	v->a[48842] = 3;
	v->a[48843] = sym_file_descriptor;
	v->a[48844] = sym__concat;
	v->a[48845] = sym__bare_dollar;
	v->a[48846] = actions(711);
	v->a[48847] = 23;
	v->a[48848] = anon_sym_LPAREN;
	v->a[48849] = anon_sym_PIPE;
	v->a[48850] = anon_sym_AMP_AMP;
	v->a[48851] = anon_sym_PIPE_PIPE;
	v->a[48852] = anon_sym_LT;
	v->a[48853] = anon_sym_GT;
	v->a[48854] = anon_sym_GT_GT;
	v->a[48855] = anon_sym_LT_AMP;
	v->a[48856] = anon_sym_GT_AMP;
	v->a[48857] = anon_sym_GT_PIPE;
	v->a[48858] = anon_sym_LT_GT;
	v->a[48859] = anon_sym_LT_LT;
	small_parse_table_2443(v);
}

void	small_parse_table_2443(t_small_parse_table_array *v)
{
	v->a[48860] = anon_sym_LT_LT_DASH;
	v->a[48861] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48862] = aux_sym_concatenation_token1;
	v->a[48863] = anon_sym_DOLLAR;
	v->a[48864] = anon_sym_DQUOTE;
	v->a[48865] = sym_raw_string;
	v->a[48866] = sym_number;
	v->a[48867] = anon_sym_DOLLAR_LBRACE;
	v->a[48868] = anon_sym_DOLLAR_LPAREN;
	v->a[48869] = anon_sym_BQUOTE;
	v->a[48870] = sym_word;
	v->a[48871] = 6;
	v->a[48872] = actions(3);
	v->a[48873] = 1;
	v->a[48874] = sym_comment;
	v->a[48875] = actions(1754);
	v->a[48876] = 1;
	v->a[48877] = aux_sym_concatenation_token1;
	v->a[48878] = actions(1758);
	v->a[48879] = 1;
	small_parse_table_2444(v);
}

void	small_parse_table_2444(t_small_parse_table_array *v)
{
	v->a[48880] = sym__concat;
	v->a[48881] = state(794);
	v->a[48882] = 1;
	v->a[48883] = aux_sym_concatenation_repeat1;
	v->a[48884] = actions(1194);
	v->a[48885] = 2;
	v->a[48886] = sym_file_descriptor;
	v->a[48887] = sym_variable_name;
	v->a[48888] = actions(1196);
	v->a[48889] = 21;
	v->a[48890] = anon_sym_PIPE;
	v->a[48891] = anon_sym_AMP_AMP;
	v->a[48892] = anon_sym_PIPE_PIPE;
	v->a[48893] = anon_sym_LT;
	v->a[48894] = anon_sym_GT;
	v->a[48895] = anon_sym_GT_GT;
	v->a[48896] = anon_sym_LT_AMP;
	v->a[48897] = anon_sym_GT_AMP;
	v->a[48898] = anon_sym_GT_PIPE;
	v->a[48899] = anon_sym_LT_GT;
	small_parse_table_2445(v);
}

/* EOF small_parse_table_488.c */
