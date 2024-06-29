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
	v->a[39000] = actions(988);
	v->a[39001] = 3;
	v->a[39002] = sym_file_descriptor;
	v->a[39003] = sym__concat;
	v->a[39004] = sym_variable_name;
	v->a[39005] = actions(983);
	v->a[39006] = 30;
	v->a[39007] = anon_sym_PIPE;
	v->a[39008] = anon_sym_RPAREN;
	v->a[39009] = anon_sym_SEMI_SEMI;
	v->a[39010] = anon_sym_AMP_AMP;
	v->a[39011] = anon_sym_PIPE_PIPE;
	v->a[39012] = anon_sym_LT;
	v->a[39013] = anon_sym_GT;
	v->a[39014] = anon_sym_GT_GT;
	v->a[39015] = anon_sym_AMP_GT;
	v->a[39016] = anon_sym_AMP_GT_GT;
	v->a[39017] = anon_sym_LT_AMP;
	v->a[39018] = anon_sym_GT_AMP;
	v->a[39019] = anon_sym_GT_PIPE;
	small_parse_table_1951(v);
}

void	small_parse_table_1951(t_small_parse_table_array *v)
{
	v->a[39020] = anon_sym_LT_AMP_DASH;
	v->a[39021] = anon_sym_GT_AMP_DASH;
	v->a[39022] = anon_sym_LT_LT;
	v->a[39023] = anon_sym_LT_LT_DASH;
	v->a[39024] = aux_sym_heredoc_redirect_token1;
	v->a[39025] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39026] = anon_sym_AMP;
	v->a[39027] = aux_sym_concatenation_token1;
	v->a[39028] = anon_sym_DOLLAR;
	v->a[39029] = anon_sym_DQUOTE;
	v->a[39030] = sym_raw_string;
	v->a[39031] = sym_number;
	v->a[39032] = anon_sym_DOLLAR_LBRACE;
	v->a[39033] = anon_sym_DOLLAR_LPAREN;
	v->a[39034] = anon_sym_BQUOTE;
	v->a[39035] = sym_word;
	v->a[39036] = anon_sym_SEMI;
	v->a[39037] = 6;
	v->a[39038] = actions(3);
	v->a[39039] = 1;
	small_parse_table_1952(v);
}

void	small_parse_table_1952(t_small_parse_table_array *v)
{
	v->a[39040] = sym_comment;
	v->a[39041] = actions(385);
	v->a[39042] = 1;
	v->a[39043] = sym_file_descriptor;
	v->a[39044] = actions(1262);
	v->a[39045] = 1;
	v->a[39046] = sym_variable_name;
	v->a[39047] = actions(1260);
	v->a[39048] = 2;
	v->a[39049] = aux_sym__simple_variable_name_token1;
	v->a[39050] = aux_sym__multiline_variable_name_token1;
	v->a[39051] = actions(1258);
	v->a[39052] = 9;
	v->a[39053] = anon_sym_BANG;
	v->a[39054] = anon_sym_DASH;
	v->a[39055] = anon_sym_STAR;
	v->a[39056] = anon_sym_QMARK;
	v->a[39057] = anon_sym_DOLLAR;
	v->a[39058] = anon_sym_POUND;
	v->a[39059] = anon_sym_AT;
	small_parse_table_1953(v);
}

void	small_parse_table_1953(t_small_parse_table_array *v)
{
	v->a[39060] = anon_sym_0;
	v->a[39061] = anon_sym__;
	v->a[39062] = actions(379);
	v->a[39063] = 20;
	v->a[39064] = anon_sym_PIPE;
	v->a[39065] = anon_sym_SEMI_SEMI;
	v->a[39066] = anon_sym_AMP_AMP;
	v->a[39067] = anon_sym_PIPE_PIPE;
	v->a[39068] = anon_sym_LT;
	v->a[39069] = anon_sym_GT;
	v->a[39070] = anon_sym_GT_GT;
	v->a[39071] = anon_sym_AMP_GT;
	v->a[39072] = anon_sym_AMP_GT_GT;
	v->a[39073] = anon_sym_LT_AMP;
	v->a[39074] = anon_sym_GT_AMP;
	v->a[39075] = anon_sym_GT_PIPE;
	v->a[39076] = anon_sym_LT_AMP_DASH;
	v->a[39077] = anon_sym_GT_AMP_DASH;
	v->a[39078] = anon_sym_LT_LT;
	v->a[39079] = anon_sym_LT_LT_DASH;
	small_parse_table_1954(v);
}

void	small_parse_table_1954(t_small_parse_table_array *v)
{
	v->a[39080] = aux_sym_heredoc_redirect_token1;
	v->a[39081] = anon_sym_AMP;
	v->a[39082] = anon_sym_BQUOTE;
	v->a[39083] = anon_sym_SEMI;
	v->a[39084] = 5;
	v->a[39085] = actions(3);
	v->a[39086] = 1;
	v->a[39087] = sym_comment;
	v->a[39088] = state(768);
	v->a[39089] = 1;
	v->a[39090] = sym_concatenation;
	v->a[39091] = actions(754);
	v->a[39092] = 2;
	v->a[39093] = sym_file_descriptor;
	v->a[39094] = sym_variable_name;
	v->a[39095] = state(806);
	v->a[39096] = 5;
	v->a[39097] = sym_arithmetic_expansion;
	v->a[39098] = sym_string;
	v->a[39099] = sym_simple_expansion;
	small_parse_table_1955(v);
}

/* EOF small_parse_table_390.c */
