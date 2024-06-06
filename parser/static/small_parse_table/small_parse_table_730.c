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
	v->a[73000] = anon_sym_DOLLAR;
	v->a[73001] = aux_sym_number_token1;
	v->a[73002] = aux_sym_number_token2;
	v->a[73003] = anon_sym_DOLLAR_LPAREN;
	v->a[73004] = anon_sym_BQUOTE;
	v->a[73005] = aux_sym__simple_variable_name_token1;
	v->a[73006] = sym_word;
	v->a[73007] = actions(2908);
	v->a[73008] = 20;
	v->a[73009] = sym_file_descriptor;
	v->a[73010] = sym__concat;
	v->a[73011] = sym_test_operator;
	v->a[73012] = sym__brace_start;
	v->a[73013] = anon_sym_PIPE_AMP;
	v->a[73014] = anon_sym_AMP_AMP;
	v->a[73015] = anon_sym_PIPE_PIPE;
	v->a[73016] = anon_sym_GT_GT;
	v->a[73017] = anon_sym_AMP_GT_GT;
	v->a[73018] = anon_sym_GT_PIPE;
	v->a[73019] = anon_sym_LT_AMP_DASH;
	small_parse_table_3651(v);
}

void	small_parse_table_3651(t_small_parse_table_array *v)
{
	v->a[73020] = anon_sym_GT_AMP_DASH;
	v->a[73021] = anon_sym_LT_LT_DASH;
	v->a[73022] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[73023] = aux_sym_concatenation_token1;
	v->a[73024] = sym__special_character;
	v->a[73025] = anon_sym_DQUOTE;
	v->a[73026] = sym_raw_string;
	v->a[73027] = anon_sym_DOLLAR_LBRACE;
	v->a[73028] = anon_sym_DOLLAR_BQUOTE;
	v->a[73029] = 24;
	v->a[73030] = actions(3);
	v->a[73031] = 1;
	v->a[73032] = sym_comment;
	v->a[73033] = actions(4332);
	v->a[73034] = 1;
	v->a[73035] = anon_sym_LPAREN;
	v->a[73036] = actions(4338);
	v->a[73037] = 1;
	v->a[73038] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[73039] = actions(4340);
	small_parse_table_3652(v);
}

void	small_parse_table_3652(t_small_parse_table_array *v)
{
	v->a[73040] = 1;
	v->a[73041] = anon_sym_DOLLAR;
	v->a[73042] = actions(4342);
	v->a[73043] = 1;
	v->a[73044] = sym__special_character;
	v->a[73045] = actions(4344);
	v->a[73046] = 1;
	v->a[73047] = anon_sym_DQUOTE;
	v->a[73048] = actions(4346);
	v->a[73049] = 1;
	v->a[73050] = aux_sym_number_token1;
	v->a[73051] = actions(4348);
	v->a[73052] = 1;
	v->a[73053] = aux_sym_number_token2;
	v->a[73054] = actions(4350);
	v->a[73055] = 1;
	v->a[73056] = anon_sym_DOLLAR_LBRACE;
	v->a[73057] = actions(4352);
	v->a[73058] = 1;
	v->a[73059] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3653(v);
}

void	small_parse_table_3653(t_small_parse_table_array *v)
{
	v->a[73060] = actions(4354);
	v->a[73061] = 1;
	v->a[73062] = anon_sym_BQUOTE;
	v->a[73063] = actions(4356);
	v->a[73064] = 1;
	v->a[73065] = anon_sym_DOLLAR_BQUOTE;
	v->a[73066] = actions(4358);
	v->a[73067] = 1;
	v->a[73068] = sym_test_operator;
	v->a[73069] = actions(4360);
	v->a[73070] = 1;
	v->a[73071] = sym_extglob_pattern;
	v->a[73072] = actions(4362);
	v->a[73073] = 1;
	v->a[73074] = sym__brace_start;
	v->a[73075] = actions(4402);
	v->a[73076] = 1;
	v->a[73077] = anon_sym_esac;
	v->a[73078] = actions(4406);
	v->a[73079] = 1;
	small_parse_table_3654(v);
}

void	small_parse_table_3654(t_small_parse_table_array *v)
{
	v->a[73080] = aux_sym_heredoc_redirect_token1;
	v->a[73081] = state(3393);
	v->a[73082] = 1;
	v->a[73083] = aux_sym__literal_repeat1;
	v->a[73084] = state(3915);
	v->a[73085] = 1;
	v->a[73086] = sym_last_case_item;
	v->a[73087] = actions(4328);
	v->a[73088] = 2;
	v->a[73089] = sym_raw_string;
	v->a[73090] = sym_word;
	v->a[73091] = state(1762);
	v->a[73092] = 2;
	v->a[73093] = sym_case_item;
	v->a[73094] = aux_sym_case_statement_repeat1;
	v->a[73095] = state(3472);
	v->a[73096] = 2;
	v->a[73097] = sym_concatenation;
	v->a[73098] = sym__extglob_blob;
	v->a[73099] = actions(4404);
	small_parse_table_3655(v);
}

/* EOF small_parse_table_730.c */
