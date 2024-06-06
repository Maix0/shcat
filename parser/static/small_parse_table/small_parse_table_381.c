/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_381.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1905(t_small_parse_table_array *v)
{
	v->a[38100] = aux_sym_heredoc_redirect_token1;
	v->a[38101] = actions(2965);
	v->a[38102] = 34;
	v->a[38103] = anon_sym_PIPE;
	v->a[38104] = anon_sym_RPAREN;
	v->a[38105] = anon_sym_SEMI_SEMI;
	v->a[38106] = anon_sym_PIPE_AMP;
	v->a[38107] = anon_sym_AMP_AMP;
	v->a[38108] = anon_sym_PIPE_PIPE;
	v->a[38109] = anon_sym_LT;
	v->a[38110] = anon_sym_GT;
	v->a[38111] = anon_sym_GT_GT;
	v->a[38112] = anon_sym_AMP_GT;
	v->a[38113] = anon_sym_AMP_GT_GT;
	v->a[38114] = anon_sym_LT_AMP;
	v->a[38115] = anon_sym_GT_AMP;
	v->a[38116] = anon_sym_GT_PIPE;
	v->a[38117] = anon_sym_LT_AMP_DASH;
	v->a[38118] = anon_sym_GT_AMP_DASH;
	v->a[38119] = anon_sym_LT_LT;
	small_parse_table_1906(v);
}

void	small_parse_table_1906(t_small_parse_table_array *v)
{
	v->a[38120] = anon_sym_LT_LT_DASH;
	v->a[38121] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38122] = anon_sym_AMP;
	v->a[38123] = aux_sym_concatenation_token1;
	v->a[38124] = anon_sym_DOLLAR;
	v->a[38125] = sym__special_character;
	v->a[38126] = anon_sym_DQUOTE;
	v->a[38127] = sym_raw_string;
	v->a[38128] = aux_sym_number_token1;
	v->a[38129] = aux_sym_number_token2;
	v->a[38130] = anon_sym_DOLLAR_LBRACE;
	v->a[38131] = anon_sym_DOLLAR_LPAREN;
	v->a[38132] = anon_sym_BQUOTE;
	v->a[38133] = anon_sym_DOLLAR_BQUOTE;
	v->a[38134] = aux_sym__simple_variable_name_token1;
	v->a[38135] = sym_word;
	v->a[38136] = anon_sym_SEMI;
	v->a[38137] = 3;
	v->a[38138] = actions(3);
	v->a[38139] = 1;
	small_parse_table_1907(v);
}

void	small_parse_table_1907(t_small_parse_table_array *v)
{
	v->a[38140] = sym_comment;
	v->a[38141] = actions(2754);
	v->a[38142] = 5;
	v->a[38143] = sym_file_descriptor;
	v->a[38144] = sym_test_operator;
	v->a[38145] = sym__bare_dollar;
	v->a[38146] = sym__brace_start;
	v->a[38147] = aux_sym_heredoc_redirect_token1;
	v->a[38148] = actions(2749);
	v->a[38149] = 35;
	v->a[38150] = anon_sym_esac;
	v->a[38151] = anon_sym_LPAREN;
	v->a[38152] = anon_sym_PIPE;
	v->a[38153] = anon_sym_SEMI_SEMI;
	v->a[38154] = anon_sym_SEMI_AMP;
	v->a[38155] = anon_sym_SEMI_SEMI_AMP;
	v->a[38156] = anon_sym_PIPE_AMP;
	v->a[38157] = anon_sym_AMP_AMP;
	v->a[38158] = anon_sym_PIPE_PIPE;
	v->a[38159] = anon_sym_LT;
	small_parse_table_1908(v);
}

void	small_parse_table_1908(t_small_parse_table_array *v)
{
	v->a[38160] = anon_sym_GT;
	v->a[38161] = anon_sym_GT_GT;
	v->a[38162] = anon_sym_AMP_GT;
	v->a[38163] = anon_sym_AMP_GT_GT;
	v->a[38164] = anon_sym_LT_AMP;
	v->a[38165] = anon_sym_GT_AMP;
	v->a[38166] = anon_sym_GT_PIPE;
	v->a[38167] = anon_sym_LT_AMP_DASH;
	v->a[38168] = anon_sym_GT_AMP_DASH;
	v->a[38169] = anon_sym_LT_LT;
	v->a[38170] = anon_sym_LT_LT_DASH;
	v->a[38171] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[38172] = anon_sym_AMP;
	v->a[38173] = anon_sym_DOLLAR;
	v->a[38174] = sym__special_character;
	v->a[38175] = anon_sym_DQUOTE;
	v->a[38176] = sym_raw_string;
	v->a[38177] = aux_sym_number_token1;
	v->a[38178] = aux_sym_number_token2;
	v->a[38179] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1909(v);
}

void	small_parse_table_1909(t_small_parse_table_array *v)
{
	v->a[38180] = anon_sym_DOLLAR_LPAREN;
	v->a[38181] = anon_sym_BQUOTE;
	v->a[38182] = anon_sym_DOLLAR_BQUOTE;
	v->a[38183] = sym_word;
	v->a[38184] = anon_sym_SEMI;
	v->a[38185] = 3;
	v->a[38186] = actions(3);
	v->a[38187] = 1;
	v->a[38188] = sym_comment;
	v->a[38189] = actions(3034);
	v->a[38190] = 6;
	v->a[38191] = sym_file_descriptor;
	v->a[38192] = sym__concat;
	v->a[38193] = sym_variable_name;
	v->a[38194] = sym_test_operator;
	v->a[38195] = sym__brace_start;
	v->a[38196] = aux_sym_heredoc_redirect_token1;
	v->a[38197] = actions(3032);
	v->a[38198] = 34;
	v->a[38199] = anon_sym_PIPE;
	small_parse_table_1910(v);
}

/* EOF small_parse_table_381.c */
