/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_311.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1555(t_small_parse_table_array *v)
{
	v->a[31100] = sym_file_descriptor;
	v->a[31101] = sym__concat;
	v->a[31102] = sym__bare_dollar;
	v->a[31103] = actions(742);
	v->a[31104] = 28;
	v->a[31105] = anon_sym_LPAREN;
	v->a[31106] = anon_sym_PIPE;
	v->a[31107] = anon_sym_RPAREN;
	v->a[31108] = anon_sym_SEMI_SEMI;
	v->a[31109] = anon_sym_AMP_AMP;
	v->a[31110] = anon_sym_PIPE_PIPE;
	v->a[31111] = anon_sym_LT;
	v->a[31112] = anon_sym_GT;
	v->a[31113] = anon_sym_GT_GT;
	v->a[31114] = anon_sym_LT_AMP;
	v->a[31115] = anon_sym_GT_AMP;
	v->a[31116] = anon_sym_GT_PIPE;
	v->a[31117] = anon_sym_LT_GT;
	v->a[31118] = anon_sym_LT_LT;
	v->a[31119] = anon_sym_LT_LT_DASH;
	small_parse_table_1556(v);
}

void	small_parse_table_1556(t_small_parse_table_array *v)
{
	v->a[31120] = aux_sym_heredoc_redirect_token1;
	v->a[31121] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31122] = anon_sym_AMP;
	v->a[31123] = aux_sym_concatenation_token1;
	v->a[31124] = anon_sym_DOLLAR;
	v->a[31125] = anon_sym_DQUOTE;
	v->a[31126] = sym_raw_string;
	v->a[31127] = sym_number;
	v->a[31128] = anon_sym_DOLLAR_LBRACE;
	v->a[31129] = anon_sym_DOLLAR_LPAREN;
	v->a[31130] = anon_sym_BQUOTE;
	v->a[31131] = sym_word;
	v->a[31132] = anon_sym_SEMI;
	v->a[31133] = 20;
	v->a[31134] = actions(3);
	v->a[31135] = 1;
	v->a[31136] = sym_comment;
	v->a[31137] = actions(321);
	v->a[31138] = 1;
	v->a[31139] = anon_sym_LPAREN;
	small_parse_table_1557(v);
}

void	small_parse_table_1557(t_small_parse_table_array *v)
{
	v->a[31140] = actions(329);
	v->a[31141] = 1;
	v->a[31142] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31143] = actions(331);
	v->a[31144] = 1;
	v->a[31145] = anon_sym_DOLLAR;
	v->a[31146] = actions(333);
	v->a[31147] = 1;
	v->a[31148] = anon_sym_DQUOTE;
	v->a[31149] = actions(337);
	v->a[31150] = 1;
	v->a[31151] = anon_sym_DOLLAR_LBRACE;
	v->a[31152] = actions(339);
	v->a[31153] = 1;
	v->a[31154] = anon_sym_DOLLAR_LPAREN;
	v->a[31155] = actions(341);
	v->a[31156] = 1;
	v->a[31157] = anon_sym_BQUOTE;
	v->a[31158] = actions(345);
	v->a[31159] = 1;
	small_parse_table_1558(v);
}

void	small_parse_table_1558(t_small_parse_table_array *v)
{
	v->a[31160] = sym_variable_name;
	v->a[31161] = actions(1164);
	v->a[31162] = 1;
	v->a[31163] = sym_file_descriptor;
	v->a[31164] = state(361);
	v->a[31165] = 1;
	v->a[31166] = sym_command_name;
	v->a[31167] = state(643);
	v->a[31168] = 1;
	v->a[31169] = aux_sym_command_repeat1;
	v->a[31170] = state(888);
	v->a[31171] = 1;
	v->a[31172] = sym_concatenation;
	v->a[31173] = state(925);
	v->a[31174] = 1;
	v->a[31175] = sym_variable_assignment;
	v->a[31176] = state(1218);
	v->a[31177] = 1;
	v->a[31178] = sym_file_redirect;
	v->a[31179] = state(1584);
	small_parse_table_1559(v);
}

void	small_parse_table_1559(t_small_parse_table_array *v)
{
	v->a[31180] = 1;
	v->a[31181] = sym_command;
	v->a[31182] = state(1585);
	v->a[31183] = 1;
	v->a[31184] = sym_subshell;
	v->a[31185] = actions(335);
	v->a[31186] = 3;
	v->a[31187] = sym_raw_string;
	v->a[31188] = sym_number;
	v->a[31189] = sym_word;
	v->a[31190] = state(721);
	v->a[31191] = 5;
	v->a[31192] = sym_arithmetic_expansion;
	v->a[31193] = sym_string;
	v->a[31194] = sym_simple_expansion;
	v->a[31195] = sym_expansion;
	v->a[31196] = sym_command_substitution;
	v->a[31197] = actions(1162);
	v->a[31198] = 7;
	v->a[31199] = anon_sym_LT;
	small_parse_table_1560(v);
}

/* EOF small_parse_table_311.c */
