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
	v->a[55700] = sym_comment;
	v->a[55701] = actions(1565);
	v->a[55702] = 1;
	v->a[55703] = sym_file_descriptor;
	v->a[55704] = actions(1568);
	v->a[55705] = 1;
	v->a[55706] = sym_variable_name;
	v->a[55707] = actions(1558);
	v->a[55708] = 8;
	v->a[55709] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[55710] = anon_sym_DOLLAR;
	v->a[55711] = anon_sym_DQUOTE;
	v->a[55712] = sym_raw_string;
	v->a[55713] = sym_number;
	v->a[55714] = anon_sym_DOLLAR_LBRACE;
	v->a[55715] = anon_sym_DOLLAR_LPAREN;
	v->a[55716] = sym_word;
	v->a[55717] = actions(1560);
	v->a[55718] = 9;
	v->a[55719] = anon_sym_PIPE;
	small_parse_table_2786(v);
}

void	small_parse_table_2786(t_small_parse_table_array *v)
{
	v->a[55720] = anon_sym_SEMI_SEMI;
	v->a[55721] = anon_sym_AMP_AMP;
	v->a[55722] = anon_sym_PIPE_PIPE;
	v->a[55723] = anon_sym_LT_LT;
	v->a[55724] = anon_sym_LT_LT_DASH;
	v->a[55725] = aux_sym_heredoc_redirect_token1;
	v->a[55726] = anon_sym_AMP;
	v->a[55727] = anon_sym_SEMI;
	v->a[55728] = actions(1562);
	v->a[55729] = 11;
	v->a[55730] = anon_sym_LT;
	v->a[55731] = anon_sym_GT;
	v->a[55732] = anon_sym_GT_GT;
	v->a[55733] = anon_sym_AMP_GT;
	v->a[55734] = anon_sym_AMP_GT_GT;
	v->a[55735] = anon_sym_LT_AMP;
	v->a[55736] = anon_sym_GT_AMP;
	v->a[55737] = anon_sym_GT_PIPE;
	v->a[55738] = anon_sym_LT_AMP_DASH;
	v->a[55739] = anon_sym_GT_AMP_DASH;
	small_parse_table_2787(v);
}

void	small_parse_table_2787(t_small_parse_table_array *v)
{
	v->a[55740] = anon_sym_BQUOTE;
	v->a[55741] = 5;
	v->a[55742] = actions(3);
	v->a[55743] = 1;
	v->a[55744] = sym_comment;
	v->a[55745] = actions(811);
	v->a[55746] = 1;
	v->a[55747] = sym_variable_name;
	v->a[55748] = actions(1572);
	v->a[55749] = 1;
	v->a[55750] = sym_file_descriptor;
	v->a[55751] = actions(805);
	v->a[55752] = 8;
	v->a[55753] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[55754] = anon_sym_DOLLAR;
	v->a[55755] = anon_sym_DQUOTE;
	v->a[55756] = sym_raw_string;
	v->a[55757] = sym_number;
	v->a[55758] = anon_sym_DOLLAR_LBRACE;
	v->a[55759] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2788(v);
}

void	small_parse_table_2788(t_small_parse_table_array *v)
{
	v->a[55760] = sym_word;
	v->a[55761] = actions(1570);
	v->a[55762] = 20;
	v->a[55763] = anon_sym_PIPE;
	v->a[55764] = anon_sym_SEMI_SEMI;
	v->a[55765] = anon_sym_AMP_AMP;
	v->a[55766] = anon_sym_PIPE_PIPE;
	v->a[55767] = anon_sym_LT;
	v->a[55768] = anon_sym_GT;
	v->a[55769] = anon_sym_GT_GT;
	v->a[55770] = anon_sym_AMP_GT;
	v->a[55771] = anon_sym_AMP_GT_GT;
	v->a[55772] = anon_sym_LT_AMP;
	v->a[55773] = anon_sym_GT_AMP;
	v->a[55774] = anon_sym_GT_PIPE;
	v->a[55775] = anon_sym_LT_AMP_DASH;
	v->a[55776] = anon_sym_GT_AMP_DASH;
	v->a[55777] = anon_sym_LT_LT;
	v->a[55778] = anon_sym_LT_LT_DASH;
	v->a[55779] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2789(v);
}

void	small_parse_table_2789(t_small_parse_table_array *v)
{
	v->a[55780] = anon_sym_AMP;
	v->a[55781] = anon_sym_BQUOTE;
	v->a[55782] = anon_sym_SEMI;
	v->a[55783] = 6;
	v->a[55784] = actions(3);
	v->a[55785] = 1;
	v->a[55786] = sym_comment;
	v->a[55787] = actions(1118);
	v->a[55788] = 1;
	v->a[55789] = aux_sym_concatenation_token1;
	v->a[55790] = actions(1165);
	v->a[55791] = 1;
	v->a[55792] = sym__concat;
	v->a[55793] = state(839);
	v->a[55794] = 1;
	v->a[55795] = aux_sym_concatenation_repeat1;
	v->a[55796] = actions(543);
	v->a[55797] = 2;
	v->a[55798] = sym_file_descriptor;
	v->a[55799] = sym_variable_name;
	small_parse_table_2790(v);
}

/* EOF small_parse_table_557.c */
