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
	v->a[62800] = 3;
	v->a[62801] = sym_file_redirect;
	v->a[62802] = sym_heredoc_redirect;
	v->a[62803] = aux_sym_redirected_statement_repeat1;
	v->a[62804] = actions(1942);
	v->a[62805] = 7;
	v->a[62806] = anon_sym_LT;
	v->a[62807] = anon_sym_GT;
	v->a[62808] = anon_sym_GT_GT;
	v->a[62809] = anon_sym_LT_AMP;
	v->a[62810] = anon_sym_GT_AMP;
	v->a[62811] = anon_sym_GT_PIPE;
	v->a[62812] = anon_sym_LT_GT;
	v->a[62813] = 3;
	v->a[62814] = actions(3);
	v->a[62815] = 1;
	v->a[62816] = sym_comment;
	v->a[62817] = actions(2212);
	v->a[62818] = 3;
	v->a[62819] = sym_file_descriptor;
	small_parse_table_3141(v);
}

void	small_parse_table_3141(t_small_parse_table_array *v)
{
	v->a[62820] = ts_builtin_sym_end;
	v->a[62821] = aux_sym_heredoc_redirect_token1;
	v->a[62822] = actions(2214);
	v->a[62823] = 17;
	v->a[62824] = anon_sym_PIPE;
	v->a[62825] = anon_sym_RPAREN;
	v->a[62826] = anon_sym_SEMI_SEMI;
	v->a[62827] = anon_sym_AMP_AMP;
	v->a[62828] = anon_sym_PIPE_PIPE;
	v->a[62829] = anon_sym_LT;
	v->a[62830] = anon_sym_GT;
	v->a[62831] = anon_sym_GT_GT;
	v->a[62832] = anon_sym_LT_AMP;
	v->a[62833] = anon_sym_GT_AMP;
	v->a[62834] = anon_sym_GT_PIPE;
	v->a[62835] = anon_sym_LT_GT;
	v->a[62836] = anon_sym_LT_LT;
	v->a[62837] = anon_sym_LT_LT_DASH;
	v->a[62838] = anon_sym_AMP;
	v->a[62839] = anon_sym_BQUOTE;
	small_parse_table_3142(v);
}

void	small_parse_table_3142(t_small_parse_table_array *v)
{
	v->a[62840] = anon_sym_SEMI;
	v->a[62841] = 3;
	v->a[62842] = actions(3);
	v->a[62843] = 1;
	v->a[62844] = sym_comment;
	v->a[62845] = actions(835);
	v->a[62846] = 3;
	v->a[62847] = sym_file_descriptor;
	v->a[62848] = sym__concat;
	v->a[62849] = sym_variable_name;
	v->a[62850] = actions(833);
	v->a[62851] = 17;
	v->a[62852] = anon_sym_LT;
	v->a[62853] = anon_sym_GT;
	v->a[62854] = anon_sym_GT_GT;
	v->a[62855] = anon_sym_LT_AMP;
	v->a[62856] = anon_sym_GT_AMP;
	v->a[62857] = anon_sym_GT_PIPE;
	v->a[62858] = anon_sym_LT_GT;
	v->a[62859] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_3143(v);
}

void	small_parse_table_3143(t_small_parse_table_array *v)
{
	v->a[62860] = aux_sym_concatenation_token1;
	v->a[62861] = anon_sym_DOLLAR;
	v->a[62862] = anon_sym_DQUOTE;
	v->a[62863] = sym_raw_string;
	v->a[62864] = sym_number;
	v->a[62865] = anon_sym_DOLLAR_LBRACE;
	v->a[62866] = anon_sym_DOLLAR_LPAREN;
	v->a[62867] = anon_sym_BQUOTE;
	v->a[62868] = sym_word;
	v->a[62869] = 3;
	v->a[62870] = actions(3);
	v->a[62871] = 1;
	v->a[62872] = sym_comment;
	v->a[62873] = actions(2216);
	v->a[62874] = 3;
	v->a[62875] = sym_file_descriptor;
	v->a[62876] = ts_builtin_sym_end;
	v->a[62877] = aux_sym_heredoc_redirect_token1;
	v->a[62878] = actions(2218);
	v->a[62879] = 17;
	small_parse_table_3144(v);
}

void	small_parse_table_3144(t_small_parse_table_array *v)
{
	v->a[62880] = anon_sym_PIPE;
	v->a[62881] = anon_sym_RPAREN;
	v->a[62882] = anon_sym_SEMI_SEMI;
	v->a[62883] = anon_sym_AMP_AMP;
	v->a[62884] = anon_sym_PIPE_PIPE;
	v->a[62885] = anon_sym_LT;
	v->a[62886] = anon_sym_GT;
	v->a[62887] = anon_sym_GT_GT;
	v->a[62888] = anon_sym_LT_AMP;
	v->a[62889] = anon_sym_GT_AMP;
	v->a[62890] = anon_sym_GT_PIPE;
	v->a[62891] = anon_sym_LT_GT;
	v->a[62892] = anon_sym_LT_LT;
	v->a[62893] = anon_sym_LT_LT_DASH;
	v->a[62894] = anon_sym_AMP;
	v->a[62895] = anon_sym_BQUOTE;
	v->a[62896] = anon_sym_SEMI;
	v->a[62897] = 3;
	v->a[62898] = actions(3);
	v->a[62899] = 1;
	small_parse_table_3145(v);
}

/* EOF small_parse_table_628.c */
