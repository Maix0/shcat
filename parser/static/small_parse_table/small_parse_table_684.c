/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_684.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3420(t_small_parse_table_array *v)
{
	v->a[68400] = sym_variable_name;
	v->a[68401] = actions(1215);
	v->a[68402] = 19;
	v->a[68403] = anon_sym_LT;
	v->a[68404] = anon_sym_GT;
	v->a[68405] = anon_sym_GT_GT;
	v->a[68406] = anon_sym_AMP_GT;
	v->a[68407] = anon_sym_AMP_GT_GT;
	v->a[68408] = anon_sym_LT_AMP;
	v->a[68409] = anon_sym_GT_AMP;
	v->a[68410] = anon_sym_GT_PIPE;
	v->a[68411] = anon_sym_LT_AMP_DASH;
	v->a[68412] = anon_sym_GT_AMP_DASH;
	v->a[68413] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68414] = anon_sym_DOLLAR;
	v->a[68415] = anon_sym_DQUOTE;
	v->a[68416] = sym_raw_string;
	v->a[68417] = sym_number;
	v->a[68418] = anon_sym_DOLLAR_LBRACE;
	v->a[68419] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3421(v);
}

void	small_parse_table_3421(t_small_parse_table_array *v)
{
	v->a[68420] = anon_sym_BQUOTE;
	v->a[68421] = sym_word;
	v->a[68422] = 6;
	v->a[68423] = actions(3);
	v->a[68424] = 1;
	v->a[68425] = sym_comment;
	v->a[68426] = actions(2128);
	v->a[68427] = 1;
	v->a[68428] = aux_sym_concatenation_token1;
	v->a[68429] = actions(2130);
	v->a[68430] = 1;
	v->a[68431] = sym__concat;
	v->a[68432] = state(1280);
	v->a[68433] = 1;
	v->a[68434] = aux_sym_concatenation_repeat1;
	v->a[68435] = actions(543);
	v->a[68436] = 2;
	v->a[68437] = sym_file_descriptor;
	v->a[68438] = sym_variable_name;
	v->a[68439] = actions(541);
	small_parse_table_3422(v);
}

void	small_parse_table_3422(t_small_parse_table_array *v)
{
	v->a[68440] = 19;
	v->a[68441] = anon_sym_LT;
	v->a[68442] = anon_sym_GT;
	v->a[68443] = anon_sym_GT_GT;
	v->a[68444] = anon_sym_AMP_GT;
	v->a[68445] = anon_sym_AMP_GT_GT;
	v->a[68446] = anon_sym_LT_AMP;
	v->a[68447] = anon_sym_GT_AMP;
	v->a[68448] = anon_sym_GT_PIPE;
	v->a[68449] = anon_sym_LT_AMP_DASH;
	v->a[68450] = anon_sym_GT_AMP_DASH;
	v->a[68451] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68452] = anon_sym_DOLLAR;
	v->a[68453] = anon_sym_DQUOTE;
	v->a[68454] = sym_raw_string;
	v->a[68455] = sym_number;
	v->a[68456] = anon_sym_DOLLAR_LBRACE;
	v->a[68457] = anon_sym_DOLLAR_LPAREN;
	v->a[68458] = anon_sym_BQUOTE;
	v->a[68459] = sym_word;
	small_parse_table_3423(v);
}

void	small_parse_table_3423(t_small_parse_table_array *v)
{
	v->a[68460] = 3;
	v->a[68461] = actions(3);
	v->a[68462] = 1;
	v->a[68463] = sym_comment;
	v->a[68464] = actions(1159);
	v->a[68465] = 4;
	v->a[68466] = sym_file_descriptor;
	v->a[68467] = sym__concat;
	v->a[68468] = sym_variable_name;
	v->a[68469] = aux_sym_heredoc_redirect_token1;
	v->a[68470] = actions(1157);
	v->a[68471] = 20;
	v->a[68472] = anon_sym_esac;
	v->a[68473] = anon_sym_PIPE;
	v->a[68474] = anon_sym_SEMI_SEMI;
	v->a[68475] = anon_sym_AMP_AMP;
	v->a[68476] = anon_sym_PIPE_PIPE;
	v->a[68477] = anon_sym_LT;
	v->a[68478] = anon_sym_GT;
	v->a[68479] = anon_sym_GT_GT;
	small_parse_table_3424(v);
}

void	small_parse_table_3424(t_small_parse_table_array *v)
{
	v->a[68480] = anon_sym_AMP_GT;
	v->a[68481] = anon_sym_AMP_GT_GT;
	v->a[68482] = anon_sym_LT_AMP;
	v->a[68483] = anon_sym_GT_AMP;
	v->a[68484] = anon_sym_GT_PIPE;
	v->a[68485] = anon_sym_LT_AMP_DASH;
	v->a[68486] = anon_sym_GT_AMP_DASH;
	v->a[68487] = anon_sym_LT_LT;
	v->a[68488] = anon_sym_LT_LT_DASH;
	v->a[68489] = anon_sym_AMP;
	v->a[68490] = aux_sym_concatenation_token1;
	v->a[68491] = anon_sym_SEMI;
	v->a[68492] = 3;
	v->a[68493] = actions(3);
	v->a[68494] = 1;
	v->a[68495] = sym_comment;
	v->a[68496] = actions(1100);
	v->a[68497] = 4;
	v->a[68498] = sym_file_descriptor;
	v->a[68499] = sym__concat;
	small_parse_table_3425(v);
}

/* EOF small_parse_table_684.c */
