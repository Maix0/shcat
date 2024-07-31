/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_370.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1850(t_small_parse_table_array *v)
{
	v->a[37000] = actions(989);
	v->a[37001] = 1;
	v->a[37002] = sym__concat;
	v->a[37003] = state(572);
	v->a[37004] = 1;
	v->a[37005] = aux_sym_concatenation_repeat1;
	v->a[37006] = actions(967);
	v->a[37007] = 22;
	v->a[37008] = anon_sym_PIPE;
	v->a[37009] = anon_sym_AMP_AMP;
	v->a[37010] = anon_sym_PIPE_PIPE;
	v->a[37011] = anon_sym_LT;
	v->a[37012] = anon_sym_GT;
	v->a[37013] = anon_sym_GT_GT;
	v->a[37014] = anon_sym_LT_AMP;
	v->a[37015] = anon_sym_GT_AMP;
	v->a[37016] = anon_sym_GT_PIPE;
	v->a[37017] = anon_sym_LT_GT;
	v->a[37018] = anon_sym_LT_LT;
	v->a[37019] = anon_sym_LT_LT_DASH;
	small_parse_table_1851(v);
}

void	small_parse_table_1851(t_small_parse_table_array *v)
{
	v->a[37020] = aux_sym_heredoc_redirect_token1;
	v->a[37021] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37022] = anon_sym_DOLLAR;
	v->a[37023] = anon_sym_DQUOTE;
	v->a[37024] = sym_raw_string;
	v->a[37025] = sym_number;
	v->a[37026] = anon_sym_DOLLAR_LBRACE;
	v->a[37027] = anon_sym_DOLLAR_LPAREN;
	v->a[37028] = anon_sym_BQUOTE;
	v->a[37029] = sym_word;
	v->a[37030] = 6;
	v->a[37031] = actions(3);
	v->a[37032] = 1;
	v->a[37033] = sym_comment;
	v->a[37034] = actions(1069);
	v->a[37035] = 1;
	v->a[37036] = sym_variable_name;
	v->a[37037] = actions(1093);
	v->a[37038] = 1;
	v->a[37039] = aux_sym_concatenation_token1;
	small_parse_table_1852(v);
}

void	small_parse_table_1852(t_small_parse_table_array *v)
{
	v->a[37040] = actions(1099);
	v->a[37041] = 1;
	v->a[37042] = sym__concat;
	v->a[37043] = state(563);
	v->a[37044] = 1;
	v->a[37045] = aux_sym_concatenation_repeat1;
	v->a[37046] = actions(1071);
	v->a[37047] = 22;
	v->a[37048] = anon_sym_PIPE;
	v->a[37049] = anon_sym_AMP_AMP;
	v->a[37050] = anon_sym_PIPE_PIPE;
	v->a[37051] = anon_sym_LT;
	v->a[37052] = anon_sym_GT;
	v->a[37053] = anon_sym_GT_GT;
	v->a[37054] = anon_sym_LT_AMP;
	v->a[37055] = anon_sym_GT_AMP;
	v->a[37056] = anon_sym_GT_PIPE;
	v->a[37057] = anon_sym_LT_GT;
	v->a[37058] = anon_sym_LT_LT;
	v->a[37059] = anon_sym_LT_LT_DASH;
	small_parse_table_1853(v);
}

void	small_parse_table_1853(t_small_parse_table_array *v)
{
	v->a[37060] = aux_sym_heredoc_redirect_token1;
	v->a[37061] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37062] = anon_sym_DOLLAR;
	v->a[37063] = anon_sym_DQUOTE;
	v->a[37064] = sym_raw_string;
	v->a[37065] = sym_number;
	v->a[37066] = anon_sym_DOLLAR_LBRACE;
	v->a[37067] = anon_sym_DOLLAR_LPAREN;
	v->a[37068] = anon_sym_BQUOTE;
	v->a[37069] = sym_word;
	v->a[37070] = 6;
	v->a[37071] = actions(3);
	v->a[37072] = 1;
	v->a[37073] = sym_comment;
	v->a[37074] = actions(1289);
	v->a[37075] = 1;
	v->a[37076] = sym_variable_name;
	v->a[37077] = actions(1407);
	v->a[37078] = 1;
	v->a[37079] = anon_sym_RPAREN;
	small_parse_table_1854(v);
}

void	small_parse_table_1854(t_small_parse_table_array *v)
{
	v->a[37080] = actions(1286);
	v->a[37081] = 7;
	v->a[37082] = anon_sym_LT;
	v->a[37083] = anon_sym_GT;
	v->a[37084] = anon_sym_GT_GT;
	v->a[37085] = anon_sym_LT_AMP;
	v->a[37086] = anon_sym_GT_AMP;
	v->a[37087] = anon_sym_GT_PIPE;
	v->a[37088] = anon_sym_LT_GT;
	v->a[37089] = actions(1281);
	v->a[37090] = 8;
	v->a[37091] = anon_sym_PIPE;
	v->a[37092] = anon_sym_SEMI_SEMI;
	v->a[37093] = anon_sym_AMP_AMP;
	v->a[37094] = anon_sym_PIPE_PIPE;
	v->a[37095] = anon_sym_LT_LT;
	v->a[37096] = anon_sym_LT_LT_DASH;
	v->a[37097] = aux_sym_heredoc_redirect_token1;
	v->a[37098] = anon_sym_SEMI;
	v->a[37099] = actions(1279);
	small_parse_table_1855(v);
}

/* EOF small_parse_table_370.c */
