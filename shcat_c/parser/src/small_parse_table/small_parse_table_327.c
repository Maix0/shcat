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
	v->a[32700] = anon_sym_LT_AMP_DASH;
	v->a[32701] = anon_sym_GT_AMP_DASH;
	v->a[32702] = anon_sym_LT_LT_DASH;
	v->a[32703] = anon_sym_LT_LT_LT;
	v->a[32704] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32705] = anon_sym_DOLLAR_LBRACK;
	v->a[32706] = aux_sym_concatenation_token1;
	v->a[32707] = anon_sym_DOLLAR;
	v->a[32708] = sym__special_character;
	v->a[32709] = anon_sym_DQUOTE;
	v->a[32710] = sym_raw_string;
	v->a[32711] = sym_ansi_c_string;
	v->a[32712] = aux_sym_number_token1;
	v->a[32713] = aux_sym_number_token2;
	v->a[32714] = anon_sym_DOLLAR_LBRACE;
	v->a[32715] = anon_sym_DOLLAR_LPAREN;
	v->a[32716] = anon_sym_BQUOTE;
	v->a[32717] = anon_sym_DOLLAR_BQUOTE;
	v->a[32718] = anon_sym_LT_LPAREN;
	v->a[32719] = anon_sym_GT_LPAREN;
	small_parse_table_1636(v);
}

void	small_parse_table_1636(t_small_parse_table_array *v)
{
	v->a[32720] = sym_word;
	v->a[32721] = 8;
	v->a[32722] = actions(3);
	v->a[32723] = 1;
	v->a[32724] = sym_comment;
	v->a[32725] = actions(4663);
	v->a[32726] = 1;
	v->a[32727] = anon_sym_DQUOTE;
	v->a[32728] = actions(4667);
	v->a[32729] = 1;
	v->a[32730] = sym_variable_name;
	v->a[32731] = state(2716);
	v->a[32732] = 1;
	v->a[32733] = sym_string;
	v->a[32734] = actions(1241);
	v->a[32735] = 2;
	v->a[32736] = sym__concat;
	v->a[32737] = sym_test_operator;
	v->a[32738] = actions(4665);
	v->a[32739] = 2;
	small_parse_table_1637(v);
}

void	small_parse_table_1637(t_small_parse_table_array *v)
{
	v->a[32740] = aux_sym__simple_variable_name_token1;
	v->a[32741] = aux_sym__multiline_variable_name_token1;
	v->a[32742] = actions(4661);
	v->a[32743] = 9;
	v->a[32744] = anon_sym_DASH;
	v->a[32745] = anon_sym_STAR;
	v->a[32746] = anon_sym_BANG;
	v->a[32747] = anon_sym_QMARK;
	v->a[32748] = anon_sym_DOLLAR;
	v->a[32749] = anon_sym_POUND;
	v->a[32750] = anon_sym_AT2;
	v->a[32751] = anon_sym_0;
	v->a[32752] = anon_sym__;
	v->a[32753] = actions(1239);
	v->a[32754] = 33;
	v->a[32755] = anon_sym_EQ;
	v->a[32756] = anon_sym_PLUS_PLUS;
	v->a[32757] = anon_sym_DASH_DASH;
	v->a[32758] = anon_sym_PLUS_EQ;
	v->a[32759] = anon_sym_DASH_EQ;
	small_parse_table_1638(v);
}

void	small_parse_table_1638(t_small_parse_table_array *v)
{
	v->a[32760] = anon_sym_STAR_EQ;
	v->a[32761] = anon_sym_SLASH_EQ;
	v->a[32762] = anon_sym_PERCENT_EQ;
	v->a[32763] = anon_sym_STAR_STAR_EQ;
	v->a[32764] = anon_sym_LT_LT_EQ;
	v->a[32765] = anon_sym_GT_GT_EQ;
	v->a[32766] = anon_sym_AMP_EQ;
	v->a[32767] = anon_sym_CARET_EQ;
	v->a[32768] = anon_sym_PIPE_EQ;
	v->a[32769] = anon_sym_PIPE_PIPE;
	v->a[32770] = anon_sym_AMP_AMP;
	v->a[32771] = anon_sym_PIPE;
	v->a[32772] = anon_sym_CARET;
	v->a[32773] = anon_sym_AMP;
	v->a[32774] = anon_sym_EQ_EQ;
	v->a[32775] = anon_sym_BANG_EQ;
	v->a[32776] = anon_sym_LT;
	v->a[32777] = anon_sym_GT;
	v->a[32778] = anon_sym_LT_EQ;
	v->a[32779] = anon_sym_GT_EQ;
	small_parse_table_1639(v);
}

void	small_parse_table_1639(t_small_parse_table_array *v)
{
	v->a[32780] = anon_sym_LT_LT;
	v->a[32781] = anon_sym_GT_GT;
	v->a[32782] = anon_sym_PLUS;
	v->a[32783] = anon_sym_SLASH;
	v->a[32784] = anon_sym_PERCENT;
	v->a[32785] = anon_sym_STAR_STAR;
	v->a[32786] = anon_sym_RBRACK;
	v->a[32787] = anon_sym_EQ_TILDE;
	v->a[32788] = 22;
	v->a[32789] = actions(71);
	v->a[32790] = 1;
	v->a[32791] = sym_comment;
	v->a[32792] = actions(4629);
	v->a[32793] = 1;
	v->a[32794] = sym_word;
	v->a[32795] = actions(4633);
	v->a[32796] = 1;
	v->a[32797] = anon_sym_DOLLAR_LBRACK;
	v->a[32798] = actions(4635);
	v->a[32799] = 1;
	small_parse_table_1640(v);
}

/* EOF small_parse_table_327.c */
