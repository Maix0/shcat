/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_806.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4030(t_small_parse_table_array *v)
{
	v->a[80600] = actions(3595);
	v->a[80601] = 1;
	v->a[80602] = anon_sym_fi;
	v->a[80603] = state(1932);
	v->a[80604] = 1;
	v->a[80605] = sym_else_clause;
	v->a[80606] = state(1818);
	v->a[80607] = 2;
	v->a[80608] = sym_elif_clause;
	v->a[80609] = aux_sym_if_statement_repeat1;
	v->a[80610] = 5;
	v->a[80611] = actions(3);
	v->a[80612] = 1;
	v->a[80613] = sym_comment;
	v->a[80614] = actions(3442);
	v->a[80615] = 1;
	v->a[80616] = aux_sym_heredoc_redirect_token1;
	v->a[80617] = actions(3456);
	v->a[80618] = 1;
	v->a[80619] = anon_sym_in;
	small_parse_table_4031(v);
}

void	small_parse_table_4031(t_small_parse_table_array *v)
{
	v->a[80620] = state(2030);
	v->a[80621] = 1;
	v->a[80622] = sym_terminator;
	v->a[80623] = actions(1893);
	v->a[80624] = 3;
	v->a[80625] = anon_sym_SEMI_SEMI;
	v->a[80626] = anon_sym_AMP;
	v->a[80627] = anon_sym_SEMI;
	v->a[80628] = 5;
	v->a[80629] = actions(3);
	v->a[80630] = 1;
	v->a[80631] = sym_comment;
	v->a[80632] = actions(3442);
	v->a[80633] = 1;
	v->a[80634] = aux_sym_heredoc_redirect_token1;
	v->a[80635] = actions(3597);
	v->a[80636] = 1;
	v->a[80637] = anon_sym_in;
	v->a[80638] = state(1917);
	v->a[80639] = 1;
	small_parse_table_4032(v);
}

void	small_parse_table_4032(t_small_parse_table_array *v)
{
	v->a[80640] = sym_terminator;
	v->a[80641] = actions(1893);
	v->a[80642] = 3;
	v->a[80643] = anon_sym_SEMI_SEMI;
	v->a[80644] = anon_sym_AMP;
	v->a[80645] = anon_sym_SEMI;
	v->a[80646] = 6;
	v->a[80647] = actions(664);
	v->a[80648] = 1;
	v->a[80649] = sym_comment;
	v->a[80650] = actions(3583);
	v->a[80651] = 1;
	v->a[80652] = anon_sym_PIPE;
	v->a[80653] = actions(3599);
	v->a[80654] = 1;
	v->a[80655] = anon_sym_RPAREN;
	v->a[80656] = state(1837);
	v->a[80657] = 1;
	v->a[80658] = aux_sym_concatenation_repeat1;
	v->a[80659] = state(1887);
	small_parse_table_4033(v);
}

void	small_parse_table_4033(t_small_parse_table_array *v)
{
	v->a[80660] = 1;
	v->a[80661] = aux_sym__case_item_last_repeat1;
	v->a[80662] = actions(3587);
	v->a[80663] = 2;
	v->a[80664] = sym__concat;
	v->a[80665] = aux_sym_concatenation_token1;
	v->a[80666] = 6;
	v->a[80667] = actions(664);
	v->a[80668] = 1;
	v->a[80669] = sym_comment;
	v->a[80670] = actions(3579);
	v->a[80671] = 1;
	v->a[80672] = anon_sym_elif;
	v->a[80673] = actions(3581);
	v->a[80674] = 1;
	v->a[80675] = anon_sym_else;
	v->a[80676] = actions(3601);
	v->a[80677] = 1;
	v->a[80678] = anon_sym_fi;
	v->a[80679] = state(1954);
	small_parse_table_4034(v);
}

void	small_parse_table_4034(t_small_parse_table_array *v)
{
	v->a[80680] = 1;
	v->a[80681] = sym_else_clause;
	v->a[80682] = state(1818);
	v->a[80683] = 2;
	v->a[80684] = sym_elif_clause;
	v->a[80685] = aux_sym_if_statement_repeat1;
	v->a[80686] = 5;
	v->a[80687] = actions(3);
	v->a[80688] = 1;
	v->a[80689] = sym_comment;
	v->a[80690] = actions(3442);
	v->a[80691] = 1;
	v->a[80692] = aux_sym_heredoc_redirect_token1;
	v->a[80693] = actions(3603);
	v->a[80694] = 1;
	v->a[80695] = anon_sym_in;
	v->a[80696] = state(1892);
	v->a[80697] = 1;
	v->a[80698] = sym_terminator;
	v->a[80699] = actions(1893);
	small_parse_table_4035(v);
}

/* EOF small_parse_table_806.c */
