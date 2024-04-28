/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1215.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6075(t_small_parse_table_array *v)
{
	v->a[121500] = anon_sym_SLASH;
	v->a[121501] = anon_sym_PERCENT;
	v->a[121502] = anon_sym_STAR_STAR;
	v->a[121503] = actions(1342);
	v->a[121504] = 28;
	v->a[121505] = sym__concat;
	v->a[121506] = sym_test_operator;
	v->a[121507] = anon_sym_RPAREN_RPAREN;
	v->a[121508] = anon_sym_COMMA;
	v->a[121509] = anon_sym_PLUS_PLUS;
	v->a[121510] = anon_sym_DASH_DASH;
	v->a[121511] = anon_sym_PLUS_EQ;
	v->a[121512] = anon_sym_DASH_EQ;
	v->a[121513] = anon_sym_STAR_EQ;
	v->a[121514] = anon_sym_SLASH_EQ;
	v->a[121515] = anon_sym_PERCENT_EQ;
	v->a[121516] = anon_sym_STAR_STAR_EQ;
	v->a[121517] = anon_sym_LT_LT_EQ;
	v->a[121518] = anon_sym_GT_GT_EQ;
	v->a[121519] = anon_sym_AMP_EQ;
	small_parse_table_6076(v);
}

void	small_parse_table_6076(t_small_parse_table_array *v)
{
	v->a[121520] = anon_sym_CARET_EQ;
	v->a[121521] = anon_sym_PIPE_EQ;
	v->a[121522] = anon_sym_PIPE_PIPE;
	v->a[121523] = anon_sym_AMP_AMP;
	v->a[121524] = anon_sym_EQ_EQ;
	v->a[121525] = anon_sym_BANG_EQ;
	v->a[121526] = anon_sym_LT_EQ;
	v->a[121527] = anon_sym_GT_EQ;
	v->a[121528] = anon_sym_RBRACK_RBRACK;
	v->a[121529] = anon_sym_EQ_TILDE;
	v->a[121530] = anon_sym_QMARK;
	v->a[121531] = anon_sym_COLON;
	v->a[121532] = aux_sym_concatenation_token1;
	v->a[121533] = 6;
	v->a[121534] = actions(3);
	v->a[121535] = 1;
	v->a[121536] = sym_comment;
	v->a[121537] = actions(5664);
	v->a[121538] = 1;
	v->a[121539] = aux_sym_concatenation_token1;
	small_parse_table_6077(v);
}

void	small_parse_table_6077(t_small_parse_table_array *v)
{
	v->a[121540] = actions(5666);
	v->a[121541] = 1;
	v->a[121542] = sym__concat;
	v->a[121543] = state(2329);
	v->a[121544] = 1;
	v->a[121545] = aux_sym_concatenation_repeat1;
	v->a[121546] = actions(5069);
	v->a[121547] = 5;
	v->a[121548] = sym_file_descriptor;
	v->a[121549] = sym_variable_name;
	v->a[121550] = sym_test_operator;
	v->a[121551] = sym__brace_start;
	v->a[121552] = aux_sym_heredoc_redirect_token1;
	v->a[121553] = actions(5067);
	v->a[121554] = 34;
	v->a[121555] = anon_sym_LPAREN_LPAREN;
	v->a[121556] = anon_sym_PIPE_PIPE;
	v->a[121557] = anon_sym_AMP_AMP;
	v->a[121558] = anon_sym_PIPE;
	v->a[121559] = anon_sym_LT;
	small_parse_table_6078(v);
}

void	small_parse_table_6078(t_small_parse_table_array *v)
{
	v->a[121560] = anon_sym_GT;
	v->a[121561] = anon_sym_LT_LT;
	v->a[121562] = anon_sym_GT_GT;
	v->a[121563] = anon_sym_PIPE_AMP;
	v->a[121564] = anon_sym_AMP_GT;
	v->a[121565] = anon_sym_AMP_GT_GT;
	v->a[121566] = anon_sym_LT_AMP;
	v->a[121567] = anon_sym_GT_AMP;
	v->a[121568] = anon_sym_GT_PIPE;
	v->a[121569] = anon_sym_LT_AMP_DASH;
	v->a[121570] = anon_sym_GT_AMP_DASH;
	v->a[121571] = anon_sym_LT_LT_DASH;
	v->a[121572] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[121573] = anon_sym_DOLLAR_LBRACK;
	v->a[121574] = anon_sym_DOLLAR;
	v->a[121575] = sym__special_character;
	v->a[121576] = anon_sym_DQUOTE;
	v->a[121577] = sym_raw_string;
	v->a[121578] = sym_ansi_c_string;
	v->a[121579] = aux_sym_number_token1;
	small_parse_table_6079(v);
}

void	small_parse_table_6079(t_small_parse_table_array *v)
{
	v->a[121580] = aux_sym_number_token2;
	v->a[121581] = anon_sym_DOLLAR_LBRACE;
	v->a[121582] = anon_sym_DOLLAR_LPAREN;
	v->a[121583] = anon_sym_BQUOTE;
	v->a[121584] = anon_sym_DOLLAR_BQUOTE;
	v->a[121585] = anon_sym_LT_LPAREN;
	v->a[121586] = anon_sym_GT_LPAREN;
	v->a[121587] = aux_sym__simple_variable_name_token1;
	v->a[121588] = sym_word;
	v->a[121589] = 6;
	v->a[121590] = actions(3);
	v->a[121591] = 1;
	v->a[121592] = sym_comment;
	v->a[121593] = actions(5664);
	v->a[121594] = 1;
	v->a[121595] = aux_sym_concatenation_token1;
	v->a[121596] = actions(5666);
	v->a[121597] = 1;
	v->a[121598] = sym__concat;
	v->a[121599] = state(2336);
	small_parse_table_6080(v);
}

/* EOF small_parse_table_1215.c */
