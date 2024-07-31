/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_557.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2785(t_small_parse_table_array *v)
{
	v->a[55700] = sym_simple_expansion;
	v->a[55701] = sym_expansion;
	v->a[55702] = sym_command_substitution;
	v->a[55703] = 10;
	v->a[55704] = actions(3);
	v->a[55705] = 1;
	v->a[55706] = sym_comment;
	v->a[55707] = actions(1993);
	v->a[55708] = 1;
	v->a[55709] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[55710] = actions(1997);
	v->a[55711] = 1;
	v->a[55712] = anon_sym_DQUOTE;
	v->a[55713] = actions(1999);
	v->a[55714] = 1;
	v->a[55715] = anon_sym_DOLLAR_LBRACE;
	v->a[55716] = actions(2001);
	v->a[55717] = 1;
	v->a[55718] = anon_sym_DOLLAR_LPAREN;
	v->a[55719] = actions(2003);
	small_parse_table_2786(v);
}

void	small_parse_table_2786(t_small_parse_table_array *v)
{
	v->a[55720] = 1;
	v->a[55721] = anon_sym_BQUOTE;
	v->a[55722] = actions(2005);
	v->a[55723] = 1;
	v->a[55724] = sym__bare_dollar;
	v->a[55725] = actions(2226);
	v->a[55726] = 1;
	v->a[55727] = anon_sym_DOLLAR;
	v->a[55728] = actions(1991);
	v->a[55729] = 5;
	v->a[55730] = aux_sym_concatenation_token1;
	v->a[55731] = sym_raw_string;
	v->a[55732] = sym_number;
	v->a[55733] = sym__comment_word;
	v->a[55734] = sym_word;
	v->a[55735] = state(377);
	v->a[55736] = 5;
	v->a[55737] = sym_arithmetic_expansion;
	v->a[55738] = sym_string;
	v->a[55739] = sym_simple_expansion;
	small_parse_table_2787(v);
}

void	small_parse_table_2787(t_small_parse_table_array *v)
{
	v->a[55740] = sym_expansion;
	v->a[55741] = sym_command_substitution;
	v->a[55742] = 10;
	v->a[55743] = actions(3);
	v->a[55744] = 1;
	v->a[55745] = sym_comment;
	v->a[55746] = actions(53);
	v->a[55747] = 1;
	v->a[55748] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[55749] = actions(55);
	v->a[55750] = 1;
	v->a[55751] = anon_sym_DOLLAR;
	v->a[55752] = actions(57);
	v->a[55753] = 1;
	v->a[55754] = anon_sym_DQUOTE;
	v->a[55755] = actions(61);
	v->a[55756] = 1;
	v->a[55757] = anon_sym_DOLLAR_LBRACE;
	v->a[55758] = actions(63);
	v->a[55759] = 1;
	small_parse_table_2788(v);
}

void	small_parse_table_2788(t_small_parse_table_array *v)
{
	v->a[55760] = anon_sym_DOLLAR_LPAREN;
	v->a[55761] = actions(65);
	v->a[55762] = 1;
	v->a[55763] = anon_sym_BQUOTE;
	v->a[55764] = actions(2179);
	v->a[55765] = 1;
	v->a[55766] = sym__bare_dollar;
	v->a[55767] = actions(2175);
	v->a[55768] = 5;
	v->a[55769] = aux_sym_concatenation_token1;
	v->a[55770] = sym_raw_string;
	v->a[55771] = sym_number;
	v->a[55772] = sym__comment_word;
	v->a[55773] = sym_word;
	v->a[55774] = state(396);
	v->a[55775] = 5;
	v->a[55776] = sym_arithmetic_expansion;
	v->a[55777] = sym_string;
	v->a[55778] = sym_simple_expansion;
	v->a[55779] = sym_expansion;
	small_parse_table_2789(v);
}

void	small_parse_table_2789(t_small_parse_table_array *v)
{
	v->a[55780] = sym_command_substitution;
	v->a[55781] = 3;
	v->a[55782] = actions(3);
	v->a[55783] = 1;
	v->a[55784] = sym_comment;
	v->a[55785] = actions(1023);
	v->a[55786] = 1;
	v->a[55787] = sym_variable_name;
	v->a[55788] = actions(1025);
	v->a[55789] = 16;
	v->a[55790] = anon_sym_LT;
	v->a[55791] = anon_sym_GT;
	v->a[55792] = anon_sym_GT_GT;
	v->a[55793] = anon_sym_LT_AMP;
	v->a[55794] = anon_sym_GT_AMP;
	v->a[55795] = anon_sym_GT_PIPE;
	v->a[55796] = anon_sym_LT_GT;
	v->a[55797] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[55798] = anon_sym_DOLLAR;
	v->a[55799] = anon_sym_DQUOTE;
	small_parse_table_2790(v);
}

/* EOF small_parse_table_557.c */
