/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1631.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8155(t_small_parse_table_array *v)
{
	v->a[163100] = anon_sym_AMP_EQ;
	v->a[163101] = anon_sym_CARET_EQ;
	v->a[163102] = anon_sym_PIPE_EQ;
	v->a[163103] = anon_sym_PIPE_PIPE;
	v->a[163104] = anon_sym_AMP_AMP;
	v->a[163105] = anon_sym_EQ_EQ;
	v->a[163106] = anon_sym_BANG_EQ;
	v->a[163107] = anon_sym_LT_EQ;
	v->a[163108] = anon_sym_GT_EQ;
	v->a[163109] = anon_sym_RPAREN;
	v->a[163110] = anon_sym_EQ_TILDE;
	v->a[163111] = anon_sym_QMARK;
	v->a[163112] = 25;
	v->a[163113] = actions(71);
	v->a[163114] = 1;
	v->a[163115] = sym_comment;
	v->a[163116] = actions(6474);
	v->a[163117] = 1;
	v->a[163118] = sym_word;
	v->a[163119] = actions(6480);
	small_parse_table_8156(v);
}

void	small_parse_table_8156(t_small_parse_table_array *v)
{
	v->a[163120] = 1;
	v->a[163121] = anon_sym_LPAREN;
	v->a[163122] = actions(6488);
	v->a[163123] = 1;
	v->a[163124] = anon_sym_DOLLAR;
	v->a[163125] = actions(6494);
	v->a[163126] = 1;
	v->a[163127] = aux_sym_number_token1;
	v->a[163128] = actions(6496);
	v->a[163129] = 1;
	v->a[163130] = aux_sym_number_token2;
	v->a[163131] = actions(6500);
	v->a[163132] = 1;
	v->a[163133] = anon_sym_DOLLAR_LPAREN;
	v->a[163134] = actions(6508);
	v->a[163135] = 1;
	v->a[163136] = sym_test_operator;
	v->a[163137] = actions(6510);
	v->a[163138] = 1;
	v->a[163139] = sym_extglob_pattern;
	small_parse_table_8157(v);
}

void	small_parse_table_8157(t_small_parse_table_array *v)
{
	v->a[163140] = actions(6512);
	v->a[163141] = 1;
	v->a[163142] = sym__brace_start;
	v->a[163143] = actions(7226);
	v->a[163144] = 1;
	v->a[163145] = anon_sym_DOLLAR_LBRACK;
	v->a[163146] = actions(7228);
	v->a[163147] = 1;
	v->a[163148] = sym__special_character;
	v->a[163149] = actions(7230);
	v->a[163150] = 1;
	v->a[163151] = anon_sym_DQUOTE;
	v->a[163152] = actions(7234);
	v->a[163153] = 1;
	v->a[163154] = anon_sym_DOLLAR_LBRACE;
	v->a[163155] = actions(7236);
	v->a[163156] = 1;
	v->a[163157] = anon_sym_BQUOTE;
	v->a[163158] = actions(7238);
	v->a[163159] = 1;
	small_parse_table_8158(v);
}

void	small_parse_table_8158(t_small_parse_table_array *v)
{
	v->a[163160] = anon_sym_DOLLAR_BQUOTE;
	v->a[163161] = actions(7459);
	v->a[163162] = 1;
	v->a[163163] = anon_sym_esac;
	v->a[163164] = state(6426);
	v->a[163165] = 1;
	v->a[163166] = aux_sym__literal_repeat1;
	v->a[163167] = state(7016);
	v->a[163168] = 1;
	v->a[163169] = sym_last_case_item;
	v->a[163170] = actions(7224);
	v->a[163171] = 2;
	v->a[163172] = anon_sym_LPAREN_LPAREN;
	v->a[163173] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[163174] = actions(7232);
	v->a[163175] = 2;
	v->a[163176] = sym_raw_string;
	v->a[163177] = sym_ansi_c_string;
	v->a[163178] = actions(7240);
	v->a[163179] = 2;
	small_parse_table_8159(v);
}

void	small_parse_table_8159(t_small_parse_table_array *v)
{
	v->a[163180] = anon_sym_LT_LPAREN;
	v->a[163181] = anon_sym_GT_LPAREN;
	v->a[163182] = state(3389);
	v->a[163183] = 2;
	v->a[163184] = sym_case_item;
	v->a[163185] = aux_sym_case_statement_repeat1;
	v->a[163186] = state(6695);
	v->a[163187] = 2;
	v->a[163188] = sym_concatenation;
	v->a[163189] = sym__extglob_blob;
	v->a[163190] = state(6303);
	v->a[163191] = 9;
	v->a[163192] = sym_arithmetic_expansion;
	v->a[163193] = sym_brace_expression;
	v->a[163194] = sym_string;
	v->a[163195] = sym_translated_string;
	v->a[163196] = sym_number;
	v->a[163197] = sym_simple_expansion;
	v->a[163198] = sym_expansion;
	v->a[163199] = sym_command_substitution;
	small_parse_table_8160(v);
}

/* EOF small_parse_table_1631.c */
