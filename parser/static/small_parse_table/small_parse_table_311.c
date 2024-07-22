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
	v->a[31100] = sym_number;
	v->a[31101] = sym_word;
	v->a[31102] = state(811);
	v->a[31103] = 5;
	v->a[31104] = sym_arithmetic_expansion;
	v->a[31105] = sym_string;
	v->a[31106] = sym_simple_expansion;
	v->a[31107] = sym_expansion;
	v->a[31108] = sym_command_substitution;
	v->a[31109] = actions(517);
	v->a[31110] = 12;
	v->a[31111] = anon_sym_PIPE;
	v->a[31112] = anon_sym_AMP_AMP;
	v->a[31113] = anon_sym_PIPE_PIPE;
	v->a[31114] = anon_sym_LT;
	v->a[31115] = anon_sym_GT;
	v->a[31116] = anon_sym_GT_GT;
	v->a[31117] = anon_sym_LT_AMP;
	v->a[31118] = anon_sym_GT_AMP;
	v->a[31119] = anon_sym_GT_PIPE;
	small_parse_table_1556(v);
}

void	small_parse_table_1556(t_small_parse_table_array *v)
{
	v->a[31120] = anon_sym_LT_GT;
	v->a[31121] = anon_sym_LT_LT;
	v->a[31122] = anon_sym_LT_LT_DASH;
	v->a[31123] = 3;
	v->a[31124] = actions(3);
	v->a[31125] = 1;
	v->a[31126] = sym_comment;
	v->a[31127] = actions(694);
	v->a[31128] = 3;
	v->a[31129] = sym_file_descriptor;
	v->a[31130] = sym__concat;
	v->a[31131] = sym__bare_dollar;
	v->a[31132] = actions(692);
	v->a[31133] = 27;
	v->a[31134] = anon_sym_esac;
	v->a[31135] = anon_sym_LPAREN;
	v->a[31136] = anon_sym_PIPE;
	v->a[31137] = anon_sym_SEMI_SEMI;
	v->a[31138] = anon_sym_AMP_AMP;
	v->a[31139] = anon_sym_PIPE_PIPE;
	small_parse_table_1557(v);
}

void	small_parse_table_1557(t_small_parse_table_array *v)
{
	v->a[31140] = anon_sym_LT;
	v->a[31141] = anon_sym_GT;
	v->a[31142] = anon_sym_GT_GT;
	v->a[31143] = anon_sym_LT_AMP;
	v->a[31144] = anon_sym_GT_AMP;
	v->a[31145] = anon_sym_GT_PIPE;
	v->a[31146] = anon_sym_LT_GT;
	v->a[31147] = anon_sym_LT_LT;
	v->a[31148] = anon_sym_LT_LT_DASH;
	v->a[31149] = aux_sym_heredoc_redirect_token1;
	v->a[31150] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31151] = aux_sym_concatenation_token1;
	v->a[31152] = anon_sym_DOLLAR;
	v->a[31153] = anon_sym_DQUOTE;
	v->a[31154] = sym_raw_string;
	v->a[31155] = sym_number;
	v->a[31156] = anon_sym_DOLLAR_LBRACE;
	v->a[31157] = anon_sym_DOLLAR_LPAREN;
	v->a[31158] = anon_sym_BQUOTE;
	v->a[31159] = sym_word;
	small_parse_table_1558(v);
}

void	small_parse_table_1558(t_small_parse_table_array *v)
{
	v->a[31160] = anon_sym_SEMI;
	v->a[31161] = 6;
	v->a[31162] = actions(3);
	v->a[31163] = 1;
	v->a[31164] = sym_comment;
	v->a[31165] = actions(1212);
	v->a[31166] = 1;
	v->a[31167] = aux_sym_concatenation_token1;
	v->a[31168] = actions(1214);
	v->a[31169] = 1;
	v->a[31170] = sym__concat;
	v->a[31171] = state(383);
	v->a[31172] = 1;
	v->a[31173] = aux_sym_concatenation_repeat1;
	v->a[31174] = actions(1097);
	v->a[31175] = 3;
	v->a[31176] = sym_file_descriptor;
	v->a[31177] = sym__bare_dollar;
	v->a[31178] = ts_builtin_sym_end;
	v->a[31179] = actions(1099);
	small_parse_table_1559(v);
}

void	small_parse_table_1559(t_small_parse_table_array *v)
{
	v->a[31180] = 24;
	v->a[31181] = anon_sym_PIPE;
	v->a[31182] = anon_sym_SEMI_SEMI;
	v->a[31183] = anon_sym_AMP_AMP;
	v->a[31184] = anon_sym_PIPE_PIPE;
	v->a[31185] = anon_sym_LT;
	v->a[31186] = anon_sym_GT;
	v->a[31187] = anon_sym_GT_GT;
	v->a[31188] = anon_sym_LT_AMP;
	v->a[31189] = anon_sym_GT_AMP;
	v->a[31190] = anon_sym_GT_PIPE;
	v->a[31191] = anon_sym_LT_GT;
	v->a[31192] = anon_sym_LT_LT;
	v->a[31193] = anon_sym_LT_LT_DASH;
	v->a[31194] = aux_sym_heredoc_redirect_token1;
	v->a[31195] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[31196] = anon_sym_DOLLAR;
	v->a[31197] = anon_sym_DQUOTE;
	v->a[31198] = sym_raw_string;
	v->a[31199] = sym_number;
	small_parse_table_1560(v);
}

/* EOF small_parse_table_311.c */
