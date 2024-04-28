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
	v->a[80100] = anon_sym_AMP_GT_GT;
	v->a[80101] = anon_sym_LT_AMP;
	v->a[80102] = anon_sym_GT_AMP;
	v->a[80103] = anon_sym_GT_PIPE;
	v->a[80104] = anon_sym_LT_AMP_DASH;
	v->a[80105] = anon_sym_GT_AMP_DASH;
	v->a[80106] = anon_sym_LT_LT_DASH;
	v->a[80107] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80108] = anon_sym_DOLLAR_LBRACK;
	v->a[80109] = aux_sym_concatenation_token1;
	v->a[80110] = anon_sym_DOLLAR;
	v->a[80111] = sym__special_character;
	v->a[80112] = anon_sym_DQUOTE;
	v->a[80113] = sym_raw_string;
	v->a[80114] = sym_ansi_c_string;
	v->a[80115] = aux_sym_number_token1;
	v->a[80116] = aux_sym_number_token2;
	v->a[80117] = anon_sym_DOLLAR_LBRACE;
	v->a[80118] = anon_sym_DOLLAR_LPAREN;
	v->a[80119] = anon_sym_BQUOTE;
	small_parse_table_4006(v);
}

void	small_parse_table_4006(t_small_parse_table_array *v)
{
	v->a[80120] = anon_sym_DOLLAR_BQUOTE;
	v->a[80121] = anon_sym_LT_LPAREN;
	v->a[80122] = anon_sym_GT_LPAREN;
	v->a[80123] = aux_sym__simple_variable_name_token1;
	v->a[80124] = sym_word;
	v->a[80125] = 3;
	v->a[80126] = actions(3);
	v->a[80127] = 1;
	v->a[80128] = sym_comment;
	v->a[80129] = actions(1310);
	v->a[80130] = 6;
	v->a[80131] = sym_file_descriptor;
	v->a[80132] = sym__concat;
	v->a[80133] = sym_variable_name;
	v->a[80134] = sym_test_operator;
	v->a[80135] = sym__brace_start;
	v->a[80136] = aux_sym_heredoc_redirect_token1;
	v->a[80137] = actions(1308);
	v->a[80138] = 39;
	v->a[80139] = anon_sym_LPAREN_LPAREN;
	small_parse_table_4007(v);
}

void	small_parse_table_4007(t_small_parse_table_array *v)
{
	v->a[80140] = anon_sym_SEMI;
	v->a[80141] = anon_sym_PIPE_PIPE;
	v->a[80142] = anon_sym_AMP_AMP;
	v->a[80143] = anon_sym_PIPE;
	v->a[80144] = anon_sym_AMP;
	v->a[80145] = anon_sym_LT;
	v->a[80146] = anon_sym_GT;
	v->a[80147] = anon_sym_LT_LT;
	v->a[80148] = anon_sym_GT_GT;
	v->a[80149] = anon_sym_RPAREN;
	v->a[80150] = anon_sym_SEMI_SEMI;
	v->a[80151] = anon_sym_PIPE_AMP;
	v->a[80152] = anon_sym_AMP_GT;
	v->a[80153] = anon_sym_AMP_GT_GT;
	v->a[80154] = anon_sym_LT_AMP;
	v->a[80155] = anon_sym_GT_AMP;
	v->a[80156] = anon_sym_GT_PIPE;
	v->a[80157] = anon_sym_LT_AMP_DASH;
	v->a[80158] = anon_sym_GT_AMP_DASH;
	v->a[80159] = anon_sym_LT_LT_DASH;
	small_parse_table_4008(v);
}

void	small_parse_table_4008(t_small_parse_table_array *v)
{
	v->a[80160] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[80161] = anon_sym_DOLLAR_LBRACK;
	v->a[80162] = aux_sym_concatenation_token1;
	v->a[80163] = anon_sym_DOLLAR;
	v->a[80164] = sym__special_character;
	v->a[80165] = anon_sym_DQUOTE;
	v->a[80166] = sym_raw_string;
	v->a[80167] = sym_ansi_c_string;
	v->a[80168] = aux_sym_number_token1;
	v->a[80169] = aux_sym_number_token2;
	v->a[80170] = anon_sym_DOLLAR_LBRACE;
	v->a[80171] = anon_sym_DOLLAR_LPAREN;
	v->a[80172] = anon_sym_BQUOTE;
	v->a[80173] = anon_sym_DOLLAR_BQUOTE;
	v->a[80174] = anon_sym_LT_LPAREN;
	v->a[80175] = anon_sym_GT_LPAREN;
	v->a[80176] = aux_sym__simple_variable_name_token1;
	v->a[80177] = sym_word;
	v->a[80178] = 3;
	v->a[80179] = actions(3);
	small_parse_table_4009(v);
}

void	small_parse_table_4009(t_small_parse_table_array *v)
{
	v->a[80180] = 1;
	v->a[80181] = sym_comment;
	v->a[80182] = actions(1306);
	v->a[80183] = 6;
	v->a[80184] = sym_file_descriptor;
	v->a[80185] = sym__concat;
	v->a[80186] = sym_variable_name;
	v->a[80187] = sym_test_operator;
	v->a[80188] = sym__brace_start;
	v->a[80189] = aux_sym_heredoc_redirect_token1;
	v->a[80190] = actions(1304);
	v->a[80191] = 39;
	v->a[80192] = anon_sym_LPAREN_LPAREN;
	v->a[80193] = anon_sym_SEMI;
	v->a[80194] = anon_sym_PIPE_PIPE;
	v->a[80195] = anon_sym_AMP_AMP;
	v->a[80196] = anon_sym_PIPE;
	v->a[80197] = anon_sym_AMP;
	v->a[80198] = anon_sym_LT;
	v->a[80199] = anon_sym_GT;
	small_parse_table_4010(v);
}

/* EOF small_parse_table_801.c */
