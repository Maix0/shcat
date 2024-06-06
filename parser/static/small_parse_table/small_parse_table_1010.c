/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1010.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5050(t_small_parse_table_array *v)
{
	v->a[101000] = actions(5781);
	v->a[101001] = 1;
	v->a[101002] = aux_sym_heredoc_redirect_token1;
	v->a[101003] = state(2122);
	v->a[101004] = 1;
	v->a[101005] = aux_sym__heredoc_command;
	v->a[101006] = state(2852);
	v->a[101007] = 1;
	v->a[101008] = aux_sym__literal_repeat1;
	v->a[101009] = state(2882);
	v->a[101010] = 1;
	v->a[101011] = sym_concatenation;
	v->a[101012] = actions(2446);
	v->a[101013] = 2;
	v->a[101014] = sym_raw_string;
	v->a[101015] = sym_word;
	v->a[101016] = state(2716);
	v->a[101017] = 7;
	v->a[101018] = sym_arithmetic_expansion;
	v->a[101019] = sym_brace_expression;
	small_parse_table_5051(v);
}

void	small_parse_table_5051(t_small_parse_table_array *v)
{
	v->a[101020] = sym_string;
	v->a[101021] = sym_number;
	v->a[101022] = sym_simple_expansion;
	v->a[101023] = sym_expansion;
	v->a[101024] = sym_command_substitution;
	v->a[101025] = 5;
	v->a[101026] = actions(3);
	v->a[101027] = 1;
	v->a[101028] = sym_comment;
	v->a[101029] = actions(5783);
	v->a[101030] = 1;
	v->a[101031] = sym_variable_name;
	v->a[101032] = actions(5183);
	v->a[101033] = 2;
	v->a[101034] = sym_file_descriptor;
	v->a[101035] = aux_sym_heredoc_redirect_token1;
	v->a[101036] = state(2103);
	v->a[101037] = 2;
	v->a[101038] = sym_variable_assignment;
	v->a[101039] = aux_sym_variable_assignments_repeat1;
	small_parse_table_5052(v);
}

void	small_parse_table_5052(t_small_parse_table_array *v)
{
	v->a[101040] = actions(5181);
	v->a[101041] = 20;
	v->a[101042] = anon_sym_PIPE;
	v->a[101043] = anon_sym_SEMI_SEMI;
	v->a[101044] = anon_sym_PIPE_AMP;
	v->a[101045] = anon_sym_AMP_AMP;
	v->a[101046] = anon_sym_PIPE_PIPE;
	v->a[101047] = anon_sym_LT;
	v->a[101048] = anon_sym_GT;
	v->a[101049] = anon_sym_GT_GT;
	v->a[101050] = anon_sym_AMP_GT;
	v->a[101051] = anon_sym_AMP_GT_GT;
	v->a[101052] = anon_sym_LT_AMP;
	v->a[101053] = anon_sym_GT_AMP;
	v->a[101054] = anon_sym_GT_PIPE;
	v->a[101055] = anon_sym_LT_AMP_DASH;
	v->a[101056] = anon_sym_GT_AMP_DASH;
	v->a[101057] = anon_sym_LT_LT;
	v->a[101058] = anon_sym_LT_LT_DASH;
	v->a[101059] = anon_sym_AMP;
	small_parse_table_5053(v);
}

void	small_parse_table_5053(t_small_parse_table_array *v)
{
	v->a[101060] = anon_sym_BQUOTE;
	v->a[101061] = anon_sym_SEMI;
	v->a[101062] = 3;
	v->a[101063] = actions(3);
	v->a[101064] = 1;
	v->a[101065] = sym_comment;
	v->a[101066] = actions(2908);
	v->a[101067] = 3;
	v->a[101068] = sym_file_descriptor;
	v->a[101069] = sym__concat;
	v->a[101070] = aux_sym_heredoc_redirect_token1;
	v->a[101071] = actions(2906);
	v->a[101072] = 22;
	v->a[101073] = anon_sym_PIPE;
	v->a[101074] = anon_sym_SEMI_SEMI;
	v->a[101075] = anon_sym_SEMI_AMP;
	v->a[101076] = anon_sym_SEMI_SEMI_AMP;
	v->a[101077] = anon_sym_PIPE_AMP;
	v->a[101078] = anon_sym_AMP_AMP;
	v->a[101079] = anon_sym_PIPE_PIPE;
	small_parse_table_5054(v);
}

void	small_parse_table_5054(t_small_parse_table_array *v)
{
	v->a[101080] = anon_sym_LT;
	v->a[101081] = anon_sym_GT;
	v->a[101082] = anon_sym_GT_GT;
	v->a[101083] = anon_sym_AMP_GT;
	v->a[101084] = anon_sym_AMP_GT_GT;
	v->a[101085] = anon_sym_LT_AMP;
	v->a[101086] = anon_sym_GT_AMP;
	v->a[101087] = anon_sym_GT_PIPE;
	v->a[101088] = anon_sym_LT_AMP_DASH;
	v->a[101089] = anon_sym_GT_AMP_DASH;
	v->a[101090] = anon_sym_LT_LT;
	v->a[101091] = anon_sym_LT_LT_DASH;
	v->a[101092] = anon_sym_AMP;
	v->a[101093] = aux_sym_concatenation_token1;
	v->a[101094] = anon_sym_SEMI;
	v->a[101095] = 18;
	v->a[101096] = actions(57);
	v->a[101097] = 1;
	v->a[101098] = sym_comment;
	v->a[101099] = actions(4340);
	small_parse_table_5055(v);
}

/* EOF small_parse_table_1010.c */
