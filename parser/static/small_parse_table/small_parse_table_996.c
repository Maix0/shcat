/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_996.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4980(t_small_parse_table_array *v)
{
	v->a[99600] = sym__heredoc_body;
	v->a[99601] = sym__simple_heredoc_body;
	v->a[99602] = 5;
	v->a[99603] = actions(1094);
	v->a[99604] = 1;
	v->a[99605] = sym_comment;
	v->a[99606] = actions(4434);
	v->a[99607] = 1;
	v->a[99608] = aux_sym_concatenation_token1;
	v->a[99609] = actions(4472);
	v->a[99610] = 1;
	v->a[99611] = sym__concat;
	v->a[99612] = state(2171);
	v->a[99613] = 1;
	v->a[99614] = aux_sym_concatenation_repeat1;
	v->a[99615] = actions(972);
	v->a[99616] = 2;
	v->a[99617] = anon_sym_PIPE;
	v->a[99618] = anon_sym_RPAREN;
	v->a[99619] = 4;
	small_parse_table_4981(v);
}

void	small_parse_table_4981(t_small_parse_table_array *v)
{
	v->a[99620] = actions(1094);
	v->a[99621] = 1;
	v->a[99622] = sym_comment;
	v->a[99623] = state(2171);
	v->a[99624] = 1;
	v->a[99625] = aux_sym_concatenation_repeat1;
	v->a[99626] = actions(1004);
	v->a[99627] = 2;
	v->a[99628] = anon_sym_PIPE;
	v->a[99629] = anon_sym_RPAREN;
	v->a[99630] = actions(4474);
	v->a[99631] = 2;
	v->a[99632] = sym__concat;
	v->a[99633] = aux_sym_concatenation_token1;
	v->a[99634] = 4;
	v->a[99635] = actions(1094);
	v->a[99636] = 1;
	v->a[99637] = sym_comment;
	v->a[99638] = actions(4479);
	v->a[99639] = 1;
	small_parse_table_4982(v);
}

void	small_parse_table_4982(t_small_parse_table_array *v)
{
	v->a[99640] = anon_sym_elif;
	v->a[99641] = actions(4477);
	v->a[99642] = 2;
	v->a[99643] = anon_sym_fi;
	v->a[99644] = anon_sym_else;
	v->a[99645] = state(2172);
	v->a[99646] = 2;
	v->a[99647] = sym_elif_clause;
	v->a[99648] = aux_sym_if_statement_repeat1;
	v->a[99649] = 6;
	v->a[99650] = actions(1094);
	v->a[99651] = 1;
	v->a[99652] = sym_comment;
	v->a[99653] = actions(4464);
	v->a[99654] = 1;
	v->a[99655] = sym__heredoc_body_beginning;
	v->a[99656] = actions(4466);
	v->a[99657] = 1;
	v->a[99658] = sym_simple_heredoc_body;
	v->a[99659] = state(1750);
	small_parse_table_4983(v);
}

void	small_parse_table_4983(t_small_parse_table_array *v)
{
	v->a[99660] = 1;
	v->a[99661] = sym__heredoc_body;
	v->a[99662] = state(1751);
	v->a[99663] = 1;
	v->a[99664] = sym__simple_heredoc_body;
	v->a[99665] = state(2281);
	v->a[99666] = 1;
	v->a[99667] = sym_heredoc_body;
	v->a[99668] = 6;
	v->a[99669] = actions(1094);
	v->a[99670] = 1;
	v->a[99671] = sym_comment;
	v->a[99672] = actions(4464);
	v->a[99673] = 1;
	v->a[99674] = sym__heredoc_body_beginning;
	v->a[99675] = actions(4466);
	v->a[99676] = 1;
	v->a[99677] = sym_simple_heredoc_body;
	v->a[99678] = state(1749);
	v->a[99679] = 1;
	small_parse_table_4984(v);
}

void	small_parse_table_4984(t_small_parse_table_array *v)
{
	v->a[99680] = sym__simple_heredoc_body;
	v->a[99681] = state(1818);
	v->a[99682] = 1;
	v->a[99683] = sym__heredoc_body;
	v->a[99684] = state(2281);
	v->a[99685] = 1;
	v->a[99686] = sym_heredoc_body;
	v->a[99687] = 5;
	v->a[99688] = actions(1094);
	v->a[99689] = 1;
	v->a[99690] = sym_comment;
	v->a[99691] = actions(4464);
	v->a[99692] = 1;
	v->a[99693] = sym__heredoc_body_beginning;
	v->a[99694] = actions(4470);
	v->a[99695] = 1;
	v->a[99696] = sym_simple_heredoc_body;
	v->a[99697] = state(2390);
	v->a[99698] = 1;
	v->a[99699] = sym_heredoc_body;
	small_parse_table_4985(v);
}

/* EOF small_parse_table_996.c */
