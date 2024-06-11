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
	v->a[39700] = anon_sym_DQUOTE;
	v->a[39701] = sym_raw_string;
	v->a[39702] = sym_number;
	v->a[39703] = anon_sym_DOLLAR_LBRACE;
	v->a[39704] = anon_sym_DOLLAR_LPAREN;
	v->a[39705] = anon_sym_BQUOTE;
	v->a[39706] = sym_word;
	v->a[39707] = anon_sym_SEMI;
	v->a[39708] = 17;
	v->a[39709] = actions(1094);
	v->a[39710] = 1;
	v->a[39711] = sym_comment;
	v->a[39712] = actions(1108);
	v->a[39713] = 1;
	v->a[39714] = anon_sym_PIPE;
	v->a[39715] = actions(1110);
	v->a[39716] = 1;
	v->a[39717] = anon_sym_AMP_AMP;
	v->a[39718] = actions(1112);
	v->a[39719] = 1;
	small_parse_table_1986(v);
}

void	small_parse_table_1986(t_small_parse_table_array *v)
{
	v->a[39720] = anon_sym_CARET;
	v->a[39721] = actions(1114);
	v->a[39722] = 1;
	v->a[39723] = anon_sym_AMP;
	v->a[39724] = actions(1126);
	v->a[39725] = 1;
	v->a[39726] = anon_sym_PIPE_PIPE;
	v->a[39727] = actions(1128);
	v->a[39728] = 1;
	v->a[39729] = anon_sym_QMARK;
	v->a[39730] = actions(1155);
	v->a[39731] = 1;
	v->a[39732] = anon_sym_EQ;
	v->a[39733] = actions(1467);
	v->a[39734] = 1;
	v->a[39735] = anon_sym_RPAREN_RPAREN;
	v->a[39736] = actions(1082);
	v->a[39737] = 2;
	v->a[39738] = anon_sym_LT;
	v->a[39739] = anon_sym_GT;
	small_parse_table_1987(v);
}

void	small_parse_table_1987(t_small_parse_table_array *v)
{
	v->a[39740] = actions(1084);
	v->a[39741] = 2;
	v->a[39742] = anon_sym_GT_GT;
	v->a[39743] = anon_sym_LT_LT;
	v->a[39744] = actions(1086);
	v->a[39745] = 2;
	v->a[39746] = anon_sym_LT_EQ;
	v->a[39747] = anon_sym_GT_EQ;
	v->a[39748] = actions(1088);
	v->a[39749] = 2;
	v->a[39750] = anon_sym_PLUS;
	v->a[39751] = anon_sym_DASH;
	v->a[39752] = actions(1092);
	v->a[39753] = 2;
	v->a[39754] = anon_sym_PLUS_PLUS2;
	v->a[39755] = anon_sym_DASH_DASH2;
	v->a[39756] = actions(1116);
	v->a[39757] = 2;
	v->a[39758] = anon_sym_EQ_EQ;
	v->a[39759] = anon_sym_BANG_EQ;
	small_parse_table_1988(v);
}

void	small_parse_table_1988(t_small_parse_table_array *v)
{
	v->a[39760] = actions(1090);
	v->a[39761] = 3;
	v->a[39762] = anon_sym_STAR;
	v->a[39763] = anon_sym_SLASH;
	v->a[39764] = anon_sym_PERCENT;
	v->a[39765] = actions(1288);
	v->a[39766] = 10;
	v->a[39767] = anon_sym_PLUS_EQ;
	v->a[39768] = anon_sym_DASH_EQ;
	v->a[39769] = anon_sym_STAR_EQ;
	v->a[39770] = anon_sym_SLASH_EQ;
	v->a[39771] = anon_sym_PERCENT_EQ;
	v->a[39772] = anon_sym_LT_LT_EQ;
	v->a[39773] = anon_sym_GT_GT_EQ;
	v->a[39774] = anon_sym_AMP_EQ;
	v->a[39775] = anon_sym_CARET_EQ;
	v->a[39776] = anon_sym_PIPE_EQ;
	v->a[39777] = 6;
	v->a[39778] = actions(3);
	v->a[39779] = 1;
	small_parse_table_1989(v);
}

void	small_parse_table_1989(t_small_parse_table_array *v)
{
	v->a[39780] = sym_comment;
	v->a[39781] = actions(1118);
	v->a[39782] = 1;
	v->a[39783] = aux_sym_concatenation_token1;
	v->a[39784] = actions(1165);
	v->a[39785] = 1;
	v->a[39786] = sym__concat;
	v->a[39787] = state(472);
	v->a[39788] = 1;
	v->a[39789] = aux_sym_concatenation_repeat1;
	v->a[39790] = actions(608);
	v->a[39791] = 2;
	v->a[39792] = sym_file_descriptor;
	v->a[39793] = sym_variable_name;
	v->a[39794] = actions(610);
	v->a[39795] = 28;
	v->a[39796] = anon_sym_PIPE;
	v->a[39797] = anon_sym_SEMI_SEMI;
	v->a[39798] = anon_sym_AMP_AMP;
	v->a[39799] = anon_sym_PIPE_PIPE;
	small_parse_table_1990(v);
}

/* EOF small_parse_table_397.c */
