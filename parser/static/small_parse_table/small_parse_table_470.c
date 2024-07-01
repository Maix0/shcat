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
	v->a[47000] = actions(1620);
	v->a[47001] = 1;
	v->a[47002] = anon_sym_RPAREN;
	v->a[47003] = actions(1527);
	v->a[47004] = 8;
	v->a[47005] = anon_sym_LT;
	v->a[47006] = anon_sym_GT;
	v->a[47007] = anon_sym_GT_GT;
	v->a[47008] = anon_sym_LT_AMP;
	v->a[47009] = anon_sym_GT_AMP;
	v->a[47010] = anon_sym_GT_PIPE;
	v->a[47011] = anon_sym_LT_AMP_DASH;
	v->a[47012] = anon_sym_GT_AMP_DASH;
	v->a[47013] = actions(1520);
	v->a[47014] = 9;
	v->a[47015] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[47016] = anon_sym_DOLLAR;
	v->a[47017] = anon_sym_DQUOTE;
	v->a[47018] = sym_raw_string;
	v->a[47019] = sym_number;
	small_parse_table_2351(v);
}

void	small_parse_table_2351(t_small_parse_table_array *v)
{
	v->a[47020] = anon_sym_DOLLAR_LBRACE;
	v->a[47021] = anon_sym_DOLLAR_LPAREN;
	v->a[47022] = anon_sym_BQUOTE;
	v->a[47023] = sym_word;
	v->a[47024] = actions(1522);
	v->a[47025] = 9;
	v->a[47026] = anon_sym_PIPE;
	v->a[47027] = anon_sym_SEMI_SEMI;
	v->a[47028] = anon_sym_AMP_AMP;
	v->a[47029] = anon_sym_PIPE_PIPE;
	v->a[47030] = anon_sym_LT_LT;
	v->a[47031] = anon_sym_LT_LT_DASH;
	v->a[47032] = aux_sym_heredoc_redirect_token1;
	v->a[47033] = anon_sym_AMP;
	v->a[47034] = anon_sym_SEMI;
	v->a[47035] = 3;
	v->a[47036] = actions(3);
	v->a[47037] = 1;
	v->a[47038] = sym_comment;
	v->a[47039] = actions(1609);
	small_parse_table_2352(v);
}

void	small_parse_table_2352(t_small_parse_table_array *v)
{
	v->a[47040] = 2;
	v->a[47041] = sym_file_descriptor;
	v->a[47042] = sym__bare_dollar;
	v->a[47043] = actions(1607);
	v->a[47044] = 27;
	v->a[47045] = anon_sym_esac;
	v->a[47046] = anon_sym_PIPE;
	v->a[47047] = anon_sym_SEMI_SEMI;
	v->a[47048] = anon_sym_AMP_AMP;
	v->a[47049] = anon_sym_PIPE_PIPE;
	v->a[47050] = anon_sym_LT;
	v->a[47051] = anon_sym_GT;
	v->a[47052] = anon_sym_GT_GT;
	v->a[47053] = anon_sym_LT_AMP;
	v->a[47054] = anon_sym_GT_AMP;
	v->a[47055] = anon_sym_GT_PIPE;
	v->a[47056] = anon_sym_LT_AMP_DASH;
	v->a[47057] = anon_sym_GT_AMP_DASH;
	v->a[47058] = anon_sym_LT_LT;
	v->a[47059] = anon_sym_LT_LT_DASH;
	small_parse_table_2353(v);
}

void	small_parse_table_2353(t_small_parse_table_array *v)
{
	v->a[47060] = aux_sym_heredoc_redirect_token1;
	v->a[47061] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[47062] = anon_sym_AMP;
	v->a[47063] = anon_sym_DOLLAR;
	v->a[47064] = anon_sym_DQUOTE;
	v->a[47065] = sym_raw_string;
	v->a[47066] = sym_number;
	v->a[47067] = anon_sym_DOLLAR_LBRACE;
	v->a[47068] = anon_sym_DOLLAR_LPAREN;
	v->a[47069] = anon_sym_BQUOTE;
	v->a[47070] = sym_word;
	v->a[47071] = anon_sym_SEMI;
	v->a[47072] = 4;
	v->a[47073] = actions(3);
	v->a[47074] = 1;
	v->a[47075] = sym_comment;
	v->a[47076] = actions(1577);
	v->a[47077] = 2;
	v->a[47078] = sym_file_descriptor;
	v->a[47079] = sym_variable_name;
	small_parse_table_2354(v);
}

void	small_parse_table_2354(t_small_parse_table_array *v)
{
	v->a[47080] = actions(1605);
	v->a[47081] = 2;
	v->a[47082] = anon_sym_esac;
	v->a[47083] = anon_sym_SEMI_SEMI;
	v->a[47084] = actions(1573);
	v->a[47085] = 25;
	v->a[47086] = anon_sym_for;
	v->a[47087] = anon_sym_while;
	v->a[47088] = anon_sym_until;
	v->a[47089] = anon_sym_if;
	v->a[47090] = anon_sym_case;
	v->a[47091] = anon_sym_LPAREN;
	v->a[47092] = anon_sym_LBRACE;
	v->a[47093] = anon_sym_BANG;
	v->a[47094] = anon_sym_LT;
	v->a[47095] = anon_sym_GT;
	v->a[47096] = anon_sym_GT_GT;
	v->a[47097] = anon_sym_LT_AMP;
	v->a[47098] = anon_sym_GT_AMP;
	v->a[47099] = anon_sym_GT_PIPE;
	small_parse_table_2355(v);
}

/* EOF small_parse_table_470.c */
