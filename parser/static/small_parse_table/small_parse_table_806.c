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
	v->a[80600] = sym_else_clause;
	v->a[80601] = state(1847);
	v->a[80602] = 2;
	v->a[80603] = sym_elif_clause;
	v->a[80604] = aux_sym_if_statement_repeat1;
	v->a[80605] = 3;
	v->a[80606] = actions(3);
	v->a[80607] = 1;
	v->a[80608] = sym_comment;
	v->a[80609] = actions(688);
	v->a[80610] = 2;
	v->a[80611] = sym_regex;
	v->a[80612] = aux_sym__expansion_regex_token1;
	v->a[80613] = actions(686);
	v->a[80614] = 4;
	v->a[80615] = anon_sym_RPAREN;
	v->a[80616] = anon_sym_RBRACE;
	v->a[80617] = anon_sym_DQUOTE;
	v->a[80618] = sym_raw_string;
	v->a[80619] = 5;
	small_parse_table_4031(v);
}

void	small_parse_table_4031(t_small_parse_table_array *v)
{
	v->a[80620] = actions(3);
	v->a[80621] = 1;
	v->a[80622] = sym_comment;
	v->a[80623] = actions(3471);
	v->a[80624] = 1;
	v->a[80625] = aux_sym_heredoc_redirect_token1;
	v->a[80626] = actions(3495);
	v->a[80627] = 1;
	v->a[80628] = anon_sym_in;
	v->a[80629] = state(2125);
	v->a[80630] = 1;
	v->a[80631] = sym_terminator;
	v->a[80632] = actions(1966);
	v->a[80633] = 3;
	v->a[80634] = anon_sym_SEMI_SEMI;
	v->a[80635] = anon_sym_AMP;
	v->a[80636] = anon_sym_SEMI;
	v->a[80637] = 5;
	v->a[80638] = actions(3);
	v->a[80639] = 1;
	small_parse_table_4032(v);
}

void	small_parse_table_4032(t_small_parse_table_array *v)
{
	v->a[80640] = sym_comment;
	v->a[80641] = actions(3469);
	v->a[80642] = 1;
	v->a[80643] = anon_sym_in;
	v->a[80644] = actions(3471);
	v->a[80645] = 1;
	v->a[80646] = aux_sym_heredoc_redirect_token1;
	v->a[80647] = state(2024);
	v->a[80648] = 1;
	v->a[80649] = sym_terminator;
	v->a[80650] = actions(1966);
	v->a[80651] = 3;
	v->a[80652] = anon_sym_SEMI_SEMI;
	v->a[80653] = anon_sym_AMP;
	v->a[80654] = anon_sym_SEMI;
	v->a[80655] = 6;
	v->a[80656] = actions(680);
	v->a[80657] = 1;
	v->a[80658] = sym_comment;
	v->a[80659] = actions(3602);
	small_parse_table_4033(v);
}

void	small_parse_table_4033(t_small_parse_table_array *v)
{
	v->a[80660] = 1;
	v->a[80661] = anon_sym_PIPE;
	v->a[80662] = actions(3604);
	v->a[80663] = 1;
	v->a[80664] = anon_sym_RPAREN;
	v->a[80665] = state(1825);
	v->a[80666] = 1;
	v->a[80667] = aux_sym_concatenation_repeat1;
	v->a[80668] = state(1886);
	v->a[80669] = 1;
	v->a[80670] = aux_sym__case_item_last_repeat1;
	v->a[80671] = actions(3606);
	v->a[80672] = 2;
	v->a[80673] = sym__concat;
	v->a[80674] = aux_sym_concatenation_token1;
	v->a[80675] = 6;
	v->a[80676] = actions(680);
	v->a[80677] = 1;
	v->a[80678] = sym_comment;
	v->a[80679] = actions(3602);
	small_parse_table_4034(v);
}

void	small_parse_table_4034(t_small_parse_table_array *v)
{
	v->a[80680] = 1;
	v->a[80681] = anon_sym_PIPE;
	v->a[80682] = actions(3608);
	v->a[80683] = 1;
	v->a[80684] = anon_sym_RPAREN;
	v->a[80685] = state(1825);
	v->a[80686] = 1;
	v->a[80687] = aux_sym_concatenation_repeat1;
	v->a[80688] = state(1877);
	v->a[80689] = 1;
	v->a[80690] = aux_sym__case_item_last_repeat1;
	v->a[80691] = actions(3606);
	v->a[80692] = 2;
	v->a[80693] = sym__concat;
	v->a[80694] = aux_sym_concatenation_token1;
	v->a[80695] = 5;
	v->a[80696] = actions(3);
	v->a[80697] = 1;
	v->a[80698] = sym_comment;
	v->a[80699] = actions(3471);
	small_parse_table_4035(v);
}

/* EOF small_parse_table_806.c */
