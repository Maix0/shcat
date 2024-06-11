/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_374.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1870(t_small_parse_table_array *v)
{
	v->a[37400] = actions(1153);
	v->a[37401] = 4;
	v->a[37402] = sym_file_descriptor;
	v->a[37403] = sym__concat;
	v->a[37404] = sym_variable_name;
	v->a[37405] = ts_builtin_sym_end;
	v->a[37406] = actions(1151);
	v->a[37407] = 29;
	v->a[37408] = anon_sym_PIPE;
	v->a[37409] = anon_sym_SEMI_SEMI;
	v->a[37410] = anon_sym_AMP_AMP;
	v->a[37411] = anon_sym_PIPE_PIPE;
	v->a[37412] = anon_sym_LT;
	v->a[37413] = anon_sym_GT;
	v->a[37414] = anon_sym_GT_GT;
	v->a[37415] = anon_sym_AMP_GT;
	v->a[37416] = anon_sym_AMP_GT_GT;
	v->a[37417] = anon_sym_LT_AMP;
	v->a[37418] = anon_sym_GT_AMP;
	v->a[37419] = anon_sym_GT_PIPE;
	small_parse_table_1871(v);
}

void	small_parse_table_1871(t_small_parse_table_array *v)
{
	v->a[37420] = anon_sym_LT_AMP_DASH;
	v->a[37421] = anon_sym_GT_AMP_DASH;
	v->a[37422] = anon_sym_LT_LT;
	v->a[37423] = anon_sym_LT_LT_DASH;
	v->a[37424] = aux_sym_heredoc_redirect_token1;
	v->a[37425] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37426] = anon_sym_AMP;
	v->a[37427] = aux_sym_concatenation_token1;
	v->a[37428] = anon_sym_DOLLAR;
	v->a[37429] = anon_sym_DQUOTE;
	v->a[37430] = sym_raw_string;
	v->a[37431] = sym_number;
	v->a[37432] = anon_sym_DOLLAR_LBRACE;
	v->a[37433] = anon_sym_DOLLAR_LPAREN;
	v->a[37434] = anon_sym_BQUOTE;
	v->a[37435] = sym_word;
	v->a[37436] = anon_sym_SEMI;
	v->a[37437] = 17;
	v->a[37438] = actions(1094);
	v->a[37439] = 1;
	small_parse_table_1872(v);
}

void	small_parse_table_1872(t_small_parse_table_array *v)
{
	v->a[37440] = sym_comment;
	v->a[37441] = actions(1108);
	v->a[37442] = 1;
	v->a[37443] = anon_sym_PIPE;
	v->a[37444] = actions(1110);
	v->a[37445] = 1;
	v->a[37446] = anon_sym_AMP_AMP;
	v->a[37447] = actions(1112);
	v->a[37448] = 1;
	v->a[37449] = anon_sym_CARET;
	v->a[37450] = actions(1114);
	v->a[37451] = 1;
	v->a[37452] = anon_sym_AMP;
	v->a[37453] = actions(1126);
	v->a[37454] = 1;
	v->a[37455] = anon_sym_PIPE_PIPE;
	v->a[37456] = actions(1128);
	v->a[37457] = 1;
	v->a[37458] = anon_sym_QMARK;
	v->a[37459] = actions(1155);
	small_parse_table_1873(v);
}

void	small_parse_table_1873(t_small_parse_table_array *v)
{
	v->a[37460] = 1;
	v->a[37461] = anon_sym_EQ;
	v->a[37462] = actions(1421);
	v->a[37463] = 1;
	v->a[37464] = anon_sym_RPAREN_RPAREN;
	v->a[37465] = actions(1082);
	v->a[37466] = 2;
	v->a[37467] = anon_sym_LT;
	v->a[37468] = anon_sym_GT;
	v->a[37469] = actions(1084);
	v->a[37470] = 2;
	v->a[37471] = anon_sym_GT_GT;
	v->a[37472] = anon_sym_LT_LT;
	v->a[37473] = actions(1086);
	v->a[37474] = 2;
	v->a[37475] = anon_sym_LT_EQ;
	v->a[37476] = anon_sym_GT_EQ;
	v->a[37477] = actions(1088);
	v->a[37478] = 2;
	v->a[37479] = anon_sym_PLUS;
	small_parse_table_1874(v);
}

void	small_parse_table_1874(t_small_parse_table_array *v)
{
	v->a[37480] = anon_sym_DASH;
	v->a[37481] = actions(1092);
	v->a[37482] = 2;
	v->a[37483] = anon_sym_PLUS_PLUS2;
	v->a[37484] = anon_sym_DASH_DASH2;
	v->a[37485] = actions(1116);
	v->a[37486] = 2;
	v->a[37487] = anon_sym_EQ_EQ;
	v->a[37488] = anon_sym_BANG_EQ;
	v->a[37489] = actions(1090);
	v->a[37490] = 3;
	v->a[37491] = anon_sym_STAR;
	v->a[37492] = anon_sym_SLASH;
	v->a[37493] = anon_sym_PERCENT;
	v->a[37494] = actions(1288);
	v->a[37495] = 10;
	v->a[37496] = anon_sym_PLUS_EQ;
	v->a[37497] = anon_sym_DASH_EQ;
	v->a[37498] = anon_sym_STAR_EQ;
	v->a[37499] = anon_sym_SLASH_EQ;
	small_parse_table_1875(v);
}

/* EOF small_parse_table_374.c */
