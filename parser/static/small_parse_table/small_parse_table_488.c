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
	v->a[48800] = 3;
	v->a[48801] = sym_raw_string;
	v->a[48802] = sym_number;
	v->a[48803] = sym_word;
	v->a[48804] = state(291);
	v->a[48805] = 5;
	v->a[48806] = sym_arithmetic_expansion;
	v->a[48807] = sym_string;
	v->a[48808] = sym_simple_expansion;
	v->a[48809] = sym_expansion;
	v->a[48810] = sym_command_substitution;
	v->a[48811] = actions(1197);
	v->a[48812] = 8;
	v->a[48813] = anon_sym_LT;
	v->a[48814] = anon_sym_GT;
	v->a[48815] = anon_sym_GT_GT;
	v->a[48816] = anon_sym_AMP_GT;
	v->a[48817] = anon_sym_AMP_GT_GT;
	v->a[48818] = anon_sym_LT_AMP;
	v->a[48819] = anon_sym_GT_AMP;
	small_parse_table_2441(v);
}

void	small_parse_table_2441(t_small_parse_table_array *v)
{
	v->a[48820] = anon_sym_GT_PIPE;
	v->a[48821] = 17;
	v->a[48822] = actions(3);
	v->a[48823] = 1;
	v->a[48824] = sym_comment;
	v->a[48825] = actions(59);
	v->a[48826] = 1;
	v->a[48827] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48828] = actions(61);
	v->a[48829] = 1;
	v->a[48830] = anon_sym_DOLLAR;
	v->a[48831] = actions(63);
	v->a[48832] = 1;
	v->a[48833] = anon_sym_DQUOTE;
	v->a[48834] = actions(67);
	v->a[48835] = 1;
	v->a[48836] = anon_sym_DOLLAR_LBRACE;
	v->a[48837] = actions(69);
	v->a[48838] = 1;
	v->a[48839] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2442(v);
}

void	small_parse_table_2442(t_small_parse_table_array *v)
{
	v->a[48840] = actions(71);
	v->a[48841] = 1;
	v->a[48842] = anon_sym_BQUOTE;
	v->a[48843] = actions(377);
	v->a[48844] = 1;
	v->a[48845] = sym_variable_name;
	v->a[48846] = actions(1201);
	v->a[48847] = 1;
	v->a[48848] = sym_file_descriptor;
	v->a[48849] = state(191);
	v->a[48850] = 1;
	v->a[48851] = sym_command_name;
	v->a[48852] = state(647);
	v->a[48853] = 1;
	v->a[48854] = sym_concatenation;
	v->a[48855] = state(1477);
	v->a[48856] = 1;
	v->a[48857] = sym_file_redirect;
	v->a[48858] = actions(1199);
	v->a[48859] = 2;
	small_parse_table_2443(v);
}

void	small_parse_table_2443(t_small_parse_table_array *v)
{
	v->a[48860] = anon_sym_LT_AMP_DASH;
	v->a[48861] = anon_sym_GT_AMP_DASH;
	v->a[48862] = state(1241);
	v->a[48863] = 2;
	v->a[48864] = sym_variable_assignment;
	v->a[48865] = aux_sym_command_repeat1;
	v->a[48866] = actions(65);
	v->a[48867] = 3;
	v->a[48868] = sym_raw_string;
	v->a[48869] = sym_number;
	v->a[48870] = sym_word;
	v->a[48871] = state(394);
	v->a[48872] = 5;
	v->a[48873] = sym_arithmetic_expansion;
	v->a[48874] = sym_string;
	v->a[48875] = sym_simple_expansion;
	v->a[48876] = sym_expansion;
	v->a[48877] = sym_command_substitution;
	v->a[48878] = actions(1197);
	v->a[48879] = 8;
	small_parse_table_2444(v);
}

void	small_parse_table_2444(t_small_parse_table_array *v)
{
	v->a[48880] = anon_sym_LT;
	v->a[48881] = anon_sym_GT;
	v->a[48882] = anon_sym_GT_GT;
	v->a[48883] = anon_sym_AMP_GT;
	v->a[48884] = anon_sym_AMP_GT_GT;
	v->a[48885] = anon_sym_LT_AMP;
	v->a[48886] = anon_sym_GT_AMP;
	v->a[48887] = anon_sym_GT_PIPE;
	v->a[48888] = 4;
	v->a[48889] = actions(3);
	v->a[48890] = 1;
	v->a[48891] = sym_comment;
	v->a[48892] = actions(1554);
	v->a[48893] = 2;
	v->a[48894] = anon_sym_RPAREN;
	v->a[48895] = anon_sym_SEMI_SEMI;
	v->a[48896] = actions(1556);
	v->a[48897] = 2;
	v->a[48898] = sym_file_descriptor;
	v->a[48899] = sym_variable_name;
	small_parse_table_2445(v);
}

/* EOF small_parse_table_488.c */
