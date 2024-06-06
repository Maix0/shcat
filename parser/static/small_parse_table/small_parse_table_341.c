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
	v->a[34100] = sym__concat;
	v->a[34101] = sym_test_operator;
	v->a[34102] = sym__brace_start;
	v->a[34103] = aux_sym_heredoc_redirect_token1;
	v->a[34104] = actions(3115);
	v->a[34105] = 35;
	v->a[34106] = anon_sym_esac;
	v->a[34107] = anon_sym_PIPE;
	v->a[34108] = anon_sym_SEMI_SEMI;
	v->a[34109] = anon_sym_SEMI_AMP;
	v->a[34110] = anon_sym_SEMI_SEMI_AMP;
	v->a[34111] = anon_sym_PIPE_AMP;
	v->a[34112] = anon_sym_AMP_AMP;
	v->a[34113] = anon_sym_PIPE_PIPE;
	v->a[34114] = anon_sym_LT;
	v->a[34115] = anon_sym_GT;
	v->a[34116] = anon_sym_GT_GT;
	v->a[34117] = anon_sym_AMP_GT;
	v->a[34118] = anon_sym_AMP_GT_GT;
	v->a[34119] = anon_sym_LT_AMP;
	small_parse_table_1706(v);
}

void	small_parse_table_1706(t_small_parse_table_array *v)
{
	v->a[34120] = anon_sym_GT_AMP;
	v->a[34121] = anon_sym_GT_PIPE;
	v->a[34122] = anon_sym_LT_AMP_DASH;
	v->a[34123] = anon_sym_GT_AMP_DASH;
	v->a[34124] = anon_sym_LT_LT;
	v->a[34125] = anon_sym_LT_LT_DASH;
	v->a[34126] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[34127] = anon_sym_AMP;
	v->a[34128] = aux_sym_concatenation_token1;
	v->a[34129] = anon_sym_DOLLAR;
	v->a[34130] = sym__special_character;
	v->a[34131] = anon_sym_DQUOTE;
	v->a[34132] = sym_raw_string;
	v->a[34133] = aux_sym_number_token1;
	v->a[34134] = aux_sym_number_token2;
	v->a[34135] = anon_sym_DOLLAR_LBRACE;
	v->a[34136] = anon_sym_DOLLAR_LPAREN;
	v->a[34137] = anon_sym_BQUOTE;
	v->a[34138] = anon_sym_DOLLAR_BQUOTE;
	v->a[34139] = sym_word;
	small_parse_table_1707(v);
}

void	small_parse_table_1707(t_small_parse_table_array *v)
{
	v->a[34140] = anon_sym_SEMI;
	v->a[34141] = 6;
	v->a[34142] = actions(3);
	v->a[34143] = 1;
	v->a[34144] = sym_comment;
	v->a[34145] = actions(3423);
	v->a[34146] = 1;
	v->a[34147] = aux_sym_concatenation_token1;
	v->a[34148] = actions(3425);
	v->a[34149] = 1;
	v->a[34150] = sym__concat;
	v->a[34151] = state(803);
	v->a[34152] = 1;
	v->a[34153] = aux_sym_concatenation_repeat1;
	v->a[34154] = actions(2664);
	v->a[34155] = 5;
	v->a[34156] = sym_file_descriptor;
	v->a[34157] = sym_variable_name;
	v->a[34158] = sym_test_operator;
	v->a[34159] = sym__brace_start;
	small_parse_table_1708(v);
}

void	small_parse_table_1708(t_small_parse_table_array *v)
{
	v->a[34160] = aux_sym_heredoc_redirect_token1;
	v->a[34161] = actions(2662);
	v->a[34162] = 32;
	v->a[34163] = anon_sym_PIPE;
	v->a[34164] = anon_sym_RPAREN;
	v->a[34165] = anon_sym_SEMI_SEMI;
	v->a[34166] = anon_sym_PIPE_AMP;
	v->a[34167] = anon_sym_AMP_AMP;
	v->a[34168] = anon_sym_PIPE_PIPE;
	v->a[34169] = anon_sym_LT;
	v->a[34170] = anon_sym_GT;
	v->a[34171] = anon_sym_GT_GT;
	v->a[34172] = anon_sym_AMP_GT;
	v->a[34173] = anon_sym_AMP_GT_GT;
	v->a[34174] = anon_sym_LT_AMP;
	v->a[34175] = anon_sym_GT_AMP;
	v->a[34176] = anon_sym_GT_PIPE;
	v->a[34177] = anon_sym_LT_AMP_DASH;
	v->a[34178] = anon_sym_GT_AMP_DASH;
	v->a[34179] = anon_sym_LT_LT;
	small_parse_table_1709(v);
}

void	small_parse_table_1709(t_small_parse_table_array *v)
{
	v->a[34180] = anon_sym_LT_LT_DASH;
	v->a[34181] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[34182] = anon_sym_AMP;
	v->a[34183] = anon_sym_DOLLAR;
	v->a[34184] = sym__special_character;
	v->a[34185] = anon_sym_DQUOTE;
	v->a[34186] = sym_raw_string;
	v->a[34187] = aux_sym_number_token1;
	v->a[34188] = aux_sym_number_token2;
	v->a[34189] = anon_sym_DOLLAR_LBRACE;
	v->a[34190] = anon_sym_DOLLAR_LPAREN;
	v->a[34191] = anon_sym_BQUOTE;
	v->a[34192] = anon_sym_DOLLAR_BQUOTE;
	v->a[34193] = sym_word;
	v->a[34194] = anon_sym_SEMI;
	v->a[34195] = 3;
	v->a[34196] = actions(3);
	v->a[34197] = 1;
	v->a[34198] = sym_comment;
	v->a[34199] = actions(3024);
	small_parse_table_1710(v);
}

/* EOF small_parse_table_341.c */
