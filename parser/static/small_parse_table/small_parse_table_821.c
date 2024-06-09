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
	v->a[82100] = anon_sym_DOLLAR_LPAREN;
	v->a[82101] = actions(3194);
	v->a[82102] = 1;
	v->a[82103] = anon_sym_BQUOTE;
	v->a[82104] = state(1946);
	v->a[82105] = 1;
	v->a[82106] = sym_concatenation;
	v->a[82107] = actions(3407);
	v->a[82108] = 2;
	v->a[82109] = sym_raw_string;
	v->a[82110] = sym_word;
	v->a[82111] = state(1863);
	v->a[82112] = 6;
	v->a[82113] = sym_arithmetic_expansion;
	v->a[82114] = sym_string;
	v->a[82115] = sym_number;
	v->a[82116] = sym_simple_expansion;
	v->a[82117] = sym_expansion;
	v->a[82118] = sym_command_substitution;
	v->a[82119] = 8;
	small_parse_table_4106(v);
}

void	small_parse_table_4106(t_small_parse_table_array *v)
{
	v->a[82120] = actions(3);
	v->a[82121] = 1;
	v->a[82122] = sym_comment;
	v->a[82123] = actions(949);
	v->a[82124] = 1;
	v->a[82125] = sym_file_descriptor;
	v->a[82126] = actions(3409);
	v->a[82127] = 1;
	v->a[82128] = aux_sym_heredoc_redirect_token1;
	v->a[82129] = state(2145);
	v->a[82130] = 1;
	v->a[82131] = sym__heredoc_expression;
	v->a[82132] = actions(925);
	v->a[82133] = 2;
	v->a[82134] = anon_sym_AMP_AMP;
	v->a[82135] = anon_sym_PIPE_PIPE;
	v->a[82136] = actions(929);
	v->a[82137] = 2;
	v->a[82138] = anon_sym_LT_AMP_DASH;
	v->a[82139] = anon_sym_GT_AMP_DASH;
	small_parse_table_4107(v);
}

void	small_parse_table_4107(t_small_parse_table_array *v)
{
	v->a[82140] = state(1523);
	v->a[82141] = 2;
	v->a[82142] = sym_file_redirect;
	v->a[82143] = aux_sym_redirected_statement_repeat2;
	v->a[82144] = actions(927);
	v->a[82145] = 8;
	v->a[82146] = anon_sym_LT;
	v->a[82147] = anon_sym_GT;
	v->a[82148] = anon_sym_GT_GT;
	v->a[82149] = anon_sym_AMP_GT;
	v->a[82150] = anon_sym_AMP_GT_GT;
	v->a[82151] = anon_sym_LT_AMP;
	v->a[82152] = anon_sym_GT_AMP;
	v->a[82153] = anon_sym_GT_PIPE;
	v->a[82154] = 12;
	v->a[82155] = actions(3);
	v->a[82156] = 1;
	v->a[82157] = sym_comment;
	v->a[82158] = actions(3180);
	v->a[82159] = 1;
	small_parse_table_4108(v);
}

void	small_parse_table_4108(t_small_parse_table_array *v)
{
	v->a[82160] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[82161] = actions(3182);
	v->a[82162] = 1;
	v->a[82163] = anon_sym_DOLLAR;
	v->a[82164] = actions(3184);
	v->a[82165] = 1;
	v->a[82166] = anon_sym_DQUOTE;
	v->a[82167] = actions(3186);
	v->a[82168] = 1;
	v->a[82169] = aux_sym_number_token1;
	v->a[82170] = actions(3188);
	v->a[82171] = 1;
	v->a[82172] = aux_sym_number_token2;
	v->a[82173] = actions(3190);
	v->a[82174] = 1;
	v->a[82175] = anon_sym_DOLLAR_LBRACE;
	v->a[82176] = actions(3192);
	v->a[82177] = 1;
	v->a[82178] = anon_sym_DOLLAR_LPAREN;
	v->a[82179] = actions(3194);
	small_parse_table_4109(v);
}

void	small_parse_table_4109(t_small_parse_table_array *v)
{
	v->a[82180] = 1;
	v->a[82181] = anon_sym_BQUOTE;
	v->a[82182] = state(1988);
	v->a[82183] = 1;
	v->a[82184] = sym_concatenation;
	v->a[82185] = actions(3411);
	v->a[82186] = 2;
	v->a[82187] = sym_raw_string;
	v->a[82188] = sym_word;
	v->a[82189] = state(1867);
	v->a[82190] = 6;
	v->a[82191] = sym_arithmetic_expansion;
	v->a[82192] = sym_string;
	v->a[82193] = sym_number;
	v->a[82194] = sym_simple_expansion;
	v->a[82195] = sym_expansion;
	v->a[82196] = sym_command_substitution;
	v->a[82197] = 3;
	v->a[82198] = actions(1404);
	v->a[82199] = 1;
	small_parse_table_4110(v);
}

/* EOF small_parse_table_821.c */
