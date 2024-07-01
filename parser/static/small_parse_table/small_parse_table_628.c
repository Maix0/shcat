/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_628.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3140(t_small_parse_table_array *v)
{
	v->a[62800] = anon_sym_BQUOTE;
	v->a[62801] = anon_sym_SEMI;
	v->a[62802] = 9;
	v->a[62803] = actions(3);
	v->a[62804] = 1;
	v->a[62805] = sym_comment;
	v->a[62806] = actions(1889);
	v->a[62807] = 1;
	v->a[62808] = sym_file_descriptor;
	v->a[62809] = actions(1987);
	v->a[62810] = 1;
	v->a[62811] = aux_sym_heredoc_redirect_token1;
	v->a[62812] = state(599);
	v->a[62813] = 1;
	v->a[62814] = sym_terminator;
	v->a[62815] = actions(744);
	v->a[62816] = 2;
	v->a[62817] = anon_sym_LT_LT;
	v->a[62818] = anon_sym_LT_LT_DASH;
	v->a[62819] = actions(955);
	small_parse_table_3141(v);
}

void	small_parse_table_3141(t_small_parse_table_array *v)
{
	v->a[62820] = 2;
	v->a[62821] = anon_sym_AMP_AMP;
	v->a[62822] = anon_sym_PIPE_PIPE;
	v->a[62823] = actions(964);
	v->a[62824] = 3;
	v->a[62825] = anon_sym_SEMI_SEMI;
	v->a[62826] = anon_sym_AMP;
	v->a[62827] = anon_sym_SEMI;
	v->a[62828] = state(1194);
	v->a[62829] = 3;
	v->a[62830] = sym_file_redirect;
	v->a[62831] = sym_heredoc_redirect;
	v->a[62832] = aux_sym_redirected_statement_repeat1;
	v->a[62833] = actions(1887);
	v->a[62834] = 7;
	v->a[62835] = anon_sym_LT;
	v->a[62836] = anon_sym_GT;
	v->a[62837] = anon_sym_GT_GT;
	v->a[62838] = anon_sym_LT_AMP;
	v->a[62839] = anon_sym_GT_AMP;
	small_parse_table_3142(v);
}

void	small_parse_table_3142(t_small_parse_table_array *v)
{
	v->a[62840] = anon_sym_GT_PIPE;
	v->a[62841] = anon_sym_LT_GT;
	v->a[62842] = 10;
	v->a[62843] = actions(3);
	v->a[62844] = 1;
	v->a[62845] = sym_comment;
	v->a[62846] = actions(738);
	v->a[62847] = 1;
	v->a[62848] = anon_sym_SEMI_SEMI;
	v->a[62849] = actions(1865);
	v->a[62850] = 1;
	v->a[62851] = aux_sym_heredoc_redirect_token1;
	v->a[62852] = actions(1889);
	v->a[62853] = 1;
	v->a[62854] = sym_file_descriptor;
	v->a[62855] = state(631);
	v->a[62856] = 1;
	v->a[62857] = sym_terminator;
	v->a[62858] = actions(740);
	v->a[62859] = 2;
	small_parse_table_3143(v);
}

void	small_parse_table_3143(t_small_parse_table_array *v)
{
	v->a[62860] = anon_sym_AMP;
	v->a[62861] = anon_sym_SEMI;
	v->a[62862] = actions(744);
	v->a[62863] = 2;
	v->a[62864] = anon_sym_LT_LT;
	v->a[62865] = anon_sym_LT_LT_DASH;
	v->a[62866] = actions(955);
	v->a[62867] = 2;
	v->a[62868] = anon_sym_AMP_AMP;
	v->a[62869] = anon_sym_PIPE_PIPE;
	v->a[62870] = state(1194);
	v->a[62871] = 3;
	v->a[62872] = sym_file_redirect;
	v->a[62873] = sym_heredoc_redirect;
	v->a[62874] = aux_sym_redirected_statement_repeat1;
	v->a[62875] = actions(1887);
	v->a[62876] = 7;
	v->a[62877] = anon_sym_LT;
	v->a[62878] = anon_sym_GT;
	v->a[62879] = anon_sym_GT_GT;
	small_parse_table_3144(v);
}

void	small_parse_table_3144(t_small_parse_table_array *v)
{
	v->a[62880] = anon_sym_LT_AMP;
	v->a[62881] = anon_sym_GT_AMP;
	v->a[62882] = anon_sym_GT_PIPE;
	v->a[62883] = anon_sym_LT_GT;
	v->a[62884] = 6;
	v->a[62885] = actions(3);
	v->a[62886] = 1;
	v->a[62887] = sym_comment;
	v->a[62888] = actions(2001);
	v->a[62889] = 1;
	v->a[62890] = aux_sym_heredoc_redirect_token1;
	v->a[62891] = actions(2209);
	v->a[62892] = 1;
	v->a[62893] = sym_file_descriptor;
	v->a[62894] = state(1172);
	v->a[62895] = 2;
	v->a[62896] = sym_file_redirect;
	v->a[62897] = aux_sym_redirected_statement_repeat2;
	v->a[62898] = actions(2206);
	v->a[62899] = 7;
	small_parse_table_3145(v);
}

/* EOF small_parse_table_628.c */
