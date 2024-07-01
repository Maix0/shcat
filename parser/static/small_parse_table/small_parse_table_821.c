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
	v->a[82100] = actions(3187);
	v->a[82101] = 9;
	v->a[82102] = anon_sym_BANG;
	v->a[82103] = anon_sym_DASH;
	v->a[82104] = anon_sym_STAR;
	v->a[82105] = anon_sym_QMARK;
	v->a[82106] = anon_sym_DOLLAR;
	v->a[82107] = anon_sym_POUND;
	v->a[82108] = anon_sym_AT;
	v->a[82109] = anon_sym_0;
	v->a[82110] = anon_sym__;
	v->a[82111] = 6;
	v->a[82112] = actions(3);
	v->a[82113] = 1;
	v->a[82114] = sym_comment;
	v->a[82115] = actions(3191);
	v->a[82116] = 1;
	v->a[82117] = sym_string_content;
	v->a[82118] = actions(3195);
	v->a[82119] = 1;
	small_parse_table_4106(v);
}

void	small_parse_table_4106(t_small_parse_table_array *v)
{
	v->a[82120] = sym_variable_name;
	v->a[82121] = actions(3219);
	v->a[82122] = 1;
	v->a[82123] = anon_sym_DQUOTE;
	v->a[82124] = actions(3193);
	v->a[82125] = 2;
	v->a[82126] = aux_sym__simple_variable_name_token1;
	v->a[82127] = aux_sym__multiline_variable_name_token1;
	v->a[82128] = actions(3187);
	v->a[82129] = 9;
	v->a[82130] = anon_sym_BANG;
	v->a[82131] = anon_sym_DASH;
	v->a[82132] = anon_sym_STAR;
	v->a[82133] = anon_sym_QMARK;
	v->a[82134] = anon_sym_DOLLAR;
	v->a[82135] = anon_sym_POUND;
	v->a[82136] = anon_sym_AT;
	v->a[82137] = anon_sym_0;
	v->a[82138] = anon_sym__;
	v->a[82139] = 3;
	small_parse_table_4107(v);
}

void	small_parse_table_4107(t_small_parse_table_array *v)
{
	v->a[82140] = actions(3);
	v->a[82141] = 1;
	v->a[82142] = sym_comment;
	v->a[82143] = actions(1264);
	v->a[82144] = 3;
	v->a[82145] = sym_file_descriptor;
	v->a[82146] = sym__concat;
	v->a[82147] = aux_sym_heredoc_redirect_token1;
	v->a[82148] = actions(1266);
	v->a[82149] = 11;
	v->a[82150] = anon_sym_AMP_AMP;
	v->a[82151] = anon_sym_PIPE_PIPE;
	v->a[82152] = anon_sym_LT;
	v->a[82153] = anon_sym_GT;
	v->a[82154] = anon_sym_GT_GT;
	v->a[82155] = anon_sym_LT_AMP;
	v->a[82156] = anon_sym_GT_AMP;
	v->a[82157] = anon_sym_GT_PIPE;
	v->a[82158] = anon_sym_LT_AMP_DASH;
	v->a[82159] = anon_sym_GT_AMP_DASH;
	small_parse_table_4108(v);
}

void	small_parse_table_4108(t_small_parse_table_array *v)
{
	v->a[82160] = aux_sym_concatenation_token1;
	v->a[82161] = 6;
	v->a[82162] = actions(3);
	v->a[82163] = 1;
	v->a[82164] = sym_comment;
	v->a[82165] = actions(3191);
	v->a[82166] = 1;
	v->a[82167] = sym_string_content;
	v->a[82168] = actions(3195);
	v->a[82169] = 1;
	v->a[82170] = sym_variable_name;
	v->a[82171] = actions(3221);
	v->a[82172] = 1;
	v->a[82173] = anon_sym_DQUOTE;
	v->a[82174] = actions(3193);
	v->a[82175] = 2;
	v->a[82176] = aux_sym__simple_variable_name_token1;
	v->a[82177] = aux_sym__multiline_variable_name_token1;
	v->a[82178] = actions(3187);
	v->a[82179] = 9;
	small_parse_table_4109(v);
}

void	small_parse_table_4109(t_small_parse_table_array *v)
{
	v->a[82180] = anon_sym_BANG;
	v->a[82181] = anon_sym_DASH;
	v->a[82182] = anon_sym_STAR;
	v->a[82183] = anon_sym_QMARK;
	v->a[82184] = anon_sym_DOLLAR;
	v->a[82185] = anon_sym_POUND;
	v->a[82186] = anon_sym_AT;
	v->a[82187] = anon_sym_0;
	v->a[82188] = anon_sym__;
	v->a[82189] = 3;
	v->a[82190] = actions(870);
	v->a[82191] = 1;
	v->a[82192] = sym_comment;
	v->a[82193] = actions(1553);
	v->a[82194] = 6;
	v->a[82195] = anon_sym_PIPE;
	v->a[82196] = anon_sym_LT;
	v->a[82197] = anon_sym_GT;
	v->a[82198] = anon_sym_LT_AMP;
	v->a[82199] = anon_sym_GT_AMP;
	small_parse_table_4110(v);
}

/* EOF small_parse_table_821.c */
