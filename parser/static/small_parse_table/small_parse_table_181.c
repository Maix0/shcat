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
	v->a[18100] = sym_arithmetic_expansion;
	v->a[18101] = sym_string;
	v->a[18102] = sym_simple_expansion;
	v->a[18103] = sym_expansion;
	v->a[18104] = sym_command_substitution;
	v->a[18105] = 5;
	v->a[18106] = actions(3);
	v->a[18107] = 1;
	v->a[18108] = sym_comment;
	v->a[18109] = actions(399);
	v->a[18110] = 1;
	v->a[18111] = sym_variable_name;
	v->a[18112] = actions(397);
	v->a[18113] = 2;
	v->a[18114] = aux_sym__simple_variable_name_token1;
	v->a[18115] = aux_sym__multiline_variable_name_token1;
	v->a[18116] = actions(395);
	v->a[18117] = 8;
	v->a[18118] = anon_sym_BANG;
	v->a[18119] = anon_sym_DASH;
	small_parse_table_906(v);
}

void	small_parse_table_906(t_small_parse_table_array *v)
{
	v->a[18120] = anon_sym_STAR;
	v->a[18121] = anon_sym_QMARK;
	v->a[18122] = anon_sym_DOLLAR;
	v->a[18123] = anon_sym_POUND;
	v->a[18124] = anon_sym_AT;
	v->a[18125] = anon_sym_0;
	v->a[18126] = actions(343);
	v->a[18127] = 16;
	v->a[18128] = anon_sym_PIPE;
	v->a[18129] = anon_sym_AMP_AMP;
	v->a[18130] = anon_sym_PIPE_PIPE;
	v->a[18131] = anon_sym_LT;
	v->a[18132] = anon_sym_GT;
	v->a[18133] = anon_sym_GT_GT;
	v->a[18134] = anon_sym_LT_LT;
	v->a[18135] = aux_sym_heredoc_redirect_token1;
	v->a[18136] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18137] = anon_sym_DQUOTE;
	v->a[18138] = sym_raw_string;
	v->a[18139] = sym_number;
	small_parse_table_907(v);
}

void	small_parse_table_907(t_small_parse_table_array *v)
{
	v->a[18140] = anon_sym_DOLLAR_LBRACE;
	v->a[18141] = anon_sym_DOLLAR_LPAREN;
	v->a[18142] = anon_sym_BQUOTE;
	v->a[18143] = sym_word;
	v->a[18144] = 11;
	v->a[18145] = actions(3);
	v->a[18146] = 1;
	v->a[18147] = sym_comment;
	v->a[18148] = actions(704);
	v->a[18149] = 1;
	v->a[18150] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[18151] = actions(706);
	v->a[18152] = 1;
	v->a[18153] = anon_sym_DOLLAR;
	v->a[18154] = actions(708);
	v->a[18155] = 1;
	v->a[18156] = anon_sym_DQUOTE;
	v->a[18157] = actions(710);
	v->a[18158] = 1;
	v->a[18159] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_908(v);
}

void	small_parse_table_908(t_small_parse_table_array *v)
{
	v->a[18160] = actions(712);
	v->a[18161] = 1;
	v->a[18162] = anon_sym_DOLLAR_LPAREN;
	v->a[18163] = actions(714);
	v->a[18164] = 1;
	v->a[18165] = anon_sym_BQUOTE;
	v->a[18166] = state(181);
	v->a[18167] = 2;
	v->a[18168] = sym_concatenation;
	v->a[18169] = aux_sym_for_statement_repeat1;
	v->a[18170] = actions(702);
	v->a[18171] = 3;
	v->a[18172] = sym_raw_string;
	v->a[18173] = sym_number;
	v->a[18174] = sym_word;
	v->a[18175] = state(402);
	v->a[18176] = 5;
	v->a[18177] = sym_arithmetic_expansion;
	v->a[18178] = sym_string;
	v->a[18179] = sym_simple_expansion;
	small_parse_table_909(v);
}

void	small_parse_table_909(t_small_parse_table_array *v)
{
	v->a[18180] = sym_expansion;
	v->a[18181] = sym_command_substitution;
	v->a[18182] = actions(421);
	v->a[18183] = 11;
	v->a[18184] = anon_sym_PIPE;
	v->a[18185] = anon_sym_RPAREN;
	v->a[18186] = anon_sym_SEMI_SEMI;
	v->a[18187] = anon_sym_AMP_AMP;
	v->a[18188] = anon_sym_PIPE_PIPE;
	v->a[18189] = anon_sym_LT;
	v->a[18190] = anon_sym_GT;
	v->a[18191] = anon_sym_GT_GT;
	v->a[18192] = anon_sym_LT_LT;
	v->a[18193] = aux_sym_heredoc_redirect_token1;
	v->a[18194] = anon_sym_SEMI;
	v->a[18195] = 13;
	v->a[18196] = actions(3);
	v->a[18197] = 1;
	v->a[18198] = sym_comment;
	v->a[18199] = actions(53);
	small_parse_table_910(v);
}

/* EOF small_parse_table_181.c */
