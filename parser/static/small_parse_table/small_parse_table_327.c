/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_327.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1635(t_small_parse_table_array *v)
{
	v->a[32700] = actions(1189);
	v->a[32701] = 27;
	v->a[32702] = anon_sym_LPAREN;
	v->a[32703] = anon_sym_PIPE;
	v->a[32704] = anon_sym_SEMI_SEMI;
	v->a[32705] = anon_sym_AMP_AMP;
	v->a[32706] = anon_sym_PIPE_PIPE;
	v->a[32707] = anon_sym_LT;
	v->a[32708] = anon_sym_GT;
	v->a[32709] = anon_sym_GT_GT;
	v->a[32710] = anon_sym_LT_AMP;
	v->a[32711] = anon_sym_GT_AMP;
	v->a[32712] = anon_sym_GT_PIPE;
	v->a[32713] = anon_sym_LT_AMP_DASH;
	v->a[32714] = anon_sym_GT_AMP_DASH;
	v->a[32715] = anon_sym_LT_LT;
	v->a[32716] = anon_sym_LT_LT_DASH;
	v->a[32717] = aux_sym_heredoc_redirect_token1;
	v->a[32718] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32719] = anon_sym_AMP;
	small_parse_table_1636(v);
}

void	small_parse_table_1636(t_small_parse_table_array *v)
{
	v->a[32720] = anon_sym_DOLLAR;
	v->a[32721] = anon_sym_DQUOTE;
	v->a[32722] = sym_raw_string;
	v->a[32723] = sym_number;
	v->a[32724] = anon_sym_DOLLAR_LBRACE;
	v->a[32725] = anon_sym_DOLLAR_LPAREN;
	v->a[32726] = anon_sym_BQUOTE;
	v->a[32727] = sym_word;
	v->a[32728] = anon_sym_SEMI;
	v->a[32729] = 17;
	v->a[32730] = actions(842);
	v->a[32731] = 1;
	v->a[32732] = anon_sym_PIPE;
	v->a[32733] = actions(844);
	v->a[32734] = 1;
	v->a[32735] = anon_sym_AMP_AMP;
	v->a[32736] = actions(846);
	v->a[32737] = 1;
	v->a[32738] = anon_sym_PIPE_PIPE;
	v->a[32739] = actions(856);
	small_parse_table_1637(v);
}

void	small_parse_table_1637(t_small_parse_table_array *v)
{
	v->a[32740] = 1;
	v->a[32741] = anon_sym_CARET;
	v->a[32742] = actions(858);
	v->a[32743] = 1;
	v->a[32744] = anon_sym_AMP;
	v->a[32745] = actions(870);
	v->a[32746] = 1;
	v->a[32747] = sym_comment;
	v->a[32748] = actions(1021);
	v->a[32749] = 1;
	v->a[32750] = anon_sym_EQ;
	v->a[32751] = actions(1023);
	v->a[32752] = 1;
	v->a[32753] = anon_sym_QMARK;
	v->a[32754] = actions(1228);
	v->a[32755] = 1;
	v->a[32756] = anon_sym_RPAREN_RPAREN;
	v->a[32757] = actions(850);
	v->a[32758] = 2;
	v->a[32759] = anon_sym_LT;
	small_parse_table_1638(v);
}

void	small_parse_table_1638(t_small_parse_table_array *v)
{
	v->a[32760] = anon_sym_GT;
	v->a[32761] = actions(852);
	v->a[32762] = 2;
	v->a[32763] = anon_sym_GT_GT;
	v->a[32764] = anon_sym_LT_LT;
	v->a[32765] = actions(860);
	v->a[32766] = 2;
	v->a[32767] = anon_sym_EQ_EQ;
	v->a[32768] = anon_sym_BANG_EQ;
	v->a[32769] = actions(862);
	v->a[32770] = 2;
	v->a[32771] = anon_sym_LT_EQ;
	v->a[32772] = anon_sym_GT_EQ;
	v->a[32773] = actions(864);
	v->a[32774] = 2;
	v->a[32775] = anon_sym_PLUS;
	v->a[32776] = anon_sym_DASH;
	v->a[32777] = actions(868);
	v->a[32778] = 2;
	v->a[32779] = anon_sym_PLUS_PLUS2;
	small_parse_table_1639(v);
}

void	small_parse_table_1639(t_small_parse_table_array *v)
{
	v->a[32780] = anon_sym_DASH_DASH2;
	v->a[32781] = actions(866);
	v->a[32782] = 3;
	v->a[32783] = anon_sym_STAR;
	v->a[32784] = anon_sym_SLASH;
	v->a[32785] = anon_sym_PERCENT;
	v->a[32786] = actions(1079);
	v->a[32787] = 10;
	v->a[32788] = anon_sym_PLUS_EQ;
	v->a[32789] = anon_sym_DASH_EQ;
	v->a[32790] = anon_sym_STAR_EQ;
	v->a[32791] = anon_sym_SLASH_EQ;
	v->a[32792] = anon_sym_PERCENT_EQ;
	v->a[32793] = anon_sym_LT_LT_EQ;
	v->a[32794] = anon_sym_GT_GT_EQ;
	v->a[32795] = anon_sym_AMP_EQ;
	v->a[32796] = anon_sym_CARET_EQ;
	v->a[32797] = anon_sym_PIPE_EQ;
	v->a[32798] = 8;
	v->a[32799] = actions(3);
	small_parse_table_1640(v);
}

/* EOF small_parse_table_327.c */
