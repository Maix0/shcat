/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_456.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2280(t_small_parse_table_array *v)
{
	v->a[45600] = 5;
	v->a[45601] = sym_file_descriptor;
	v->a[45602] = sym_test_operator;
	v->a[45603] = sym__bare_dollar;
	v->a[45604] = sym__brace_start;
	v->a[45605] = aux_sym_heredoc_redirect_token1;
	v->a[45606] = actions(1362);
	v->a[45607] = 41;
	v->a[45608] = anon_sym_LPAREN_LPAREN;
	v->a[45609] = anon_sym_SEMI;
	v->a[45610] = anon_sym_PIPE_PIPE;
	v->a[45611] = anon_sym_AMP_AMP;
	v->a[45612] = anon_sym_PIPE;
	v->a[45613] = anon_sym_AMP;
	v->a[45614] = anon_sym_EQ_EQ;
	v->a[45615] = anon_sym_LT;
	v->a[45616] = anon_sym_GT;
	v->a[45617] = anon_sym_LT_LT;
	v->a[45618] = anon_sym_GT_GT;
	v->a[45619] = anon_sym_esac;
	small_parse_table_2281(v);
}

void	small_parse_table_2281(t_small_parse_table_array *v)
{
	v->a[45620] = anon_sym_SEMI_SEMI;
	v->a[45621] = anon_sym_SEMI_AMP;
	v->a[45622] = anon_sym_SEMI_SEMI_AMP;
	v->a[45623] = anon_sym_PIPE_AMP;
	v->a[45624] = anon_sym_EQ_TILDE;
	v->a[45625] = anon_sym_AMP_GT;
	v->a[45626] = anon_sym_AMP_GT_GT;
	v->a[45627] = anon_sym_LT_AMP;
	v->a[45628] = anon_sym_GT_AMP;
	v->a[45629] = anon_sym_GT_PIPE;
	v->a[45630] = anon_sym_LT_AMP_DASH;
	v->a[45631] = anon_sym_GT_AMP_DASH;
	v->a[45632] = anon_sym_LT_LT_DASH;
	v->a[45633] = anon_sym_LT_LT_LT;
	v->a[45634] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[45635] = anon_sym_DOLLAR_LBRACK;
	v->a[45636] = anon_sym_DOLLAR;
	v->a[45637] = anon_sym_DQUOTE;
	v->a[45638] = sym_raw_string;
	v->a[45639] = sym_ansi_c_string;
	small_parse_table_2282(v);
}

void	small_parse_table_2282(t_small_parse_table_array *v)
{
	v->a[45640] = aux_sym_number_token1;
	v->a[45641] = aux_sym_number_token2;
	v->a[45642] = anon_sym_DOLLAR_LBRACE;
	v->a[45643] = anon_sym_DOLLAR_LPAREN;
	v->a[45644] = anon_sym_BQUOTE;
	v->a[45645] = anon_sym_DOLLAR_BQUOTE;
	v->a[45646] = anon_sym_LT_LPAREN;
	v->a[45647] = anon_sym_GT_LPAREN;
	v->a[45648] = sym_word;
	v->a[45649] = 10;
	v->a[45650] = actions(3);
	v->a[45651] = 1;
	v->a[45652] = sym_comment;
	v->a[45653] = actions(4272);
	v->a[45654] = 1;
	v->a[45655] = aux_sym_heredoc_redirect_token1;
	v->a[45656] = actions(5103);
	v->a[45657] = 1;
	v->a[45658] = sym_variable_name;
	v->a[45659] = state(6727);
	small_parse_table_2283(v);
}

void	small_parse_table_2283(t_small_parse_table_array *v)
{
	v->a[45660] = 1;
	v->a[45661] = sym_subscript;
	v->a[45662] = actions(4253);
	v->a[45663] = 2;
	v->a[45664] = anon_sym_PIPE;
	v->a[45665] = anon_sym_PIPE_AMP;
	v->a[45666] = state(4787);
	v->a[45667] = 2;
	v->a[45668] = sym_variable_assignment;
	v->a[45669] = aux_sym_variable_assignments_repeat1;
	v->a[45670] = actions(4261);
	v->a[45671] = 3;
	v->a[45672] = sym_file_descriptor;
	v->a[45673] = sym_test_operator;
	v->a[45674] = sym__brace_start;
	v->a[45675] = state(4986);
	v->a[45676] = 3;
	v->a[45677] = sym_file_redirect;
	v->a[45678] = sym_heredoc_redirect;
	v->a[45679] = aux_sym_redirected_statement_repeat1;
	small_parse_table_2284(v);
}

void	small_parse_table_2284(t_small_parse_table_array *v)
{
	v->a[45680] = actions(4270);
	v->a[45681] = 7;
	v->a[45682] = anon_sym_SEMI;
	v->a[45683] = anon_sym_PIPE_PIPE;
	v->a[45684] = anon_sym_AMP_AMP;
	v->a[45685] = anon_sym_AMP;
	v->a[45686] = anon_sym_LT_LT;
	v->a[45687] = anon_sym_SEMI_SEMI;
	v->a[45688] = anon_sym_LT_LT_DASH;
	v->a[45689] = actions(4247);
	v->a[45690] = 28;
	v->a[45691] = anon_sym_LPAREN_LPAREN;
	v->a[45692] = anon_sym_LT;
	v->a[45693] = anon_sym_GT;
	v->a[45694] = anon_sym_GT_GT;
	v->a[45695] = anon_sym_AMP_GT;
	v->a[45696] = anon_sym_AMP_GT_GT;
	v->a[45697] = anon_sym_LT_AMP;
	v->a[45698] = anon_sym_GT_AMP;
	v->a[45699] = anon_sym_GT_PIPE;
	small_parse_table_2285(v);
}

/* EOF small_parse_table_456.c */
