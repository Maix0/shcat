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
	v->a[82100] = actions(2817);
	v->a[82101] = 1;
	v->a[82102] = anon_sym_DOLLAR_LPAREN;
	v->a[82103] = actions(2819);
	v->a[82104] = 1;
	v->a[82105] = anon_sym_BQUOTE;
	v->a[82106] = actions(2821);
	v->a[82107] = 1;
	v->a[82108] = sym__bare_dollar;
	v->a[82109] = actions(2841);
	v->a[82110] = 1;
	v->a[82111] = anon_sym_DOLLAR;
	v->a[82112] = actions(2807);
	v->a[82113] = 5;
	v->a[82114] = aux_sym_concatenation_token1;
	v->a[82115] = sym_raw_string;
	v->a[82116] = sym_number;
	v->a[82117] = sym__comment_word;
	v->a[82118] = sym_word;
	v->a[82119] = state(992);
	small_parse_table_4106(v);
}

void	small_parse_table_4106(t_small_parse_table_array *v)
{
	v->a[82120] = 5;
	v->a[82121] = sym_arithmetic_expansion;
	v->a[82122] = sym_string;
	v->a[82123] = sym_simple_expansion;
	v->a[82124] = sym_expansion;
	v->a[82125] = sym_command_substitution;
	v->a[82126] = 12;
	v->a[82127] = actions(3);
	v->a[82128] = 1;
	v->a[82129] = sym_comment;
	v->a[82130] = actions(3111);
	v->a[82131] = 1;
	v->a[82132] = aux_sym_heredoc_redirect_token1;
	v->a[82133] = actions(3113);
	v->a[82134] = 1;
	v->a[82135] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[82136] = actions(3116);
	v->a[82137] = 1;
	v->a[82138] = anon_sym_DOLLAR;
	v->a[82139] = actions(3119);
	small_parse_table_4107(v);
}

void	small_parse_table_4107(t_small_parse_table_array *v)
{
	v->a[82140] = 1;
	v->a[82141] = anon_sym_DQUOTE;
	v->a[82142] = actions(3122);
	v->a[82143] = 1;
	v->a[82144] = anon_sym_DOLLAR_LBRACE;
	v->a[82145] = actions(3125);
	v->a[82146] = 1;
	v->a[82147] = anon_sym_DOLLAR_LPAREN;
	v->a[82148] = actions(3128);
	v->a[82149] = 1;
	v->a[82150] = anon_sym_BQUOTE;
	v->a[82151] = state(1577);
	v->a[82152] = 1;
	v->a[82153] = aux_sym__heredoc_command;
	v->a[82154] = state(1953);
	v->a[82155] = 1;
	v->a[82156] = sym_concatenation;
	v->a[82157] = actions(3108);
	v->a[82158] = 3;
	v->a[82159] = sym_raw_string;
	small_parse_table_4108(v);
}

void	small_parse_table_4108(t_small_parse_table_array *v)
{
	v->a[82160] = sym_number;
	v->a[82161] = sym_word;
	v->a[82162] = state(1788);
	v->a[82163] = 5;
	v->a[82164] = sym_arithmetic_expansion;
	v->a[82165] = sym_string;
	v->a[82166] = sym_simple_expansion;
	v->a[82167] = sym_expansion;
	v->a[82168] = sym_command_substitution;
	v->a[82169] = 3;
	v->a[82170] = actions(1074);
	v->a[82171] = 1;
	v->a[82172] = sym_comment;
	v->a[82173] = actions(2394);
	v->a[82174] = 7;
	v->a[82175] = anon_sym_PIPE;
	v->a[82176] = anon_sym_LT;
	v->a[82177] = anon_sym_GT;
	v->a[82178] = anon_sym_AMP_GT;
	v->a[82179] = anon_sym_LT_AMP;
	small_parse_table_4109(v);
}

void	small_parse_table_4109(t_small_parse_table_array *v)
{
	v->a[82180] = anon_sym_GT_AMP;
	v->a[82181] = anon_sym_LT_LT;
	v->a[82182] = actions(2392);
	v->a[82183] = 9;
	v->a[82184] = sym_file_descriptor;
	v->a[82185] = anon_sym_AMP_AMP;
	v->a[82186] = anon_sym_PIPE_PIPE;
	v->a[82187] = anon_sym_GT_GT;
	v->a[82188] = anon_sym_AMP_GT_GT;
	v->a[82189] = anon_sym_GT_PIPE;
	v->a[82190] = anon_sym_LT_AMP_DASH;
	v->a[82191] = anon_sym_GT_AMP_DASH;
	v->a[82192] = anon_sym_LT_LT_DASH;
	v->a[82193] = 3;
	v->a[82194] = actions(1074);
	v->a[82195] = 1;
	v->a[82196] = sym_comment;
	v->a[82197] = actions(2336);
	v->a[82198] = 7;
	v->a[82199] = anon_sym_PIPE;
	small_parse_table_4110(v);
}

/* EOF small_parse_table_821.c */
