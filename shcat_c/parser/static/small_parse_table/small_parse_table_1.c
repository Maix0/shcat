/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5(t_small_parse_table_array *v)
{
	v->a[100] = anon_sym_AMP_AMP;
	v->a[101] = anon_sym_PIPE;
	v->a[102] = anon_sym_AMP;
	v->a[103] = anon_sym_LT;
	v->a[104] = anon_sym_GT;
	v->a[105] = anon_sym_LT_LT;
	v->a[106] = anon_sym_GT_GT;
	v->a[107] = anon_sym_esac;
	v->a[108] = anon_sym_SEMI_SEMI;
	v->a[109] = anon_sym_SEMI_AMP;
	v->a[110] = anon_sym_SEMI_SEMI_AMP;
	v->a[111] = anon_sym_PIPE_AMP;
	v->a[112] = anon_sym_AMP_GT;
	v->a[113] = anon_sym_AMP_GT_GT;
	v->a[114] = anon_sym_LT_AMP;
	v->a[115] = anon_sym_GT_AMP;
	v->a[116] = anon_sym_GT_PIPE;
	v->a[117] = anon_sym_LT_AMP_DASH;
	v->a[118] = anon_sym_GT_AMP_DASH;
	v->a[119] = anon_sym_LT_LT_DASH;
	small_parse_table_6(v);
}

void	small_parse_table_6(t_small_parse_table_array *v)
{
	v->a[120] = 28;
	v->a[121] = actions(3);
	v->a[122] = 1;
	v->a[123] = sym_comment;
	v->a[124] = actions(415);
	v->a[125] = 1;
	v->a[126] = anon_sym_LPAREN;
	v->a[127] = actions(1410);
	v->a[128] = 1;
	v->a[129] = anon_sym_LT_LT_LT;
	v->a[130] = actions(1412);
	v->a[131] = 1;
	v->a[132] = anon_sym_DOLLAR_LBRACK;
	v->a[133] = actions(1414);
	v->a[134] = 1;
	v->a[135] = anon_sym_DOLLAR;
	v->a[136] = actions(1416);
	v->a[137] = 1;
	v->a[138] = sym__special_character;
	v->a[139] = actions(1418);
	small_parse_table_7(v);
}

void	small_parse_table_7(t_small_parse_table_array *v)
{
	v->a[140] = 1;
	v->a[141] = anon_sym_DQUOTE;
	v->a[142] = actions(1420);
	v->a[143] = 1;
	v->a[144] = aux_sym_number_token1;
	v->a[145] = actions(1422);
	v->a[146] = 1;
	v->a[147] = aux_sym_number_token2;
	v->a[148] = actions(1424);
	v->a[149] = 1;
	v->a[150] = anon_sym_DOLLAR_LBRACE;
	v->a[151] = actions(1426);
	v->a[152] = 1;
	v->a[153] = anon_sym_DOLLAR_LPAREN;
	v->a[154] = actions(1428);
	v->a[155] = 1;
	v->a[156] = anon_sym_BQUOTE;
	v->a[157] = actions(1430);
	v->a[158] = 1;
	v->a[159] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_8(v);
}

void	small_parse_table_8(t_small_parse_table_array *v)
{
	v->a[160] = actions(1434);
	v->a[161] = 1;
	v->a[162] = sym_test_operator;
	v->a[163] = actions(1436);
	v->a[164] = 1;
	v->a[165] = sym__bare_dollar;
	v->a[166] = actions(1438);
	v->a[167] = 1;
	v->a[168] = sym__brace_start;
	v->a[169] = state(535);
	v->a[170] = 1;
	v->a[171] = aux_sym_command_repeat2;
	v->a[172] = state(1045);
	v->a[173] = 1;
	v->a[174] = aux_sym__literal_repeat1;
	v->a[175] = state(1181);
	v->a[176] = 1;
	v->a[177] = sym_herestring_redirect;
	v->a[178] = state(1182);
	v->a[179] = 1;
	small_parse_table_9(v);
}

void	small_parse_table_9(t_small_parse_table_array *v)
{
	v->a[180] = sym_concatenation;
	v->a[181] = state(4977);
	v->a[182] = 1;
	v->a[183] = sym_subshell;
	v->a[184] = actions(1402);
	v->a[185] = 2;
	v->a[186] = anon_sym_LPAREN_LPAREN;
	v->a[187] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[188] = actions(1406);
	v->a[189] = 2;
	v->a[190] = anon_sym_EQ_EQ;
	v->a[191] = anon_sym_EQ_TILDE;
	v->a[192] = actions(1432);
	v->a[193] = 2;
	v->a[194] = anon_sym_LT_LPAREN;
	v->a[195] = anon_sym_GT_LPAREN;
	v->a[196] = actions(1442);
	v->a[197] = 2;
	v->a[198] = sym_file_descriptor;
	v->a[199] = aux_sym_heredoc_redirect_token1;
	small_parse_table_10(v);
}

/* EOF small_parse_table_1.c */
