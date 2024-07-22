/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_730.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3650(t_small_parse_table_array *v)
{
	v->a[73000] = anon_sym_GT_AMP;
	v->a[73001] = anon_sym_GT_PIPE;
	v->a[73002] = anon_sym_LT_GT;
	v->a[73003] = anon_sym_LT_LT_DASH;
	v->a[73004] = 5;
	v->a[73005] = actions(3);
	v->a[73006] = 1;
	v->a[73007] = sym_comment;
	v->a[73008] = actions(2803);
	v->a[73009] = 1;
	v->a[73010] = aux_sym_concatenation_token1;
	v->a[73011] = actions(2805);
	v->a[73012] = 1;
	v->a[73013] = sym__concat;
	v->a[73014] = state(1488);
	v->a[73015] = 1;
	v->a[73016] = aux_sym_concatenation_repeat1;
	v->a[73017] = actions(2930);
	v->a[73018] = 10;
	v->a[73019] = aux_sym_heredoc_redirect_token1;
	small_parse_table_3651(v);
}

void	small_parse_table_3651(t_small_parse_table_array *v)
{
	v->a[73020] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[73021] = anon_sym_DOLLAR;
	v->a[73022] = anon_sym_DQUOTE;
	v->a[73023] = sym_raw_string;
	v->a[73024] = sym_number;
	v->a[73025] = anon_sym_DOLLAR_LBRACE;
	v->a[73026] = anon_sym_DOLLAR_LPAREN;
	v->a[73027] = anon_sym_BQUOTE;
	v->a[73028] = sym_word;
	v->a[73029] = 3;
	v->a[73030] = actions(501);
	v->a[73031] = 1;
	v->a[73032] = sym_comment;
	v->a[73033] = actions(2137);
	v->a[73034] = 4;
	v->a[73035] = anon_sym_PIPE;
	v->a[73036] = anon_sym_LT;
	v->a[73037] = anon_sym_GT;
	v->a[73038] = anon_sym_LT_LT;
	v->a[73039] = actions(2135);
	small_parse_table_3652(v);
}

void	small_parse_table_3652(t_small_parse_table_array *v)
{
	v->a[73040] = 9;
	v->a[73041] = sym_file_descriptor;
	v->a[73042] = anon_sym_AMP_AMP;
	v->a[73043] = anon_sym_PIPE_PIPE;
	v->a[73044] = anon_sym_GT_GT;
	v->a[73045] = anon_sym_LT_AMP;
	v->a[73046] = anon_sym_GT_AMP;
	v->a[73047] = anon_sym_GT_PIPE;
	v->a[73048] = anon_sym_LT_GT;
	v->a[73049] = anon_sym_LT_LT_DASH;
	v->a[73050] = 3;
	v->a[73051] = actions(501);
	v->a[73052] = 1;
	v->a[73053] = sym_comment;
	v->a[73054] = actions(2143);
	v->a[73055] = 4;
	v->a[73056] = anon_sym_PIPE;
	v->a[73057] = anon_sym_LT;
	v->a[73058] = anon_sym_GT;
	v->a[73059] = anon_sym_LT_LT;
	small_parse_table_3653(v);
}

void	small_parse_table_3653(t_small_parse_table_array *v)
{
	v->a[73060] = actions(2141);
	v->a[73061] = 9;
	v->a[73062] = sym_file_descriptor;
	v->a[73063] = anon_sym_AMP_AMP;
	v->a[73064] = anon_sym_PIPE_PIPE;
	v->a[73065] = anon_sym_GT_GT;
	v->a[73066] = anon_sym_LT_AMP;
	v->a[73067] = anon_sym_GT_AMP;
	v->a[73068] = anon_sym_GT_PIPE;
	v->a[73069] = anon_sym_LT_GT;
	v->a[73070] = anon_sym_LT_LT_DASH;
	v->a[73071] = 6;
	v->a[73072] = actions(3);
	v->a[73073] = 1;
	v->a[73074] = sym_comment;
	v->a[73075] = actions(2904);
	v->a[73076] = 1;
	v->a[73077] = sym_string_content;
	v->a[73078] = actions(2908);
	v->a[73079] = 1;
	small_parse_table_3654(v);
}

void	small_parse_table_3654(t_small_parse_table_array *v)
{
	v->a[73080] = sym_variable_name;
	v->a[73081] = actions(2932);
	v->a[73082] = 1;
	v->a[73083] = anon_sym_DQUOTE;
	v->a[73084] = actions(2906);
	v->a[73085] = 2;
	v->a[73086] = aux_sym__simple_variable_name_token1;
	v->a[73087] = aux_sym__multiline_variable_name_token1;
	v->a[73088] = actions(2900);
	v->a[73089] = 8;
	v->a[73090] = anon_sym_BANG;
	v->a[73091] = anon_sym_DASH;
	v->a[73092] = anon_sym_STAR;
	v->a[73093] = anon_sym_QMARK;
	v->a[73094] = anon_sym_DOLLAR;
	v->a[73095] = anon_sym_POUND;
	v->a[73096] = anon_sym_AT;
	v->a[73097] = anon_sym_0;
	v->a[73098] = 6;
	v->a[73099] = actions(3);
	small_parse_table_3655(v);
}

/* EOF small_parse_table_730.c */
