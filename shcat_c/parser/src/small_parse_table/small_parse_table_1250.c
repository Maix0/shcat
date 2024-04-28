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
	v->a[125000] = sym_comment;
	v->a[125001] = actions(1352);
	v->a[125002] = 14;
	v->a[125003] = anon_sym_PIPE;
	v->a[125004] = anon_sym_LT;
	v->a[125005] = anon_sym_GT;
	v->a[125006] = anon_sym_LT_LT;
	v->a[125007] = anon_sym_AMP_GT;
	v->a[125008] = anon_sym_LT_AMP;
	v->a[125009] = anon_sym_GT_AMP;
	v->a[125010] = anon_sym_DOLLAR;
	v->a[125011] = sym__special_character;
	v->a[125012] = aux_sym_number_token1;
	v->a[125013] = aux_sym_number_token2;
	v->a[125014] = anon_sym_DOLLAR_LPAREN;
	v->a[125015] = anon_sym_BQUOTE;
	v->a[125016] = sym_word;
	v->a[125017] = actions(1354);
	v->a[125018] = 27;
	v->a[125019] = sym_file_descriptor;
	small_parse_table_6251(v);
}

void	small_parse_table_6251(t_small_parse_table_array *v)
{
	v->a[125020] = sym__concat;
	v->a[125021] = sym_variable_name;
	v->a[125022] = sym_test_operator;
	v->a[125023] = sym__brace_start;
	v->a[125024] = anon_sym_LPAREN_LPAREN;
	v->a[125025] = anon_sym_PIPE_PIPE;
	v->a[125026] = anon_sym_AMP_AMP;
	v->a[125027] = anon_sym_GT_GT;
	v->a[125028] = anon_sym_PIPE_AMP;
	v->a[125029] = anon_sym_RBRACK;
	v->a[125030] = anon_sym_AMP_GT_GT;
	v->a[125031] = anon_sym_GT_PIPE;
	v->a[125032] = anon_sym_LT_AMP_DASH;
	v->a[125033] = anon_sym_GT_AMP_DASH;
	v->a[125034] = anon_sym_LT_LT_DASH;
	v->a[125035] = anon_sym_LT_LT_LT;
	v->a[125036] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[125037] = anon_sym_DOLLAR_LBRACK;
	v->a[125038] = aux_sym_concatenation_token1;
	v->a[125039] = anon_sym_DQUOTE;
	small_parse_table_6252(v);
}

void	small_parse_table_6252(t_small_parse_table_array *v)
{
	v->a[125040] = sym_raw_string;
	v->a[125041] = sym_ansi_c_string;
	v->a[125042] = anon_sym_DOLLAR_LBRACE;
	v->a[125043] = anon_sym_DOLLAR_BQUOTE;
	v->a[125044] = anon_sym_LT_LPAREN;
	v->a[125045] = anon_sym_GT_LPAREN;
	v->a[125046] = 3;
	v->a[125047] = actions(3);
	v->a[125048] = 1;
	v->a[125049] = sym_comment;
	v->a[125050] = actions(1263);
	v->a[125051] = 5;
	v->a[125052] = sym_file_descriptor;
	v->a[125053] = sym_test_operator;
	v->a[125054] = sym__brace_start;
	v->a[125055] = ts_builtin_sym_end;
	v->a[125056] = aux_sym_heredoc_redirect_token1;
	v->a[125057] = actions(1261);
	v->a[125058] = 36;
	v->a[125059] = anon_sym_LPAREN_LPAREN;
	small_parse_table_6253(v);
}

void	small_parse_table_6253(t_small_parse_table_array *v)
{
	v->a[125060] = anon_sym_SEMI;
	v->a[125061] = anon_sym_PIPE_PIPE;
	v->a[125062] = anon_sym_AMP_AMP;
	v->a[125063] = anon_sym_PIPE;
	v->a[125064] = anon_sym_AMP;
	v->a[125065] = anon_sym_LT;
	v->a[125066] = anon_sym_GT;
	v->a[125067] = anon_sym_LT_LT;
	v->a[125068] = anon_sym_GT_GT;
	v->a[125069] = anon_sym_SEMI_SEMI;
	v->a[125070] = anon_sym_PIPE_AMP;
	v->a[125071] = anon_sym_AMP_GT;
	v->a[125072] = anon_sym_AMP_GT_GT;
	v->a[125073] = anon_sym_LT_AMP;
	v->a[125074] = anon_sym_GT_AMP;
	v->a[125075] = anon_sym_GT_PIPE;
	v->a[125076] = anon_sym_LT_AMP_DASH;
	v->a[125077] = anon_sym_GT_AMP_DASH;
	v->a[125078] = anon_sym_LT_LT_DASH;
	v->a[125079] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_6254(v);
}

void	small_parse_table_6254(t_small_parse_table_array *v)
{
	v->a[125080] = anon_sym_DOLLAR_LBRACK;
	v->a[125081] = anon_sym_DOLLAR;
	v->a[125082] = sym__special_character;
	v->a[125083] = anon_sym_DQUOTE;
	v->a[125084] = sym_raw_string;
	v->a[125085] = sym_ansi_c_string;
	v->a[125086] = aux_sym_number_token1;
	v->a[125087] = aux_sym_number_token2;
	v->a[125088] = anon_sym_DOLLAR_LBRACE;
	v->a[125089] = anon_sym_DOLLAR_LPAREN;
	v->a[125090] = anon_sym_BQUOTE;
	v->a[125091] = anon_sym_DOLLAR_BQUOTE;
	v->a[125092] = anon_sym_LT_LPAREN;
	v->a[125093] = anon_sym_GT_LPAREN;
	v->a[125094] = sym_word;
	v->a[125095] = 5;
	v->a[125096] = actions(71);
	v->a[125097] = 1;
	v->a[125098] = sym_comment;
	v->a[125099] = state(2555);
	small_parse_table_6255(v);
}

/* EOF small_parse_table_1250.c */
