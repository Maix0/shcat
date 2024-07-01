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
	v->a[53700] = state(1871);
	v->a[53701] = 2;
	v->a[53702] = sym_concatenation;
	v->a[53703] = sym__extglob_blob;
	v->a[53704] = actions(1630);
	v->a[53705] = 3;
	v->a[53706] = sym_raw_string;
	v->a[53707] = sym_number;
	v->a[53708] = sym_word;
	v->a[53709] = state(1804);
	v->a[53710] = 5;
	v->a[53711] = sym_arithmetic_expansion;
	v->a[53712] = sym_string;
	v->a[53713] = sym_simple_expansion;
	v->a[53714] = sym_expansion;
	v->a[53715] = sym_command_substitution;
	v->a[53716] = 3;
	v->a[53717] = actions(3);
	v->a[53718] = 1;
	v->a[53719] = sym_comment;
	small_parse_table_2686(v);
}

void	small_parse_table_2686(t_small_parse_table_array *v)
{
	v->a[53720] = actions(895);
	v->a[53721] = 2;
	v->a[53722] = sym_file_descriptor;
	v->a[53723] = sym__concat;
	v->a[53724] = actions(893);
	v->a[53725] = 20;
	v->a[53726] = anon_sym_AMP_AMP;
	v->a[53727] = anon_sym_PIPE_PIPE;
	v->a[53728] = anon_sym_LT;
	v->a[53729] = anon_sym_GT;
	v->a[53730] = anon_sym_GT_GT;
	v->a[53731] = anon_sym_LT_AMP;
	v->a[53732] = anon_sym_GT_AMP;
	v->a[53733] = anon_sym_GT_PIPE;
	v->a[53734] = anon_sym_LT_GT;
	v->a[53735] = aux_sym_heredoc_redirect_token1;
	v->a[53736] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[53737] = aux_sym_concatenation_token1;
	v->a[53738] = anon_sym_DOLLAR;
	v->a[53739] = anon_sym_DQUOTE;
	small_parse_table_2687(v);
}

void	small_parse_table_2687(t_small_parse_table_array *v)
{
	v->a[53740] = sym_raw_string;
	v->a[53741] = sym_number;
	v->a[53742] = anon_sym_DOLLAR_LBRACE;
	v->a[53743] = anon_sym_DOLLAR_LPAREN;
	v->a[53744] = anon_sym_BQUOTE;
	v->a[53745] = sym_word;
	v->a[53746] = 3;
	v->a[53747] = actions(3);
	v->a[53748] = 1;
	v->a[53749] = sym_comment;
	v->a[53750] = actions(846);
	v->a[53751] = 2;
	v->a[53752] = sym_file_descriptor;
	v->a[53753] = sym__concat;
	v->a[53754] = actions(844);
	v->a[53755] = 20;
	v->a[53756] = anon_sym_AMP_AMP;
	v->a[53757] = anon_sym_PIPE_PIPE;
	v->a[53758] = anon_sym_LT;
	v->a[53759] = anon_sym_GT;
	small_parse_table_2688(v);
}

void	small_parse_table_2688(t_small_parse_table_array *v)
{
	v->a[53760] = anon_sym_GT_GT;
	v->a[53761] = anon_sym_LT_AMP;
	v->a[53762] = anon_sym_GT_AMP;
	v->a[53763] = anon_sym_GT_PIPE;
	v->a[53764] = anon_sym_LT_GT;
	v->a[53765] = aux_sym_heredoc_redirect_token1;
	v->a[53766] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[53767] = aux_sym_concatenation_token1;
	v->a[53768] = anon_sym_DOLLAR;
	v->a[53769] = anon_sym_DQUOTE;
	v->a[53770] = sym_raw_string;
	v->a[53771] = sym_number;
	v->a[53772] = anon_sym_DOLLAR_LBRACE;
	v->a[53773] = anon_sym_DOLLAR_LPAREN;
	v->a[53774] = anon_sym_BQUOTE;
	v->a[53775] = sym_word;
	v->a[53776] = 6;
	v->a[53777] = actions(3);
	v->a[53778] = 1;
	v->a[53779] = sym_comment;
	small_parse_table_2689(v);
}

void	small_parse_table_2689(t_small_parse_table_array *v)
{
	v->a[53780] = actions(1845);
	v->a[53781] = 1;
	v->a[53782] = aux_sym_concatenation_token1;
	v->a[53783] = actions(1847);
	v->a[53784] = 1;
	v->a[53785] = sym__concat;
	v->a[53786] = state(954);
	v->a[53787] = 1;
	v->a[53788] = aux_sym_concatenation_repeat1;
	v->a[53789] = actions(1209);
	v->a[53790] = 3;
	v->a[53791] = sym_file_descriptor;
	v->a[53792] = sym_variable_name;
	v->a[53793] = aux_sym_heredoc_redirect_token1;
	v->a[53794] = actions(1207);
	v->a[53795] = 16;
	v->a[53796] = anon_sym_PIPE;
	v->a[53797] = anon_sym_RPAREN;
	v->a[53798] = anon_sym_SEMI_SEMI;
	v->a[53799] = anon_sym_AMP_AMP;
	small_parse_table_2690(v);
}

/* EOF small_parse_table_537.c */
