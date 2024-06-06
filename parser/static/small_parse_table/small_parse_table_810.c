/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_810.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4050(t_small_parse_table_array *v)
{
	v->a[81000] = anon_sym_POUND;
	v->a[81001] = anon_sym_AT;
	v->a[81002] = anon_sym_0;
	v->a[81003] = anon_sym__;
	v->a[81004] = actions(826);
	v->a[81005] = 17;
	v->a[81006] = anon_sym_PIPE;
	v->a[81007] = anon_sym_PIPE_AMP;
	v->a[81008] = anon_sym_AMP_AMP;
	v->a[81009] = anon_sym_PIPE_PIPE;
	v->a[81010] = anon_sym_LT;
	v->a[81011] = anon_sym_GT;
	v->a[81012] = anon_sym_GT_GT;
	v->a[81013] = anon_sym_AMP_GT;
	v->a[81014] = anon_sym_AMP_GT_GT;
	v->a[81015] = anon_sym_LT_AMP;
	v->a[81016] = anon_sym_GT_AMP;
	v->a[81017] = anon_sym_GT_PIPE;
	v->a[81018] = anon_sym_LT_AMP_DASH;
	v->a[81019] = anon_sym_GT_AMP_DASH;
	small_parse_table_4051(v);
}

void	small_parse_table_4051(t_small_parse_table_array *v)
{
	v->a[81020] = anon_sym_LT_LT;
	v->a[81021] = anon_sym_LT_LT_DASH;
	v->a[81022] = aux_sym_heredoc_redirect_token1;
	v->a[81023] = 6;
	v->a[81024] = actions(3);
	v->a[81025] = 1;
	v->a[81026] = sym_comment;
	v->a[81027] = actions(816);
	v->a[81028] = 1;
	v->a[81029] = sym_file_descriptor;
	v->a[81030] = actions(4324);
	v->a[81031] = 1;
	v->a[81032] = sym_variable_name;
	v->a[81033] = actions(4322);
	v->a[81034] = 2;
	v->a[81035] = aux_sym__simple_variable_name_token1;
	v->a[81036] = aux_sym__multiline_variable_name_token1;
	v->a[81037] = actions(4320);
	v->a[81038] = 9;
	v->a[81039] = anon_sym_BANG;
	small_parse_table_4052(v);
}

void	small_parse_table_4052(t_small_parse_table_array *v)
{
	v->a[81040] = anon_sym_DASH;
	v->a[81041] = anon_sym_STAR;
	v->a[81042] = anon_sym_QMARK;
	v->a[81043] = anon_sym_DOLLAR;
	v->a[81044] = anon_sym_POUND;
	v->a[81045] = anon_sym_AT;
	v->a[81046] = anon_sym_0;
	v->a[81047] = anon_sym__;
	v->a[81048] = actions(810);
	v->a[81049] = 17;
	v->a[81050] = anon_sym_PIPE;
	v->a[81051] = anon_sym_PIPE_AMP;
	v->a[81052] = anon_sym_AMP_AMP;
	v->a[81053] = anon_sym_PIPE_PIPE;
	v->a[81054] = anon_sym_LT;
	v->a[81055] = anon_sym_GT;
	v->a[81056] = anon_sym_GT_GT;
	v->a[81057] = anon_sym_AMP_GT;
	v->a[81058] = anon_sym_AMP_GT_GT;
	v->a[81059] = anon_sym_LT_AMP;
	small_parse_table_4053(v);
}

void	small_parse_table_4053(t_small_parse_table_array *v)
{
	v->a[81060] = anon_sym_GT_AMP;
	v->a[81061] = anon_sym_GT_PIPE;
	v->a[81062] = anon_sym_LT_AMP_DASH;
	v->a[81063] = anon_sym_GT_AMP_DASH;
	v->a[81064] = anon_sym_LT_LT;
	v->a[81065] = anon_sym_LT_LT_DASH;
	v->a[81066] = aux_sym_heredoc_redirect_token1;
	v->a[81067] = 22;
	v->a[81068] = actions(57);
	v->a[81069] = 1;
	v->a[81070] = sym_comment;
	v->a[81071] = actions(4328);
	v->a[81072] = 1;
	v->a[81073] = sym_word;
	v->a[81074] = actions(4340);
	v->a[81075] = 1;
	v->a[81076] = anon_sym_DOLLAR;
	v->a[81077] = actions(4346);
	v->a[81078] = 1;
	v->a[81079] = aux_sym_number_token1;
	small_parse_table_4054(v);
}

void	small_parse_table_4054(t_small_parse_table_array *v)
{
	v->a[81080] = actions(4348);
	v->a[81081] = 1;
	v->a[81082] = aux_sym_number_token2;
	v->a[81083] = actions(4352);
	v->a[81084] = 1;
	v->a[81085] = anon_sym_DOLLAR_LPAREN;
	v->a[81086] = actions(4360);
	v->a[81087] = 1;
	v->a[81088] = sym_extglob_pattern;
	v->a[81089] = actions(4362);
	v->a[81090] = 1;
	v->a[81091] = sym__brace_start;
	v->a[81092] = actions(4548);
	v->a[81093] = 1;
	v->a[81094] = anon_sym_LPAREN;
	v->a[81095] = actions(4550);
	v->a[81096] = 1;
	v->a[81097] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81098] = actions(4552);
	v->a[81099] = 1;
	small_parse_table_4055(v);
}

/* EOF small_parse_table_810.c */
