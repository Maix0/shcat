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
	v->a[53700] = actions(1782);
	v->a[53701] = 1;
	v->a[53702] = anon_sym_DQUOTE;
	v->a[53703] = actions(1784);
	v->a[53704] = 1;
	v->a[53705] = anon_sym_DOLLAR_LBRACE;
	v->a[53706] = actions(1786);
	v->a[53707] = 1;
	v->a[53708] = anon_sym_DOLLAR_LPAREN;
	v->a[53709] = actions(1788);
	v->a[53710] = 1;
	v->a[53711] = anon_sym_BQUOTE;
	v->a[53712] = actions(1790);
	v->a[53713] = 1;
	v->a[53714] = sym_extglob_pattern;
	v->a[53715] = actions(1884);
	v->a[53716] = 1;
	v->a[53717] = anon_sym_esac;
	v->a[53718] = state(1098);
	v->a[53719] = 1;
	small_parse_table_2686(v);
}

void	small_parse_table_2686(t_small_parse_table_array *v)
{
	v->a[53720] = sym_terminator;
	v->a[53721] = state(1190);
	v->a[53722] = 1;
	v->a[53723] = aux_sym_case_statement_repeat1;
	v->a[53724] = state(1920);
	v->a[53725] = 1;
	v->a[53726] = sym_case_item;
	v->a[53727] = state(2297);
	v->a[53728] = 1;
	v->a[53729] = sym__case_item_last;
	v->a[53730] = state(2096);
	v->a[53731] = 2;
	v->a[53732] = sym_concatenation;
	v->a[53733] = sym__extglob_blob;
	v->a[53734] = actions(1770);
	v->a[53735] = 3;
	v->a[53736] = sym_raw_string;
	v->a[53737] = sym_number;
	v->a[53738] = sym_word;
	v->a[53739] = actions(1776);
	small_parse_table_2687(v);
}

void	small_parse_table_2687(t_small_parse_table_array *v)
{
	v->a[53740] = 4;
	v->a[53741] = anon_sym_SEMI_SEMI;
	v->a[53742] = aux_sym_heredoc_redirect_token1;
	v->a[53743] = anon_sym_AMP;
	v->a[53744] = anon_sym_SEMI;
	v->a[53745] = state(2001);
	v->a[53746] = 5;
	v->a[53747] = sym_arithmetic_expansion;
	v->a[53748] = sym_string;
	v->a[53749] = sym_simple_expansion;
	v->a[53750] = sym_expansion;
	v->a[53751] = sym_command_substitution;
	v->a[53752] = 3;
	v->a[53753] = actions(3);
	v->a[53754] = 1;
	v->a[53755] = sym_comment;
	v->a[53756] = actions(939);
	v->a[53757] = 3;
	v->a[53758] = sym_file_descriptor;
	v->a[53759] = sym__concat;
	small_parse_table_2688(v);
}

void	small_parse_table_2688(t_small_parse_table_array *v)
{
	v->a[53760] = sym__bare_dollar;
	v->a[53761] = actions(937);
	v->a[53762] = 24;
	v->a[53763] = anon_sym_LPAREN;
	v->a[53764] = anon_sym_PIPE;
	v->a[53765] = anon_sym_AMP_AMP;
	v->a[53766] = anon_sym_PIPE_PIPE;
	v->a[53767] = anon_sym_LT;
	v->a[53768] = anon_sym_GT;
	v->a[53769] = anon_sym_GT_GT;
	v->a[53770] = anon_sym_LT_AMP;
	v->a[53771] = anon_sym_GT_AMP;
	v->a[53772] = anon_sym_GT_PIPE;
	v->a[53773] = anon_sym_LT_AMP_DASH;
	v->a[53774] = anon_sym_GT_AMP_DASH;
	v->a[53775] = anon_sym_LT_LT;
	v->a[53776] = anon_sym_LT_LT_DASH;
	v->a[53777] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[53778] = aux_sym_concatenation_token1;
	v->a[53779] = anon_sym_DOLLAR;
	small_parse_table_2689(v);
}

void	small_parse_table_2689(t_small_parse_table_array *v)
{
	v->a[53780] = anon_sym_DQUOTE;
	v->a[53781] = sym_raw_string;
	v->a[53782] = sym_number;
	v->a[53783] = anon_sym_DOLLAR_LBRACE;
	v->a[53784] = anon_sym_DOLLAR_LPAREN;
	v->a[53785] = anon_sym_BQUOTE;
	v->a[53786] = sym_word;
	v->a[53787] = 16;
	v->a[53788] = actions(870);
	v->a[53789] = 1;
	v->a[53790] = sym_comment;
	v->a[53791] = actions(1744);
	v->a[53792] = 1;
	v->a[53793] = anon_sym_LPAREN;
	v->a[53794] = actions(1746);
	v->a[53795] = 1;
	v->a[53796] = anon_sym_BANG;
	v->a[53797] = actions(1754);
	v->a[53798] = 1;
	v->a[53799] = anon_sym_TILDE;
	small_parse_table_2690(v);
}

/* EOF small_parse_table_537.c */
