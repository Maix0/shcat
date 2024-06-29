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
	v->a[39700] = anon_sym_LT;
	v->a[39701] = anon_sym_GT;
	v->a[39702] = actions(1146);
	v->a[39703] = 2;
	v->a[39704] = anon_sym_GT_GT;
	v->a[39705] = anon_sym_LT_LT;
	v->a[39706] = actions(1154);
	v->a[39707] = 2;
	v->a[39708] = anon_sym_EQ_EQ;
	v->a[39709] = anon_sym_BANG_EQ;
	v->a[39710] = actions(1156);
	v->a[39711] = 2;
	v->a[39712] = anon_sym_LT_EQ;
	v->a[39713] = anon_sym_GT_EQ;
	v->a[39714] = actions(1158);
	v->a[39715] = 2;
	v->a[39716] = anon_sym_PLUS;
	v->a[39717] = anon_sym_DASH;
	v->a[39718] = actions(1162);
	v->a[39719] = 2;
	small_parse_table_1986(v);
}

void	small_parse_table_1986(t_small_parse_table_array *v)
{
	v->a[39720] = anon_sym_PLUS_PLUS2;
	v->a[39721] = anon_sym_DASH_DASH2;
	v->a[39722] = actions(1160);
	v->a[39723] = 3;
	v->a[39724] = anon_sym_STAR;
	v->a[39725] = anon_sym_SLASH;
	v->a[39726] = anon_sym_PERCENT;
	v->a[39727] = actions(1252);
	v->a[39728] = 10;
	v->a[39729] = anon_sym_PLUS_EQ;
	v->a[39730] = anon_sym_DASH_EQ;
	v->a[39731] = anon_sym_STAR_EQ;
	v->a[39732] = anon_sym_SLASH_EQ;
	v->a[39733] = anon_sym_PERCENT_EQ;
	v->a[39734] = anon_sym_LT_LT_EQ;
	v->a[39735] = anon_sym_GT_GT_EQ;
	v->a[39736] = anon_sym_AMP_EQ;
	v->a[39737] = anon_sym_CARET_EQ;
	v->a[39738] = anon_sym_PIPE_EQ;
	v->a[39739] = 3;
	small_parse_table_1987(v);
}

void	small_parse_table_1987(t_small_parse_table_array *v)
{
	v->a[39740] = actions(3);
	v->a[39741] = 1;
	v->a[39742] = sym_comment;
	v->a[39743] = actions(1118);
	v->a[39744] = 3;
	v->a[39745] = sym_file_descriptor;
	v->a[39746] = sym__concat;
	v->a[39747] = sym__bare_dollar;
	v->a[39748] = actions(1116);
	v->a[39749] = 30;
	v->a[39750] = anon_sym_PIPE;
	v->a[39751] = anon_sym_RPAREN;
	v->a[39752] = anon_sym_SEMI_SEMI;
	v->a[39753] = anon_sym_AMP_AMP;
	v->a[39754] = anon_sym_PIPE_PIPE;
	v->a[39755] = anon_sym_LT;
	v->a[39756] = anon_sym_GT;
	v->a[39757] = anon_sym_GT_GT;
	v->a[39758] = anon_sym_AMP_GT;
	v->a[39759] = anon_sym_AMP_GT_GT;
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
	v->a[39768] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39769] = anon_sym_AMP;
	v->a[39770] = aux_sym_concatenation_token1;
	v->a[39771] = anon_sym_DOLLAR;
	v->a[39772] = anon_sym_DQUOTE;
	v->a[39773] = sym_raw_string;
	v->a[39774] = sym_number;
	v->a[39775] = anon_sym_DOLLAR_LBRACE;
	v->a[39776] = anon_sym_DOLLAR_LPAREN;
	v->a[39777] = anon_sym_BQUOTE;
	v->a[39778] = sym_word;
	v->a[39779] = anon_sym_SEMI;
	small_parse_table_1989(v);
}

void	small_parse_table_1989(t_small_parse_table_array *v)
{
	v->a[39780] = 6;
	v->a[39781] = actions(3);
	v->a[39782] = 1;
	v->a[39783] = sym_comment;
	v->a[39784] = actions(1262);
	v->a[39785] = 1;
	v->a[39786] = sym_variable_name;
	v->a[39787] = actions(385);
	v->a[39788] = 2;
	v->a[39789] = sym_file_descriptor;
	v->a[39790] = ts_builtin_sym_end;
	v->a[39791] = actions(1260);
	v->a[39792] = 2;
	v->a[39793] = aux_sym__simple_variable_name_token1;
	v->a[39794] = aux_sym__multiline_variable_name_token1;
	v->a[39795] = actions(1258);
	v->a[39796] = 9;
	v->a[39797] = anon_sym_BANG;
	v->a[39798] = anon_sym_DASH;
	v->a[39799] = anon_sym_STAR;
	small_parse_table_1990(v);
}

/* EOF small_parse_table_397.c */
