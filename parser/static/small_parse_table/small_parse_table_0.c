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
	v->a[0] = 23;
	v->a[1] = actions(3);
	v->a[2] = 1;
	v->a[3] = sym_comment;
	v->a[4] = actions(693);
	v->a[5] = 1;
	v->a[6] = anon_sym_LPAREN;
	v->a[7] = actions(697);
	v->a[8] = 1;
	v->a[9] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[10] = actions(699);
	v->a[11] = 1;
	v->a[12] = anon_sym_DOLLAR;
	v->a[13] = actions(701);
	v->a[14] = 1;
	v->a[15] = sym__special_character;
	v->a[16] = actions(703);
	v->a[17] = 1;
	v->a[18] = anon_sym_DQUOTE;
	v->a[19] = actions(705);
	small_parse_table_1(v);
}

void	small_parse_table_1(t_small_parse_table_array *v)
{
	v->a[20] = 1;
	v->a[21] = aux_sym_number_token1;
	v->a[22] = actions(707);
	v->a[23] = 1;
	v->a[24] = aux_sym_number_token2;
	v->a[25] = actions(709);
	v->a[26] = 1;
	v->a[27] = anon_sym_DOLLAR_LBRACE;
	v->a[28] = actions(711);
	v->a[29] = 1;
	v->a[30] = anon_sym_DOLLAR_LPAREN;
	v->a[31] = actions(713);
	v->a[32] = 1;
	v->a[33] = anon_sym_BQUOTE;
	v->a[34] = actions(715);
	v->a[35] = 1;
	v->a[36] = anon_sym_DOLLAR_BQUOTE;
	v->a[37] = actions(717);
	v->a[38] = 1;
	v->a[39] = sym_test_operator;
	small_parse_table_2(v);
}

void	small_parse_table_2(t_small_parse_table_array *v)
{
	v->a[40] = actions(719);
	v->a[41] = 1;
	v->a[42] = sym__bare_dollar;
	v->a[43] = actions(721);
	v->a[44] = 1;
	v->a[45] = sym__brace_start;
	v->a[46] = state(293);
	v->a[47] = 1;
	v->a[48] = aux_sym_command_repeat2;
	v->a[49] = state(901);
	v->a[50] = 1;
	v->a[51] = aux_sym__literal_repeat1;
	v->a[52] = state(1121);
	v->a[53] = 1;
	v->a[54] = sym_concatenation;
	v->a[55] = state(2187);
	v->a[56] = 1;
	v->a[57] = sym_subshell;
	v->a[58] = actions(689);
	v->a[59] = 2;
	small_parse_table_3(v);
}

void	small_parse_table_3(t_small_parse_table_array *v)
{
	v->a[60] = sym_raw_string;
	v->a[61] = sym_word;
	v->a[62] = actions(695);
	v->a[63] = 2;
	v->a[64] = sym_file_descriptor;
	v->a[65] = aux_sym_heredoc_redirect_token1;
	v->a[66] = state(555);
	v->a[67] = 7;
	v->a[68] = sym_arithmetic_expansion;
	v->a[69] = sym_brace_expression;
	v->a[70] = sym_string;
	v->a[71] = sym_number;
	v->a[72] = sym_simple_expansion;
	v->a[73] = sym_expansion;
	v->a[74] = sym_command_substitution;
	v->a[75] = actions(691);
	v->a[76] = 22;
	v->a[77] = anon_sym_esac;
	v->a[78] = anon_sym_PIPE;
	v->a[79] = anon_sym_SEMI_SEMI;
	small_parse_table_4(v);
}

void	small_parse_table_4(t_small_parse_table_array *v)
{
	v->a[80] = anon_sym_SEMI_AMP;
	v->a[81] = anon_sym_SEMI_SEMI_AMP;
	v->a[82] = anon_sym_PIPE_AMP;
	v->a[83] = anon_sym_AMP_AMP;
	v->a[84] = anon_sym_PIPE_PIPE;
	v->a[85] = anon_sym_LT;
	v->a[86] = anon_sym_GT;
	v->a[87] = anon_sym_GT_GT;
	v->a[88] = anon_sym_AMP_GT;
	v->a[89] = anon_sym_AMP_GT_GT;
	v->a[90] = anon_sym_LT_AMP;
	v->a[91] = anon_sym_GT_AMP;
	v->a[92] = anon_sym_GT_PIPE;
	v->a[93] = anon_sym_LT_AMP_DASH;
	v->a[94] = anon_sym_GT_AMP_DASH;
	v->a[95] = anon_sym_LT_LT;
	v->a[96] = anon_sym_LT_LT_DASH;
	v->a[97] = anon_sym_AMP;
	v->a[98] = anon_sym_SEMI;
	v->a[99] = 21;
	small_parse_table_5(v);
}

/* EOF small_parse_table_0.c */
