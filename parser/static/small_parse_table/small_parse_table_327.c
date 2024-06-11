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
	v->a[32700] = anon_sym_DOLLAR;
	v->a[32701] = actions(63);
	v->a[32702] = 1;
	v->a[32703] = anon_sym_DQUOTE;
	v->a[32704] = actions(67);
	v->a[32705] = 1;
	v->a[32706] = anon_sym_DOLLAR_LBRACE;
	v->a[32707] = actions(69);
	v->a[32708] = 1;
	v->a[32709] = anon_sym_DOLLAR_LPAREN;
	v->a[32710] = actions(71);
	v->a[32711] = 1;
	v->a[32712] = anon_sym_BQUOTE;
	v->a[32713] = actions(375);
	v->a[32714] = 1;
	v->a[32715] = sym_variable_name;
	v->a[32716] = actions(1201);
	v->a[32717] = 1;
	v->a[32718] = sym_file_descriptor;
	v->a[32719] = state(242);
	small_parse_table_1636(v);
}

void	small_parse_table_1636(t_small_parse_table_array *v)
{
	v->a[32720] = 1;
	v->a[32721] = sym_command_name;
	v->a[32722] = state(647);
	v->a[32723] = 1;
	v->a[32724] = sym_concatenation;
	v->a[32725] = state(735);
	v->a[32726] = 1;
	v->a[32727] = sym_variable_assignment;
	v->a[32728] = state(768);
	v->a[32729] = 1;
	v->a[32730] = aux_sym_command_repeat1;
	v->a[32731] = state(1328);
	v->a[32732] = 1;
	v->a[32733] = sym_command;
	v->a[32734] = state(1329);
	v->a[32735] = 1;
	v->a[32736] = sym_subshell;
	v->a[32737] = state(1477);
	v->a[32738] = 1;
	v->a[32739] = sym_file_redirect;
	small_parse_table_1637(v);
}

void	small_parse_table_1637(t_small_parse_table_array *v)
{
	v->a[32740] = actions(1199);
	v->a[32741] = 2;
	v->a[32742] = anon_sym_LT_AMP_DASH;
	v->a[32743] = anon_sym_GT_AMP_DASH;
	v->a[32744] = actions(371);
	v->a[32745] = 3;
	v->a[32746] = sym_raw_string;
	v->a[32747] = sym_number;
	v->a[32748] = sym_word;
	v->a[32749] = state(790);
	v->a[32750] = 5;
	v->a[32751] = sym_arithmetic_expansion;
	v->a[32752] = sym_string;
	v->a[32753] = sym_simple_expansion;
	v->a[32754] = sym_expansion;
	v->a[32755] = sym_command_substitution;
	v->a[32756] = actions(1197);
	v->a[32757] = 8;
	v->a[32758] = anon_sym_LT;
	v->a[32759] = anon_sym_GT;
	small_parse_table_1638(v);
}

void	small_parse_table_1638(t_small_parse_table_array *v)
{
	v->a[32760] = anon_sym_GT_GT;
	v->a[32761] = anon_sym_AMP_GT;
	v->a[32762] = anon_sym_AMP_GT_GT;
	v->a[32763] = anon_sym_LT_AMP;
	v->a[32764] = anon_sym_GT_AMP;
	v->a[32765] = anon_sym_GT_PIPE;
	v->a[32766] = 6;
	v->a[32767] = actions(3);
	v->a[32768] = 1;
	v->a[32769] = sym_comment;
	v->a[32770] = actions(1217);
	v->a[32771] = 1;
	v->a[32772] = aux_sym_concatenation_token1;
	v->a[32773] = actions(1221);
	v->a[32774] = 1;
	v->a[32775] = sym__concat;
	v->a[32776] = state(390);
	v->a[32777] = 1;
	v->a[32778] = aux_sym_concatenation_repeat1;
	v->a[32779] = actions(1175);
	small_parse_table_1639(v);
}

void	small_parse_table_1639(t_small_parse_table_array *v)
{
	v->a[32780] = 2;
	v->a[32781] = sym_file_descriptor;
	v->a[32782] = sym_variable_name;
	v->a[32783] = actions(1173);
	v->a[32784] = 29;
	v->a[32785] = anon_sym_esac;
	v->a[32786] = anon_sym_PIPE;
	v->a[32787] = anon_sym_SEMI_SEMI;
	v->a[32788] = anon_sym_AMP_AMP;
	v->a[32789] = anon_sym_PIPE_PIPE;
	v->a[32790] = anon_sym_LT;
	v->a[32791] = anon_sym_GT;
	v->a[32792] = anon_sym_GT_GT;
	v->a[32793] = anon_sym_AMP_GT;
	v->a[32794] = anon_sym_AMP_GT_GT;
	v->a[32795] = anon_sym_LT_AMP;
	v->a[32796] = anon_sym_GT_AMP;
	v->a[32797] = anon_sym_GT_PIPE;
	v->a[32798] = anon_sym_LT_AMP_DASH;
	v->a[32799] = anon_sym_GT_AMP_DASH;
	small_parse_table_1640(v);
}

/* EOF small_parse_table_327.c */
