/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_0.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_0(t_small_parse_table_array *v)
{
	v->a[0] = 28;
	v->a[1] = actions(3);
	v->a[2] = 1;
	v->a[3] = sym_comment;
	v->a[4] = actions(415);
	v->a[5] = 1;
	v->a[6] = anon_sym_LPAREN;
	v->a[7] = actions(1410);
	v->a[8] = 1;
	v->a[9] = anon_sym_LT_LT_LT;
	v->a[10] = actions(1412);
	v->a[11] = 1;
	v->a[12] = anon_sym_DOLLAR_LBRACK;
	v->a[13] = actions(1414);
	v->a[14] = 1;
	v->a[15] = anon_sym_DOLLAR;
	v->a[16] = actions(1416);
	v->a[17] = 1;
	v->a[18] = sym__special_character;
	v->a[19] = actions(1418);
	small_parse_table_1(v);
}

void	small_parse_table_1(t_small_parse_table_array *v)
{
	v->a[20] = 1;
	v->a[21] = anon_sym_DQUOTE;
	v->a[22] = actions(1420);
	v->a[23] = 1;
	v->a[24] = aux_sym_number_token1;
	v->a[25] = actions(1422);
	v->a[26] = 1;
	v->a[27] = aux_sym_number_token2;
	v->a[28] = actions(1424);
	v->a[29] = 1;
	v->a[30] = anon_sym_DOLLAR_LBRACE;
	v->a[31] = actions(1426);
	v->a[32] = 1;
	v->a[33] = anon_sym_DOLLAR_LPAREN;
	v->a[34] = actions(1428);
	v->a[35] = 1;
	v->a[36] = anon_sym_BQUOTE;
	v->a[37] = actions(1430);
	v->a[38] = 1;
	v->a[39] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_2(v);
}

void	small_parse_table_2(t_small_parse_table_array *v)
{
	v->a[40] = actions(1434);
	v->a[41] = 1;
	v->a[42] = sym_test_operator;
	v->a[43] = actions(1436);
	v->a[44] = 1;
	v->a[45] = sym__bare_dollar;
	v->a[46] = actions(1438);
	v->a[47] = 1;
	v->a[48] = sym__brace_start;
	v->a[49] = state(540);
	v->a[50] = 1;
	v->a[51] = aux_sym_command_repeat2;
	v->a[52] = state(1045);
	v->a[53] = 1;
	v->a[54] = aux_sym__literal_repeat1;
	v->a[55] = state(1181);
	v->a[56] = 1;
	v->a[57] = sym_herestring_redirect;
	v->a[58] = state(1182);
	v->a[59] = 1;
	small_parse_table_3(v);
}

void	small_parse_table_3(t_small_parse_table_array *v)
{
	v->a[60] = sym_concatenation;
	v->a[61] = state(4991);
	v->a[62] = 1;
	v->a[63] = sym_subshell;
	v->a[64] = actions(1402);
	v->a[65] = 2;
	v->a[66] = anon_sym_LPAREN_LPAREN;
	v->a[67] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68] = actions(1406);
	v->a[69] = 2;
	v->a[70] = anon_sym_EQ_EQ;
	v->a[71] = anon_sym_EQ_TILDE;
	v->a[72] = actions(1408);
	v->a[73] = 2;
	v->a[74] = sym_file_descriptor;
	v->a[75] = aux_sym_heredoc_redirect_token1;
	v->a[76] = actions(1432);
	v->a[77] = 2;
	v->a[78] = anon_sym_LT_LPAREN;
	v->a[79] = anon_sym_GT_LPAREN;
	small_parse_table_4(v);
}

void	small_parse_table_4(t_small_parse_table_array *v)
{
	v->a[80] = actions(1400);
	v->a[81] = 3;
	v->a[82] = sym_raw_string;
	v->a[83] = sym_ansi_c_string;
	v->a[84] = sym_word;
	v->a[85] = state(874);
	v->a[86] = 9;
	v->a[87] = sym_arithmetic_expansion;
	v->a[88] = sym_brace_expression;
	v->a[89] = sym_string;
	v->a[90] = sym_translated_string;
	v->a[91] = sym_number;
	v->a[92] = sym_simple_expansion;
	v->a[93] = sym_expansion;
	v->a[94] = sym_command_substitution;
	v->a[95] = sym_process_substitution;
	v->a[96] = actions(1404);
	v->a[97] = 22;
	v->a[98] = anon_sym_SEMI;
	v->a[99] = anon_sym_PIPE_PIPE;
	small_parse_table_5(v);
}

/* EOF small_parse_table_0.c */
