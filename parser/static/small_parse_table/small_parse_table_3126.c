/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_3126.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_15630(t_small_parse_table_array *v)
{
	v->a[312600] = sym_expansion;
	v->a[312601] = sym_command_substitution;
	v->a[312602] = 6;
	v->a[312603] = actions(71);
	v->a[312604] = 1;
	v->a[312605] = sym_comment;
	v->a[312606] = actions(328);
	v->a[312607] = 1;
	v->a[312608] = anon_sym_DOLLAR_LBRACE;
	v->a[312609] = actions(332);
	v->a[312610] = 1;
	v->a[312611] = anon_sym_BQUOTE;
	v->a[312612] = actions(334);
	v->a[312613] = 1;
	v->a[312614] = anon_sym_DOLLAR_BQUOTE;
	v->a[312615] = actions(14688);
	v->a[312616] = 1;
	v->a[312617] = anon_sym_DOLLAR_LPAREN;
	v->a[312618] = state(1058);
	v->a[312619] = 2;
	small_parse_table_15631(v);
}

void	small_parse_table_15631(t_small_parse_table_array *v)
{
	v->a[312620] = sym_expansion;
	v->a[312621] = sym_command_substitution;
	v->a[312622] = 6;
	v->a[312623] = actions(71);
	v->a[312624] = 1;
	v->a[312625] = sym_comment;
	v->a[312626] = actions(12179);
	v->a[312627] = 1;
	v->a[312628] = anon_sym_DOLLAR_LBRACE;
	v->a[312629] = actions(12181);
	v->a[312630] = 1;
	v->a[312631] = anon_sym_DOLLAR_LPAREN;
	v->a[312632] = actions(12183);
	v->a[312633] = 1;
	v->a[312634] = anon_sym_BQUOTE;
	v->a[312635] = actions(12185);
	v->a[312636] = 1;
	v->a[312637] = anon_sym_DOLLAR_BQUOTE;
	v->a[312638] = state(3282);
	v->a[312639] = 2;
	small_parse_table_15632(v);
}

void	small_parse_table_15632(t_small_parse_table_array *v)
{
	v->a[312640] = sym_expansion;
	v->a[312641] = sym_command_substitution;
	v->a[312642] = 3;
	v->a[312643] = actions(3);
	v->a[312644] = 1;
	v->a[312645] = sym_comment;
	v->a[312646] = actions(14692);
	v->a[312647] = 2;
	v->a[312648] = sym_regex;
	v->a[312649] = aux_sym__expansion_regex_token1;
	v->a[312650] = actions(14690);
	v->a[312651] = 4;
	v->a[312652] = anon_sym_RPAREN;
	v->a[312653] = anon_sym_DQUOTE;
	v->a[312654] = sym_raw_string;
	v->a[312655] = anon_sym_RBRACE3;
	v->a[312656] = 6;
	v->a[312657] = actions(71);
	v->a[312658] = 1;
	v->a[312659] = sym_comment;
	small_parse_table_15633(v);
}

void	small_parse_table_15633(t_small_parse_table_array *v)
{
	v->a[312660] = actions(9554);
	v->a[312661] = 1;
	v->a[312662] = anon_sym_DOLLAR_LBRACE;
	v->a[312663] = actions(9556);
	v->a[312664] = 1;
	v->a[312665] = anon_sym_BQUOTE;
	v->a[312666] = actions(9558);
	v->a[312667] = 1;
	v->a[312668] = anon_sym_DOLLAR_BQUOTE;
	v->a[312669] = actions(14694);
	v->a[312670] = 1;
	v->a[312671] = anon_sym_DOLLAR_LPAREN;
	v->a[312672] = state(5628);
	v->a[312673] = 2;
	v->a[312674] = sym_expansion;
	v->a[312675] = sym_command_substitution;
	v->a[312676] = 6;
	v->a[312677] = actions(71);
	v->a[312678] = 1;
	v->a[312679] = sym_comment;
	small_parse_table_15634(v);
}

void	small_parse_table_15634(t_small_parse_table_array *v)
{
	v->a[312680] = actions(14488);
	v->a[312681] = 1;
	v->a[312682] = anon_sym_elif;
	v->a[312683] = actions(14490);
	v->a[312684] = 1;
	v->a[312685] = anon_sym_else;
	v->a[312686] = actions(14696);
	v->a[312687] = 1;
	v->a[312688] = anon_sym_fi;
	v->a[312689] = state(7417);
	v->a[312690] = 1;
	v->a[312691] = sym_else_clause;
	v->a[312692] = state(6400);
	v->a[312693] = 2;
	v->a[312694] = sym_elif_clause;
	v->a[312695] = aux_sym_if_statement_repeat1;
	v->a[312696] = 6;
	v->a[312697] = actions(71);
	v->a[312698] = 1;
	v->a[312699] = sym_comment;
	small_parse_table_15635(v);
}

/* EOF small_parse_table_3126.c */
