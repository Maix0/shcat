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
	v->a[32700] = sym_file_descriptor;
	v->a[32701] = sym__concat;
	v->a[32702] = sym__bare_dollar;
	v->a[32703] = actions(1086);
	v->a[32704] = 31;
	v->a[32705] = anon_sym_LPAREN;
	v->a[32706] = anon_sym_PIPE;
	v->a[32707] = anon_sym_RPAREN;
	v->a[32708] = anon_sym_SEMI_SEMI;
	v->a[32709] = anon_sym_AMP_AMP;
	v->a[32710] = anon_sym_PIPE_PIPE;
	v->a[32711] = anon_sym_LT;
	v->a[32712] = anon_sym_GT;
	v->a[32713] = anon_sym_GT_GT;
	v->a[32714] = anon_sym_AMP_GT;
	v->a[32715] = anon_sym_AMP_GT_GT;
	v->a[32716] = anon_sym_LT_AMP;
	v->a[32717] = anon_sym_GT_AMP;
	v->a[32718] = anon_sym_GT_PIPE;
	v->a[32719] = anon_sym_LT_AMP_DASH;
	small_parse_table_1636(v);
}

void	small_parse_table_1636(t_small_parse_table_array *v)
{
	v->a[32720] = anon_sym_GT_AMP_DASH;
	v->a[32721] = anon_sym_LT_LT;
	v->a[32722] = anon_sym_LT_LT_DASH;
	v->a[32723] = aux_sym_heredoc_redirect_token1;
	v->a[32724] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32725] = anon_sym_AMP;
	v->a[32726] = aux_sym_concatenation_token1;
	v->a[32727] = anon_sym_DOLLAR;
	v->a[32728] = anon_sym_DQUOTE;
	v->a[32729] = sym_raw_string;
	v->a[32730] = sym_number;
	v->a[32731] = anon_sym_DOLLAR_LBRACE;
	v->a[32732] = anon_sym_DOLLAR_LPAREN;
	v->a[32733] = anon_sym_BQUOTE;
	v->a[32734] = sym_word;
	v->a[32735] = anon_sym_SEMI;
	v->a[32736] = 6;
	v->a[32737] = actions(3);
	v->a[32738] = 1;
	v->a[32739] = sym_comment;
	small_parse_table_1637(v);
}

void	small_parse_table_1637(t_small_parse_table_array *v)
{
	v->a[32740] = actions(959);
	v->a[32741] = 1;
	v->a[32742] = aux_sym_concatenation_token1;
	v->a[32743] = actions(1233);
	v->a[32744] = 1;
	v->a[32745] = sym__concat;
	v->a[32746] = state(293);
	v->a[32747] = 1;
	v->a[32748] = aux_sym_concatenation_repeat1;
	v->a[32749] = actions(961);
	v->a[32750] = 2;
	v->a[32751] = sym_file_descriptor;
	v->a[32752] = sym__bare_dollar;
	v->a[32753] = actions(957);
	v->a[32754] = 29;
	v->a[32755] = anon_sym_LPAREN;
	v->a[32756] = anon_sym_PIPE;
	v->a[32757] = anon_sym_SEMI_SEMI;
	v->a[32758] = anon_sym_AMP_AMP;
	v->a[32759] = anon_sym_PIPE_PIPE;
	small_parse_table_1638(v);
}

void	small_parse_table_1638(t_small_parse_table_array *v)
{
	v->a[32760] = anon_sym_LT;
	v->a[32761] = anon_sym_GT;
	v->a[32762] = anon_sym_GT_GT;
	v->a[32763] = anon_sym_AMP_GT;
	v->a[32764] = anon_sym_AMP_GT_GT;
	v->a[32765] = anon_sym_LT_AMP;
	v->a[32766] = anon_sym_GT_AMP;
	v->a[32767] = anon_sym_GT_PIPE;
	v->a[32768] = anon_sym_LT_AMP_DASH;
	v->a[32769] = anon_sym_GT_AMP_DASH;
	v->a[32770] = anon_sym_LT_LT;
	v->a[32771] = anon_sym_LT_LT_DASH;
	v->a[32772] = aux_sym_heredoc_redirect_token1;
	v->a[32773] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32774] = anon_sym_AMP;
	v->a[32775] = anon_sym_DOLLAR;
	v->a[32776] = anon_sym_DQUOTE;
	v->a[32777] = sym_raw_string;
	v->a[32778] = sym_number;
	v->a[32779] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1639(v);
}

void	small_parse_table_1639(t_small_parse_table_array *v)
{
	v->a[32780] = anon_sym_DOLLAR_LPAREN;
	v->a[32781] = anon_sym_BQUOTE;
	v->a[32782] = sym_word;
	v->a[32783] = anon_sym_SEMI;
	v->a[32784] = 3;
	v->a[32785] = actions(3);
	v->a[32786] = 1;
	v->a[32787] = sym_comment;
	v->a[32788] = actions(1070);
	v->a[32789] = 3;
	v->a[32790] = sym_file_descriptor;
	v->a[32791] = sym__concat;
	v->a[32792] = sym__bare_dollar;
	v->a[32793] = actions(1072);
	v->a[32794] = 31;
	v->a[32795] = anon_sym_LPAREN;
	v->a[32796] = anon_sym_PIPE;
	v->a[32797] = anon_sym_RPAREN;
	v->a[32798] = anon_sym_SEMI_SEMI;
	v->a[32799] = anon_sym_AMP_AMP;
	small_parse_table_1640(v);
}

/* EOF small_parse_table_327.c */
