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
	v->a[62800] = aux_sym_heredoc_redirect_token1;
	v->a[62801] = actions(1039);
	v->a[62802] = 19;
	v->a[62803] = anon_sym_PIPE;
	v->a[62804] = anon_sym_RPAREN;
	v->a[62805] = anon_sym_SEMI_SEMI;
	v->a[62806] = anon_sym_AMP_AMP;
	v->a[62807] = anon_sym_PIPE_PIPE;
	v->a[62808] = anon_sym_LT;
	v->a[62809] = anon_sym_GT;
	v->a[62810] = anon_sym_GT_GT;
	v->a[62811] = anon_sym_LT_AMP;
	v->a[62812] = anon_sym_GT_AMP;
	v->a[62813] = anon_sym_GT_PIPE;
	v->a[62814] = anon_sym_LT_AMP_DASH;
	v->a[62815] = anon_sym_GT_AMP_DASH;
	v->a[62816] = anon_sym_LT_LT;
	v->a[62817] = anon_sym_LT_LT_DASH;
	v->a[62818] = anon_sym_AMP;
	v->a[62819] = aux_sym_concatenation_token1;
	small_parse_table_3141(v);
}

void	small_parse_table_3141(t_small_parse_table_array *v)
{
	v->a[62820] = anon_sym_BQUOTE;
	v->a[62821] = anon_sym_SEMI;
	v->a[62822] = 6;
	v->a[62823] = actions(3);
	v->a[62824] = 1;
	v->a[62825] = sym_comment;
	v->a[62826] = actions(2057);
	v->a[62827] = 1;
	v->a[62828] = aux_sym_concatenation_token1;
	v->a[62829] = actions(2059);
	v->a[62830] = 1;
	v->a[62831] = sym__concat;
	v->a[62832] = state(1148);
	v->a[62833] = 1;
	v->a[62834] = aux_sym_concatenation_repeat1;
	v->a[62835] = actions(575);
	v->a[62836] = 2;
	v->a[62837] = sym_file_descriptor;
	v->a[62838] = aux_sym_heredoc_redirect_token1;
	v->a[62839] = actions(573);
	small_parse_table_3142(v);
}

void	small_parse_table_3142(t_small_parse_table_array *v)
{
	v->a[62840] = 17;
	v->a[62841] = anon_sym_PIPE;
	v->a[62842] = anon_sym_SEMI_SEMI;
	v->a[62843] = anon_sym_AMP_AMP;
	v->a[62844] = anon_sym_PIPE_PIPE;
	v->a[62845] = anon_sym_LT;
	v->a[62846] = anon_sym_GT;
	v->a[62847] = anon_sym_GT_GT;
	v->a[62848] = anon_sym_LT_AMP;
	v->a[62849] = anon_sym_GT_AMP;
	v->a[62850] = anon_sym_GT_PIPE;
	v->a[62851] = anon_sym_LT_AMP_DASH;
	v->a[62852] = anon_sym_GT_AMP_DASH;
	v->a[62853] = anon_sym_LT_LT;
	v->a[62854] = anon_sym_LT_LT_DASH;
	v->a[62855] = anon_sym_AMP;
	v->a[62856] = anon_sym_BQUOTE;
	v->a[62857] = anon_sym_SEMI;
	v->a[62858] = 11;
	v->a[62859] = actions(3);
	small_parse_table_3143(v);
}

void	small_parse_table_3143(t_small_parse_table_array *v)
{
	v->a[62860] = 1;
	v->a[62861] = sym_comment;
	v->a[62862] = actions(682);
	v->a[62863] = 1;
	v->a[62864] = anon_sym_PIPE;
	v->a[62865] = actions(2009);
	v->a[62866] = 1;
	v->a[62867] = aux_sym_heredoc_redirect_token1;
	v->a[62868] = actions(2065);
	v->a[62869] = 1;
	v->a[62870] = sym_file_descriptor;
	v->a[62871] = state(721);
	v->a[62872] = 1;
	v->a[62873] = sym_terminator;
	v->a[62874] = actions(754);
	v->a[62875] = 2;
	v->a[62876] = anon_sym_LT_LT;
	v->a[62877] = anon_sym_LT_LT_DASH;
	v->a[62878] = actions(924);
	v->a[62879] = 2;
	small_parse_table_3144(v);
}

void	small_parse_table_3144(t_small_parse_table_array *v)
{
	v->a[62880] = anon_sym_AMP_AMP;
	v->a[62881] = anon_sym_PIPE_PIPE;
	v->a[62882] = actions(2063);
	v->a[62883] = 2;
	v->a[62884] = anon_sym_LT_AMP_DASH;
	v->a[62885] = anon_sym_GT_AMP_DASH;
	v->a[62886] = actions(750);
	v->a[62887] = 3;
	v->a[62888] = anon_sym_SEMI_SEMI;
	v->a[62889] = anon_sym_AMP;
	v->a[62890] = anon_sym_SEMI;
	v->a[62891] = state(1268);
	v->a[62892] = 3;
	v->a[62893] = sym_file_redirect;
	v->a[62894] = sym_heredoc_redirect;
	v->a[62895] = aux_sym_redirected_statement_repeat1;
	v->a[62896] = actions(2061);
	v->a[62897] = 6;
	v->a[62898] = anon_sym_LT;
	v->a[62899] = anon_sym_GT;
	small_parse_table_3145(v);
}

/* EOF small_parse_table_628.c */
