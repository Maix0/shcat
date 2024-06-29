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
	v->a[37000] = 2;
	v->a[37001] = aux_sym__simple_variable_name_token1;
	v->a[37002] = aux_sym__multiline_variable_name_token1;
	v->a[37003] = actions(1302);
	v->a[37004] = 9;
	v->a[37005] = anon_sym_BANG;
	v->a[37006] = anon_sym_DASH;
	v->a[37007] = anon_sym_STAR;
	v->a[37008] = anon_sym_QMARK;
	v->a[37009] = anon_sym_DOLLAR;
	v->a[37010] = anon_sym_POUND;
	v->a[37011] = anon_sym_AT;
	v->a[37012] = anon_sym_0;
	v->a[37013] = anon_sym__;
	v->a[37014] = actions(379);
	v->a[37015] = 20;
	v->a[37016] = anon_sym_PIPE;
	v->a[37017] = anon_sym_RPAREN;
	v->a[37018] = anon_sym_SEMI_SEMI;
	v->a[37019] = anon_sym_AMP_AMP;
	small_parse_table_1851(v);
}

void	small_parse_table_1851(t_small_parse_table_array *v)
{
	v->a[37020] = anon_sym_PIPE_PIPE;
	v->a[37021] = anon_sym_LT;
	v->a[37022] = anon_sym_GT;
	v->a[37023] = anon_sym_GT_GT;
	v->a[37024] = anon_sym_AMP_GT;
	v->a[37025] = anon_sym_AMP_GT_GT;
	v->a[37026] = anon_sym_LT_AMP;
	v->a[37027] = anon_sym_GT_AMP;
	v->a[37028] = anon_sym_GT_PIPE;
	v->a[37029] = anon_sym_LT_AMP_DASH;
	v->a[37030] = anon_sym_GT_AMP_DASH;
	v->a[37031] = anon_sym_LT_LT;
	v->a[37032] = anon_sym_LT_LT_DASH;
	v->a[37033] = aux_sym_heredoc_redirect_token1;
	v->a[37034] = anon_sym_AMP;
	v->a[37035] = anon_sym_SEMI;
	v->a[37036] = 3;
	v->a[37037] = actions(3);
	v->a[37038] = 1;
	v->a[37039] = sym_comment;
	small_parse_table_1852(v);
}

void	small_parse_table_1852(t_small_parse_table_array *v)
{
	v->a[37040] = actions(1048);
	v->a[37041] = 3;
	v->a[37042] = sym_file_descriptor;
	v->a[37043] = sym__concat;
	v->a[37044] = sym__bare_dollar;
	v->a[37045] = actions(1046);
	v->a[37046] = 30;
	v->a[37047] = anon_sym_esac;
	v->a[37048] = anon_sym_PIPE;
	v->a[37049] = anon_sym_SEMI_SEMI;
	v->a[37050] = anon_sym_AMP_AMP;
	v->a[37051] = anon_sym_PIPE_PIPE;
	v->a[37052] = anon_sym_LT;
	v->a[37053] = anon_sym_GT;
	v->a[37054] = anon_sym_GT_GT;
	v->a[37055] = anon_sym_AMP_GT;
	v->a[37056] = anon_sym_AMP_GT_GT;
	v->a[37057] = anon_sym_LT_AMP;
	v->a[37058] = anon_sym_GT_AMP;
	v->a[37059] = anon_sym_GT_PIPE;
	small_parse_table_1853(v);
}

void	small_parse_table_1853(t_small_parse_table_array *v)
{
	v->a[37060] = anon_sym_LT_AMP_DASH;
	v->a[37061] = anon_sym_GT_AMP_DASH;
	v->a[37062] = anon_sym_LT_LT;
	v->a[37063] = anon_sym_LT_LT_DASH;
	v->a[37064] = aux_sym_heredoc_redirect_token1;
	v->a[37065] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37066] = anon_sym_AMP;
	v->a[37067] = aux_sym_concatenation_token1;
	v->a[37068] = anon_sym_DOLLAR;
	v->a[37069] = anon_sym_DQUOTE;
	v->a[37070] = sym_raw_string;
	v->a[37071] = sym_number;
	v->a[37072] = anon_sym_DOLLAR_LBRACE;
	v->a[37073] = anon_sym_DOLLAR_LPAREN;
	v->a[37074] = anon_sym_BQUOTE;
	v->a[37075] = sym_word;
	v->a[37076] = anon_sym_SEMI;
	v->a[37077] = 3;
	v->a[37078] = actions(1074);
	v->a[37079] = 1;
	small_parse_table_1854(v);
}

void	small_parse_table_1854(t_small_parse_table_array *v)
{
	v->a[37080] = sym_comment;
	v->a[37081] = actions(1116);
	v->a[37082] = 13;
	v->a[37083] = anon_sym_PIPE;
	v->a[37084] = anon_sym_EQ;
	v->a[37085] = anon_sym_LT;
	v->a[37086] = anon_sym_GT;
	v->a[37087] = anon_sym_GT_GT;
	v->a[37088] = anon_sym_LT_LT;
	v->a[37089] = anon_sym_CARET;
	v->a[37090] = anon_sym_AMP;
	v->a[37091] = anon_sym_PLUS;
	v->a[37092] = anon_sym_DASH;
	v->a[37093] = anon_sym_STAR;
	v->a[37094] = anon_sym_SLASH;
	v->a[37095] = anon_sym_PERCENT;
	v->a[37096] = actions(1118);
	v->a[37097] = 20;
	v->a[37098] = anon_sym_RPAREN;
	v->a[37099] = anon_sym_AMP_AMP;
	small_parse_table_1855(v);
}

/* EOF small_parse_table_370.c */
