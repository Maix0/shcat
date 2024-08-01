/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_457.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2285(t_small_parse_table_array *v)
{
	v->a[45700] = 3;
	v->a[45701] = anon_sym_LT;
	v->a[45702] = anon_sym_GT;
	v->a[45703] = anon_sym_GT_GT;
	v->a[45704] = state(1040);
	v->a[45705] = 3;
	v->a[45706] = sym_file_redirect;
	v->a[45707] = sym_heredoc_redirect;
	v->a[45708] = aux_sym_redirected_statement_repeat1;
	v->a[45709] = 5;
	v->a[45710] = actions(3);
	v->a[45711] = 1;
	v->a[45712] = sym_comment;
	v->a[45713] = actions(2007);
	v->a[45714] = 1;
	v->a[45715] = sym_variable_name;
	v->a[45716] = actions(343);
	v->a[45717] = 2;
	v->a[45718] = anon_sym_PIPE;
	v->a[45719] = anon_sym_RPAREN;
	small_parse_table_2286(v);
}

void	small_parse_table_2286(t_small_parse_table_array *v)
{
	v->a[45720] = actions(2005);
	v->a[45721] = 2;
	v->a[45722] = aux_sym__simple_variable_name_token1;
	v->a[45723] = aux_sym__multiline_variable_name_token1;
	v->a[45724] = actions(2003);
	v->a[45725] = 8;
	v->a[45726] = anon_sym_BANG;
	v->a[45727] = anon_sym_DASH;
	v->a[45728] = anon_sym_STAR;
	v->a[45729] = anon_sym_QMARK;
	v->a[45730] = anon_sym_DOLLAR;
	v->a[45731] = anon_sym_POUND;
	v->a[45732] = anon_sym_AT;
	v->a[45733] = anon_sym_0;
	v->a[45734] = 8;
	v->a[45735] = actions(3);
	v->a[45736] = 1;
	v->a[45737] = sym_comment;
	v->a[45738] = actions(597);
	v->a[45739] = 1;
	small_parse_table_2287(v);
}

void	small_parse_table_2287(t_small_parse_table_array *v)
{
	v->a[45740] = anon_sym_LT_LT;
	v->a[45741] = actions(1981);
	v->a[45742] = 1;
	v->a[45743] = aux_sym_heredoc_redirect_token1;
	v->a[45744] = state(438);
	v->a[45745] = 1;
	v->a[45746] = sym_terminator;
	v->a[45747] = actions(767);
	v->a[45748] = 2;
	v->a[45749] = anon_sym_SEMI_SEMI;
	v->a[45750] = anon_sym_SEMI;
	v->a[45751] = actions(769);
	v->a[45752] = 2;
	v->a[45753] = anon_sym_AMP_AMP;
	v->a[45754] = anon_sym_PIPE_PIPE;
	v->a[45755] = actions(1924);
	v->a[45756] = 3;
	v->a[45757] = anon_sym_LT;
	v->a[45758] = anon_sym_GT;
	v->a[45759] = anon_sym_GT_GT;
	small_parse_table_2288(v);
}

void	small_parse_table_2288(t_small_parse_table_array *v)
{
	v->a[45760] = state(1040);
	v->a[45761] = 3;
	v->a[45762] = sym_file_redirect;
	v->a[45763] = sym_heredoc_redirect;
	v->a[45764] = aux_sym_redirected_statement_repeat1;
	v->a[45765] = 6;
	v->a[45766] = actions(3);
	v->a[45767] = 1;
	v->a[45768] = sym_comment;
	v->a[45769] = actions(2011);
	v->a[45770] = 1;
	v->a[45771] = anon_sym_DQUOTE;
	v->a[45772] = actions(2013);
	v->a[45773] = 1;
	v->a[45774] = sym_string_content;
	v->a[45775] = actions(2017);
	v->a[45776] = 1;
	v->a[45777] = sym_variable_name;
	v->a[45778] = actions(2015);
	v->a[45779] = 2;
	small_parse_table_2289(v);
}

void	small_parse_table_2289(t_small_parse_table_array *v)
{
	v->a[45780] = aux_sym__simple_variable_name_token1;
	v->a[45781] = aux_sym__multiline_variable_name_token1;
	v->a[45782] = actions(2009);
	v->a[45783] = 8;
	v->a[45784] = anon_sym_BANG;
	v->a[45785] = anon_sym_DASH;
	v->a[45786] = anon_sym_STAR;
	v->a[45787] = anon_sym_QMARK;
	v->a[45788] = anon_sym_DOLLAR;
	v->a[45789] = anon_sym_POUND;
	v->a[45790] = anon_sym_AT;
	v->a[45791] = anon_sym_0;
	v->a[45792] = 6;
	v->a[45793] = actions(3);
	v->a[45794] = 1;
	v->a[45795] = sym_comment;
	v->a[45796] = actions(2013);
	v->a[45797] = 1;
	v->a[45798] = sym_string_content;
	v->a[45799] = actions(2017);
	small_parse_table_2290(v);
}

/* EOF small_parse_table_457.c */
