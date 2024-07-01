/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_397.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1985(t_small_parse_table_array *v)
{
	v->a[39700] = anon_sym_SEMI_SEMI;
	v->a[39701] = anon_sym_AMP_AMP;
	v->a[39702] = anon_sym_PIPE_PIPE;
	v->a[39703] = anon_sym_LT;
	v->a[39704] = anon_sym_GT;
	v->a[39705] = anon_sym_GT_GT;
	v->a[39706] = anon_sym_LT_AMP;
	v->a[39707] = anon_sym_GT_AMP;
	v->a[39708] = anon_sym_GT_PIPE;
	v->a[39709] = anon_sym_LT_AMP_DASH;
	v->a[39710] = anon_sym_GT_AMP_DASH;
	v->a[39711] = anon_sym_LT_LT;
	v->a[39712] = anon_sym_LT_LT_DASH;
	v->a[39713] = aux_sym_heredoc_redirect_token1;
	v->a[39714] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39715] = anon_sym_AMP;
	v->a[39716] = aux_sym_concatenation_token1;
	v->a[39717] = anon_sym_DOLLAR;
	v->a[39718] = anon_sym_DQUOTE;
	v->a[39719] = sym_raw_string;
	small_parse_table_1986(v);
}

void	small_parse_table_1986(t_small_parse_table_array *v)
{
	v->a[39720] = sym_number;
	v->a[39721] = anon_sym_DOLLAR_LBRACE;
	v->a[39722] = anon_sym_DOLLAR_LPAREN;
	v->a[39723] = anon_sym_BQUOTE;
	v->a[39724] = sym_word;
	v->a[39725] = anon_sym_SEMI;
	v->a[39726] = 6;
	v->a[39727] = actions(3);
	v->a[39728] = 1;
	v->a[39729] = sym_comment;
	v->a[39730] = actions(379);
	v->a[39731] = 1;
	v->a[39732] = sym_file_descriptor;
	v->a[39733] = actions(1381);
	v->a[39734] = 1;
	v->a[39735] = sym_variable_name;
	v->a[39736] = actions(1379);
	v->a[39737] = 2;
	v->a[39738] = aux_sym__simple_variable_name_token1;
	v->a[39739] = aux_sym__multiline_variable_name_token1;
	small_parse_table_1987(v);
}

void	small_parse_table_1987(t_small_parse_table_array *v)
{
	v->a[39740] = actions(1377);
	v->a[39741] = 9;
	v->a[39742] = anon_sym_BANG;
	v->a[39743] = anon_sym_DASH;
	v->a[39744] = anon_sym_STAR;
	v->a[39745] = anon_sym_QMARK;
	v->a[39746] = anon_sym_DOLLAR;
	v->a[39747] = anon_sym_POUND;
	v->a[39748] = anon_sym_AT;
	v->a[39749] = anon_sym_0;
	v->a[39750] = anon_sym__;
	v->a[39751] = actions(381);
	v->a[39752] = 18;
	v->a[39753] = anon_sym_PIPE;
	v->a[39754] = anon_sym_SEMI_SEMI;
	v->a[39755] = anon_sym_AMP_AMP;
	v->a[39756] = anon_sym_PIPE_PIPE;
	v->a[39757] = anon_sym_LT;
	v->a[39758] = anon_sym_GT;
	v->a[39759] = anon_sym_GT_GT;
	small_parse_table_1988(v);
}

void	small_parse_table_1988(t_small_parse_table_array *v)
{
	v->a[39760] = anon_sym_LT_AMP;
	v->a[39761] = anon_sym_GT_AMP;
	v->a[39762] = anon_sym_GT_PIPE;
	v->a[39763] = anon_sym_LT_AMP_DASH;
	v->a[39764] = anon_sym_GT_AMP_DASH;
	v->a[39765] = anon_sym_LT_LT;
	v->a[39766] = anon_sym_LT_LT_DASH;
	v->a[39767] = aux_sym_heredoc_redirect_token1;
	v->a[39768] = anon_sym_AMP;
	v->a[39769] = anon_sym_BQUOTE;
	v->a[39770] = anon_sym_SEMI;
	v->a[39771] = 3;
	v->a[39772] = actions(3);
	v->a[39773] = 1;
	v->a[39774] = sym_comment;
	v->a[39775] = actions(1015);
	v->a[39776] = 4;
	v->a[39777] = sym_file_descriptor;
	v->a[39778] = sym__concat;
	v->a[39779] = sym__bare_dollar;
	small_parse_table_1989(v);
}

void	small_parse_table_1989(t_small_parse_table_array *v)
{
	v->a[39780] = ts_builtin_sym_end;
	v->a[39781] = actions(1013);
	v->a[39782] = 27;
	v->a[39783] = anon_sym_PIPE;
	v->a[39784] = anon_sym_SEMI_SEMI;
	v->a[39785] = anon_sym_AMP_AMP;
	v->a[39786] = anon_sym_PIPE_PIPE;
	v->a[39787] = anon_sym_LT;
	v->a[39788] = anon_sym_GT;
	v->a[39789] = anon_sym_GT_GT;
	v->a[39790] = anon_sym_LT_AMP;
	v->a[39791] = anon_sym_GT_AMP;
	v->a[39792] = anon_sym_GT_PIPE;
	v->a[39793] = anon_sym_LT_AMP_DASH;
	v->a[39794] = anon_sym_GT_AMP_DASH;
	v->a[39795] = anon_sym_LT_LT;
	v->a[39796] = anon_sym_LT_LT_DASH;
	v->a[39797] = aux_sym_heredoc_redirect_token1;
	v->a[39798] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39799] = anon_sym_AMP;
	small_parse_table_1990(v);
}

/* EOF small_parse_table_397.c */
