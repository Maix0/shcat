/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1250.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6250(t_small_parse_table_array *v)
{
	v->a[125000] = actions(3060);
	v->a[125001] = 16;
	v->a[125002] = anon_sym_SEMI_SEMI;
	v->a[125003] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[125004] = anon_sym_AMP;
	v->a[125005] = aux_sym_concatenation_token1;
	v->a[125006] = anon_sym_DOLLAR;
	v->a[125007] = sym__special_character;
	v->a[125008] = anon_sym_DQUOTE;
	v->a[125009] = sym_raw_string;
	v->a[125010] = aux_sym_number_token1;
	v->a[125011] = aux_sym_number_token2;
	v->a[125012] = anon_sym_DOLLAR_LBRACE;
	v->a[125013] = anon_sym_DOLLAR_LPAREN;
	v->a[125014] = anon_sym_BQUOTE;
	v->a[125015] = anon_sym_DOLLAR_BQUOTE;
	v->a[125016] = sym_word;
	v->a[125017] = anon_sym_SEMI;
	v->a[125018] = 3;
	v->a[125019] = actions(3);
	small_parse_table_6251(v);
}

void	small_parse_table_6251(t_small_parse_table_array *v)
{
	v->a[125020] = 1;
	v->a[125021] = sym_comment;
	v->a[125022] = actions(2654);
	v->a[125023] = 4;
	v->a[125024] = sym__concat;
	v->a[125025] = sym_test_operator;
	v->a[125026] = sym__brace_start;
	v->a[125027] = aux_sym_heredoc_redirect_token1;
	v->a[125028] = actions(2652);
	v->a[125029] = 16;
	v->a[125030] = anon_sym_SEMI_SEMI;
	v->a[125031] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[125032] = anon_sym_AMP;
	v->a[125033] = aux_sym_concatenation_token1;
	v->a[125034] = anon_sym_DOLLAR;
	v->a[125035] = sym__special_character;
	v->a[125036] = anon_sym_DQUOTE;
	v->a[125037] = sym_raw_string;
	v->a[125038] = aux_sym_number_token1;
	v->a[125039] = aux_sym_number_token2;
	small_parse_table_6252(v);
}

void	small_parse_table_6252(t_small_parse_table_array *v)
{
	v->a[125040] = anon_sym_DOLLAR_LBRACE;
	v->a[125041] = anon_sym_DOLLAR_LPAREN;
	v->a[125042] = anon_sym_BQUOTE;
	v->a[125043] = anon_sym_DOLLAR_BQUOTE;
	v->a[125044] = sym_word;
	v->a[125045] = anon_sym_SEMI;
	v->a[125046] = 3;
	v->a[125047] = actions(57);
	v->a[125048] = 1;
	v->a[125049] = sym_comment;
	v->a[125050] = actions(3022);
	v->a[125051] = 7;
	v->a[125052] = anon_sym_PIPE;
	v->a[125053] = anon_sym_LT;
	v->a[125054] = anon_sym_GT;
	v->a[125055] = anon_sym_AMP_GT;
	v->a[125056] = anon_sym_LT_AMP;
	v->a[125057] = anon_sym_GT_AMP;
	v->a[125058] = anon_sym_LT_LT;
	v->a[125059] = actions(3024);
	small_parse_table_6253(v);
}

void	small_parse_table_6253(t_small_parse_table_array *v)
{
	v->a[125060] = 13;
	v->a[125061] = sym_file_descriptor;
	v->a[125062] = sym__concat;
	v->a[125063] = sym_variable_name;
	v->a[125064] = anon_sym_PIPE_AMP;
	v->a[125065] = anon_sym_AMP_AMP;
	v->a[125066] = anon_sym_PIPE_PIPE;
	v->a[125067] = anon_sym_GT_GT;
	v->a[125068] = anon_sym_AMP_GT_GT;
	v->a[125069] = anon_sym_GT_PIPE;
	v->a[125070] = anon_sym_LT_AMP_DASH;
	v->a[125071] = anon_sym_GT_AMP_DASH;
	v->a[125072] = anon_sym_LT_LT_DASH;
	v->a[125073] = aux_sym_concatenation_token1;
	v->a[125074] = 5;
	v->a[125075] = actions(57);
	v->a[125076] = 1;
	v->a[125077] = sym_comment;
	v->a[125078] = actions(7157);
	v->a[125079] = 1;
	small_parse_table_6254(v);
}

void	small_parse_table_6254(t_small_parse_table_array *v)
{
	v->a[125080] = sym_variable_name;
	v->a[125081] = state(2648);
	v->a[125082] = 2;
	v->a[125083] = sym_variable_assignment;
	v->a[125084] = aux_sym_variable_assignments_repeat1;
	v->a[125085] = actions(5181);
	v->a[125086] = 7;
	v->a[125087] = anon_sym_PIPE;
	v->a[125088] = anon_sym_LT;
	v->a[125089] = anon_sym_GT;
	v->a[125090] = anon_sym_AMP_GT;
	v->a[125091] = anon_sym_LT_AMP;
	v->a[125092] = anon_sym_GT_AMP;
	v->a[125093] = anon_sym_LT_LT;
	v->a[125094] = actions(5183);
	v->a[125095] = 10;
	v->a[125096] = sym_file_descriptor;
	v->a[125097] = anon_sym_PIPE_AMP;
	v->a[125098] = anon_sym_AMP_AMP;
	v->a[125099] = anon_sym_PIPE_PIPE;
	small_parse_table_6255(v);
}

/* EOF small_parse_table_1250.c */
