/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_796.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3980(t_small_parse_table_array *v)
{
	v->a[79600] = 1;
	v->a[79601] = anon_sym_elif;
	v->a[79602] = actions(3608);
	v->a[79603] = 1;
	v->a[79604] = anon_sym_else;
	v->a[79605] = actions(3610);
	v->a[79606] = 1;
	v->a[79607] = anon_sym_fi;
	v->a[79608] = state(2116);
	v->a[79609] = 1;
	v->a[79610] = sym_else_clause;
	v->a[79611] = state(1811);
	v->a[79612] = 2;
	v->a[79613] = sym_elif_clause;
	v->a[79614] = aux_sym_if_statement_repeat1;
	v->a[79615] = 3;
	v->a[79616] = actions(501);
	v->a[79617] = 1;
	v->a[79618] = sym_comment;
	v->a[79619] = actions(521);
	small_parse_table_3981(v);
}

void	small_parse_table_3981(t_small_parse_table_array *v)
{
	v->a[79620] = 1;
	v->a[79621] = anon_sym_DOLLAR;
	v->a[79622] = actions(523);
	v->a[79623] = 5;
	v->a[79624] = sym_heredoc_content;
	v->a[79625] = sym_heredoc_end;
	v->a[79626] = anon_sym_DOLLAR_LBRACE;
	v->a[79627] = anon_sym_DOLLAR_LPAREN;
	v->a[79628] = anon_sym_BQUOTE;
	v->a[79629] = 6;
	v->a[79630] = actions(501);
	v->a[79631] = 1;
	v->a[79632] = sym_comment;
	v->a[79633] = actions(3606);
	v->a[79634] = 1;
	v->a[79635] = anon_sym_elif;
	v->a[79636] = actions(3608);
	v->a[79637] = 1;
	v->a[79638] = anon_sym_else;
	v->a[79639] = actions(3612);
	small_parse_table_3982(v);
}

void	small_parse_table_3982(t_small_parse_table_array *v)
{
	v->a[79640] = 1;
	v->a[79641] = anon_sym_fi;
	v->a[79642] = state(1933);
	v->a[79643] = 1;
	v->a[79644] = sym_else_clause;
	v->a[79645] = state(1811);
	v->a[79646] = 2;
	v->a[79647] = sym_elif_clause;
	v->a[79648] = aux_sym_if_statement_repeat1;
	v->a[79649] = 3;
	v->a[79650] = actions(3);
	v->a[79651] = 1;
	v->a[79652] = sym_comment;
	v->a[79653] = actions(3616);
	v->a[79654] = 2;
	v->a[79655] = sym_regex;
	v->a[79656] = aux_sym__expansion_regex_token1;
	v->a[79657] = actions(3614);
	v->a[79658] = 4;
	v->a[79659] = anon_sym_RPAREN;
	small_parse_table_3983(v);
}

void	small_parse_table_3983(t_small_parse_table_array *v)
{
	v->a[79660] = anon_sym_RBRACE;
	v->a[79661] = anon_sym_DQUOTE;
	v->a[79662] = sym_raw_string;
	v->a[79663] = 6;
	v->a[79664] = actions(501);
	v->a[79665] = 1;
	v->a[79666] = sym_comment;
	v->a[79667] = actions(3596);
	v->a[79668] = 1;
	v->a[79669] = anon_sym_PIPE;
	v->a[79670] = actions(3618);
	v->a[79671] = 1;
	v->a[79672] = anon_sym_RPAREN;
	v->a[79673] = state(1817);
	v->a[79674] = 1;
	v->a[79675] = aux_sym_concatenation_repeat1;
	v->a[79676] = state(1893);
	v->a[79677] = 1;
	v->a[79678] = aux_sym__case_item_last_repeat1;
	v->a[79679] = actions(3600);
	small_parse_table_3984(v);
}

void	small_parse_table_3984(t_small_parse_table_array *v)
{
	v->a[79680] = 2;
	v->a[79681] = sym__concat;
	v->a[79682] = aux_sym_concatenation_token1;
	v->a[79683] = 3;
	v->a[79684] = actions(3);
	v->a[79685] = 1;
	v->a[79686] = sym_comment;
	v->a[79687] = actions(599);
	v->a[79688] = 2;
	v->a[79689] = sym_regex;
	v->a[79690] = aux_sym__expansion_regex_token1;
	v->a[79691] = actions(597);
	v->a[79692] = 4;
	v->a[79693] = anon_sym_RPAREN;
	v->a[79694] = anon_sym_RBRACE;
	v->a[79695] = anon_sym_DQUOTE;
	v->a[79696] = sym_raw_string;
	v->a[79697] = 3;
	v->a[79698] = actions(501);
	v->a[79699] = 1;
	small_parse_table_3985(v);
}

/* EOF small_parse_table_796.c */
