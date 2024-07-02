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
	v->a[55700] = aux_sym_concatenation_token1;
	v->a[55701] = anon_sym_DOLLAR;
	v->a[55702] = anon_sym_DQUOTE;
	v->a[55703] = sym_raw_string;
	v->a[55704] = sym_number;
	v->a[55705] = anon_sym_DOLLAR_LBRACE;
	v->a[55706] = anon_sym_DOLLAR_LPAREN;
	v->a[55707] = anon_sym_BQUOTE;
	v->a[55708] = sym_word;
	v->a[55709] = 11;
	v->a[55710] = actions(3);
	v->a[55711] = 1;
	v->a[55712] = sym_comment;
	v->a[55713] = actions(692);
	v->a[55714] = 1;
	v->a[55715] = anon_sym_PIPE;
	v->a[55716] = actions(1900);
	v->a[55717] = 1;
	v->a[55718] = aux_sym_heredoc_redirect_token1;
	v->a[55719] = actions(1902);
	small_parse_table_2786(v);
}

void	small_parse_table_2786(t_small_parse_table_array *v)
{
	v->a[55720] = 1;
	v->a[55721] = sym_file_descriptor;
	v->a[55722] = state(654);
	v->a[55723] = 1;
	v->a[55724] = sym_terminator;
	v->a[55725] = actions(724);
	v->a[55726] = 2;
	v->a[55727] = anon_sym_esac;
	v->a[55728] = anon_sym_SEMI_SEMI;
	v->a[55729] = actions(759);
	v->a[55730] = 2;
	v->a[55731] = anon_sym_AMP_AMP;
	v->a[55732] = anon_sym_PIPE_PIPE;
	v->a[55733] = actions(761);
	v->a[55734] = 2;
	v->a[55735] = anon_sym_LT_LT;
	v->a[55736] = anon_sym_LT_LT_DASH;
	v->a[55737] = actions(763);
	v->a[55738] = 2;
	v->a[55739] = anon_sym_AMP;
	small_parse_table_2787(v);
}

void	small_parse_table_2787(t_small_parse_table_array *v)
{
	v->a[55740] = anon_sym_SEMI;
	v->a[55741] = state(1059);
	v->a[55742] = 3;
	v->a[55743] = sym_file_redirect;
	v->a[55744] = sym_heredoc_redirect;
	v->a[55745] = aux_sym_redirected_statement_repeat1;
	v->a[55746] = actions(1898);
	v->a[55747] = 7;
	v->a[55748] = anon_sym_LT;
	v->a[55749] = anon_sym_GT;
	v->a[55750] = anon_sym_GT_GT;
	v->a[55751] = anon_sym_LT_AMP;
	v->a[55752] = anon_sym_GT_AMP;
	v->a[55753] = anon_sym_GT_PIPE;
	v->a[55754] = anon_sym_LT_GT;
	v->a[55755] = 11;
	v->a[55756] = actions(3);
	v->a[55757] = 1;
	v->a[55758] = sym_comment;
	v->a[55759] = actions(692);
	small_parse_table_2788(v);
}

void	small_parse_table_2788(t_small_parse_table_array *v)
{
	v->a[55760] = 1;
	v->a[55761] = anon_sym_PIPE;
	v->a[55762] = actions(1900);
	v->a[55763] = 1;
	v->a[55764] = aux_sym_heredoc_redirect_token1;
	v->a[55765] = actions(1902);
	v->a[55766] = 1;
	v->a[55767] = sym_file_descriptor;
	v->a[55768] = state(653);
	v->a[55769] = 1;
	v->a[55770] = sym_terminator;
	v->a[55771] = actions(724);
	v->a[55772] = 2;
	v->a[55773] = anon_sym_esac;
	v->a[55774] = anon_sym_SEMI_SEMI;
	v->a[55775] = actions(759);
	v->a[55776] = 2;
	v->a[55777] = anon_sym_AMP_AMP;
	v->a[55778] = anon_sym_PIPE_PIPE;
	v->a[55779] = actions(761);
	small_parse_table_2789(v);
}

void	small_parse_table_2789(t_small_parse_table_array *v)
{
	v->a[55780] = 2;
	v->a[55781] = anon_sym_LT_LT;
	v->a[55782] = anon_sym_LT_LT_DASH;
	v->a[55783] = actions(763);
	v->a[55784] = 2;
	v->a[55785] = anon_sym_AMP;
	v->a[55786] = anon_sym_SEMI;
	v->a[55787] = state(1059);
	v->a[55788] = 3;
	v->a[55789] = sym_file_redirect;
	v->a[55790] = sym_heredoc_redirect;
	v->a[55791] = aux_sym_redirected_statement_repeat1;
	v->a[55792] = actions(1898);
	v->a[55793] = 7;
	v->a[55794] = anon_sym_LT;
	v->a[55795] = anon_sym_GT;
	v->a[55796] = anon_sym_GT_GT;
	v->a[55797] = anon_sym_LT_AMP;
	v->a[55798] = anon_sym_GT_AMP;
	v->a[55799] = anon_sym_GT_PIPE;
	small_parse_table_2790(v);
}

/* EOF small_parse_table_557.c */
