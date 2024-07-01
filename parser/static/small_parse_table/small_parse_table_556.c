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
	v->a[55600] = 3;
	v->a[55601] = actions(3);
	v->a[55602] = 1;
	v->a[55603] = sym_comment;
	v->a[55604] = actions(770);
	v->a[55605] = 2;
	v->a[55606] = sym_file_descriptor;
	v->a[55607] = sym__concat;
	v->a[55608] = actions(768);
	v->a[55609] = 20;
	v->a[55610] = anon_sym_AMP_AMP;
	v->a[55611] = anon_sym_PIPE_PIPE;
	v->a[55612] = anon_sym_LT;
	v->a[55613] = anon_sym_GT;
	v->a[55614] = anon_sym_GT_GT;
	v->a[55615] = anon_sym_LT_AMP;
	v->a[55616] = anon_sym_GT_AMP;
	v->a[55617] = anon_sym_GT_PIPE;
	v->a[55618] = anon_sym_LT_GT;
	v->a[55619] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2781(v);
}

void	small_parse_table_2781(t_small_parse_table_array *v)
{
	v->a[55620] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[55621] = aux_sym_concatenation_token1;
	v->a[55622] = anon_sym_DOLLAR;
	v->a[55623] = anon_sym_DQUOTE;
	v->a[55624] = sym_raw_string;
	v->a[55625] = sym_number;
	v->a[55626] = anon_sym_DOLLAR_LBRACE;
	v->a[55627] = anon_sym_DOLLAR_LPAREN;
	v->a[55628] = anon_sym_BQUOTE;
	v->a[55629] = sym_word;
	v->a[55630] = 11;
	v->a[55631] = actions(3);
	v->a[55632] = 1;
	v->a[55633] = sym_comment;
	v->a[55634] = actions(736);
	v->a[55635] = 1;
	v->a[55636] = anon_sym_PIPE;
	v->a[55637] = actions(842);
	v->a[55638] = 1;
	v->a[55639] = anon_sym_BQUOTE;
	small_parse_table_2782(v);
}

void	small_parse_table_2782(t_small_parse_table_array *v)
{
	v->a[55640] = actions(1865);
	v->a[55641] = 1;
	v->a[55642] = aux_sym_heredoc_redirect_token1;
	v->a[55643] = actions(1867);
	v->a[55644] = 1;
	v->a[55645] = sym_file_descriptor;
	v->a[55646] = state(810);
	v->a[55647] = 1;
	v->a[55648] = sym_terminator;
	v->a[55649] = actions(744);
	v->a[55650] = 2;
	v->a[55651] = anon_sym_LT_LT;
	v->a[55652] = anon_sym_LT_LT_DASH;
	v->a[55653] = actions(990);
	v->a[55654] = 2;
	v->a[55655] = anon_sym_AMP_AMP;
	v->a[55656] = anon_sym_PIPE_PIPE;
	v->a[55657] = actions(740);
	v->a[55658] = 3;
	v->a[55659] = anon_sym_SEMI_SEMI;
	small_parse_table_2783(v);
}

void	small_parse_table_2783(t_small_parse_table_array *v)
{
	v->a[55660] = anon_sym_AMP;
	v->a[55661] = anon_sym_SEMI;
	v->a[55662] = state(1059);
	v->a[55663] = 3;
	v->a[55664] = sym_file_redirect;
	v->a[55665] = sym_heredoc_redirect;
	v->a[55666] = aux_sym_redirected_statement_repeat1;
	v->a[55667] = actions(1863);
	v->a[55668] = 7;
	v->a[55669] = anon_sym_LT;
	v->a[55670] = anon_sym_GT;
	v->a[55671] = anon_sym_GT_GT;
	v->a[55672] = anon_sym_LT_AMP;
	v->a[55673] = anon_sym_GT_AMP;
	v->a[55674] = anon_sym_GT_PIPE;
	v->a[55675] = anon_sym_LT_GT;
	v->a[55676] = 6;
	v->a[55677] = actions(3);
	v->a[55678] = 1;
	v->a[55679] = sym_comment;
	small_parse_table_2784(v);
}

void	small_parse_table_2784(t_small_parse_table_array *v)
{
	v->a[55680] = actions(1855);
	v->a[55681] = 1;
	v->a[55682] = aux_sym_concatenation_token1;
	v->a[55683] = actions(1869);
	v->a[55684] = 1;
	v->a[55685] = sym__concat;
	v->a[55686] = state(980);
	v->a[55687] = 1;
	v->a[55688] = aux_sym_concatenation_repeat1;
	v->a[55689] = actions(1047);
	v->a[55690] = 3;
	v->a[55691] = sym_file_descriptor;
	v->a[55692] = sym_variable_name;
	v->a[55693] = aux_sym_heredoc_redirect_token1;
	v->a[55694] = actions(1043);
	v->a[55695] = 16;
	v->a[55696] = anon_sym_esac;
	v->a[55697] = anon_sym_PIPE;
	v->a[55698] = anon_sym_SEMI_SEMI;
	v->a[55699] = anon_sym_AMP_AMP;
	small_parse_table_2785(v);
}

/* EOF small_parse_table_556.c */
