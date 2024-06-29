/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_204.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1020(t_small_parse_table_array *v)
{
	v->a[20400] = sym_number;
	v->a[20401] = anon_sym_DOLLAR_LBRACE;
	v->a[20402] = anon_sym_DOLLAR_LPAREN;
	v->a[20403] = anon_sym_BQUOTE;
	v->a[20404] = sym_word;
	v->a[20405] = anon_sym_SEMI;
	v->a[20406] = 6;
	v->a[20407] = actions(3);
	v->a[20408] = 1;
	v->a[20409] = sym_comment;
	v->a[20410] = actions(411);
	v->a[20411] = 1;
	v->a[20412] = sym_variable_name;
	v->a[20413] = actions(385);
	v->a[20414] = 2;
	v->a[20415] = sym_file_descriptor;
	v->a[20416] = sym__bare_dollar;
	v->a[20417] = actions(409);
	v->a[20418] = 2;
	v->a[20419] = aux_sym__simple_variable_name_token1;
	small_parse_table_1021(v);
}

void	small_parse_table_1021(t_small_parse_table_array *v)
{
	v->a[20420] = aux_sym__multiline_variable_name_token1;
	v->a[20421] = actions(407);
	v->a[20422] = 9;
	v->a[20423] = anon_sym_BANG;
	v->a[20424] = anon_sym_DASH;
	v->a[20425] = anon_sym_STAR;
	v->a[20426] = anon_sym_QMARK;
	v->a[20427] = anon_sym_DOLLAR;
	v->a[20428] = anon_sym_POUND;
	v->a[20429] = anon_sym_AT;
	v->a[20430] = anon_sym_0;
	v->a[20431] = anon_sym__;
	v->a[20432] = actions(379);
	v->a[20433] = 27;
	v->a[20434] = anon_sym_PIPE;
	v->a[20435] = anon_sym_SEMI_SEMI;
	v->a[20436] = anon_sym_AMP_AMP;
	v->a[20437] = anon_sym_PIPE_PIPE;
	v->a[20438] = anon_sym_LT;
	v->a[20439] = anon_sym_GT;
	small_parse_table_1022(v);
}

void	small_parse_table_1022(t_small_parse_table_array *v)
{
	v->a[20440] = anon_sym_GT_GT;
	v->a[20441] = anon_sym_AMP_GT;
	v->a[20442] = anon_sym_AMP_GT_GT;
	v->a[20443] = anon_sym_LT_AMP;
	v->a[20444] = anon_sym_GT_AMP;
	v->a[20445] = anon_sym_GT_PIPE;
	v->a[20446] = anon_sym_LT_AMP_DASH;
	v->a[20447] = anon_sym_GT_AMP_DASH;
	v->a[20448] = anon_sym_LT_LT;
	v->a[20449] = anon_sym_LT_LT_DASH;
	v->a[20450] = aux_sym_heredoc_redirect_token1;
	v->a[20451] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20452] = anon_sym_AMP;
	v->a[20453] = anon_sym_DQUOTE;
	v->a[20454] = sym_raw_string;
	v->a[20455] = sym_number;
	v->a[20456] = anon_sym_DOLLAR_LBRACE;
	v->a[20457] = anon_sym_DOLLAR_LPAREN;
	v->a[20458] = anon_sym_BQUOTE;
	v->a[20459] = sym_word;
	small_parse_table_1023(v);
}

void	small_parse_table_1023(t_small_parse_table_array *v)
{
	v->a[20460] = anon_sym_SEMI;
	v->a[20461] = 6;
	v->a[20462] = actions(3);
	v->a[20463] = 1;
	v->a[20464] = sym_comment;
	v->a[20465] = actions(385);
	v->a[20466] = 1;
	v->a[20467] = sym_file_descriptor;
	v->a[20468] = actions(435);
	v->a[20469] = 1;
	v->a[20470] = sym_variable_name;
	v->a[20471] = actions(433);
	v->a[20472] = 2;
	v->a[20473] = aux_sym__simple_variable_name_token1;
	v->a[20474] = aux_sym__multiline_variable_name_token1;
	v->a[20475] = actions(431);
	v->a[20476] = 9;
	v->a[20477] = anon_sym_BANG;
	v->a[20478] = anon_sym_DASH;
	v->a[20479] = anon_sym_STAR;
	small_parse_table_1024(v);
}

void	small_parse_table_1024(t_small_parse_table_array *v)
{
	v->a[20480] = anon_sym_QMARK;
	v->a[20481] = anon_sym_DOLLAR;
	v->a[20482] = anon_sym_POUND;
	v->a[20483] = anon_sym_AT;
	v->a[20484] = anon_sym_0;
	v->a[20485] = anon_sym__;
	v->a[20486] = actions(379);
	v->a[20487] = 28;
	v->a[20488] = anon_sym_esac;
	v->a[20489] = anon_sym_PIPE;
	v->a[20490] = anon_sym_SEMI_SEMI;
	v->a[20491] = anon_sym_AMP_AMP;
	v->a[20492] = anon_sym_PIPE_PIPE;
	v->a[20493] = anon_sym_LT;
	v->a[20494] = anon_sym_GT;
	v->a[20495] = anon_sym_GT_GT;
	v->a[20496] = anon_sym_AMP_GT;
	v->a[20497] = anon_sym_AMP_GT_GT;
	v->a[20498] = anon_sym_LT_AMP;
	v->a[20499] = anon_sym_GT_AMP;
	small_parse_table_1025(v);
}

/* EOF small_parse_table_204.c */
