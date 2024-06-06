/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1300.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6500(t_small_parse_table_array *v)
{
	v->a[130000] = 1;
	v->a[130001] = sym_comment;
	v->a[130002] = actions(7434);
	v->a[130003] = 5;
	v->a[130004] = anon_sym_DOLLAR;
	v->a[130005] = aux_sym_number_token1;
	v->a[130006] = aux_sym_number_token2;
	v->a[130007] = anon_sym_DOLLAR_LPAREN;
	v->a[130008] = sym_word;
	v->a[130009] = actions(7436);
	v->a[130010] = 11;
	v->a[130011] = sym_test_operator;
	v->a[130012] = sym_extglob_pattern;
	v->a[130013] = sym__brace_start;
	v->a[130014] = anon_sym_LPAREN;
	v->a[130015] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[130016] = sym__special_character;
	v->a[130017] = anon_sym_DQUOTE;
	v->a[130018] = sym_raw_string;
	v->a[130019] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_6501(v);
}

void	small_parse_table_6501(t_small_parse_table_array *v)
{
	v->a[130020] = anon_sym_BQUOTE;
	v->a[130021] = anon_sym_DOLLAR_BQUOTE;
	v->a[130022] = 3;
	v->a[130023] = actions(3);
	v->a[130024] = 1;
	v->a[130025] = sym_comment;
	v->a[130026] = actions(3159);
	v->a[130027] = 3;
	v->a[130028] = sym_file_descriptor;
	v->a[130029] = sym__concat;
	v->a[130030] = aux_sym_heredoc_redirect_token1;
	v->a[130031] = actions(3157);
	v->a[130032] = 13;
	v->a[130033] = anon_sym_AMP_AMP;
	v->a[130034] = anon_sym_PIPE_PIPE;
	v->a[130035] = anon_sym_LT;
	v->a[130036] = anon_sym_GT;
	v->a[130037] = anon_sym_GT_GT;
	v->a[130038] = anon_sym_AMP_GT;
	v->a[130039] = anon_sym_AMP_GT_GT;
	small_parse_table_6502(v);
}

void	small_parse_table_6502(t_small_parse_table_array *v)
{
	v->a[130040] = anon_sym_LT_AMP;
	v->a[130041] = anon_sym_GT_AMP;
	v->a[130042] = anon_sym_GT_PIPE;
	v->a[130043] = anon_sym_LT_AMP_DASH;
	v->a[130044] = anon_sym_GT_AMP_DASH;
	v->a[130045] = aux_sym_concatenation_token1;
	v->a[130046] = 3;
	v->a[130047] = actions(57);
	v->a[130048] = 1;
	v->a[130049] = sym_comment;
	v->a[130050] = actions(7438);
	v->a[130051] = 5;
	v->a[130052] = anon_sym_DOLLAR;
	v->a[130053] = aux_sym_number_token1;
	v->a[130054] = aux_sym_number_token2;
	v->a[130055] = anon_sym_DOLLAR_LPAREN;
	v->a[130056] = sym_word;
	v->a[130057] = actions(7440);
	v->a[130058] = 11;
	v->a[130059] = sym_test_operator;
	small_parse_table_6503(v);
}

void	small_parse_table_6503(t_small_parse_table_array *v)
{
	v->a[130060] = sym_extglob_pattern;
	v->a[130061] = sym__brace_start;
	v->a[130062] = anon_sym_LPAREN;
	v->a[130063] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[130064] = sym__special_character;
	v->a[130065] = anon_sym_DQUOTE;
	v->a[130066] = sym_raw_string;
	v->a[130067] = anon_sym_DOLLAR_LBRACE;
	v->a[130068] = anon_sym_BQUOTE;
	v->a[130069] = anon_sym_DOLLAR_BQUOTE;
	v->a[130070] = 5;
	v->a[130071] = actions(3);
	v->a[130072] = 1;
	v->a[130073] = sym_comment;
	v->a[130074] = actions(7442);
	v->a[130075] = 1;
	v->a[130076] = sym__special_character;
	v->a[130077] = state(2830);
	v->a[130078] = 1;
	v->a[130079] = aux_sym__literal_repeat1;
	small_parse_table_6504(v);
}

void	small_parse_table_6504(t_small_parse_table_array *v)
{
	v->a[130080] = actions(3543);
	v->a[130081] = 2;
	v->a[130082] = sym_file_descriptor;
	v->a[130083] = aux_sym_heredoc_redirect_token1;
	v->a[130084] = actions(3541);
	v->a[130085] = 12;
	v->a[130086] = anon_sym_AMP_AMP;
	v->a[130087] = anon_sym_PIPE_PIPE;
	v->a[130088] = anon_sym_LT;
	v->a[130089] = anon_sym_GT;
	v->a[130090] = anon_sym_GT_GT;
	v->a[130091] = anon_sym_AMP_GT;
	v->a[130092] = anon_sym_AMP_GT_GT;
	v->a[130093] = anon_sym_LT_AMP;
	v->a[130094] = anon_sym_GT_AMP;
	v->a[130095] = anon_sym_GT_PIPE;
	v->a[130096] = anon_sym_LT_AMP_DASH;
	v->a[130097] = anon_sym_GT_AMP_DASH;
	v->a[130098] = 3;
	v->a[130099] = actions(57);
	small_parse_table_6505(v);
}

/* EOF small_parse_table_1300.c */
