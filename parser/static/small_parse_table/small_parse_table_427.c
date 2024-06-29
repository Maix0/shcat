/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_427.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2135(t_small_parse_table_array *v)
{
	v->a[42700] = anon_sym_AMP;
	v->a[42701] = actions(1336);
	v->a[42702] = 2;
	v->a[42703] = anon_sym_LT;
	v->a[42704] = anon_sym_GT;
	v->a[42705] = actions(1338);
	v->a[42706] = 2;
	v->a[42707] = anon_sym_GT_GT;
	v->a[42708] = anon_sym_LT_LT;
	v->a[42709] = actions(1346);
	v->a[42710] = 2;
	v->a[42711] = anon_sym_EQ_EQ;
	v->a[42712] = anon_sym_BANG_EQ;
	v->a[42713] = actions(1348);
	v->a[42714] = 2;
	v->a[42715] = anon_sym_LT_EQ;
	v->a[42716] = anon_sym_GT_EQ;
	v->a[42717] = actions(1350);
	v->a[42718] = 2;
	v->a[42719] = anon_sym_PLUS;
	small_parse_table_2136(v);
}

void	small_parse_table_2136(t_small_parse_table_array *v)
{
	v->a[42720] = anon_sym_DASH;
	v->a[42721] = actions(1356);
	v->a[42722] = 2;
	v->a[42723] = anon_sym_PLUS_PLUS2;
	v->a[42724] = anon_sym_DASH_DASH2;
	v->a[42725] = actions(1352);
	v->a[42726] = 3;
	v->a[42727] = anon_sym_STAR;
	v->a[42728] = anon_sym_SLASH;
	v->a[42729] = anon_sym_PERCENT;
	v->a[42730] = actions(1148);
	v->a[42731] = 12;
	v->a[42732] = anon_sym_RPAREN;
	v->a[42733] = anon_sym_PLUS_EQ;
	v->a[42734] = anon_sym_DASH_EQ;
	v->a[42735] = anon_sym_STAR_EQ;
	v->a[42736] = anon_sym_SLASH_EQ;
	v->a[42737] = anon_sym_PERCENT_EQ;
	v->a[42738] = anon_sym_LT_LT_EQ;
	v->a[42739] = anon_sym_GT_GT_EQ;
	small_parse_table_2137(v);
}

void	small_parse_table_2137(t_small_parse_table_array *v)
{
	v->a[42740] = anon_sym_AMP_EQ;
	v->a[42741] = anon_sym_CARET_EQ;
	v->a[42742] = anon_sym_PIPE_EQ;
	v->a[42743] = anon_sym_QMARK;
	v->a[42744] = 3;
	v->a[42745] = actions(3);
	v->a[42746] = 1;
	v->a[42747] = sym_comment;
	v->a[42748] = actions(1056);
	v->a[42749] = 3;
	v->a[42750] = sym_file_descriptor;
	v->a[42751] = sym__concat;
	v->a[42752] = sym_variable_name;
	v->a[42753] = actions(1058);
	v->a[42754] = 30;
	v->a[42755] = anon_sym_esac;
	v->a[42756] = anon_sym_PIPE;
	v->a[42757] = anon_sym_SEMI_SEMI;
	v->a[42758] = anon_sym_AMP_AMP;
	v->a[42759] = anon_sym_PIPE_PIPE;
	small_parse_table_2138(v);
}

void	small_parse_table_2138(t_small_parse_table_array *v)
{
	v->a[42760] = anon_sym_LT;
	v->a[42761] = anon_sym_GT;
	v->a[42762] = anon_sym_GT_GT;
	v->a[42763] = anon_sym_AMP_GT;
	v->a[42764] = anon_sym_AMP_GT_GT;
	v->a[42765] = anon_sym_LT_AMP;
	v->a[42766] = anon_sym_GT_AMP;
	v->a[42767] = anon_sym_GT_PIPE;
	v->a[42768] = anon_sym_LT_AMP_DASH;
	v->a[42769] = anon_sym_GT_AMP_DASH;
	v->a[42770] = anon_sym_LT_LT;
	v->a[42771] = anon_sym_LT_LT_DASH;
	v->a[42772] = aux_sym_heredoc_redirect_token1;
	v->a[42773] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42774] = anon_sym_AMP;
	v->a[42775] = aux_sym_concatenation_token1;
	v->a[42776] = anon_sym_DOLLAR;
	v->a[42777] = anon_sym_DQUOTE;
	v->a[42778] = sym_raw_string;
	v->a[42779] = sym_number;
	small_parse_table_2139(v);
}

void	small_parse_table_2139(t_small_parse_table_array *v)
{
	v->a[42780] = anon_sym_DOLLAR_LBRACE;
	v->a[42781] = anon_sym_DOLLAR_LPAREN;
	v->a[42782] = anon_sym_BQUOTE;
	v->a[42783] = sym_word;
	v->a[42784] = anon_sym_SEMI;
	v->a[42785] = 3;
	v->a[42786] = actions(3);
	v->a[42787] = 1;
	v->a[42788] = sym_comment;
	v->a[42789] = actions(1118);
	v->a[42790] = 3;
	v->a[42791] = sym_file_descriptor;
	v->a[42792] = sym__concat;
	v->a[42793] = sym_variable_name;
	v->a[42794] = actions(1116);
	v->a[42795] = 30;
	v->a[42796] = anon_sym_PIPE;
	v->a[42797] = anon_sym_RPAREN;
	v->a[42798] = anon_sym_SEMI_SEMI;
	v->a[42799] = anon_sym_AMP_AMP;
	small_parse_table_2140(v);
}

/* EOF small_parse_table_427.c */
