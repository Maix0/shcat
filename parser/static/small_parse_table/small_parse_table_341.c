/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_341.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1705(t_small_parse_table_array *v)
{
	v->a[34100] = aux_sym_number_token2;
	v->a[34101] = anon_sym_DOLLAR_LBRACE;
	v->a[34102] = anon_sym_DOLLAR_LPAREN;
	v->a[34103] = anon_sym_BQUOTE;
	v->a[34104] = sym_word;
	v->a[34105] = anon_sym_SEMI;
	v->a[34106] = 14;
	v->a[34107] = actions(3);
	v->a[34108] = 1;
	v->a[34109] = sym_comment;
	v->a[34110] = actions(555);
	v->a[34111] = 1;
	v->a[34112] = sym_file_descriptor;
	v->a[34113] = actions(761);
	v->a[34114] = 1;
	v->a[34115] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[34116] = actions(763);
	v->a[34117] = 1;
	v->a[34118] = anon_sym_DOLLAR;
	v->a[34119] = actions(765);
	small_parse_table_1706(v);
}

void	small_parse_table_1706(t_small_parse_table_array *v)
{
	v->a[34120] = 1;
	v->a[34121] = anon_sym_DQUOTE;
	v->a[34122] = actions(767);
	v->a[34123] = 1;
	v->a[34124] = aux_sym_number_token1;
	v->a[34125] = actions(769);
	v->a[34126] = 1;
	v->a[34127] = aux_sym_number_token2;
	v->a[34128] = actions(771);
	v->a[34129] = 1;
	v->a[34130] = anon_sym_DOLLAR_LBRACE;
	v->a[34131] = actions(773);
	v->a[34132] = 1;
	v->a[34133] = anon_sym_DOLLAR_LPAREN;
	v->a[34134] = actions(775);
	v->a[34135] = 1;
	v->a[34136] = anon_sym_BQUOTE;
	v->a[34137] = actions(1385);
	v->a[34138] = 2;
	v->a[34139] = sym_raw_string;
	small_parse_table_1707(v);
}

void	small_parse_table_1707(t_small_parse_table_array *v)
{
	v->a[34140] = sym_word;
	v->a[34141] = state(383);
	v->a[34142] = 2;
	v->a[34143] = sym_concatenation;
	v->a[34144] = aux_sym_for_statement_repeat1;
	v->a[34145] = state(805);
	v->a[34146] = 6;
	v->a[34147] = sym_arithmetic_expansion;
	v->a[34148] = sym_string;
	v->a[34149] = sym_number;
	v->a[34150] = sym_simple_expansion;
	v->a[34151] = sym_expansion;
	v->a[34152] = sym_command_substitution;
	v->a[34153] = actions(553);
	v->a[34154] = 16;
	v->a[34155] = anon_sym_PIPE;
	v->a[34156] = anon_sym_AMP_AMP;
	v->a[34157] = anon_sym_PIPE_PIPE;
	v->a[34158] = anon_sym_LT;
	v->a[34159] = anon_sym_GT;
	small_parse_table_1708(v);
}

void	small_parse_table_1708(t_small_parse_table_array *v)
{
	v->a[34160] = anon_sym_GT_GT;
	v->a[34161] = anon_sym_AMP_GT;
	v->a[34162] = anon_sym_AMP_GT_GT;
	v->a[34163] = anon_sym_LT_AMP;
	v->a[34164] = anon_sym_GT_AMP;
	v->a[34165] = anon_sym_GT_PIPE;
	v->a[34166] = anon_sym_LT_AMP_DASH;
	v->a[34167] = anon_sym_GT_AMP_DASH;
	v->a[34168] = anon_sym_LT_LT;
	v->a[34169] = anon_sym_LT_LT_DASH;
	v->a[34170] = aux_sym_heredoc_redirect_token1;
	v->a[34171] = 3;
	v->a[34172] = actions(3);
	v->a[34173] = 1;
	v->a[34174] = sym_comment;
	v->a[34175] = actions(1251);
	v->a[34176] = 3;
	v->a[34177] = sym_file_descriptor;
	v->a[34178] = sym__concat;
	v->a[34179] = sym__bare_dollar;
	small_parse_table_1709(v);
}

void	small_parse_table_1709(t_small_parse_table_array *v)
{
	v->a[34180] = actions(1253);
	v->a[34181] = 32;
	v->a[34182] = anon_sym_esac;
	v->a[34183] = anon_sym_LPAREN;
	v->a[34184] = anon_sym_PIPE;
	v->a[34185] = anon_sym_SEMI_SEMI;
	v->a[34186] = anon_sym_AMP_AMP;
	v->a[34187] = anon_sym_PIPE_PIPE;
	v->a[34188] = anon_sym_LT;
	v->a[34189] = anon_sym_GT;
	v->a[34190] = anon_sym_GT_GT;
	v->a[34191] = anon_sym_AMP_GT;
	v->a[34192] = anon_sym_AMP_GT_GT;
	v->a[34193] = anon_sym_LT_AMP;
	v->a[34194] = anon_sym_GT_AMP;
	v->a[34195] = anon_sym_GT_PIPE;
	v->a[34196] = anon_sym_LT_AMP_DASH;
	v->a[34197] = anon_sym_GT_AMP_DASH;
	v->a[34198] = anon_sym_LT_LT;
	v->a[34199] = anon_sym_LT_LT_DASH;
	small_parse_table_1710(v);
}

/* EOF small_parse_table_341.c */
