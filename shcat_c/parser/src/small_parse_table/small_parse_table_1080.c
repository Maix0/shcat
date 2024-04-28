/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1080.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5400(t_small_parse_table_array *v)
{
	v->a[108000] = sym_file_descriptor;
	v->a[108001] = sym_variable_name;
	v->a[108002] = sym_test_operator;
	v->a[108003] = sym__brace_start;
	v->a[108004] = ts_builtin_sym_end;
	v->a[108005] = aux_sym_heredoc_redirect_token1;
	v->a[108006] = actions(2072);
	v->a[108007] = 37;
	v->a[108008] = anon_sym_LPAREN_LPAREN;
	v->a[108009] = anon_sym_SEMI;
	v->a[108010] = anon_sym_PIPE_PIPE;
	v->a[108011] = anon_sym_AMP_AMP;
	v->a[108012] = anon_sym_PIPE;
	v->a[108013] = anon_sym_AMP;
	v->a[108014] = anon_sym_LT;
	v->a[108015] = anon_sym_GT;
	v->a[108016] = anon_sym_LT_LT;
	v->a[108017] = anon_sym_GT_GT;
	v->a[108018] = anon_sym_SEMI_SEMI;
	v->a[108019] = anon_sym_PIPE_AMP;
	small_parse_table_5401(v);
}

void	small_parse_table_5401(t_small_parse_table_array *v)
{
	v->a[108020] = anon_sym_AMP_GT;
	v->a[108021] = anon_sym_AMP_GT_GT;
	v->a[108022] = anon_sym_LT_AMP;
	v->a[108023] = anon_sym_GT_AMP;
	v->a[108024] = anon_sym_GT_PIPE;
	v->a[108025] = anon_sym_LT_AMP_DASH;
	v->a[108026] = anon_sym_GT_AMP_DASH;
	v->a[108027] = anon_sym_LT_LT_DASH;
	v->a[108028] = anon_sym_LT_LT_LT;
	v->a[108029] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[108030] = anon_sym_DOLLAR_LBRACK;
	v->a[108031] = anon_sym_DOLLAR;
	v->a[108032] = sym__special_character;
	v->a[108033] = anon_sym_DQUOTE;
	v->a[108034] = sym_raw_string;
	v->a[108035] = sym_ansi_c_string;
	v->a[108036] = aux_sym_number_token1;
	v->a[108037] = aux_sym_number_token2;
	v->a[108038] = anon_sym_DOLLAR_LBRACE;
	v->a[108039] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_5402(v);
}

void	small_parse_table_5402(t_small_parse_table_array *v)
{
	v->a[108040] = anon_sym_BQUOTE;
	v->a[108041] = anon_sym_DOLLAR_BQUOTE;
	v->a[108042] = anon_sym_LT_LPAREN;
	v->a[108043] = anon_sym_GT_LPAREN;
	v->a[108044] = sym_word;
	v->a[108045] = 5;
	v->a[108046] = actions(3);
	v->a[108047] = 1;
	v->a[108048] = sym_comment;
	v->a[108049] = actions(6216);
	v->a[108050] = 1;
	v->a[108051] = sym__special_character;
	v->a[108052] = state(2118);
	v->a[108053] = 1;
	v->a[108054] = aux_sym__literal_repeat1;
	v->a[108055] = actions(1364);
	v->a[108056] = 4;
	v->a[108057] = sym_file_descriptor;
	v->a[108058] = sym_test_operator;
	v->a[108059] = sym__brace_start;
	small_parse_table_5403(v);
}

void	small_parse_table_5403(t_small_parse_table_array *v)
{
	v->a[108060] = aux_sym_heredoc_redirect_token1;
	v->a[108061] = actions(1362);
	v->a[108062] = 37;
	v->a[108063] = anon_sym_LPAREN_LPAREN;
	v->a[108064] = anon_sym_SEMI;
	v->a[108065] = anon_sym_PIPE_PIPE;
	v->a[108066] = anon_sym_AMP_AMP;
	v->a[108067] = anon_sym_PIPE;
	v->a[108068] = anon_sym_AMP;
	v->a[108069] = anon_sym_LT;
	v->a[108070] = anon_sym_GT;
	v->a[108071] = anon_sym_LT_LT;
	v->a[108072] = anon_sym_GT_GT;
	v->a[108073] = anon_sym_SEMI_SEMI;
	v->a[108074] = anon_sym_SEMI_AMP;
	v->a[108075] = anon_sym_SEMI_SEMI_AMP;
	v->a[108076] = anon_sym_PIPE_AMP;
	v->a[108077] = anon_sym_AMP_GT;
	v->a[108078] = anon_sym_AMP_GT_GT;
	v->a[108079] = anon_sym_LT_AMP;
	small_parse_table_5404(v);
}

void	small_parse_table_5404(t_small_parse_table_array *v)
{
	v->a[108080] = anon_sym_GT_AMP;
	v->a[108081] = anon_sym_GT_PIPE;
	v->a[108082] = anon_sym_LT_AMP_DASH;
	v->a[108083] = anon_sym_GT_AMP_DASH;
	v->a[108084] = anon_sym_LT_LT_DASH;
	v->a[108085] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[108086] = anon_sym_DOLLAR_LBRACK;
	v->a[108087] = anon_sym_DOLLAR;
	v->a[108088] = anon_sym_DQUOTE;
	v->a[108089] = sym_raw_string;
	v->a[108090] = sym_ansi_c_string;
	v->a[108091] = aux_sym_number_token1;
	v->a[108092] = aux_sym_number_token2;
	v->a[108093] = anon_sym_DOLLAR_LBRACE;
	v->a[108094] = anon_sym_DOLLAR_LPAREN;
	v->a[108095] = anon_sym_BQUOTE;
	v->a[108096] = anon_sym_DOLLAR_BQUOTE;
	v->a[108097] = anon_sym_LT_LPAREN;
	v->a[108098] = anon_sym_GT_LPAREN;
	v->a[108099] = sym_word;
	small_parse_table_5405(v);
}

/* EOF small_parse_table_1080.c */
