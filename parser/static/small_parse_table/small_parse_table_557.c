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
	v->a[55700] = 25;
	v->a[55701] = anon_sym_PIPE;
	v->a[55702] = anon_sym_AMP_AMP;
	v->a[55703] = anon_sym_PIPE_PIPE;
	v->a[55704] = anon_sym_LT;
	v->a[55705] = anon_sym_GT;
	v->a[55706] = anon_sym_GT_GT;
	v->a[55707] = anon_sym_AMP_GT;
	v->a[55708] = anon_sym_AMP_GT_GT;
	v->a[55709] = anon_sym_LT_AMP;
	v->a[55710] = anon_sym_GT_AMP;
	v->a[55711] = anon_sym_GT_PIPE;
	v->a[55712] = anon_sym_LT_AMP_DASH;
	v->a[55713] = anon_sym_GT_AMP_DASH;
	v->a[55714] = anon_sym_LT_LT;
	v->a[55715] = anon_sym_LT_LT_DASH;
	v->a[55716] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[55717] = aux_sym_concatenation_token1;
	v->a[55718] = anon_sym_DOLLAR;
	v->a[55719] = anon_sym_DQUOTE;
	small_parse_table_2786(v);
}

void	small_parse_table_2786(t_small_parse_table_array *v)
{
	v->a[55720] = sym_raw_string;
	v->a[55721] = sym_number;
	v->a[55722] = anon_sym_DOLLAR_LBRACE;
	v->a[55723] = anon_sym_DOLLAR_LPAREN;
	v->a[55724] = anon_sym_BQUOTE;
	v->a[55725] = sym_word;
	v->a[55726] = 18;
	v->a[55727] = actions(3);
	v->a[55728] = 1;
	v->a[55729] = sym_comment;
	v->a[55730] = actions(1879);
	v->a[55731] = 1;
	v->a[55732] = anon_sym_LPAREN;
	v->a[55733] = actions(1883);
	v->a[55734] = 1;
	v->a[55735] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[55736] = actions(1885);
	v->a[55737] = 1;
	v->a[55738] = anon_sym_DOLLAR;
	v->a[55739] = actions(1887);
	small_parse_table_2787(v);
}

void	small_parse_table_2787(t_small_parse_table_array *v)
{
	v->a[55740] = 1;
	v->a[55741] = anon_sym_DQUOTE;
	v->a[55742] = actions(1889);
	v->a[55743] = 1;
	v->a[55744] = anon_sym_DOLLAR_LBRACE;
	v->a[55745] = actions(1891);
	v->a[55746] = 1;
	v->a[55747] = anon_sym_DOLLAR_LPAREN;
	v->a[55748] = actions(1893);
	v->a[55749] = 1;
	v->a[55750] = anon_sym_BQUOTE;
	v->a[55751] = actions(1895);
	v->a[55752] = 1;
	v->a[55753] = sym_extglob_pattern;
	v->a[55754] = actions(1901);
	v->a[55755] = 1;
	v->a[55756] = anon_sym_esac;
	v->a[55757] = state(1313);
	v->a[55758] = 1;
	v->a[55759] = sym_terminator;
	small_parse_table_2788(v);
}

void	small_parse_table_2788(t_small_parse_table_array *v)
{
	v->a[55760] = state(1381);
	v->a[55761] = 1;
	v->a[55762] = aux_sym_case_statement_repeat1;
	v->a[55763] = state(1923);
	v->a[55764] = 1;
	v->a[55765] = sym_case_item;
	v->a[55766] = state(2139);
	v->a[55767] = 1;
	v->a[55768] = sym__case_item_last;
	v->a[55769] = state(2078);
	v->a[55770] = 2;
	v->a[55771] = sym_concatenation;
	v->a[55772] = sym__extglob_blob;
	v->a[55773] = actions(1875);
	v->a[55774] = 3;
	v->a[55775] = sym_raw_string;
	v->a[55776] = sym_number;
	v->a[55777] = sym_word;
	v->a[55778] = actions(1881);
	v->a[55779] = 4;
	small_parse_table_2789(v);
}

void	small_parse_table_2789(t_small_parse_table_array *v)
{
	v->a[55780] = anon_sym_SEMI_SEMI;
	v->a[55781] = aux_sym_heredoc_redirect_token1;
	v->a[55782] = anon_sym_AMP;
	v->a[55783] = anon_sym_SEMI;
	v->a[55784] = state(2004);
	v->a[55785] = 5;
	v->a[55786] = sym_arithmetic_expansion;
	v->a[55787] = sym_string;
	v->a[55788] = sym_simple_expansion;
	v->a[55789] = sym_expansion;
	v->a[55790] = sym_command_substitution;
	v->a[55791] = 18;
	v->a[55792] = actions(3);
	v->a[55793] = 1;
	v->a[55794] = sym_comment;
	v->a[55795] = actions(1879);
	v->a[55796] = 1;
	v->a[55797] = anon_sym_LPAREN;
	v->a[55798] = actions(1883);
	v->a[55799] = 1;
	small_parse_table_2790(v);
}

/* EOF small_parse_table_557.c */
