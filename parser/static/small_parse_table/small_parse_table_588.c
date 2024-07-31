/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_588.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2940(t_small_parse_table_array *v)
{
	v->a[58800] = actions(2274);
	v->a[58801] = 1;
	v->a[58802] = anon_sym_DOLLAR;
	v->a[58803] = state(1528);
	v->a[58804] = 1;
	v->a[58805] = sym_concatenation;
	v->a[58806] = actions(2340);
	v->a[58807] = 3;
	v->a[58808] = sym_raw_string;
	v->a[58809] = sym_number;
	v->a[58810] = sym_word;
	v->a[58811] = state(1471);
	v->a[58812] = 5;
	v->a[58813] = sym_arithmetic_expansion;
	v->a[58814] = sym_string;
	v->a[58815] = sym_simple_expansion;
	v->a[58816] = sym_expansion;
	v->a[58817] = sym_command_substitution;
	v->a[58818] = 5;
	v->a[58819] = actions(3);
	small_parse_table_2941(v);
}

void	small_parse_table_2941(t_small_parse_table_array *v)
{
	v->a[58820] = 1;
	v->a[58821] = sym_comment;
	v->a[58822] = actions(1781);
	v->a[58823] = 1;
	v->a[58824] = aux_sym_heredoc_redirect_token1;
	v->a[58825] = state(1211);
	v->a[58826] = 2;
	v->a[58827] = sym_file_redirect;
	v->a[58828] = aux_sym_redirected_statement_repeat2;
	v->a[58829] = actions(1776);
	v->a[58830] = 5;
	v->a[58831] = anon_sym_PIPE;
	v->a[58832] = anon_sym_AMP_AMP;
	v->a[58833] = anon_sym_PIPE_PIPE;
	v->a[58834] = anon_sym_LT_LT;
	v->a[58835] = anon_sym_LT_LT_DASH;
	v->a[58836] = actions(2342);
	v->a[58837] = 7;
	v->a[58838] = anon_sym_LT;
	v->a[58839] = anon_sym_GT;
	small_parse_table_2942(v);
}

void	small_parse_table_2942(t_small_parse_table_array *v)
{
	v->a[58840] = anon_sym_GT_GT;
	v->a[58841] = anon_sym_LT_AMP;
	v->a[58842] = anon_sym_GT_AMP;
	v->a[58843] = anon_sym_GT_PIPE;
	v->a[58844] = anon_sym_LT_GT;
	v->a[58845] = 3;
	v->a[58846] = actions(407);
	v->a[58847] = 1;
	v->a[58848] = sym_comment;
	v->a[58849] = actions(439);
	v->a[58850] = 4;
	v->a[58851] = anon_sym_PIPE;
	v->a[58852] = anon_sym_LT;
	v->a[58853] = anon_sym_GT;
	v->a[58854] = anon_sym_LT_LT;
	v->a[58855] = actions(441);
	v->a[58856] = 11;
	v->a[58857] = sym__concat;
	v->a[58858] = sym_variable_name;
	v->a[58859] = anon_sym_AMP_AMP;
	small_parse_table_2943(v);
}

void	small_parse_table_2943(t_small_parse_table_array *v)
{
	v->a[58860] = anon_sym_PIPE_PIPE;
	v->a[58861] = anon_sym_GT_GT;
	v->a[58862] = anon_sym_LT_AMP;
	v->a[58863] = anon_sym_GT_AMP;
	v->a[58864] = anon_sym_GT_PIPE;
	v->a[58865] = anon_sym_LT_GT;
	v->a[58866] = anon_sym_LT_LT_DASH;
	v->a[58867] = aux_sym_concatenation_token1;
	v->a[58868] = 6;
	v->a[58869] = actions(3);
	v->a[58870] = 1;
	v->a[58871] = sym_comment;
	v->a[58872] = actions(2313);
	v->a[58873] = 1;
	v->a[58874] = aux_sym_heredoc_redirect_token1;
	v->a[58875] = actions(850);
	v->a[58876] = 2;
	v->a[58877] = anon_sym_LT_LT;
	v->a[58878] = anon_sym_LT_LT_DASH;
	v->a[58879] = actions(1213);
	small_parse_table_2944(v);
}

void	small_parse_table_2944(t_small_parse_table_array *v)
{
	v->a[58880] = 2;
	v->a[58881] = anon_sym_AMP_AMP;
	v->a[58882] = anon_sym_PIPE_PIPE;
	v->a[58883] = state(1185);
	v->a[58884] = 3;
	v->a[58885] = sym_file_redirect;
	v->a[58886] = sym_heredoc_redirect;
	v->a[58887] = aux_sym_redirected_statement_repeat1;
	v->a[58888] = actions(2307);
	v->a[58889] = 7;
	v->a[58890] = anon_sym_LT;
	v->a[58891] = anon_sym_GT;
	v->a[58892] = anon_sym_GT_GT;
	v->a[58893] = anon_sym_LT_AMP;
	v->a[58894] = anon_sym_GT_AMP;
	v->a[58895] = anon_sym_GT_PIPE;
	v->a[58896] = anon_sym_LT_GT;
	v->a[58897] = 3;
	v->a[58898] = actions(407);
	v->a[58899] = 1;
	small_parse_table_2945(v);
}

/* EOF small_parse_table_588.c */
