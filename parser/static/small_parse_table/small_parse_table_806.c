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
	v->a[80600] = sym__simple_heredoc_body;
	v->a[80601] = 2;
	v->a[80602] = actions(501);
	v->a[80603] = 1;
	v->a[80604] = sym_comment;
	v->a[80605] = actions(694);
	v->a[80606] = 5;
	v->a[80607] = sym__concat;
	v->a[80608] = anon_sym_PIPE;
	v->a[80609] = anon_sym_RPAREN;
	v->a[80610] = anon_sym_RBRACE;
	v->a[80611] = aux_sym_concatenation_token1;
	v->a[80612] = 2;
	v->a[80613] = actions(501);
	v->a[80614] = 1;
	v->a[80615] = sym_comment;
	v->a[80616] = actions(599);
	v->a[80617] = 5;
	v->a[80618] = sym__concat;
	v->a[80619] = anon_sym_PIPE;
	small_parse_table_4031(v);
}

void	small_parse_table_4031(t_small_parse_table_array *v)
{
	v->a[80620] = anon_sym_RPAREN;
	v->a[80621] = anon_sym_RBRACE;
	v->a[80622] = aux_sym_concatenation_token1;
	v->a[80623] = 5;
	v->a[80624] = actions(501);
	v->a[80625] = 1;
	v->a[80626] = sym_comment;
	v->a[80627] = actions(3630);
	v->a[80628] = 1;
	v->a[80629] = sym__heredoc_body_beginning;
	v->a[80630] = actions(3645);
	v->a[80631] = 1;
	v->a[80632] = sym_simple_heredoc_body;
	v->a[80633] = state(1937);
	v->a[80634] = 1;
	v->a[80635] = sym_heredoc_body;
	v->a[80636] = state(1311);
	v->a[80637] = 2;
	v->a[80638] = sym__heredoc_body;
	v->a[80639] = sym__simple_heredoc_body;
	small_parse_table_4032(v);
}

void	small_parse_table_4032(t_small_parse_table_array *v)
{
	v->a[80640] = 2;
	v->a[80641] = actions(501);
	v->a[80642] = 1;
	v->a[80643] = sym_comment;
	v->a[80644] = actions(571);
	v->a[80645] = 5;
	v->a[80646] = sym__concat;
	v->a[80647] = anon_sym_PIPE;
	v->a[80648] = anon_sym_RPAREN;
	v->a[80649] = anon_sym_RBRACE;
	v->a[80650] = aux_sym_concatenation_token1;
	v->a[80651] = 2;
	v->a[80652] = actions(501);
	v->a[80653] = 1;
	v->a[80654] = sym_comment;
	v->a[80655] = actions(515);
	v->a[80656] = 5;
	v->a[80657] = sym__concat;
	v->a[80658] = anon_sym_PIPE;
	v->a[80659] = anon_sym_RPAREN;
	small_parse_table_4033(v);
}

void	small_parse_table_4033(t_small_parse_table_array *v)
{
	v->a[80660] = anon_sym_RBRACE;
	v->a[80661] = aux_sym_concatenation_token1;
	v->a[80662] = 5;
	v->a[80663] = actions(501);
	v->a[80664] = 1;
	v->a[80665] = sym_comment;
	v->a[80666] = actions(3630);
	v->a[80667] = 1;
	v->a[80668] = sym__heredoc_body_beginning;
	v->a[80669] = actions(3634);
	v->a[80670] = 1;
	v->a[80671] = sym_simple_heredoc_body;
	v->a[80672] = state(2102);
	v->a[80673] = 1;
	v->a[80674] = sym_heredoc_body;
	v->a[80675] = state(1497);
	v->a[80676] = 2;
	v->a[80677] = sym__heredoc_body;
	v->a[80678] = sym__simple_heredoc_body;
	v->a[80679] = 2;
	small_parse_table_4034(v);
}

void	small_parse_table_4034(t_small_parse_table_array *v)
{
	v->a[80680] = actions(501);
	v->a[80681] = 1;
	v->a[80682] = sym_comment;
	v->a[80683] = actions(731);
	v->a[80684] = 5;
	v->a[80685] = sym__concat;
	v->a[80686] = anon_sym_PIPE;
	v->a[80687] = anon_sym_RPAREN;
	v->a[80688] = anon_sym_RBRACE;
	v->a[80689] = aux_sym_concatenation_token1;
	v->a[80690] = 6;
	v->a[80691] = actions(501);
	v->a[80692] = 1;
	v->a[80693] = sym_comment;
	v->a[80694] = actions(3628);
	v->a[80695] = 1;
	v->a[80696] = sym_simple_heredoc_body;
	v->a[80697] = actions(3630);
	v->a[80698] = 1;
	v->a[80699] = sym__heredoc_body_beginning;
	small_parse_table_4035(v);
}

/* EOF small_parse_table_806.c */
