/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_530.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2650(t_small_parse_table_array *v)
{
	v->a[53000] = anon_sym_until;
	v->a[53001] = anon_sym_if;
	v->a[53002] = anon_sym_case;
	v->a[53003] = anon_sym_LPAREN;
	v->a[53004] = anon_sym_LBRACE;
	v->a[53005] = anon_sym_BANG;
	v->a[53006] = anon_sym_LT;
	v->a[53007] = anon_sym_GT;
	v->a[53008] = anon_sym_GT_GT;
	v->a[53009] = anon_sym_AMP_GT;
	v->a[53010] = anon_sym_AMP_GT_GT;
	v->a[53011] = anon_sym_LT_AMP;
	v->a[53012] = anon_sym_GT_AMP;
	v->a[53013] = anon_sym_GT_PIPE;
	v->a[53014] = anon_sym_LT_AMP_DASH;
	v->a[53015] = anon_sym_GT_AMP_DASH;
	v->a[53016] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[53017] = anon_sym_DOLLAR;
	v->a[53018] = anon_sym_DQUOTE;
	v->a[53019] = sym_raw_string;
	small_parse_table_2651(v);
}

void	small_parse_table_2651(t_small_parse_table_array *v)
{
	v->a[53020] = sym_number;
	v->a[53021] = anon_sym_DOLLAR_LBRACE;
	v->a[53022] = anon_sym_DOLLAR_LPAREN;
	v->a[53023] = sym_word;
	v->a[53024] = 4;
	v->a[53025] = actions(3);
	v->a[53026] = 1;
	v->a[53027] = sym_comment;
	v->a[53028] = actions(1522);
	v->a[53029] = 1;
	v->a[53030] = anon_sym_BQUOTE;
	v->a[53031] = actions(1524);
	v->a[53032] = 2;
	v->a[53033] = sym_file_descriptor;
	v->a[53034] = sym_variable_name;
	v->a[53035] = actions(1520);
	v->a[53036] = 26;
	v->a[53037] = anon_sym_for;
	v->a[53038] = anon_sym_while;
	v->a[53039] = anon_sym_until;
	small_parse_table_2652(v);
}

void	small_parse_table_2652(t_small_parse_table_array *v)
{
	v->a[53040] = anon_sym_if;
	v->a[53041] = anon_sym_case;
	v->a[53042] = anon_sym_LPAREN;
	v->a[53043] = anon_sym_LBRACE;
	v->a[53044] = anon_sym_BANG;
	v->a[53045] = anon_sym_LT;
	v->a[53046] = anon_sym_GT;
	v->a[53047] = anon_sym_GT_GT;
	v->a[53048] = anon_sym_AMP_GT;
	v->a[53049] = anon_sym_AMP_GT_GT;
	v->a[53050] = anon_sym_LT_AMP;
	v->a[53051] = anon_sym_GT_AMP;
	v->a[53052] = anon_sym_GT_PIPE;
	v->a[53053] = anon_sym_LT_AMP_DASH;
	v->a[53054] = anon_sym_GT_AMP_DASH;
	v->a[53055] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[53056] = anon_sym_DOLLAR;
	v->a[53057] = anon_sym_DQUOTE;
	v->a[53058] = sym_raw_string;
	v->a[53059] = sym_number;
	small_parse_table_2653(v);
}

void	small_parse_table_2653(t_small_parse_table_array *v)
{
	v->a[53060] = anon_sym_DOLLAR_LBRACE;
	v->a[53061] = anon_sym_DOLLAR_LPAREN;
	v->a[53062] = sym_word;
	v->a[53063] = 6;
	v->a[53064] = actions(3);
	v->a[53065] = 1;
	v->a[53066] = sym_comment;
	v->a[53067] = actions(385);
	v->a[53068] = 1;
	v->a[53069] = sym_file_descriptor;
	v->a[53070] = actions(1262);
	v->a[53071] = 1;
	v->a[53072] = sym_variable_name;
	v->a[53073] = actions(1260);
	v->a[53074] = 2;
	v->a[53075] = aux_sym__simple_variable_name_token1;
	v->a[53076] = aux_sym__multiline_variable_name_token1;
	v->a[53077] = actions(1258);
	v->a[53078] = 9;
	v->a[53079] = anon_sym_BANG;
	small_parse_table_2654(v);
}

void	small_parse_table_2654(t_small_parse_table_array *v)
{
	v->a[53080] = anon_sym_DASH;
	v->a[53081] = anon_sym_STAR;
	v->a[53082] = anon_sym_QMARK;
	v->a[53083] = anon_sym_DOLLAR;
	v->a[53084] = anon_sym_POUND;
	v->a[53085] = anon_sym_AT;
	v->a[53086] = anon_sym_0;
	v->a[53087] = anon_sym__;
	v->a[53088] = actions(379);
	v->a[53089] = 16;
	v->a[53090] = anon_sym_PIPE;
	v->a[53091] = anon_sym_AMP_AMP;
	v->a[53092] = anon_sym_PIPE_PIPE;
	v->a[53093] = anon_sym_LT;
	v->a[53094] = anon_sym_GT;
	v->a[53095] = anon_sym_GT_GT;
	v->a[53096] = anon_sym_AMP_GT;
	v->a[53097] = anon_sym_AMP_GT_GT;
	v->a[53098] = anon_sym_LT_AMP;
	v->a[53099] = anon_sym_GT_AMP;
	small_parse_table_2655(v);
}

/* EOF small_parse_table_530.c */
