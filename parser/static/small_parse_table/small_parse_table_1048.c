/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1048.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5240(t_small_parse_table_array *v)
{
	v->a[104800] = 1;
	v->a[104801] = aux_sym__literal_repeat1;
	v->a[104802] = actions(3738);
	v->a[104803] = 2;
	v->a[104804] = sym_test_operator;
	v->a[104805] = sym_raw_string;
	v->a[104806] = state(1208);
	v->a[104807] = 2;
	v->a[104808] = sym_concatenation;
	v->a[104809] = aux_sym_for_statement_repeat1;
	v->a[104810] = state(1685);
	v->a[104811] = 7;
	v->a[104812] = sym_arithmetic_expansion;
	v->a[104813] = sym_brace_expression;
	v->a[104814] = sym_string;
	v->a[104815] = sym_number;
	v->a[104816] = sym_simple_expansion;
	v->a[104817] = sym_expansion;
	v->a[104818] = sym_command_substitution;
	v->a[104819] = 3;
	small_parse_table_5241(v);
}

void	small_parse_table_5241(t_small_parse_table_array *v)
{
	v->a[104820] = actions(3);
	v->a[104821] = 1;
	v->a[104822] = sym_comment;
	v->a[104823] = actions(6012);
	v->a[104824] = 2;
	v->a[104825] = sym_file_descriptor;
	v->a[104826] = aux_sym_heredoc_redirect_token1;
	v->a[104827] = actions(6014);
	v->a[104828] = 22;
	v->a[104829] = anon_sym_esac;
	v->a[104830] = anon_sym_PIPE;
	v->a[104831] = anon_sym_SEMI_SEMI;
	v->a[104832] = anon_sym_SEMI_AMP;
	v->a[104833] = anon_sym_SEMI_SEMI_AMP;
	v->a[104834] = anon_sym_PIPE_AMP;
	v->a[104835] = anon_sym_AMP_AMP;
	v->a[104836] = anon_sym_PIPE_PIPE;
	v->a[104837] = anon_sym_LT;
	v->a[104838] = anon_sym_GT;
	v->a[104839] = anon_sym_GT_GT;
	small_parse_table_5242(v);
}

void	small_parse_table_5242(t_small_parse_table_array *v)
{
	v->a[104840] = anon_sym_AMP_GT;
	v->a[104841] = anon_sym_AMP_GT_GT;
	v->a[104842] = anon_sym_LT_AMP;
	v->a[104843] = anon_sym_GT_AMP;
	v->a[104844] = anon_sym_GT_PIPE;
	v->a[104845] = anon_sym_LT_AMP_DASH;
	v->a[104846] = anon_sym_GT_AMP_DASH;
	v->a[104847] = anon_sym_LT_LT;
	v->a[104848] = anon_sym_LT_LT_DASH;
	v->a[104849] = anon_sym_AMP;
	v->a[104850] = anon_sym_SEMI;
	v->a[104851] = 10;
	v->a[104852] = actions(3);
	v->a[104853] = 1;
	v->a[104854] = sym_comment;
	v->a[104855] = actions(3302);
	v->a[104856] = 1;
	v->a[104857] = aux_sym_heredoc_redirect_token1;
	v->a[104858] = actions(5970);
	v->a[104859] = 1;
	small_parse_table_5243(v);
}

void	small_parse_table_5243(t_small_parse_table_array *v)
{
	v->a[104860] = sym_file_descriptor;
	v->a[104861] = actions(2516);
	v->a[104862] = 2;
	v->a[104863] = anon_sym_PIPE;
	v->a[104864] = anon_sym_PIPE_AMP;
	v->a[104865] = actions(2945);
	v->a[104866] = 2;
	v->a[104867] = anon_sym_LT_LT;
	v->a[104868] = anon_sym_LT_LT_DASH;
	v->a[104869] = actions(3300);
	v->a[104870] = 2;
	v->a[104871] = anon_sym_AMP_AMP;
	v->a[104872] = anon_sym_PIPE_PIPE;
	v->a[104873] = actions(5968);
	v->a[104874] = 2;
	v->a[104875] = anon_sym_LT_AMP_DASH;
	v->a[104876] = anon_sym_GT_AMP_DASH;
	v->a[104877] = actions(3298);
	v->a[104878] = 3;
	v->a[104879] = anon_sym_SEMI_SEMI;
	small_parse_table_5244(v);
}

void	small_parse_table_5244(t_small_parse_table_array *v)
{
	v->a[104880] = anon_sym_AMP;
	v->a[104881] = anon_sym_SEMI;
	v->a[104882] = state(2295);
	v->a[104883] = 3;
	v->a[104884] = sym_file_redirect;
	v->a[104885] = sym_heredoc_redirect;
	v->a[104886] = aux_sym_redirected_statement_repeat1;
	v->a[104887] = actions(5966);
	v->a[104888] = 8;
	v->a[104889] = anon_sym_LT;
	v->a[104890] = anon_sym_GT;
	v->a[104891] = anon_sym_GT_GT;
	v->a[104892] = anon_sym_AMP_GT;
	v->a[104893] = anon_sym_AMP_GT_GT;
	v->a[104894] = anon_sym_LT_AMP;
	v->a[104895] = anon_sym_GT_AMP;
	v->a[104896] = anon_sym_GT_PIPE;
	v->a[104897] = 7;
	v->a[104898] = actions(3);
	v->a[104899] = 1;
	small_parse_table_5245(v);
}

/* EOF small_parse_table_1048.c */
