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
	v->a[45700] = anon_sym_LPAREN;
	v->a[45701] = anon_sym_LBRACE;
	v->a[45702] = anon_sym_BANG;
	v->a[45703] = anon_sym_LT;
	v->a[45704] = anon_sym_GT;
	v->a[45705] = anon_sym_GT_GT;
	v->a[45706] = anon_sym_AMP_GT;
	v->a[45707] = anon_sym_AMP_GT_GT;
	v->a[45708] = anon_sym_LT_AMP;
	v->a[45709] = anon_sym_GT_AMP;
	v->a[45710] = anon_sym_GT_PIPE;
	v->a[45711] = anon_sym_LT_AMP_DASH;
	v->a[45712] = anon_sym_GT_AMP_DASH;
	v->a[45713] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[45714] = anon_sym_DOLLAR;
	v->a[45715] = anon_sym_DQUOTE;
	v->a[45716] = sym_raw_string;
	v->a[45717] = sym_number;
	v->a[45718] = anon_sym_DOLLAR_LBRACE;
	v->a[45719] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2286(v);
}

void	small_parse_table_2286(t_small_parse_table_array *v)
{
	v->a[45720] = anon_sym_BQUOTE;
	v->a[45721] = sym_word;
	v->a[45722] = 17;
	v->a[45723] = actions(3);
	v->a[45724] = 1;
	v->a[45725] = sym_comment;
	v->a[45726] = actions(59);
	v->a[45727] = 1;
	v->a[45728] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[45729] = actions(61);
	v->a[45730] = 1;
	v->a[45731] = anon_sym_DOLLAR;
	v->a[45732] = actions(63);
	v->a[45733] = 1;
	v->a[45734] = anon_sym_DQUOTE;
	v->a[45735] = actions(67);
	v->a[45736] = 1;
	v->a[45737] = anon_sym_DOLLAR_LBRACE;
	v->a[45738] = actions(69);
	v->a[45739] = 1;
	small_parse_table_2287(v);
}

void	small_parse_table_2287(t_small_parse_table_array *v)
{
	v->a[45740] = anon_sym_DOLLAR_LPAREN;
	v->a[45741] = actions(71);
	v->a[45742] = 1;
	v->a[45743] = anon_sym_BQUOTE;
	v->a[45744] = actions(377);
	v->a[45745] = 1;
	v->a[45746] = sym_variable_name;
	v->a[45747] = actions(1068);
	v->a[45748] = 1;
	v->a[45749] = sym_file_descriptor;
	v->a[45750] = state(187);
	v->a[45751] = 1;
	v->a[45752] = sym_command_name;
	v->a[45753] = state(624);
	v->a[45754] = 1;
	v->a[45755] = sym_concatenation;
	v->a[45756] = state(1343);
	v->a[45757] = 1;
	v->a[45758] = sym_file_redirect;
	v->a[45759] = actions(1066);
	small_parse_table_2288(v);
}

void	small_parse_table_2288(t_small_parse_table_array *v)
{
	v->a[45760] = 2;
	v->a[45761] = anon_sym_LT_AMP_DASH;
	v->a[45762] = anon_sym_GT_AMP_DASH;
	v->a[45763] = state(1100);
	v->a[45764] = 2;
	v->a[45765] = sym_variable_assignment;
	v->a[45766] = aux_sym_command_repeat1;
	v->a[45767] = actions(65);
	v->a[45768] = 3;
	v->a[45769] = sym_raw_string;
	v->a[45770] = sym_number;
	v->a[45771] = sym_word;
	v->a[45772] = state(420);
	v->a[45773] = 5;
	v->a[45774] = sym_arithmetic_expansion;
	v->a[45775] = sym_string;
	v->a[45776] = sym_simple_expansion;
	v->a[45777] = sym_expansion;
	v->a[45778] = sym_command_substitution;
	v->a[45779] = actions(1064);
	small_parse_table_2289(v);
}

void	small_parse_table_2289(t_small_parse_table_array *v)
{
	v->a[45780] = 8;
	v->a[45781] = anon_sym_LT;
	v->a[45782] = anon_sym_GT;
	v->a[45783] = anon_sym_GT_GT;
	v->a[45784] = anon_sym_AMP_GT;
	v->a[45785] = anon_sym_AMP_GT_GT;
	v->a[45786] = anon_sym_LT_AMP;
	v->a[45787] = anon_sym_GT_AMP;
	v->a[45788] = anon_sym_GT_PIPE;
	v->a[45789] = 4;
	v->a[45790] = actions(3);
	v->a[45791] = 1;
	v->a[45792] = sym_comment;
	v->a[45793] = actions(1522);
	v->a[45794] = 2;
	v->a[45795] = anon_sym_RPAREN;
	v->a[45796] = anon_sym_SEMI_SEMI;
	v->a[45797] = actions(1524);
	v->a[45798] = 2;
	v->a[45799] = sym_file_descriptor;
	small_parse_table_2290(v);
}

/* EOF small_parse_table_457.c */
