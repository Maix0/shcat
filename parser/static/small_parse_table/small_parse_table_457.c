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
	v->a[45700] = 1;
	v->a[45701] = sym_terminator;
	v->a[45702] = actions(846);
	v->a[45703] = 2;
	v->a[45704] = anon_sym_SEMI_SEMI;
	v->a[45705] = anon_sym_SEMI;
	v->a[45706] = actions(848);
	v->a[45707] = 2;
	v->a[45708] = anon_sym_AMP_AMP;
	v->a[45709] = anon_sym_PIPE_PIPE;
	v->a[45710] = actions(850);
	v->a[45711] = 2;
	v->a[45712] = anon_sym_LT_LT;
	v->a[45713] = anon_sym_LT_LT_DASH;
	v->a[45714] = state(924);
	v->a[45715] = 3;
	v->a[45716] = sym_file_redirect;
	v->a[45717] = sym_heredoc_redirect;
	v->a[45718] = aux_sym_redirected_statement_repeat1;
	v->a[45719] = actions(1603);
	small_parse_table_2286(v);
}

void	small_parse_table_2286(t_small_parse_table_array *v)
{
	v->a[45720] = 7;
	v->a[45721] = anon_sym_LT;
	v->a[45722] = anon_sym_GT;
	v->a[45723] = anon_sym_GT_GT;
	v->a[45724] = anon_sym_LT_AMP;
	v->a[45725] = anon_sym_GT_AMP;
	v->a[45726] = anon_sym_GT_PIPE;
	v->a[45727] = anon_sym_LT_GT;
	v->a[45728] = 12;
	v->a[45729] = actions(3);
	v->a[45730] = 1;
	v->a[45731] = sym_comment;
	v->a[45732] = actions(930);
	v->a[45733] = 1;
	v->a[45734] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[45735] = actions(932);
	v->a[45736] = 1;
	v->a[45737] = anon_sym_DOLLAR;
	v->a[45738] = actions(934);
	v->a[45739] = 1;
	small_parse_table_2287(v);
}

void	small_parse_table_2287(t_small_parse_table_array *v)
{
	v->a[45740] = anon_sym_DQUOTE;
	v->a[45741] = actions(936);
	v->a[45742] = 1;
	v->a[45743] = anon_sym_DOLLAR_LBRACE;
	v->a[45744] = actions(938);
	v->a[45745] = 1;
	v->a[45746] = anon_sym_DOLLAR_LPAREN;
	v->a[45747] = actions(940);
	v->a[45748] = 1;
	v->a[45749] = anon_sym_BQUOTE;
	v->a[45750] = state(1602);
	v->a[45751] = 1;
	v->a[45752] = sym_terminator;
	v->a[45753] = state(945);
	v->a[45754] = 2;
	v->a[45755] = sym_concatenation;
	v->a[45756] = aux_sym_for_statement_repeat1;
	v->a[45757] = actions(1607);
	v->a[45758] = 3;
	v->a[45759] = sym_raw_string;
	small_parse_table_2288(v);
}

void	small_parse_table_2288(t_small_parse_table_array *v)
{
	v->a[45760] = sym_number;
	v->a[45761] = sym_word;
	v->a[45762] = actions(1609);
	v->a[45763] = 3;
	v->a[45764] = anon_sym_SEMI_SEMI;
	v->a[45765] = aux_sym_heredoc_redirect_token1;
	v->a[45766] = anon_sym_SEMI;
	v->a[45767] = state(1227);
	v->a[45768] = 5;
	v->a[45769] = sym_arithmetic_expansion;
	v->a[45770] = sym_string;
	v->a[45771] = sym_simple_expansion;
	v->a[45772] = sym_expansion;
	v->a[45773] = sym_command_substitution;
	v->a[45774] = 6;
	v->a[45775] = actions(3);
	v->a[45776] = 1;
	v->a[45777] = sym_comment;
	v->a[45778] = actions(1599);
	v->a[45779] = 1;
	small_parse_table_2289(v);
}

void	small_parse_table_2289(t_small_parse_table_array *v)
{
	v->a[45780] = aux_sym_concatenation_token1;
	v->a[45781] = actions(1611);
	v->a[45782] = 1;
	v->a[45783] = sym__concat;
	v->a[45784] = state(851);
	v->a[45785] = 1;
	v->a[45786] = aux_sym_concatenation_repeat1;
	v->a[45787] = actions(1023);
	v->a[45788] = 2;
	v->a[45789] = sym_variable_name;
	v->a[45790] = aux_sym_heredoc_redirect_token1;
	v->a[45791] = actions(1025);
	v->a[45792] = 15;
	v->a[45793] = anon_sym_PIPE;
	v->a[45794] = anon_sym_SEMI_SEMI;
	v->a[45795] = anon_sym_AMP_AMP;
	v->a[45796] = anon_sym_PIPE_PIPE;
	v->a[45797] = anon_sym_LT;
	v->a[45798] = anon_sym_GT;
	v->a[45799] = anon_sym_GT_GT;
	small_parse_table_2290(v);
}

/* EOF small_parse_table_457.c */
