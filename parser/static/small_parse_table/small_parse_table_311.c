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
	v->a[31100] = 1;
	v->a[31101] = sym_subshell;
	v->a[31102] = state(1298);
	v->a[31103] = 1;
	v->a[31104] = sym_command;
	v->a[31105] = state(1343);
	v->a[31106] = 1;
	v->a[31107] = sym_file_redirect;
	v->a[31108] = actions(1066);
	v->a[31109] = 2;
	v->a[31110] = anon_sym_LT_AMP_DASH;
	v->a[31111] = anon_sym_GT_AMP_DASH;
	v->a[31112] = actions(371);
	v->a[31113] = 3;
	v->a[31114] = sym_raw_string;
	v->a[31115] = sym_number;
	v->a[31116] = sym_word;
	v->a[31117] = state(734);
	v->a[31118] = 5;
	v->a[31119] = sym_arithmetic_expansion;
	small_parse_table_1556(v);
}

void	small_parse_table_1556(t_small_parse_table_array *v)
{
	v->a[31120] = sym_string;
	v->a[31121] = sym_simple_expansion;
	v->a[31122] = sym_expansion;
	v->a[31123] = sym_command_substitution;
	v->a[31124] = actions(1064);
	v->a[31125] = 8;
	v->a[31126] = anon_sym_LT;
	v->a[31127] = anon_sym_GT;
	v->a[31128] = anon_sym_GT_GT;
	v->a[31129] = anon_sym_AMP_GT;
	v->a[31130] = anon_sym_AMP_GT_GT;
	v->a[31131] = anon_sym_LT_AMP;
	v->a[31132] = anon_sym_GT_AMP;
	v->a[31133] = anon_sym_GT_PIPE;
	v->a[31134] = 3;
	v->a[31135] = actions(3);
	v->a[31136] = 1;
	v->a[31137] = sym_comment;
	v->a[31138] = actions(1104);
	v->a[31139] = 4;
	small_parse_table_1557(v);
}

void	small_parse_table_1557(t_small_parse_table_array *v)
{
	v->a[31140] = sym_file_descriptor;
	v->a[31141] = sym__concat;
	v->a[31142] = sym__bare_dollar;
	v->a[31143] = ts_builtin_sym_end;
	v->a[31144] = actions(1102);
	v->a[31145] = 30;
	v->a[31146] = anon_sym_LPAREN;
	v->a[31147] = anon_sym_PIPE;
	v->a[31148] = anon_sym_SEMI_SEMI;
	v->a[31149] = anon_sym_AMP_AMP;
	v->a[31150] = anon_sym_PIPE_PIPE;
	v->a[31151] = anon_sym_LT;
	v->a[31152] = anon_sym_GT;
	v->a[31153] = anon_sym_GT_GT;
	v->a[31154] = anon_sym_AMP_GT;
	v->a[31155] = anon_sym_AMP_GT_GT;
	v->a[31156] = anon_sym_LT_AMP;
	v->a[31157] = anon_sym_GT_AMP;
	v->a[31158] = anon_sym_GT_PIPE;
	v->a[31159] = anon_sym_LT_AMP_DASH;
	small_parse_table_1558(v);
}

void	small_parse_table_1558(t_small_parse_table_array *v)
{
	v->a[31160] = anon_sym_GT_AMP_DASH;
	v->a[31161] = anon_sym_LT_LT;
	v->a[31162] = anon_sym_LT_LT_DASH;
	v->a[31163] = aux_sym_heredoc_redirect_token1;
	v->a[31164] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31165] = anon_sym_AMP;
	v->a[31166] = aux_sym_concatenation_token1;
	v->a[31167] = anon_sym_DOLLAR;
	v->a[31168] = anon_sym_DQUOTE;
	v->a[31169] = sym_raw_string;
	v->a[31170] = sym_number;
	v->a[31171] = anon_sym_DOLLAR_LBRACE;
	v->a[31172] = anon_sym_DOLLAR_LPAREN;
	v->a[31173] = anon_sym_BQUOTE;
	v->a[31174] = sym_word;
	v->a[31175] = anon_sym_SEMI;
	v->a[31176] = 21;
	v->a[31177] = actions(3);
	v->a[31178] = 1;
	v->a[31179] = sym_comment;
	small_parse_table_1559(v);
}

void	small_parse_table_1559(t_small_parse_table_array *v)
{
	v->a[31180] = actions(17);
	v->a[31181] = 1;
	v->a[31182] = anon_sym_LPAREN;
	v->a[31183] = actions(59);
	v->a[31184] = 1;
	v->a[31185] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31186] = actions(61);
	v->a[31187] = 1;
	v->a[31188] = anon_sym_DOLLAR;
	v->a[31189] = actions(63);
	v->a[31190] = 1;
	v->a[31191] = anon_sym_DQUOTE;
	v->a[31192] = actions(67);
	v->a[31193] = 1;
	v->a[31194] = anon_sym_DOLLAR_LBRACE;
	v->a[31195] = actions(69);
	v->a[31196] = 1;
	v->a[31197] = anon_sym_DOLLAR_LPAREN;
	v->a[31198] = actions(71);
	v->a[31199] = 1;
	small_parse_table_1560(v);
}

/* EOF small_parse_table_311.c */
