/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_510.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2550(t_small_parse_table_array *v)
{
	v->a[51000] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51001] = anon_sym_AMP;
	v->a[51002] = anon_sym_DOLLAR;
	v->a[51003] = anon_sym_DQUOTE;
	v->a[51004] = sym_raw_string;
	v->a[51005] = sym_number;
	v->a[51006] = anon_sym_DOLLAR_LBRACE;
	v->a[51007] = anon_sym_DOLLAR_LPAREN;
	v->a[51008] = anon_sym_BQUOTE;
	v->a[51009] = sym_word;
	v->a[51010] = anon_sym_SEMI;
	v->a[51011] = 7;
	v->a[51012] = actions(3);
	v->a[51013] = 1;
	v->a[51014] = sym_comment;
	v->a[51015] = actions(1565);
	v->a[51016] = 1;
	v->a[51017] = sym_file_descriptor;
	v->a[51018] = actions(1568);
	v->a[51019] = 1;
	small_parse_table_2551(v);
}

void	small_parse_table_2551(t_small_parse_table_array *v)
{
	v->a[51020] = sym_variable_name;
	v->a[51021] = actions(1677);
	v->a[51022] = 1;
	v->a[51023] = anon_sym_RPAREN;
	v->a[51024] = actions(1558);
	v->a[51025] = 9;
	v->a[51026] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51027] = anon_sym_DOLLAR;
	v->a[51028] = anon_sym_DQUOTE;
	v->a[51029] = sym_raw_string;
	v->a[51030] = sym_number;
	v->a[51031] = anon_sym_DOLLAR_LBRACE;
	v->a[51032] = anon_sym_DOLLAR_LPAREN;
	v->a[51033] = anon_sym_BQUOTE;
	v->a[51034] = sym_word;
	v->a[51035] = actions(1560);
	v->a[51036] = 9;
	v->a[51037] = anon_sym_PIPE;
	v->a[51038] = anon_sym_SEMI_SEMI;
	v->a[51039] = anon_sym_AMP_AMP;
	small_parse_table_2552(v);
}

void	small_parse_table_2552(t_small_parse_table_array *v)
{
	v->a[51040] = anon_sym_PIPE_PIPE;
	v->a[51041] = anon_sym_LT_LT;
	v->a[51042] = anon_sym_LT_LT_DASH;
	v->a[51043] = aux_sym_heredoc_redirect_token1;
	v->a[51044] = anon_sym_AMP;
	v->a[51045] = anon_sym_SEMI;
	v->a[51046] = actions(1562);
	v->a[51047] = 10;
	v->a[51048] = anon_sym_LT;
	v->a[51049] = anon_sym_GT;
	v->a[51050] = anon_sym_GT_GT;
	v->a[51051] = anon_sym_AMP_GT;
	v->a[51052] = anon_sym_AMP_GT_GT;
	v->a[51053] = anon_sym_LT_AMP;
	v->a[51054] = anon_sym_GT_AMP;
	v->a[51055] = anon_sym_GT_PIPE;
	v->a[51056] = anon_sym_LT_AMP_DASH;
	v->a[51057] = anon_sym_GT_AMP_DASH;
	v->a[51058] = 3;
	v->a[51059] = actions(3);
	small_parse_table_2553(v);
}

void	small_parse_table_2553(t_small_parse_table_array *v)
{
	v->a[51060] = 1;
	v->a[51061] = sym_comment;
	v->a[51062] = actions(1579);
	v->a[51063] = 2;
	v->a[51064] = sym_file_descriptor;
	v->a[51065] = sym__bare_dollar;
	v->a[51066] = actions(1577);
	v->a[51067] = 29;
	v->a[51068] = anon_sym_esac;
	v->a[51069] = anon_sym_PIPE;
	v->a[51070] = anon_sym_SEMI_SEMI;
	v->a[51071] = anon_sym_AMP_AMP;
	v->a[51072] = anon_sym_PIPE_PIPE;
	v->a[51073] = anon_sym_LT;
	v->a[51074] = anon_sym_GT;
	v->a[51075] = anon_sym_GT_GT;
	v->a[51076] = anon_sym_AMP_GT;
	v->a[51077] = anon_sym_AMP_GT_GT;
	v->a[51078] = anon_sym_LT_AMP;
	v->a[51079] = anon_sym_GT_AMP;
	small_parse_table_2554(v);
}

void	small_parse_table_2554(t_small_parse_table_array *v)
{
	v->a[51080] = anon_sym_GT_PIPE;
	v->a[51081] = anon_sym_LT_AMP_DASH;
	v->a[51082] = anon_sym_GT_AMP_DASH;
	v->a[51083] = anon_sym_LT_LT;
	v->a[51084] = anon_sym_LT_LT_DASH;
	v->a[51085] = aux_sym_heredoc_redirect_token1;
	v->a[51086] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[51087] = anon_sym_AMP;
	v->a[51088] = anon_sym_DOLLAR;
	v->a[51089] = anon_sym_DQUOTE;
	v->a[51090] = sym_raw_string;
	v->a[51091] = sym_number;
	v->a[51092] = anon_sym_DOLLAR_LBRACE;
	v->a[51093] = anon_sym_DOLLAR_LPAREN;
	v->a[51094] = anon_sym_BQUOTE;
	v->a[51095] = sym_word;
	v->a[51096] = anon_sym_SEMI;
	v->a[51097] = 7;
	v->a[51098] = actions(3);
	v->a[51099] = 1;
	small_parse_table_2555(v);
}

/* EOF small_parse_table_510.c */
