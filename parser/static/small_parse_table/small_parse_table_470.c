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
	v->a[47000] = anon_sym_case;
	v->a[47001] = anon_sym_LPAREN;
	v->a[47002] = anon_sym_LBRACE;
	v->a[47003] = anon_sym_BANG;
	v->a[47004] = anon_sym_LT;
	v->a[47005] = anon_sym_GT;
	v->a[47006] = anon_sym_GT_GT;
	v->a[47007] = anon_sym_LT_AMP;
	v->a[47008] = anon_sym_GT_AMP;
	v->a[47009] = anon_sym_GT_PIPE;
	v->a[47010] = anon_sym_LT_GT;
	v->a[47011] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[47012] = anon_sym_DOLLAR;
	v->a[47013] = anon_sym_DQUOTE;
	v->a[47014] = sym_raw_string;
	v->a[47015] = sym_number;
	v->a[47016] = anon_sym_DOLLAR_LBRACE;
	v->a[47017] = anon_sym_DOLLAR_LPAREN;
	v->a[47018] = anon_sym_BQUOTE;
	v->a[47019] = sym_word;
	small_parse_table_2351(v);
}

void	small_parse_table_2351(t_small_parse_table_array *v)
{
	v->a[47020] = 18;
	v->a[47021] = actions(3);
	v->a[47022] = 1;
	v->a[47023] = sym_comment;
	v->a[47024] = actions(1637);
	v->a[47025] = 1;
	v->a[47026] = anon_sym_LPAREN;
	v->a[47027] = actions(1641);
	v->a[47028] = 1;
	v->a[47029] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[47030] = actions(1643);
	v->a[47031] = 1;
	v->a[47032] = anon_sym_DOLLAR;
	v->a[47033] = actions(1645);
	v->a[47034] = 1;
	v->a[47035] = anon_sym_DQUOTE;
	v->a[47036] = actions(1647);
	v->a[47037] = 1;
	v->a[47038] = anon_sym_DOLLAR_LBRACE;
	v->a[47039] = actions(1649);
	small_parse_table_2352(v);
}

void	small_parse_table_2352(t_small_parse_table_array *v)
{
	v->a[47040] = 1;
	v->a[47041] = anon_sym_DOLLAR_LPAREN;
	v->a[47042] = actions(1651);
	v->a[47043] = 1;
	v->a[47044] = anon_sym_BQUOTE;
	v->a[47045] = actions(1653);
	v->a[47046] = 1;
	v->a[47047] = sym_extglob_pattern;
	v->a[47048] = actions(1695);
	v->a[47049] = 1;
	v->a[47050] = anon_sym_esac;
	v->a[47051] = state(952);
	v->a[47052] = 1;
	v->a[47053] = sym_terminator;
	v->a[47054] = state(1041);
	v->a[47055] = 1;
	v->a[47056] = aux_sym_case_statement_repeat1;
	v->a[47057] = state(1713);
	v->a[47058] = 1;
	v->a[47059] = sym_case_item;
	small_parse_table_2353(v);
}

void	small_parse_table_2353(t_small_parse_table_array *v)
{
	v->a[47060] = state(2091);
	v->a[47061] = 1;
	v->a[47062] = sym__case_item_last;
	v->a[47063] = state(1873);
	v->a[47064] = 2;
	v->a[47065] = sym_concatenation;
	v->a[47066] = sym__extglob_blob;
	v->a[47067] = actions(1633);
	v->a[47068] = 3;
	v->a[47069] = sym_raw_string;
	v->a[47070] = sym_number;
	v->a[47071] = sym_word;
	v->a[47072] = actions(1639);
	v->a[47073] = 4;
	v->a[47074] = anon_sym_SEMI_SEMI;
	v->a[47075] = aux_sym_heredoc_redirect_token1;
	v->a[47076] = anon_sym_AMP;
	v->a[47077] = anon_sym_SEMI;
	v->a[47078] = state(1806);
	v->a[47079] = 5;
	small_parse_table_2354(v);
}

void	small_parse_table_2354(t_small_parse_table_array *v)
{
	v->a[47080] = sym_arithmetic_expansion;
	v->a[47081] = sym_string;
	v->a[47082] = sym_simple_expansion;
	v->a[47083] = sym_expansion;
	v->a[47084] = sym_command_substitution;
	v->a[47085] = 18;
	v->a[47086] = actions(3);
	v->a[47087] = 1;
	v->a[47088] = sym_comment;
	v->a[47089] = actions(1637);
	v->a[47090] = 1;
	v->a[47091] = anon_sym_LPAREN;
	v->a[47092] = actions(1641);
	v->a[47093] = 1;
	v->a[47094] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[47095] = actions(1643);
	v->a[47096] = 1;
	v->a[47097] = anon_sym_DOLLAR;
	v->a[47098] = actions(1645);
	v->a[47099] = 1;
	small_parse_table_2355(v);
}

/* EOF small_parse_table_470.c */
