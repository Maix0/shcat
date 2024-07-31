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
	v->a[32700] = anon_sym_LT_AMP;
	v->a[32701] = anon_sym_GT_AMP;
	v->a[32702] = anon_sym_GT_PIPE;
	v->a[32703] = anon_sym_LT_GT;
	v->a[32704] = 3;
	v->a[32705] = actions(3);
	v->a[32706] = 1;
	v->a[32707] = sym_comment;
	v->a[32708] = actions(473);
	v->a[32709] = 2;
	v->a[32710] = sym__concat;
	v->a[32711] = ts_builtin_sym_end;
	v->a[32712] = actions(471);
	v->a[32713] = 25;
	v->a[32714] = anon_sym_PIPE;
	v->a[32715] = anon_sym_SEMI_SEMI;
	v->a[32716] = anon_sym_AMP_AMP;
	v->a[32717] = anon_sym_PIPE_PIPE;
	v->a[32718] = anon_sym_LT;
	v->a[32719] = anon_sym_GT;
	small_parse_table_1636(v);
}

void	small_parse_table_1636(t_small_parse_table_array *v)
{
	v->a[32720] = anon_sym_GT_GT;
	v->a[32721] = anon_sym_LT_AMP;
	v->a[32722] = anon_sym_GT_AMP;
	v->a[32723] = anon_sym_GT_PIPE;
	v->a[32724] = anon_sym_LT_GT;
	v->a[32725] = anon_sym_LT_LT;
	v->a[32726] = anon_sym_LT_LT_DASH;
	v->a[32727] = aux_sym_heredoc_redirect_token1;
	v->a[32728] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32729] = aux_sym_concatenation_token1;
	v->a[32730] = anon_sym_DOLLAR;
	v->a[32731] = anon_sym_DQUOTE;
	v->a[32732] = sym_raw_string;
	v->a[32733] = sym_number;
	v->a[32734] = anon_sym_DOLLAR_LBRACE;
	v->a[32735] = anon_sym_DOLLAR_LPAREN;
	v->a[32736] = anon_sym_BQUOTE;
	v->a[32737] = sym_word;
	v->a[32738] = anon_sym_SEMI;
	v->a[32739] = 15;
	small_parse_table_1637(v);
}

void	small_parse_table_1637(t_small_parse_table_array *v)
{
	v->a[32740] = actions(3);
	v->a[32741] = 1;
	v->a[32742] = sym_comment;
	v->a[32743] = actions(99);
	v->a[32744] = 1;
	v->a[32745] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[32746] = actions(101);
	v->a[32747] = 1;
	v->a[32748] = anon_sym_DOLLAR;
	v->a[32749] = actions(103);
	v->a[32750] = 1;
	v->a[32751] = anon_sym_DQUOTE;
	v->a[32752] = actions(107);
	v->a[32753] = 1;
	v->a[32754] = anon_sym_DOLLAR_LBRACE;
	v->a[32755] = actions(109);
	v->a[32756] = 1;
	v->a[32757] = anon_sym_DOLLAR_LPAREN;
	v->a[32758] = actions(111);
	v->a[32759] = 1;
	small_parse_table_1638(v);
}

void	small_parse_table_1638(t_small_parse_table_array *v)
{
	v->a[32760] = anon_sym_BQUOTE;
	v->a[32761] = actions(341);
	v->a[32762] = 1;
	v->a[32763] = sym_variable_name;
	v->a[32764] = state(202);
	v->a[32765] = 1;
	v->a[32766] = sym_command_name;
	v->a[32767] = state(599);
	v->a[32768] = 1;
	v->a[32769] = sym_concatenation;
	v->a[32770] = state(1073);
	v->a[32771] = 1;
	v->a[32772] = sym_file_redirect;
	v->a[32773] = state(823);
	v->a[32774] = 2;
	v->a[32775] = sym_variable_assignment;
	v->a[32776] = aux_sym_command_repeat1;
	v->a[32777] = actions(105);
	v->a[32778] = 3;
	v->a[32779] = sym_raw_string;
	small_parse_table_1639(v);
}

void	small_parse_table_1639(t_small_parse_table_array *v)
{
	v->a[32780] = sym_number;
	v->a[32781] = sym_word;
	v->a[32782] = state(341);
	v->a[32783] = 5;
	v->a[32784] = sym_arithmetic_expansion;
	v->a[32785] = sym_string;
	v->a[32786] = sym_simple_expansion;
	v->a[32787] = sym_expansion;
	v->a[32788] = sym_command_substitution;
	v->a[32789] = actions(965);
	v->a[32790] = 7;
	v->a[32791] = anon_sym_LT;
	v->a[32792] = anon_sym_GT;
	v->a[32793] = anon_sym_GT_GT;
	v->a[32794] = anon_sym_LT_AMP;
	v->a[32795] = anon_sym_GT_AMP;
	v->a[32796] = anon_sym_GT_PIPE;
	v->a[32797] = anon_sym_LT_GT;
	v->a[32798] = 3;
	v->a[32799] = actions(3);
	small_parse_table_1640(v);
}

/* EOF small_parse_table_327.c */
