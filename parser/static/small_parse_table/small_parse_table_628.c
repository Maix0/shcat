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
	v->a[62800] = 2;
	v->a[62801] = anon_sym_LT_AMP_DASH;
	v->a[62802] = anon_sym_GT_AMP_DASH;
	v->a[62803] = actions(800);
	v->a[62804] = 3;
	v->a[62805] = anon_sym_SEMI_SEMI;
	v->a[62806] = anon_sym_AMP;
	v->a[62807] = anon_sym_SEMI;
	v->a[62808] = state(1137);
	v->a[62809] = 3;
	v->a[62810] = sym_file_redirect;
	v->a[62811] = sym_heredoc_redirect;
	v->a[62812] = aux_sym_redirected_statement_repeat1;
	v->a[62813] = actions(2039);
	v->a[62814] = 8;
	v->a[62815] = anon_sym_LT;
	v->a[62816] = anon_sym_GT;
	v->a[62817] = anon_sym_GT_GT;
	v->a[62818] = anon_sym_AMP_GT;
	v->a[62819] = anon_sym_AMP_GT_GT;
	small_parse_table_3141(v);
}

void	small_parse_table_3141(t_small_parse_table_array *v)
{
	v->a[62820] = anon_sym_LT_AMP;
	v->a[62821] = anon_sym_GT_AMP;
	v->a[62822] = anon_sym_GT_PIPE;
	v->a[62823] = 12;
	v->a[62824] = actions(3);
	v->a[62825] = 1;
	v->a[62826] = sym_comment;
	v->a[62827] = actions(766);
	v->a[62828] = 1;
	v->a[62829] = anon_sym_PIPE;
	v->a[62830] = actions(840);
	v->a[62831] = 1;
	v->a[62832] = ts_builtin_sym_end;
	v->a[62833] = actions(2017);
	v->a[62834] = 1;
	v->a[62835] = aux_sym_heredoc_redirect_token1;
	v->a[62836] = actions(2019);
	v->a[62837] = 1;
	v->a[62838] = sym_file_descriptor;
	v->a[62839] = state(774);
	small_parse_table_3142(v);
}

void	small_parse_table_3142(t_small_parse_table_array *v)
{
	v->a[62840] = 1;
	v->a[62841] = sym_terminator;
	v->a[62842] = actions(804);
	v->a[62843] = 2;
	v->a[62844] = anon_sym_LT_LT;
	v->a[62845] = anon_sym_LT_LT_DASH;
	v->a[62846] = actions(835);
	v->a[62847] = 2;
	v->a[62848] = anon_sym_AMP_AMP;
	v->a[62849] = anon_sym_PIPE_PIPE;
	v->a[62850] = actions(2015);
	v->a[62851] = 2;
	v->a[62852] = anon_sym_LT_AMP_DASH;
	v->a[62853] = anon_sym_GT_AMP_DASH;
	v->a[62854] = actions(833);
	v->a[62855] = 3;
	v->a[62856] = anon_sym_SEMI_SEMI;
	v->a[62857] = anon_sym_AMP;
	v->a[62858] = anon_sym_SEMI;
	v->a[62859] = state(1133);
	small_parse_table_3143(v);
}

void	small_parse_table_3143(t_small_parse_table_array *v)
{
	v->a[62860] = 3;
	v->a[62861] = sym_file_redirect;
	v->a[62862] = sym_heredoc_redirect;
	v->a[62863] = aux_sym_redirected_statement_repeat1;
	v->a[62864] = actions(2013);
	v->a[62865] = 8;
	v->a[62866] = anon_sym_LT;
	v->a[62867] = anon_sym_GT;
	v->a[62868] = anon_sym_GT_GT;
	v->a[62869] = anon_sym_AMP_GT;
	v->a[62870] = anon_sym_AMP_GT_GT;
	v->a[62871] = anon_sym_LT_AMP;
	v->a[62872] = anon_sym_GT_AMP;
	v->a[62873] = anon_sym_GT_PIPE;
	v->a[62874] = 6;
	v->a[62875] = actions(3);
	v->a[62876] = 1;
	v->a[62877] = sym_comment;
	v->a[62878] = actions(2035);
	v->a[62879] = 1;
	small_parse_table_3144(v);
}

void	small_parse_table_3144(t_small_parse_table_array *v)
{
	v->a[62880] = aux_sym_concatenation_token1;
	v->a[62881] = actions(2045);
	v->a[62882] = 1;
	v->a[62883] = sym__concat;
	v->a[62884] = state(893);
	v->a[62885] = 1;
	v->a[62886] = aux_sym_concatenation_repeat1;
	v->a[62887] = actions(961);
	v->a[62888] = 3;
	v->a[62889] = sym_file_descriptor;
	v->a[62890] = sym_variable_name;
	v->a[62891] = aux_sym_heredoc_redirect_token1;
	v->a[62892] = actions(957);
	v->a[62893] = 19;
	v->a[62894] = anon_sym_PIPE;
	v->a[62895] = anon_sym_SEMI_SEMI;
	v->a[62896] = anon_sym_AMP_AMP;
	v->a[62897] = anon_sym_PIPE_PIPE;
	v->a[62898] = anon_sym_LT;
	v->a[62899] = anon_sym_GT;
	small_parse_table_3145(v);
}

/* EOF small_parse_table_628.c */
