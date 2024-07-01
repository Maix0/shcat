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
	v->a[48800] = anon_sym_LBRACE;
	v->a[48801] = anon_sym_BANG;
	v->a[48802] = anon_sym_LT;
	v->a[48803] = anon_sym_GT;
	v->a[48804] = anon_sym_GT_GT;
	v->a[48805] = anon_sym_LT_AMP;
	v->a[48806] = anon_sym_GT_AMP;
	v->a[48807] = anon_sym_GT_PIPE;
	v->a[48808] = anon_sym_LT_AMP_DASH;
	v->a[48809] = anon_sym_GT_AMP_DASH;
	v->a[48810] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48811] = anon_sym_DOLLAR;
	v->a[48812] = anon_sym_DQUOTE;
	v->a[48813] = sym_raw_string;
	v->a[48814] = sym_number;
	v->a[48815] = anon_sym_DOLLAR_LBRACE;
	v->a[48816] = anon_sym_DOLLAR_LPAREN;
	v->a[48817] = anon_sym_BQUOTE;
	v->a[48818] = sym_word;
	v->a[48819] = 12;
	small_parse_table_2441(v);
}

void	small_parse_table_2441(t_small_parse_table_array *v)
{
	v->a[48820] = actions(3);
	v->a[48821] = 1;
	v->a[48822] = sym_comment;
	v->a[48823] = actions(575);
	v->a[48824] = 1;
	v->a[48825] = sym_file_descriptor;
	v->a[48826] = actions(1690);
	v->a[48827] = 1;
	v->a[48828] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48829] = actions(1692);
	v->a[48830] = 1;
	v->a[48831] = anon_sym_DOLLAR;
	v->a[48832] = actions(1694);
	v->a[48833] = 1;
	v->a[48834] = anon_sym_DQUOTE;
	v->a[48835] = actions(1696);
	v->a[48836] = 1;
	v->a[48837] = anon_sym_DOLLAR_LBRACE;
	v->a[48838] = actions(1698);
	v->a[48839] = 1;
	small_parse_table_2442(v);
}

void	small_parse_table_2442(t_small_parse_table_array *v)
{
	v->a[48840] = anon_sym_DOLLAR_LPAREN;
	v->a[48841] = actions(1700);
	v->a[48842] = 1;
	v->a[48843] = anon_sym_BQUOTE;
	v->a[48844] = state(793);
	v->a[48845] = 2;
	v->a[48846] = sym_concatenation;
	v->a[48847] = aux_sym_for_statement_repeat1;
	v->a[48848] = actions(1688);
	v->a[48849] = 3;
	v->a[48850] = sym_raw_string;
	v->a[48851] = sym_number;
	v->a[48852] = sym_word;
	v->a[48853] = state(1003);
	v->a[48854] = 5;
	v->a[48855] = sym_arithmetic_expansion;
	v->a[48856] = sym_string;
	v->a[48857] = sym_simple_expansion;
	v->a[48858] = sym_expansion;
	v->a[48859] = sym_command_substitution;
	small_parse_table_2443(v);
}

void	small_parse_table_2443(t_small_parse_table_array *v)
{
	v->a[48860] = actions(573);
	v->a[48861] = 11;
	v->a[48862] = anon_sym_AMP_AMP;
	v->a[48863] = anon_sym_PIPE_PIPE;
	v->a[48864] = anon_sym_LT;
	v->a[48865] = anon_sym_GT;
	v->a[48866] = anon_sym_GT_GT;
	v->a[48867] = anon_sym_LT_AMP;
	v->a[48868] = anon_sym_GT_AMP;
	v->a[48869] = anon_sym_GT_PIPE;
	v->a[48870] = anon_sym_LT_AMP_DASH;
	v->a[48871] = anon_sym_GT_AMP_DASH;
	v->a[48872] = aux_sym_heredoc_redirect_token1;
	v->a[48873] = 6;
	v->a[48874] = actions(3);
	v->a[48875] = 1;
	v->a[48876] = sym_comment;
	v->a[48877] = actions(1230);
	v->a[48878] = 1;
	v->a[48879] = aux_sym_concatenation_token1;
	small_parse_table_2444(v);
}

void	small_parse_table_2444(t_small_parse_table_array *v)
{
	v->a[48880] = actions(1232);
	v->a[48881] = 1;
	v->a[48882] = sym__concat;
	v->a[48883] = state(775);
	v->a[48884] = 1;
	v->a[48885] = aux_sym_concatenation_repeat1;
	v->a[48886] = actions(602);
	v->a[48887] = 2;
	v->a[48888] = sym_file_descriptor;
	v->a[48889] = sym_variable_name;
	v->a[48890] = actions(604);
	v->a[48891] = 23;
	v->a[48892] = anon_sym_PIPE;
	v->a[48893] = anon_sym_AMP_AMP;
	v->a[48894] = anon_sym_PIPE_PIPE;
	v->a[48895] = anon_sym_LT;
	v->a[48896] = anon_sym_GT;
	v->a[48897] = anon_sym_GT_GT;
	v->a[48898] = anon_sym_LT_AMP;
	v->a[48899] = anon_sym_GT_AMP;
	small_parse_table_2445(v);
}

/* EOF small_parse_table_488.c */
