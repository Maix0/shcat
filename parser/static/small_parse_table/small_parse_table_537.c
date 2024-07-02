/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_537.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2685(t_small_parse_table_array *v)
{
	v->a[53700] = sym_comment;
	v->a[53701] = actions(1092);
	v->a[53702] = 2;
	v->a[53703] = sym_file_descriptor;
	v->a[53704] = sym__concat;
	v->a[53705] = actions(1094);
	v->a[53706] = 20;
	v->a[53707] = anon_sym_AMP_AMP;
	v->a[53708] = anon_sym_PIPE_PIPE;
	v->a[53709] = anon_sym_LT;
	v->a[53710] = anon_sym_GT;
	v->a[53711] = anon_sym_GT_GT;
	v->a[53712] = anon_sym_LT_AMP;
	v->a[53713] = anon_sym_GT_AMP;
	v->a[53714] = anon_sym_GT_PIPE;
	v->a[53715] = anon_sym_LT_GT;
	v->a[53716] = aux_sym_heredoc_redirect_token1;
	v->a[53717] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[53718] = aux_sym_concatenation_token1;
	v->a[53719] = anon_sym_DOLLAR;
	small_parse_table_2686(v);
}

void	small_parse_table_2686(t_small_parse_table_array *v)
{
	v->a[53720] = anon_sym_DQUOTE;
	v->a[53721] = sym_raw_string;
	v->a[53722] = sym_number;
	v->a[53723] = anon_sym_DOLLAR_LBRACE;
	v->a[53724] = anon_sym_DOLLAR_LPAREN;
	v->a[53725] = anon_sym_BQUOTE;
	v->a[53726] = sym_word;
	v->a[53727] = 11;
	v->a[53728] = actions(3);
	v->a[53729] = 1;
	v->a[53730] = sym_comment;
	v->a[53731] = actions(692);
	v->a[53732] = 1;
	v->a[53733] = anon_sym_PIPE;
	v->a[53734] = actions(862);
	v->a[53735] = 1;
	v->a[53736] = ts_builtin_sym_end;
	v->a[53737] = actions(1863);
	v->a[53738] = 1;
	v->a[53739] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2687(v);
}

void	small_parse_table_2687(t_small_parse_table_array *v)
{
	v->a[53740] = actions(1865);
	v->a[53741] = 1;
	v->a[53742] = sym_file_descriptor;
	v->a[53743] = state(769);
	v->a[53744] = 1;
	v->a[53745] = sym_terminator;
	v->a[53746] = actions(700);
	v->a[53747] = 2;
	v->a[53748] = anon_sym_LT_LT;
	v->a[53749] = anon_sym_LT_LT_DASH;
	v->a[53750] = actions(719);
	v->a[53751] = 2;
	v->a[53752] = anon_sym_AMP_AMP;
	v->a[53753] = anon_sym_PIPE_PIPE;
	v->a[53754] = actions(717);
	v->a[53755] = 3;
	v->a[53756] = anon_sym_SEMI_SEMI;
	v->a[53757] = anon_sym_AMP;
	v->a[53758] = anon_sym_SEMI;
	v->a[53759] = state(1086);
	small_parse_table_2688(v);
}

void	small_parse_table_2688(t_small_parse_table_array *v)
{
	v->a[53760] = 3;
	v->a[53761] = sym_file_redirect;
	v->a[53762] = sym_heredoc_redirect;
	v->a[53763] = aux_sym_redirected_statement_repeat1;
	v->a[53764] = actions(1861);
	v->a[53765] = 7;
	v->a[53766] = anon_sym_LT;
	v->a[53767] = anon_sym_GT;
	v->a[53768] = anon_sym_GT_GT;
	v->a[53769] = anon_sym_LT_AMP;
	v->a[53770] = anon_sym_GT_AMP;
	v->a[53771] = anon_sym_GT_PIPE;
	v->a[53772] = anon_sym_LT_GT;
	v->a[53773] = 11;
	v->a[53774] = actions(3);
	v->a[53775] = 1;
	v->a[53776] = sym_comment;
	v->a[53777] = actions(692);
	v->a[53778] = 1;
	v->a[53779] = anon_sym_PIPE;
	small_parse_table_2689(v);
}

void	small_parse_table_2689(t_small_parse_table_array *v)
{
	v->a[53780] = actions(862);
	v->a[53781] = 1;
	v->a[53782] = ts_builtin_sym_end;
	v->a[53783] = actions(1863);
	v->a[53784] = 1;
	v->a[53785] = aux_sym_heredoc_redirect_token1;
	v->a[53786] = actions(1865);
	v->a[53787] = 1;
	v->a[53788] = sym_file_descriptor;
	v->a[53789] = state(762);
	v->a[53790] = 1;
	v->a[53791] = sym_terminator;
	v->a[53792] = actions(700);
	v->a[53793] = 2;
	v->a[53794] = anon_sym_LT_LT;
	v->a[53795] = anon_sym_LT_LT_DASH;
	v->a[53796] = actions(719);
	v->a[53797] = 2;
	v->a[53798] = anon_sym_AMP_AMP;
	v->a[53799] = anon_sym_PIPE_PIPE;
	small_parse_table_2690(v);
}

/* EOF small_parse_table_537.c */
