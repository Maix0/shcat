/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_821.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4105(t_small_parse_table_array *v)
{
	v->a[82100] = sym__special_character;
	v->a[82101] = anon_sym_DQUOTE;
	v->a[82102] = sym_raw_string;
	v->a[82103] = sym_ansi_c_string;
	v->a[82104] = aux_sym_number_token1;
	v->a[82105] = aux_sym_number_token2;
	v->a[82106] = anon_sym_DOLLAR_LBRACE;
	v->a[82107] = anon_sym_DOLLAR_LPAREN;
	v->a[82108] = anon_sym_BQUOTE;
	v->a[82109] = anon_sym_DOLLAR_BQUOTE;
	v->a[82110] = anon_sym_LT_LPAREN;
	v->a[82111] = anon_sym_GT_LPAREN;
	v->a[82112] = sym_word;
	v->a[82113] = 3;
	v->a[82114] = actions(3);
	v->a[82115] = 1;
	v->a[82116] = sym_comment;
	v->a[82117] = actions(1318);
	v->a[82118] = 6;
	v->a[82119] = sym_file_descriptor;
	small_parse_table_4106(v);
}

void	small_parse_table_4106(t_small_parse_table_array *v)
{
	v->a[82120] = sym__concat;
	v->a[82121] = sym_test_operator;
	v->a[82122] = sym__brace_start;
	v->a[82123] = ts_builtin_sym_end;
	v->a[82124] = aux_sym_heredoc_redirect_token1;
	v->a[82125] = actions(1316);
	v->a[82126] = 38;
	v->a[82127] = anon_sym_LPAREN_LPAREN;
	v->a[82128] = anon_sym_SEMI;
	v->a[82129] = anon_sym_PIPE_PIPE;
	v->a[82130] = anon_sym_AMP_AMP;
	v->a[82131] = anon_sym_PIPE;
	v->a[82132] = anon_sym_AMP;
	v->a[82133] = anon_sym_LT;
	v->a[82134] = anon_sym_GT;
	v->a[82135] = anon_sym_LT_LT;
	v->a[82136] = anon_sym_GT_GT;
	v->a[82137] = anon_sym_SEMI_SEMI;
	v->a[82138] = anon_sym_PIPE_AMP;
	v->a[82139] = anon_sym_AMP_GT;
	small_parse_table_4107(v);
}

void	small_parse_table_4107(t_small_parse_table_array *v)
{
	v->a[82140] = anon_sym_AMP_GT_GT;
	v->a[82141] = anon_sym_LT_AMP;
	v->a[82142] = anon_sym_GT_AMP;
	v->a[82143] = anon_sym_GT_PIPE;
	v->a[82144] = anon_sym_LT_AMP_DASH;
	v->a[82145] = anon_sym_GT_AMP_DASH;
	v->a[82146] = anon_sym_LT_LT_DASH;
	v->a[82147] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[82148] = anon_sym_DOLLAR_LBRACK;
	v->a[82149] = aux_sym_concatenation_token1;
	v->a[82150] = anon_sym_DOLLAR;
	v->a[82151] = sym__special_character;
	v->a[82152] = anon_sym_DQUOTE;
	v->a[82153] = sym_raw_string;
	v->a[82154] = sym_ansi_c_string;
	v->a[82155] = aux_sym_number_token1;
	v->a[82156] = aux_sym_number_token2;
	v->a[82157] = anon_sym_DOLLAR_LBRACE;
	v->a[82158] = anon_sym_DOLLAR_LPAREN;
	v->a[82159] = anon_sym_BQUOTE;
	small_parse_table_4108(v);
}

void	small_parse_table_4108(t_small_parse_table_array *v)
{
	v->a[82160] = anon_sym_DOLLAR_BQUOTE;
	v->a[82161] = anon_sym_LT_LPAREN;
	v->a[82162] = anon_sym_GT_LPAREN;
	v->a[82163] = aux_sym__simple_variable_name_token1;
	v->a[82164] = sym_word;
	v->a[82165] = 6;
	v->a[82166] = actions(3);
	v->a[82167] = 1;
	v->a[82168] = sym_comment;
	v->a[82169] = actions(5844);
	v->a[82170] = 1;
	v->a[82171] = aux_sym_concatenation_token1;
	v->a[82172] = actions(5963);
	v->a[82173] = 1;
	v->a[82174] = sym__concat;
	v->a[82175] = state(1722);
	v->a[82176] = 1;
	v->a[82177] = aux_sym_concatenation_repeat1;
	v->a[82178] = actions(1288);
	v->a[82179] = 4;
	small_parse_table_4109(v);
}

void	small_parse_table_4109(t_small_parse_table_array *v)
{
	v->a[82180] = sym_file_descriptor;
	v->a[82181] = sym_test_operator;
	v->a[82182] = sym__brace_start;
	v->a[82183] = aux_sym_heredoc_redirect_token1;
	v->a[82184] = actions(1286);
	v->a[82185] = 37;
	v->a[82186] = anon_sym_LPAREN_LPAREN;
	v->a[82187] = anon_sym_SEMI;
	v->a[82188] = anon_sym_PIPE_PIPE;
	v->a[82189] = anon_sym_AMP_AMP;
	v->a[82190] = anon_sym_PIPE;
	v->a[82191] = anon_sym_AMP;
	v->a[82192] = anon_sym_LT;
	v->a[82193] = anon_sym_GT;
	v->a[82194] = anon_sym_LT_LT;
	v->a[82195] = anon_sym_GT_GT;
	v->a[82196] = anon_sym_SEMI_SEMI;
	v->a[82197] = anon_sym_PIPE_AMP;
	v->a[82198] = anon_sym_AMP_GT;
	v->a[82199] = anon_sym_AMP_GT_GT;
	small_parse_table_4110(v);
}

/* EOF small_parse_table_821.c */
