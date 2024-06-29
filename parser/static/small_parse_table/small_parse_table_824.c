/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_824.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4120(t_small_parse_table_array *v)
{
	v->a[82400] = actions(2721);
	v->a[82401] = 1;
	v->a[82402] = anon_sym_DOLLAR;
	v->a[82403] = actions(2723);
	v->a[82404] = 1;
	v->a[82405] = anon_sym_DQUOTE;
	v->a[82406] = actions(2725);
	v->a[82407] = 1;
	v->a[82408] = anon_sym_DOLLAR_LBRACE;
	v->a[82409] = actions(2727);
	v->a[82410] = 1;
	v->a[82411] = anon_sym_DOLLAR_LPAREN;
	v->a[82412] = actions(2729);
	v->a[82413] = 1;
	v->a[82414] = anon_sym_BQUOTE;
	v->a[82415] = state(215);
	v->a[82416] = 2;
	v->a[82417] = sym_concatenation;
	v->a[82418] = aux_sym_for_statement_repeat1;
	v->a[82419] = actions(3139);
	small_parse_table_4121(v);
}

void	small_parse_table_4121(t_small_parse_table_array *v)
{
	v->a[82420] = 3;
	v->a[82421] = sym_raw_string;
	v->a[82422] = sym_number;
	v->a[82423] = sym_word;
	v->a[82424] = state(458);
	v->a[82425] = 5;
	v->a[82426] = sym_arithmetic_expansion;
	v->a[82427] = sym_string;
	v->a[82428] = sym_simple_expansion;
	v->a[82429] = sym_expansion;
	v->a[82430] = sym_command_substitution;
	v->a[82431] = 5;
	v->a[82432] = actions(3);
	v->a[82433] = 1;
	v->a[82434] = sym_comment;
	v->a[82435] = actions(3141);
	v->a[82436] = 1;
	v->a[82437] = aux_sym_concatenation_token1;
	v->a[82438] = actions(3143);
	v->a[82439] = 1;
	small_parse_table_4122(v);
}

void	small_parse_table_4122(t_small_parse_table_array *v)
{
	v->a[82440] = sym__concat;
	v->a[82441] = state(1580);
	v->a[82442] = 1;
	v->a[82443] = aux_sym_concatenation_repeat1;
	v->a[82444] = actions(957);
	v->a[82445] = 13;
	v->a[82446] = anon_sym_SEMI_SEMI;
	v->a[82447] = aux_sym_heredoc_redirect_token1;
	v->a[82448] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[82449] = anon_sym_AMP;
	v->a[82450] = anon_sym_DOLLAR;
	v->a[82451] = anon_sym_DQUOTE;
	v->a[82452] = sym_raw_string;
	v->a[82453] = sym_number;
	v->a[82454] = anon_sym_DOLLAR_LBRACE;
	v->a[82455] = anon_sym_DOLLAR_LPAREN;
	v->a[82456] = anon_sym_BQUOTE;
	v->a[82457] = sym_word;
	v->a[82458] = anon_sym_SEMI;
	v->a[82459] = 10;
	small_parse_table_4123(v);
}

void	small_parse_table_4123(t_small_parse_table_array *v)
{
	v->a[82460] = actions(3);
	v->a[82461] = 1;
	v->a[82462] = sym_comment;
	v->a[82463] = actions(859);
	v->a[82464] = 1;
	v->a[82465] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[82466] = actions(861);
	v->a[82467] = 1;
	v->a[82468] = anon_sym_DOLLAR;
	v->a[82469] = actions(863);
	v->a[82470] = 1;
	v->a[82471] = anon_sym_DQUOTE;
	v->a[82472] = actions(865);
	v->a[82473] = 1;
	v->a[82474] = anon_sym_DOLLAR_LBRACE;
	v->a[82475] = actions(867);
	v->a[82476] = 1;
	v->a[82477] = anon_sym_DOLLAR_LPAREN;
	v->a[82478] = actions(869);
	v->a[82479] = 1;
	small_parse_table_4124(v);
}

void	small_parse_table_4124(t_small_parse_table_array *v)
{
	v->a[82480] = anon_sym_BQUOTE;
	v->a[82481] = state(1323);
	v->a[82482] = 2;
	v->a[82483] = sym_concatenation;
	v->a[82484] = aux_sym_for_statement_repeat1;
	v->a[82485] = actions(2479);
	v->a[82486] = 3;
	v->a[82487] = sym_raw_string;
	v->a[82488] = sym_number;
	v->a[82489] = sym_word;
	v->a[82490] = state(1669);
	v->a[82491] = 5;
	v->a[82492] = sym_arithmetic_expansion;
	v->a[82493] = sym_string;
	v->a[82494] = sym_simple_expansion;
	v->a[82495] = sym_expansion;
	v->a[82496] = sym_command_substitution;
	v->a[82497] = 3;
	v->a[82498] = actions(3);
	v->a[82499] = 1;
	small_parse_table_4125(v);
}

/* EOF small_parse_table_824.c */
