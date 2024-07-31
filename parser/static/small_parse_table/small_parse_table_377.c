/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_377.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1885(t_small_parse_table_array *v)
{
	v->a[37700] = actions(1023);
	v->a[37701] = 1;
	v->a[37702] = sym_variable_name;
	v->a[37703] = actions(1093);
	v->a[37704] = 1;
	v->a[37705] = aux_sym_concatenation_token1;
	v->a[37706] = actions(1099);
	v->a[37707] = 1;
	v->a[37708] = sym__concat;
	v->a[37709] = state(563);
	v->a[37710] = 1;
	v->a[37711] = aux_sym_concatenation_repeat1;
	v->a[37712] = actions(1025);
	v->a[37713] = 22;
	v->a[37714] = anon_sym_PIPE;
	v->a[37715] = anon_sym_AMP_AMP;
	v->a[37716] = anon_sym_PIPE_PIPE;
	v->a[37717] = anon_sym_LT;
	v->a[37718] = anon_sym_GT;
	v->a[37719] = anon_sym_GT_GT;
	small_parse_table_1886(v);
}

void	small_parse_table_1886(t_small_parse_table_array *v)
{
	v->a[37720] = anon_sym_LT_AMP;
	v->a[37721] = anon_sym_GT_AMP;
	v->a[37722] = anon_sym_GT_PIPE;
	v->a[37723] = anon_sym_LT_GT;
	v->a[37724] = anon_sym_LT_LT;
	v->a[37725] = anon_sym_LT_LT_DASH;
	v->a[37726] = aux_sym_heredoc_redirect_token1;
	v->a[37727] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37728] = anon_sym_DOLLAR;
	v->a[37729] = anon_sym_DQUOTE;
	v->a[37730] = sym_raw_string;
	v->a[37731] = sym_number;
	v->a[37732] = anon_sym_DOLLAR_LBRACE;
	v->a[37733] = anon_sym_DOLLAR_LPAREN;
	v->a[37734] = anon_sym_BQUOTE;
	v->a[37735] = sym_word;
	v->a[37736] = 6;
	v->a[37737] = actions(3);
	v->a[37738] = 1;
	v->a[37739] = sym_comment;
	small_parse_table_1887(v);
}

void	small_parse_table_1887(t_small_parse_table_array *v)
{
	v->a[37740] = actions(1289);
	v->a[37741] = 1;
	v->a[37742] = sym_variable_name;
	v->a[37743] = actions(1427);
	v->a[37744] = 1;
	v->a[37745] = anon_sym_RPAREN;
	v->a[37746] = actions(1286);
	v->a[37747] = 7;
	v->a[37748] = anon_sym_LT;
	v->a[37749] = anon_sym_GT;
	v->a[37750] = anon_sym_GT_GT;
	v->a[37751] = anon_sym_LT_AMP;
	v->a[37752] = anon_sym_GT_AMP;
	v->a[37753] = anon_sym_GT_PIPE;
	v->a[37754] = anon_sym_LT_GT;
	v->a[37755] = actions(1281);
	v->a[37756] = 8;
	v->a[37757] = anon_sym_PIPE;
	v->a[37758] = anon_sym_SEMI_SEMI;
	v->a[37759] = anon_sym_AMP_AMP;
	small_parse_table_1888(v);
}

void	small_parse_table_1888(t_small_parse_table_array *v)
{
	v->a[37760] = anon_sym_PIPE_PIPE;
	v->a[37761] = anon_sym_LT_LT;
	v->a[37762] = anon_sym_LT_LT_DASH;
	v->a[37763] = aux_sym_heredoc_redirect_token1;
	v->a[37764] = anon_sym_SEMI;
	v->a[37765] = actions(1279);
	v->a[37766] = 9;
	v->a[37767] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37768] = anon_sym_DOLLAR;
	v->a[37769] = anon_sym_DQUOTE;
	v->a[37770] = sym_raw_string;
	v->a[37771] = sym_number;
	v->a[37772] = anon_sym_DOLLAR_LBRACE;
	v->a[37773] = anon_sym_DOLLAR_LPAREN;
	v->a[37774] = anon_sym_BQUOTE;
	v->a[37775] = sym_word;
	v->a[37776] = 18;
	v->a[37777] = actions(3);
	v->a[37778] = 1;
	v->a[37779] = sym_comment;
	small_parse_table_1889(v);
}

void	small_parse_table_1889(t_small_parse_table_array *v)
{
	v->a[37780] = actions(1337);
	v->a[37781] = 1;
	v->a[37782] = anon_sym_LPAREN;
	v->a[37783] = actions(1341);
	v->a[37784] = 1;
	v->a[37785] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37786] = actions(1343);
	v->a[37787] = 1;
	v->a[37788] = anon_sym_DOLLAR;
	v->a[37789] = actions(1345);
	v->a[37790] = 1;
	v->a[37791] = anon_sym_DQUOTE;
	v->a[37792] = actions(1347);
	v->a[37793] = 1;
	v->a[37794] = anon_sym_DOLLAR_LBRACE;
	v->a[37795] = actions(1349);
	v->a[37796] = 1;
	v->a[37797] = anon_sym_DOLLAR_LPAREN;
	v->a[37798] = actions(1351);
	v->a[37799] = 1;
	small_parse_table_1890(v);
}

/* EOF small_parse_table_377.c */
