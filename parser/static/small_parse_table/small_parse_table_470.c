/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_470.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2350(t_small_parse_table_array *v)
{
	v->a[47000] = actions(2013);
	v->a[47001] = 1;
	v->a[47002] = sym_string_content;
	v->a[47003] = actions(2017);
	v->a[47004] = 1;
	v->a[47005] = sym_variable_name;
	v->a[47006] = actions(2145);
	v->a[47007] = 1;
	v->a[47008] = anon_sym_DQUOTE;
	v->a[47009] = actions(2015);
	v->a[47010] = 2;
	v->a[47011] = aux_sym__simple_variable_name_token1;
	v->a[47012] = aux_sym__multiline_variable_name_token1;
	v->a[47013] = actions(2009);
	v->a[47014] = 8;
	v->a[47015] = anon_sym_BANG;
	v->a[47016] = anon_sym_DASH;
	v->a[47017] = anon_sym_STAR;
	v->a[47018] = anon_sym_QMARK;
	v->a[47019] = anon_sym_DOLLAR;
	small_parse_table_2351(v);
}

void	small_parse_table_2351(t_small_parse_table_array *v)
{
	v->a[47020] = anon_sym_POUND;
	v->a[47021] = anon_sym_AT;
	v->a[47022] = anon_sym_0;
	v->a[47023] = 5;
	v->a[47024] = actions(3);
	v->a[47025] = 1;
	v->a[47026] = sym_comment;
	v->a[47027] = actions(1465);
	v->a[47028] = 1;
	v->a[47029] = aux_sym_concatenation_token1;
	v->a[47030] = actions(2147);
	v->a[47031] = 1;
	v->a[47032] = sym__concat;
	v->a[47033] = state(601);
	v->a[47034] = 1;
	v->a[47035] = aux_sym_concatenation_repeat1;
	v->a[47036] = actions(923);
	v->a[47037] = 10;
	v->a[47038] = aux_sym_heredoc_redirect_token1;
	v->a[47039] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_2352(v);
}

void	small_parse_table_2352(t_small_parse_table_array *v)
{
	v->a[47040] = anon_sym_DOLLAR;
	v->a[47041] = anon_sym_DQUOTE;
	v->a[47042] = sym_raw_string;
	v->a[47043] = sym_number;
	v->a[47044] = anon_sym_DOLLAR_LBRACE;
	v->a[47045] = anon_sym_DOLLAR_LPAREN;
	v->a[47046] = anon_sym_BQUOTE;
	v->a[47047] = sym_word;
	v->a[47048] = 3;
	v->a[47049] = actions(3);
	v->a[47050] = 1;
	v->a[47051] = sym_comment;
	v->a[47052] = actions(2149);
	v->a[47053] = 2;
	v->a[47054] = ts_builtin_sym_end;
	v->a[47055] = aux_sym_heredoc_redirect_token1;
	v->a[47056] = actions(2151);
	v->a[47057] = 11;
	v->a[47058] = anon_sym_PIPE;
	v->a[47059] = anon_sym_RPAREN;
	small_parse_table_2353(v);
}

void	small_parse_table_2353(t_small_parse_table_array *v)
{
	v->a[47060] = anon_sym_SEMI_SEMI;
	v->a[47061] = anon_sym_AMP_AMP;
	v->a[47062] = anon_sym_PIPE_PIPE;
	v->a[47063] = anon_sym_LT;
	v->a[47064] = anon_sym_GT;
	v->a[47065] = anon_sym_GT_GT;
	v->a[47066] = anon_sym_LT_LT;
	v->a[47067] = anon_sym_BQUOTE;
	v->a[47068] = anon_sym_SEMI;
	v->a[47069] = 3;
	v->a[47070] = actions(3);
	v->a[47071] = 1;
	v->a[47072] = sym_comment;
	v->a[47073] = actions(2153);
	v->a[47074] = 2;
	v->a[47075] = ts_builtin_sym_end;
	v->a[47076] = aux_sym_heredoc_redirect_token1;
	v->a[47077] = actions(2155);
	v->a[47078] = 11;
	v->a[47079] = anon_sym_PIPE;
	small_parse_table_2354(v);
}

void	small_parse_table_2354(t_small_parse_table_array *v)
{
	v->a[47080] = anon_sym_RPAREN;
	v->a[47081] = anon_sym_SEMI_SEMI;
	v->a[47082] = anon_sym_AMP_AMP;
	v->a[47083] = anon_sym_PIPE_PIPE;
	v->a[47084] = anon_sym_LT;
	v->a[47085] = anon_sym_GT;
	v->a[47086] = anon_sym_GT_GT;
	v->a[47087] = anon_sym_LT_LT;
	v->a[47088] = anon_sym_BQUOTE;
	v->a[47089] = anon_sym_SEMI;
	v->a[47090] = 6;
	v->a[47091] = actions(3);
	v->a[47092] = 1;
	v->a[47093] = sym_comment;
	v->a[47094] = actions(2013);
	v->a[47095] = 1;
	v->a[47096] = sym_string_content;
	v->a[47097] = actions(2017);
	v->a[47098] = 1;
	v->a[47099] = sym_variable_name;
	small_parse_table_2355(v);
}

/* EOF small_parse_table_470.c */
