/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_390.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1950(t_small_parse_table_array *v)
{
	v->a[39000] = sym_raw_string;
	v->a[39001] = aux_sym_number_token1;
	v->a[39002] = aux_sym_number_token2;
	v->a[39003] = anon_sym_DOLLAR_LBRACE;
	v->a[39004] = anon_sym_DOLLAR_LPAREN;
	v->a[39005] = anon_sym_BQUOTE;
	v->a[39006] = sym_word;
	v->a[39007] = anon_sym_SEMI;
	v->a[39008] = 3;
	v->a[39009] = actions(3);
	v->a[39010] = 1;
	v->a[39011] = sym_comment;
	v->a[39012] = actions(1329);
	v->a[39013] = 3;
	v->a[39014] = sym_file_descriptor;
	v->a[39015] = sym__concat;
	v->a[39016] = sym__bare_dollar;
	v->a[39017] = actions(1327);
	v->a[39018] = 31;
	v->a[39019] = anon_sym_esac;
	small_parse_table_1951(v);
}

void	small_parse_table_1951(t_small_parse_table_array *v)
{
	v->a[39020] = anon_sym_PIPE;
	v->a[39021] = anon_sym_SEMI_SEMI;
	v->a[39022] = anon_sym_AMP_AMP;
	v->a[39023] = anon_sym_PIPE_PIPE;
	v->a[39024] = anon_sym_LT;
	v->a[39025] = anon_sym_GT;
	v->a[39026] = anon_sym_GT_GT;
	v->a[39027] = anon_sym_AMP_GT;
	v->a[39028] = anon_sym_AMP_GT_GT;
	v->a[39029] = anon_sym_LT_AMP;
	v->a[39030] = anon_sym_GT_AMP;
	v->a[39031] = anon_sym_GT_PIPE;
	v->a[39032] = anon_sym_LT_AMP_DASH;
	v->a[39033] = anon_sym_GT_AMP_DASH;
	v->a[39034] = anon_sym_LT_LT;
	v->a[39035] = anon_sym_LT_LT_DASH;
	v->a[39036] = aux_sym_heredoc_redirect_token1;
	v->a[39037] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39038] = anon_sym_AMP;
	v->a[39039] = aux_sym_concatenation_token1;
	small_parse_table_1952(v);
}

void	small_parse_table_1952(t_small_parse_table_array *v)
{
	v->a[39040] = anon_sym_DOLLAR;
	v->a[39041] = anon_sym_DQUOTE;
	v->a[39042] = sym_raw_string;
	v->a[39043] = aux_sym_number_token1;
	v->a[39044] = aux_sym_number_token2;
	v->a[39045] = anon_sym_DOLLAR_LBRACE;
	v->a[39046] = anon_sym_DOLLAR_LPAREN;
	v->a[39047] = anon_sym_BQUOTE;
	v->a[39048] = sym_word;
	v->a[39049] = anon_sym_SEMI;
	v->a[39050] = 6;
	v->a[39051] = actions(3);
	v->a[39052] = 1;
	v->a[39053] = sym_comment;
	v->a[39054] = actions(1505);
	v->a[39055] = 1;
	v->a[39056] = aux_sym_concatenation_token1;
	v->a[39057] = actions(1517);
	v->a[39058] = 1;
	v->a[39059] = sym__concat;
	small_parse_table_1953(v);
}

void	small_parse_table_1953(t_small_parse_table_array *v)
{
	v->a[39060] = state(445);
	v->a[39061] = 1;
	v->a[39062] = aux_sym_concatenation_repeat1;
	v->a[39063] = actions(1210);
	v->a[39064] = 2;
	v->a[39065] = sym_file_descriptor;
	v->a[39066] = ts_builtin_sym_end;
	v->a[39067] = actions(1206);
	v->a[39068] = 29;
	v->a[39069] = anon_sym_PIPE;
	v->a[39070] = anon_sym_SEMI_SEMI;
	v->a[39071] = anon_sym_AMP_AMP;
	v->a[39072] = anon_sym_PIPE_PIPE;
	v->a[39073] = anon_sym_LT;
	v->a[39074] = anon_sym_GT;
	v->a[39075] = anon_sym_GT_GT;
	v->a[39076] = anon_sym_AMP_GT;
	v->a[39077] = anon_sym_AMP_GT_GT;
	v->a[39078] = anon_sym_LT_AMP;
	v->a[39079] = anon_sym_GT_AMP;
	small_parse_table_1954(v);
}

void	small_parse_table_1954(t_small_parse_table_array *v)
{
	v->a[39080] = anon_sym_GT_PIPE;
	v->a[39081] = anon_sym_LT_AMP_DASH;
	v->a[39082] = anon_sym_GT_AMP_DASH;
	v->a[39083] = anon_sym_LT_LT;
	v->a[39084] = anon_sym_LT_LT_DASH;
	v->a[39085] = aux_sym_heredoc_redirect_token1;
	v->a[39086] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39087] = anon_sym_AMP;
	v->a[39088] = anon_sym_DOLLAR;
	v->a[39089] = anon_sym_DQUOTE;
	v->a[39090] = sym_raw_string;
	v->a[39091] = aux_sym_number_token1;
	v->a[39092] = aux_sym_number_token2;
	v->a[39093] = anon_sym_DOLLAR_LBRACE;
	v->a[39094] = anon_sym_DOLLAR_LPAREN;
	v->a[39095] = anon_sym_BQUOTE;
	v->a[39096] = sym_word;
	v->a[39097] = anon_sym_SEMI;
	v->a[39098] = 3;
	v->a[39099] = actions(3);
	small_parse_table_1955(v);
}

/* EOF small_parse_table_390.c */
