/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_6.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_30(t_small_parse_table_array *v)
{
	v->a[600] = anon_sym_LPAREN;
	v->a[601] = actions(1547);
	v->a[602] = 1;
	v->a[603] = anon_sym_LT_LT_LT;
	v->a[604] = actions(1549);
	v->a[605] = 1;
	v->a[606] = anon_sym_DOLLAR_LBRACK;
	v->a[607] = actions(1551);
	v->a[608] = 1;
	v->a[609] = anon_sym_DOLLAR;
	v->a[610] = actions(1553);
	v->a[611] = 1;
	v->a[612] = sym__special_character;
	v->a[613] = actions(1555);
	v->a[614] = 1;
	v->a[615] = anon_sym_DQUOTE;
	v->a[616] = actions(1557);
	v->a[617] = 1;
	v->a[618] = aux_sym_number_token1;
	v->a[619] = actions(1559);
	small_parse_table_31(v);
}

void	small_parse_table_31(t_small_parse_table_array *v)
{
	v->a[620] = 1;
	v->a[621] = aux_sym_number_token2;
	v->a[622] = actions(1561);
	v->a[623] = 1;
	v->a[624] = anon_sym_DOLLAR_LBRACE;
	v->a[625] = actions(1563);
	v->a[626] = 1;
	v->a[627] = anon_sym_DOLLAR_LPAREN;
	v->a[628] = actions(1565);
	v->a[629] = 1;
	v->a[630] = anon_sym_BQUOTE;
	v->a[631] = actions(1567);
	v->a[632] = 1;
	v->a[633] = anon_sym_DOLLAR_BQUOTE;
	v->a[634] = actions(1571);
	v->a[635] = 1;
	v->a[636] = sym_test_operator;
	v->a[637] = actions(1573);
	v->a[638] = 1;
	v->a[639] = sym__bare_dollar;
	small_parse_table_32(v);
}

void	small_parse_table_32(t_small_parse_table_array *v)
{
	v->a[640] = actions(1575);
	v->a[641] = 1;
	v->a[642] = sym__brace_start;
	v->a[643] = state(566);
	v->a[644] = 1;
	v->a[645] = aux_sym_command_repeat2;
	v->a[646] = state(1321);
	v->a[647] = 1;
	v->a[648] = aux_sym__literal_repeat1;
	v->a[649] = state(1712);
	v->a[650] = 1;
	v->a[651] = sym_herestring_redirect;
	v->a[652] = state(1716);
	v->a[653] = 1;
	v->a[654] = sym_concatenation;
	v->a[655] = state(4911);
	v->a[656] = 1;
	v->a[657] = sym_subshell;
	v->a[658] = actions(1408);
	v->a[659] = 2;
	small_parse_table_33(v);
}

void	small_parse_table_33(t_small_parse_table_array *v)
{
	v->a[660] = sym_file_descriptor;
	v->a[661] = aux_sym_heredoc_redirect_token1;
	v->a[662] = actions(1543);
	v->a[663] = 2;
	v->a[664] = anon_sym_LPAREN_LPAREN;
	v->a[665] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[666] = actions(1545);
	v->a[667] = 2;
	v->a[668] = anon_sym_EQ_EQ;
	v->a[669] = anon_sym_EQ_TILDE;
	v->a[670] = actions(1569);
	v->a[671] = 2;
	v->a[672] = anon_sym_LT_LPAREN;
	v->a[673] = anon_sym_GT_LPAREN;
	v->a[674] = actions(1541);
	v->a[675] = 3;
	v->a[676] = sym_raw_string;
	v->a[677] = sym_ansi_c_string;
	v->a[678] = sym_word;
	v->a[679] = state(1023);
	small_parse_table_34(v);
}

void	small_parse_table_34(t_small_parse_table_array *v)
{
	v->a[680] = 9;
	v->a[681] = sym_arithmetic_expansion;
	v->a[682] = sym_brace_expression;
	v->a[683] = sym_string;
	v->a[684] = sym_translated_string;
	v->a[685] = sym_number;
	v->a[686] = sym_simple_expansion;
	v->a[687] = sym_expansion;
	v->a[688] = sym_command_substitution;
	v->a[689] = sym_process_substitution;
	v->a[690] = actions(1404);
	v->a[691] = 20;
	v->a[692] = anon_sym_SEMI;
	v->a[693] = anon_sym_PIPE_PIPE;
	v->a[694] = anon_sym_AMP_AMP;
	v->a[695] = anon_sym_PIPE;
	v->a[696] = anon_sym_AMP;
	v->a[697] = anon_sym_LT;
	v->a[698] = anon_sym_GT;
	v->a[699] = anon_sym_LT_LT;
	small_parse_table_35(v);
}

/* EOF small_parse_table_6.c */
