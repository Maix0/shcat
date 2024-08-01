/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_277.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1385(t_small_parse_table_array *v)
{
	v->a[27700] = 6;
	v->a[27701] = actions(3);
	v->a[27702] = 1;
	v->a[27703] = sym_comment;
	v->a[27704] = actions(351);
	v->a[27705] = 1;
	v->a[27706] = ts_builtin_sym_end;
	v->a[27707] = actions(1183);
	v->a[27708] = 1;
	v->a[27709] = sym_variable_name;
	v->a[27710] = actions(1181);
	v->a[27711] = 2;
	v->a[27712] = aux_sym__simple_variable_name_token1;
	v->a[27713] = aux_sym__multiline_variable_name_token1;
	v->a[27714] = actions(1179);
	v->a[27715] = 8;
	v->a[27716] = anon_sym_BANG;
	v->a[27717] = anon_sym_DASH;
	v->a[27718] = anon_sym_STAR;
	v->a[27719] = anon_sym_QMARK;
	small_parse_table_1386(v);
}

void	small_parse_table_1386(t_small_parse_table_array *v)
{
	v->a[27720] = anon_sym_DOLLAR;
	v->a[27721] = anon_sym_POUND;
	v->a[27722] = anon_sym_AT;
	v->a[27723] = anon_sym_0;
	v->a[27724] = actions(343);
	v->a[27725] = 10;
	v->a[27726] = anon_sym_PIPE;
	v->a[27727] = anon_sym_SEMI_SEMI;
	v->a[27728] = anon_sym_AMP_AMP;
	v->a[27729] = anon_sym_PIPE_PIPE;
	v->a[27730] = anon_sym_LT;
	v->a[27731] = anon_sym_GT;
	v->a[27732] = anon_sym_GT_GT;
	v->a[27733] = anon_sym_LT_LT;
	v->a[27734] = aux_sym_heredoc_redirect_token1;
	v->a[27735] = anon_sym_SEMI;
	v->a[27736] = 4;
	v->a[27737] = actions(3);
	v->a[27738] = 1;
	v->a[27739] = sym_comment;
	small_parse_table_1387(v);
}

void	small_parse_table_1387(t_small_parse_table_array *v)
{
	v->a[27740] = actions(1044);
	v->a[27741] = 1;
	v->a[27742] = sym_variable_name;
	v->a[27743] = actions(1185);
	v->a[27744] = 1;
	v->a[27745] = ts_builtin_sym_end;
	v->a[27746] = actions(1040);
	v->a[27747] = 20;
	v->a[27748] = anon_sym_for;
	v->a[27749] = anon_sym_while;
	v->a[27750] = anon_sym_until;
	v->a[27751] = anon_sym_if;
	v->a[27752] = anon_sym_case;
	v->a[27753] = anon_sym_LPAREN;
	v->a[27754] = anon_sym_LBRACE;
	v->a[27755] = anon_sym_BANG;
	v->a[27756] = anon_sym_LT;
	v->a[27757] = anon_sym_GT;
	v->a[27758] = anon_sym_GT_GT;
	v->a[27759] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1388(v);
}

void	small_parse_table_1388(t_small_parse_table_array *v)
{
	v->a[27760] = anon_sym_DOLLAR;
	v->a[27761] = anon_sym_DQUOTE;
	v->a[27762] = sym_raw_string;
	v->a[27763] = sym_number;
	v->a[27764] = anon_sym_DOLLAR_LBRACE;
	v->a[27765] = anon_sym_DOLLAR_LPAREN;
	v->a[27766] = anon_sym_BQUOTE;
	v->a[27767] = sym_word;
	v->a[27768] = 3;
	v->a[27769] = actions(3);
	v->a[27770] = 1;
	v->a[27771] = sym_comment;
	v->a[27772] = actions(1083);
	v->a[27773] = 1;
	v->a[27774] = sym__concat;
	v->a[27775] = actions(1085);
	v->a[27776] = 21;
	v->a[27777] = anon_sym_esac;
	v->a[27778] = anon_sym_PIPE;
	v->a[27779] = anon_sym_SEMI_SEMI;
	small_parse_table_1389(v);
}

void	small_parse_table_1389(t_small_parse_table_array *v)
{
	v->a[27780] = anon_sym_AMP_AMP;
	v->a[27781] = anon_sym_PIPE_PIPE;
	v->a[27782] = anon_sym_LT;
	v->a[27783] = anon_sym_GT;
	v->a[27784] = anon_sym_GT_GT;
	v->a[27785] = anon_sym_LT_LT;
	v->a[27786] = aux_sym_heredoc_redirect_token1;
	v->a[27787] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27788] = aux_sym_concatenation_token1;
	v->a[27789] = anon_sym_DOLLAR;
	v->a[27790] = anon_sym_DQUOTE;
	v->a[27791] = sym_raw_string;
	v->a[27792] = sym_number;
	v->a[27793] = anon_sym_DOLLAR_LBRACE;
	v->a[27794] = anon_sym_DOLLAR_LPAREN;
	v->a[27795] = anon_sym_BQUOTE;
	v->a[27796] = sym_word;
	v->a[27797] = anon_sym_SEMI;
	v->a[27798] = 3;
	v->a[27799] = actions(3);
	small_parse_table_1390(v);
}

/* EOF small_parse_table_277.c */
