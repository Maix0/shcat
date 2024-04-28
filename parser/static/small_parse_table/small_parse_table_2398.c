/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2398.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11990(t_small_parse_table_array *v)
{
	v->a[239800] = actions(11278);
	v->a[239801] = 1;
	v->a[239802] = sym__concat;
	v->a[239803] = state(4251);
	v->a[239804] = 1;
	v->a[239805] = aux_sym_concatenation_repeat1;
	v->a[239806] = actions(1263);
	v->a[239807] = 3;
	v->a[239808] = sym_file_descriptor;
	v->a[239809] = sym_variable_name;
	v->a[239810] = aux_sym_heredoc_redirect_token1;
	v->a[239811] = actions(1261);
	v->a[239812] = 23;
	v->a[239813] = anon_sym_SEMI;
	v->a[239814] = anon_sym_PIPE_PIPE;
	v->a[239815] = anon_sym_AMP_AMP;
	v->a[239816] = anon_sym_PIPE;
	v->a[239817] = anon_sym_AMP;
	v->a[239818] = anon_sym_LT;
	v->a[239819] = anon_sym_GT;
	small_parse_table_11991(v);
}

void	small_parse_table_11991(t_small_parse_table_array *v)
{
	v->a[239820] = anon_sym_LT_LT;
	v->a[239821] = anon_sym_GT_GT;
	v->a[239822] = anon_sym_esac;
	v->a[239823] = anon_sym_SEMI_SEMI;
	v->a[239824] = anon_sym_SEMI_AMP;
	v->a[239825] = anon_sym_SEMI_SEMI_AMP;
	v->a[239826] = anon_sym_PIPE_AMP;
	v->a[239827] = anon_sym_AMP_GT;
	v->a[239828] = anon_sym_AMP_GT_GT;
	v->a[239829] = anon_sym_LT_AMP;
	v->a[239830] = anon_sym_GT_AMP;
	v->a[239831] = anon_sym_GT_PIPE;
	v->a[239832] = anon_sym_LT_AMP_DASH;
	v->a[239833] = anon_sym_GT_AMP_DASH;
	v->a[239834] = anon_sym_LT_LT_DASH;
	v->a[239835] = sym__special_character;
	v->a[239836] = 13;
	v->a[239837] = actions(3);
	v->a[239838] = 1;
	v->a[239839] = sym_comment;
	small_parse_table_11992(v);
}

void	small_parse_table_11992(t_small_parse_table_array *v)
{
	v->a[239840] = actions(4340);
	v->a[239841] = 1;
	v->a[239842] = aux_sym_heredoc_redirect_token1;
	v->a[239843] = actions(11284);
	v->a[239844] = 1;
	v->a[239845] = anon_sym_LT_LT_LT;
	v->a[239846] = actions(11286);
	v->a[239847] = 1;
	v->a[239848] = sym_file_descriptor;
	v->a[239849] = state(4866);
	v->a[239850] = 1;
	v->a[239851] = sym_herestring_redirect;
	v->a[239852] = actions(4251);
	v->a[239853] = 2;
	v->a[239854] = anon_sym_PIPE_PIPE;
	v->a[239855] = anon_sym_AMP_AMP;
	v->a[239856] = actions(4253);
	v->a[239857] = 2;
	v->a[239858] = anon_sym_PIPE;
	v->a[239859] = anon_sym_PIPE_AMP;
	small_parse_table_11993(v);
}

void	small_parse_table_11993(t_small_parse_table_array *v)
{
	v->a[239860] = actions(4255);
	v->a[239861] = 2;
	v->a[239862] = anon_sym_LT_LT;
	v->a[239863] = anon_sym_LT_LT_DASH;
	v->a[239864] = actions(4338);
	v->a[239865] = 2;
	v->a[239866] = anon_sym_SEMI;
	v->a[239867] = anon_sym_AMP;
	v->a[239868] = actions(11282);
	v->a[239869] = 2;
	v->a[239870] = anon_sym_LT_AMP_DASH;
	v->a[239871] = anon_sym_GT_AMP_DASH;
	v->a[239872] = state(4283);
	v->a[239873] = 3;
	v->a[239874] = sym_file_redirect;
	v->a[239875] = sym_heredoc_redirect;
	v->a[239876] = aux_sym_redirected_statement_repeat1;
	v->a[239877] = actions(2719);
	v->a[239878] = 4;
	v->a[239879] = anon_sym_esac;
	small_parse_table_11994(v);
}

void	small_parse_table_11994(t_small_parse_table_array *v)
{
	v->a[239880] = anon_sym_SEMI_SEMI;
	v->a[239881] = anon_sym_SEMI_AMP;
	v->a[239882] = anon_sym_SEMI_SEMI_AMP;
	v->a[239883] = actions(11280);
	v->a[239884] = 8;
	v->a[239885] = anon_sym_LT;
	v->a[239886] = anon_sym_GT;
	v->a[239887] = anon_sym_GT_GT;
	v->a[239888] = anon_sym_AMP_GT;
	v->a[239889] = anon_sym_AMP_GT_GT;
	v->a[239890] = anon_sym_LT_AMP;
	v->a[239891] = anon_sym_GT_AMP;
	v->a[239892] = anon_sym_GT_PIPE;
	v->a[239893] = 7;
	v->a[239894] = actions(3);
	v->a[239895] = 1;
	v->a[239896] = sym_comment;
	v->a[239897] = actions(11284);
	v->a[239898] = 1;
	v->a[239899] = anon_sym_LT_LT_LT;
	small_parse_table_11995(v);
}

/* EOF small_parse_table_2398.c */
