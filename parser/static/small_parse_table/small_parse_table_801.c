/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_801.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4005(t_small_parse_table_array *v)
{
	v->a[80100] = sym_raw_string;
	v->a[80101] = aux_sym_number_token1;
	v->a[80102] = aux_sym_number_token2;
	v->a[80103] = anon_sym_DOLLAR_LBRACE;
	v->a[80104] = anon_sym_DOLLAR_LPAREN;
	v->a[80105] = anon_sym_BQUOTE;
	v->a[80106] = anon_sym_DOLLAR_BQUOTE;
	v->a[80107] = sym_word;
	v->a[80108] = 6;
	v->a[80109] = actions(3);
	v->a[80110] = 1;
	v->a[80111] = sym_comment;
	v->a[80112] = actions(4538);
	v->a[80113] = 1;
	v->a[80114] = aux_sym_concatenation_token1;
	v->a[80115] = actions(4541);
	v->a[80116] = 1;
	v->a[80117] = sym__concat;
	v->a[80118] = state(1686);
	v->a[80119] = 1;
	small_parse_table_4006(v);
}

void	small_parse_table_4006(t_small_parse_table_array *v)
{
	v->a[80120] = aux_sym_concatenation_repeat1;
	v->a[80121] = actions(2654);
	v->a[80122] = 4;
	v->a[80123] = sym_file_descriptor;
	v->a[80124] = sym_test_operator;
	v->a[80125] = sym__brace_start;
	v->a[80126] = aux_sym_heredoc_redirect_token1;
	v->a[80127] = actions(2652);
	v->a[80128] = 24;
	v->a[80129] = anon_sym_AMP_AMP;
	v->a[80130] = anon_sym_PIPE_PIPE;
	v->a[80131] = anon_sym_LT;
	v->a[80132] = anon_sym_GT;
	v->a[80133] = anon_sym_GT_GT;
	v->a[80134] = anon_sym_AMP_GT;
	v->a[80135] = anon_sym_AMP_GT_GT;
	v->a[80136] = anon_sym_LT_AMP;
	v->a[80137] = anon_sym_GT_AMP;
	v->a[80138] = anon_sym_GT_PIPE;
	v->a[80139] = anon_sym_LT_AMP_DASH;
	small_parse_table_4007(v);
}

void	small_parse_table_4007(t_small_parse_table_array *v)
{
	v->a[80140] = anon_sym_GT_AMP_DASH;
	v->a[80141] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80142] = anon_sym_DOLLAR;
	v->a[80143] = sym__special_character;
	v->a[80144] = anon_sym_DQUOTE;
	v->a[80145] = sym_raw_string;
	v->a[80146] = aux_sym_number_token1;
	v->a[80147] = aux_sym_number_token2;
	v->a[80148] = anon_sym_DOLLAR_LBRACE;
	v->a[80149] = anon_sym_DOLLAR_LPAREN;
	v->a[80150] = anon_sym_BQUOTE;
	v->a[80151] = anon_sym_DOLLAR_BQUOTE;
	v->a[80152] = sym_word;
	v->a[80153] = 6;
	v->a[80154] = actions(3);
	v->a[80155] = 1;
	v->a[80156] = sym_comment;
	v->a[80157] = actions(4534);
	v->a[80158] = 1;
	v->a[80159] = aux_sym_concatenation_token1;
	small_parse_table_4008(v);
}

void	small_parse_table_4008(t_small_parse_table_array *v)
{
	v->a[80160] = actions(4536);
	v->a[80161] = 1;
	v->a[80162] = sym__concat;
	v->a[80163] = state(1689);
	v->a[80164] = 1;
	v->a[80165] = aux_sym_concatenation_repeat1;
	v->a[80166] = actions(2664);
	v->a[80167] = 4;
	v->a[80168] = sym_file_descriptor;
	v->a[80169] = sym_test_operator;
	v->a[80170] = sym__brace_start;
	v->a[80171] = aux_sym_heredoc_redirect_token1;
	v->a[80172] = actions(2662);
	v->a[80173] = 24;
	v->a[80174] = anon_sym_AMP_AMP;
	v->a[80175] = anon_sym_PIPE_PIPE;
	v->a[80176] = anon_sym_LT;
	v->a[80177] = anon_sym_GT;
	v->a[80178] = anon_sym_GT_GT;
	v->a[80179] = anon_sym_AMP_GT;
	small_parse_table_4009(v);
}

void	small_parse_table_4009(t_small_parse_table_array *v)
{
	v->a[80180] = anon_sym_AMP_GT_GT;
	v->a[80181] = anon_sym_LT_AMP;
	v->a[80182] = anon_sym_GT_AMP;
	v->a[80183] = anon_sym_GT_PIPE;
	v->a[80184] = anon_sym_LT_AMP_DASH;
	v->a[80185] = anon_sym_GT_AMP_DASH;
	v->a[80186] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80187] = anon_sym_DOLLAR;
	v->a[80188] = sym__special_character;
	v->a[80189] = anon_sym_DQUOTE;
	v->a[80190] = sym_raw_string;
	v->a[80191] = aux_sym_number_token1;
	v->a[80192] = aux_sym_number_token2;
	v->a[80193] = anon_sym_DOLLAR_LBRACE;
	v->a[80194] = anon_sym_DOLLAR_LPAREN;
	v->a[80195] = anon_sym_BQUOTE;
	v->a[80196] = anon_sym_DOLLAR_BQUOTE;
	v->a[80197] = sym_word;
	v->a[80198] = 6;
	v->a[80199] = actions(3);
	small_parse_table_4010(v);
}

/* EOF small_parse_table_801.c */
