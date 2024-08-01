/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_556.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2780(t_small_parse_table_array *v)
{
	v->a[55600] = anon_sym_LT_LT;
	v->a[55601] = 8;
	v->a[55602] = actions(3);
	v->a[55603] = 1;
	v->a[55604] = sym_comment;
	v->a[55605] = actions(2889);
	v->a[55606] = 1;
	v->a[55607] = aux_sym_heredoc_redirect_token1;
	v->a[55608] = actions(2891);
	v->a[55609] = 1;
	v->a[55610] = aux_sym_concatenation_token1;
	v->a[55611] = actions(2893);
	v->a[55612] = 1;
	v->a[55613] = sym__concat;
	v->a[55614] = actions(2901);
	v->a[55615] = 1;
	v->a[55616] = anon_sym_in;
	v->a[55617] = state(1437);
	v->a[55618] = 1;
	v->a[55619] = aux_sym_concatenation_repeat1;
	small_parse_table_2781(v);
}

void	small_parse_table_2781(t_small_parse_table_array *v)
{
	v->a[55620] = state(1579);
	v->a[55621] = 1;
	v->a[55622] = sym_terminator;
	v->a[55623] = actions(1348);
	v->a[55624] = 2;
	v->a[55625] = anon_sym_SEMI_SEMI;
	v->a[55626] = anon_sym_SEMI;
	v->a[55627] = 5;
	v->a[55628] = actions(1436);
	v->a[55629] = 1;
	v->a[55630] = sym_comment;
	v->a[55631] = actions(2903);
	v->a[55632] = 1;
	v->a[55633] = anon_sym_PIPE;
	v->a[55634] = state(1393);
	v->a[55635] = 1;
	v->a[55636] = aux_sym_pipeline_repeat1;
	v->a[55637] = actions(2353);
	v->a[55638] = 2;
	v->a[55639] = anon_sym_LT;
	small_parse_table_2782(v);
}

void	small_parse_table_2782(t_small_parse_table_array *v)
{
	v->a[55640] = anon_sym_GT;
	v->a[55641] = actions(2357);
	v->a[55642] = 4;
	v->a[55643] = anon_sym_AMP_AMP;
	v->a[55644] = anon_sym_PIPE_PIPE;
	v->a[55645] = anon_sym_GT_GT;
	v->a[55646] = anon_sym_LT_LT;
	v->a[55647] = 3;
	v->a[55648] = actions(3);
	v->a[55649] = 1;
	v->a[55650] = sym_comment;
	v->a[55651] = actions(1046);
	v->a[55652] = 1;
	v->a[55653] = sym__concat;
	v->a[55654] = actions(1048);
	v->a[55655] = 7;
	v->a[55656] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[55657] = anon_sym_DOLLAR;
	v->a[55658] = anon_sym_DQUOTE;
	v->a[55659] = sym_string_content;
	small_parse_table_2783(v);
}

void	small_parse_table_2783(t_small_parse_table_array *v)
{
	v->a[55660] = anon_sym_DOLLAR_LBRACE;
	v->a[55661] = anon_sym_DOLLAR_LPAREN;
	v->a[55662] = anon_sym_BQUOTE;
	v->a[55663] = 3;
	v->a[55664] = actions(3);
	v->a[55665] = 1;
	v->a[55666] = sym_comment;
	v->a[55667] = actions(1050);
	v->a[55668] = 1;
	v->a[55669] = sym__concat;
	v->a[55670] = actions(1052);
	v->a[55671] = 7;
	v->a[55672] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[55673] = anon_sym_DOLLAR;
	v->a[55674] = anon_sym_DQUOTE;
	v->a[55675] = sym_string_content;
	v->a[55676] = anon_sym_DOLLAR_LBRACE;
	v->a[55677] = anon_sym_DOLLAR_LPAREN;
	v->a[55678] = anon_sym_BQUOTE;
	v->a[55679] = 8;
	small_parse_table_2784(v);
}

void	small_parse_table_2784(t_small_parse_table_array *v)
{
	v->a[55680] = actions(3);
	v->a[55681] = 1;
	v->a[55682] = sym_comment;
	v->a[55683] = actions(1193);
	v->a[55684] = 1;
	v->a[55685] = anon_sym_RPAREN;
	v->a[55686] = actions(1198);
	v->a[55687] = 1;
	v->a[55688] = anon_sym_DQUOTE;
	v->a[55689] = actions(1200);
	v->a[55690] = 1;
	v->a[55691] = sym_raw_string;
	v->a[55692] = actions(1202);
	v->a[55693] = 1;
	v->a[55694] = aux_sym__expansion_regex_token1;
	v->a[55695] = actions(1204);
	v->a[55696] = 1;
	v->a[55697] = sym_regex;
	v->a[55698] = actions(2905);
	v->a[55699] = 1;
	small_parse_table_2785(v);
}

/* EOF small_parse_table_556.c */
