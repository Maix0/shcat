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
	v->a[68400] = 1;
	v->a[68401] = sym_comment;
	v->a[68402] = actions(2222);
	v->a[68403] = 1;
	v->a[68404] = aux_sym_heredoc_redirect_token1;
	v->a[68405] = actions(2226);
	v->a[68406] = 1;
	v->a[68407] = sym_file_descriptor;
	v->a[68408] = actions(2039);
	v->a[68409] = 2;
	v->a[68410] = anon_sym_LT_AMP_DASH;
	v->a[68411] = anon_sym_GT_AMP_DASH;
	v->a[68412] = state(1229);
	v->a[68413] = 2;
	v->a[68414] = sym_file_redirect;
	v->a[68415] = aux_sym_redirected_statement_repeat2;
	v->a[68416] = actions(2037);
	v->a[68417] = 6;
	v->a[68418] = anon_sym_LT;
	v->a[68419] = anon_sym_GT;
	small_parse_table_3421(v);
}

void	small_parse_table_3421(t_small_parse_table_array *v)
{
	v->a[68420] = anon_sym_GT_GT;
	v->a[68421] = anon_sym_LT_AMP;
	v->a[68422] = anon_sym_GT_AMP;
	v->a[68423] = anon_sym_GT_PIPE;
	v->a[68424] = actions(2224);
	v->a[68425] = 9;
	v->a[68426] = anon_sym_PIPE;
	v->a[68427] = anon_sym_SEMI_SEMI;
	v->a[68428] = anon_sym_AMP_AMP;
	v->a[68429] = anon_sym_PIPE_PIPE;
	v->a[68430] = anon_sym_LT_LT;
	v->a[68431] = anon_sym_LT_LT_DASH;
	v->a[68432] = anon_sym_AMP;
	v->a[68433] = anon_sym_BQUOTE;
	v->a[68434] = anon_sym_SEMI;
	v->a[68435] = 15;
	v->a[68436] = actions(3);
	v->a[68437] = 1;
	v->a[68438] = sym_comment;
	v->a[68439] = actions(1774);
	small_parse_table_3422(v);
}

void	small_parse_table_3422(t_small_parse_table_array *v)
{
	v->a[68440] = 1;
	v->a[68441] = anon_sym_LPAREN;
	v->a[68442] = actions(1778);
	v->a[68443] = 1;
	v->a[68444] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68445] = actions(1780);
	v->a[68446] = 1;
	v->a[68447] = anon_sym_DOLLAR;
	v->a[68448] = actions(1782);
	v->a[68449] = 1;
	v->a[68450] = anon_sym_DQUOTE;
	v->a[68451] = actions(1784);
	v->a[68452] = 1;
	v->a[68453] = anon_sym_DOLLAR_LBRACE;
	v->a[68454] = actions(1786);
	v->a[68455] = 1;
	v->a[68456] = anon_sym_DOLLAR_LPAREN;
	v->a[68457] = actions(1788);
	v->a[68458] = 1;
	v->a[68459] = anon_sym_BQUOTE;
	small_parse_table_3423(v);
}

void	small_parse_table_3423(t_small_parse_table_array *v)
{
	v->a[68460] = actions(1790);
	v->a[68461] = 1;
	v->a[68462] = sym_extglob_pattern;
	v->a[68463] = state(1329);
	v->a[68464] = 1;
	v->a[68465] = aux_sym_case_statement_repeat1;
	v->a[68466] = state(1920);
	v->a[68467] = 1;
	v->a[68468] = sym_case_item;
	v->a[68469] = state(2201);
	v->a[68470] = 1;
	v->a[68471] = sym__case_item_last;
	v->a[68472] = state(2096);
	v->a[68473] = 2;
	v->a[68474] = sym_concatenation;
	v->a[68475] = sym__extglob_blob;
	v->a[68476] = actions(1770);
	v->a[68477] = 3;
	v->a[68478] = sym_raw_string;
	v->a[68479] = sym_number;
	small_parse_table_3424(v);
}

void	small_parse_table_3424(t_small_parse_table_array *v)
{
	v->a[68480] = sym_word;
	v->a[68481] = state(2001);
	v->a[68482] = 5;
	v->a[68483] = sym_arithmetic_expansion;
	v->a[68484] = sym_string;
	v->a[68485] = sym_simple_expansion;
	v->a[68486] = sym_expansion;
	v->a[68487] = sym_command_substitution;
	v->a[68488] = 3;
	v->a[68489] = actions(3);
	v->a[68490] = 1;
	v->a[68491] = sym_comment;
	v->a[68492] = actions(1041);
	v->a[68493] = 3;
	v->a[68494] = sym_file_descriptor;
	v->a[68495] = sym__concat;
	v->a[68496] = sym_variable_name;
	v->a[68497] = actions(1039);
	v->a[68498] = 18;
	v->a[68499] = anon_sym_LT;
	small_parse_table_3425(v);
}

/* EOF small_parse_table_684.c */
