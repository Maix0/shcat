/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_181.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_905(t_small_parse_table_array *v)
{
	v->a[18100] = anon_sym_GT_PIPE;
	v->a[18101] = anon_sym_LT_AMP_DASH;
	v->a[18102] = anon_sym_GT_AMP_DASH;
	v->a[18103] = anon_sym_LT_LT;
	v->a[18104] = anon_sym_LT_LT_DASH;
	v->a[18105] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18106] = anon_sym_AMP;
	v->a[18107] = anon_sym_DOLLAR;
	v->a[18108] = sym__special_character;
	v->a[18109] = anon_sym_DQUOTE;
	v->a[18110] = sym_raw_string;
	v->a[18111] = aux_sym_number_token1;
	v->a[18112] = aux_sym_number_token2;
	v->a[18113] = anon_sym_DOLLAR_LBRACE;
	v->a[18114] = anon_sym_DOLLAR_LPAREN;
	v->a[18115] = anon_sym_BQUOTE;
	v->a[18116] = anon_sym_DOLLAR_BQUOTE;
	v->a[18117] = sym_word;
	v->a[18118] = anon_sym_SEMI;
	v->a[18119] = 21;
	small_parse_table_906(v);
}

void	small_parse_table_906(t_small_parse_table_array *v)
{
	v->a[18120] = actions(3);
	v->a[18121] = 1;
	v->a[18122] = sym_comment;
	v->a[18123] = actions(1252);
	v->a[18124] = 1;
	v->a[18125] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18126] = actions(1254);
	v->a[18127] = 1;
	v->a[18128] = anon_sym_DOLLAR;
	v->a[18129] = actions(1258);
	v->a[18130] = 1;
	v->a[18131] = anon_sym_DQUOTE;
	v->a[18132] = actions(1260);
	v->a[18133] = 1;
	v->a[18134] = aux_sym_number_token1;
	v->a[18135] = actions(1262);
	v->a[18136] = 1;
	v->a[18137] = aux_sym_number_token2;
	v->a[18138] = actions(1264);
	v->a[18139] = 1;
	small_parse_table_907(v);
}

void	small_parse_table_907(t_small_parse_table_array *v)
{
	v->a[18140] = anon_sym_DOLLAR_LBRACE;
	v->a[18141] = actions(1266);
	v->a[18142] = 1;
	v->a[18143] = anon_sym_DOLLAR_LPAREN;
	v->a[18144] = actions(1268);
	v->a[18145] = 1;
	v->a[18146] = anon_sym_BQUOTE;
	v->a[18147] = actions(1270);
	v->a[18148] = 1;
	v->a[18149] = anon_sym_DOLLAR_BQUOTE;
	v->a[18150] = actions(1274);
	v->a[18151] = 1;
	v->a[18152] = sym__bare_dollar;
	v->a[18153] = actions(1276);
	v->a[18154] = 1;
	v->a[18155] = sym__brace_start;
	v->a[18156] = actions(2380);
	v->a[18157] = 1;
	v->a[18158] = sym__special_character;
	v->a[18159] = actions(2382);
	small_parse_table_908(v);
}

void	small_parse_table_908(t_small_parse_table_array *v)
{
	v->a[18160] = 1;
	v->a[18161] = sym_test_operator;
	v->a[18162] = state(490);
	v->a[18163] = 1;
	v->a[18164] = aux_sym_command_repeat2;
	v->a[18165] = state(1232);
	v->a[18166] = 1;
	v->a[18167] = aux_sym__literal_repeat1;
	v->a[18168] = state(1293);
	v->a[18169] = 1;
	v->a[18170] = sym_concatenation;
	v->a[18171] = actions(1280);
	v->a[18172] = 2;
	v->a[18173] = sym_file_descriptor;
	v->a[18174] = aux_sym_heredoc_redirect_token1;
	v->a[18175] = actions(2378);
	v->a[18176] = 2;
	v->a[18177] = sym_raw_string;
	v->a[18178] = sym_word;
	v->a[18179] = state(1356);
	small_parse_table_909(v);
}

void	small_parse_table_909(t_small_parse_table_array *v)
{
	v->a[18180] = 7;
	v->a[18181] = sym_arithmetic_expansion;
	v->a[18182] = sym_brace_expression;
	v->a[18183] = sym_string;
	v->a[18184] = sym_number;
	v->a[18185] = sym_simple_expansion;
	v->a[18186] = sym_expansion;
	v->a[18187] = sym_command_substitution;
	v->a[18188] = actions(1278);
	v->a[18189] = 16;
	v->a[18190] = anon_sym_PIPE;
	v->a[18191] = anon_sym_PIPE_AMP;
	v->a[18192] = anon_sym_AMP_AMP;
	v->a[18193] = anon_sym_PIPE_PIPE;
	v->a[18194] = anon_sym_LT;
	v->a[18195] = anon_sym_GT;
	v->a[18196] = anon_sym_GT_GT;
	v->a[18197] = anon_sym_AMP_GT;
	v->a[18198] = anon_sym_AMP_GT_GT;
	v->a[18199] = anon_sym_LT_AMP;
	small_parse_table_910(v);
}

/* EOF small_parse_table_181.c */
