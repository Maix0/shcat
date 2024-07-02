/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_816.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4080(t_small_parse_table_array *v)
{
	v->a[81600] = anon_sym_elif;
	v->a[81601] = actions(3649);
	v->a[81602] = 2;
	v->a[81603] = anon_sym_fi;
	v->a[81604] = anon_sym_else;
	v->a[81605] = state(1847);
	v->a[81606] = 2;
	v->a[81607] = sym_elif_clause;
	v->a[81608] = aux_sym_if_statement_repeat1;
	v->a[81609] = 5;
	v->a[81610] = actions(680);
	v->a[81611] = 1;
	v->a[81612] = sym_comment;
	v->a[81613] = actions(3636);
	v->a[81614] = 1;
	v->a[81615] = sym__heredoc_body_beginning;
	v->a[81616] = actions(3638);
	v->a[81617] = 1;
	v->a[81618] = sym_simple_heredoc_body;
	v->a[81619] = state(2018);
	small_parse_table_4081(v);
}

void	small_parse_table_4081(t_small_parse_table_array *v)
{
	v->a[81620] = 1;
	v->a[81621] = sym_heredoc_body;
	v->a[81622] = state(1556);
	v->a[81623] = 2;
	v->a[81624] = sym__heredoc_body;
	v->a[81625] = sym__simple_heredoc_body;
	v->a[81626] = 6;
	v->a[81627] = actions(680);
	v->a[81628] = 1;
	v->a[81629] = sym_comment;
	v->a[81630] = actions(3636);
	v->a[81631] = 1;
	v->a[81632] = sym__heredoc_body_beginning;
	v->a[81633] = actions(3643);
	v->a[81634] = 1;
	v->a[81635] = sym_simple_heredoc_body;
	v->a[81636] = state(1116);
	v->a[81637] = 1;
	v->a[81638] = sym__simple_heredoc_body;
	v->a[81639] = state(1174);
	small_parse_table_4082(v);
}

void	small_parse_table_4082(t_small_parse_table_array *v)
{
	v->a[81640] = 1;
	v->a[81641] = sym__heredoc_body;
	v->a[81642] = state(2107);
	v->a[81643] = 1;
	v->a[81644] = sym_heredoc_body;
	v->a[81645] = 6;
	v->a[81646] = actions(680);
	v->a[81647] = 1;
	v->a[81648] = sym_comment;
	v->a[81649] = actions(3634);
	v->a[81650] = 1;
	v->a[81651] = sym_simple_heredoc_body;
	v->a[81652] = actions(3636);
	v->a[81653] = 1;
	v->a[81654] = sym__heredoc_body_beginning;
	v->a[81655] = state(1264);
	v->a[81656] = 1;
	v->a[81657] = sym__simple_heredoc_body;
	v->a[81658] = state(1265);
	v->a[81659] = 1;
	small_parse_table_4083(v);
}

void	small_parse_table_4083(t_small_parse_table_array *v)
{
	v->a[81660] = sym__heredoc_body;
	v->a[81661] = state(2017);
	v->a[81662] = 1;
	v->a[81663] = sym_heredoc_body;
	v->a[81664] = 5;
	v->a[81665] = actions(680);
	v->a[81666] = 1;
	v->a[81667] = sym_comment;
	v->a[81668] = actions(3636);
	v->a[81669] = 1;
	v->a[81670] = sym__heredoc_body_beginning;
	v->a[81671] = actions(3643);
	v->a[81672] = 1;
	v->a[81673] = sym_simple_heredoc_body;
	v->a[81674] = state(2107);
	v->a[81675] = 1;
	v->a[81676] = sym_heredoc_body;
	v->a[81677] = state(1191);
	v->a[81678] = 2;
	v->a[81679] = sym__heredoc_body;
	small_parse_table_4084(v);
}

void	small_parse_table_4084(t_small_parse_table_array *v)
{
	v->a[81680] = sym__simple_heredoc_body;
	v->a[81681] = 5;
	v->a[81682] = actions(680);
	v->a[81683] = 1;
	v->a[81684] = sym_comment;
	v->a[81685] = actions(3636);
	v->a[81686] = 1;
	v->a[81687] = sym__heredoc_body_beginning;
	v->a[81688] = actions(3638);
	v->a[81689] = 1;
	v->a[81690] = sym_simple_heredoc_body;
	v->a[81691] = state(2018);
	v->a[81692] = 1;
	v->a[81693] = sym_heredoc_body;
	v->a[81694] = state(1537);
	v->a[81695] = 2;
	v->a[81696] = sym__heredoc_body;
	v->a[81697] = sym__simple_heredoc_body;
	v->a[81698] = 6;
	v->a[81699] = actions(680);
	small_parse_table_4085(v);
}

/* EOF small_parse_table_816.c */
