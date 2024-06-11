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
	v->a[82100] = sym__concat;
	v->a[82101] = sym_variable_name;
	v->a[82102] = anon_sym_AMP_AMP;
	v->a[82103] = anon_sym_PIPE_PIPE;
	v->a[82104] = anon_sym_GT_GT;
	v->a[82105] = anon_sym_AMP_GT_GT;
	v->a[82106] = anon_sym_GT_PIPE;
	v->a[82107] = anon_sym_LT_AMP_DASH;
	v->a[82108] = anon_sym_GT_AMP_DASH;
	v->a[82109] = anon_sym_LT_LT_DASH;
	v->a[82110] = aux_sym_concatenation_token1;
	v->a[82111] = 4;
	v->a[82112] = actions(1094);
	v->a[82113] = 1;
	v->a[82114] = sym_comment;
	v->a[82115] = state(1559);
	v->a[82116] = 3;
	v->a[82117] = sym_file_redirect;
	v->a[82118] = sym_heredoc_redirect;
	v->a[82119] = aux_sym_redirected_statement_repeat1;
	small_parse_table_4106(v);
}

void	small_parse_table_4106(t_small_parse_table_array *v)
{
	v->a[82120] = actions(809);
	v->a[82121] = 7;
	v->a[82122] = anon_sym_PIPE;
	v->a[82123] = anon_sym_LT;
	v->a[82124] = anon_sym_GT;
	v->a[82125] = anon_sym_AMP_GT;
	v->a[82126] = anon_sym_LT_AMP;
	v->a[82127] = anon_sym_GT_AMP;
	v->a[82128] = anon_sym_LT_LT;
	v->a[82129] = actions(803);
	v->a[82130] = 9;
	v->a[82131] = sym_file_descriptor;
	v->a[82132] = anon_sym_AMP_AMP;
	v->a[82133] = anon_sym_PIPE_PIPE;
	v->a[82134] = anon_sym_GT_GT;
	v->a[82135] = anon_sym_AMP_GT_GT;
	v->a[82136] = anon_sym_GT_PIPE;
	v->a[82137] = anon_sym_LT_AMP_DASH;
	v->a[82138] = anon_sym_GT_AMP_DASH;
	v->a[82139] = anon_sym_LT_LT_DASH;
	small_parse_table_4107(v);
}

void	small_parse_table_4107(t_small_parse_table_array *v)
{
	v->a[82140] = 7;
	v->a[82141] = actions(3);
	v->a[82142] = 1;
	v->a[82143] = sym_comment;
	v->a[82144] = actions(2685);
	v->a[82145] = 1;
	v->a[82146] = aux_sym_heredoc_redirect_token1;
	v->a[82147] = actions(3027);
	v->a[82148] = 1;
	v->a[82149] = sym_file_descriptor;
	v->a[82150] = actions(2962);
	v->a[82151] = 2;
	v->a[82152] = anon_sym_LT_AMP_DASH;
	v->a[82153] = anon_sym_GT_AMP_DASH;
	v->a[82154] = state(1565);
	v->a[82155] = 2;
	v->a[82156] = sym_file_redirect;
	v->a[82157] = aux_sym_redirected_statement_repeat2;
	v->a[82158] = actions(2683);
	v->a[82159] = 5;
	small_parse_table_4108(v);
}

void	small_parse_table_4108(t_small_parse_table_array *v)
{
	v->a[82160] = anon_sym_PIPE;
	v->a[82161] = anon_sym_AMP_AMP;
	v->a[82162] = anon_sym_PIPE_PIPE;
	v->a[82163] = anon_sym_LT_LT;
	v->a[82164] = anon_sym_LT_LT_DASH;
	v->a[82165] = actions(2960);
	v->a[82166] = 8;
	v->a[82167] = anon_sym_LT;
	v->a[82168] = anon_sym_GT;
	v->a[82169] = anon_sym_GT_GT;
	v->a[82170] = anon_sym_AMP_GT;
	v->a[82171] = anon_sym_AMP_GT_GT;
	v->a[82172] = anon_sym_LT_AMP;
	v->a[82173] = anon_sym_GT_AMP;
	v->a[82174] = anon_sym_GT_PIPE;
	v->a[82175] = 7;
	v->a[82176] = actions(3);
	v->a[82177] = 1;
	v->a[82178] = sym_comment;
	v->a[82179] = actions(2648);
	small_parse_table_4109(v);
}

void	small_parse_table_4109(t_small_parse_table_array *v)
{
	v->a[82180] = 1;
	v->a[82181] = aux_sym_heredoc_redirect_token1;
	v->a[82182] = actions(3035);
	v->a[82183] = 1;
	v->a[82184] = sym_file_descriptor;
	v->a[82185] = actions(3032);
	v->a[82186] = 2;
	v->a[82187] = anon_sym_LT_AMP_DASH;
	v->a[82188] = anon_sym_GT_AMP_DASH;
	v->a[82189] = state(1565);
	v->a[82190] = 2;
	v->a[82191] = sym_file_redirect;
	v->a[82192] = aux_sym_redirected_statement_repeat2;
	v->a[82193] = actions(2640);
	v->a[82194] = 5;
	v->a[82195] = anon_sym_PIPE;
	v->a[82196] = anon_sym_AMP_AMP;
	v->a[82197] = anon_sym_PIPE_PIPE;
	v->a[82198] = anon_sym_LT_LT;
	v->a[82199] = anon_sym_LT_LT_DASH;
	small_parse_table_4110(v);
}

/* EOF small_parse_table_821.c */
