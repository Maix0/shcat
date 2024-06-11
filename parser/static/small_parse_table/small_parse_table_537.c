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
	v->a[53700] = anon_sym_LBRACE;
	v->a[53701] = anon_sym_BANG;
	v->a[53702] = anon_sym_LT;
	v->a[53703] = anon_sym_GT;
	v->a[53704] = anon_sym_GT_GT;
	v->a[53705] = anon_sym_AMP_GT;
	v->a[53706] = anon_sym_AMP_GT_GT;
	v->a[53707] = anon_sym_LT_AMP;
	v->a[53708] = anon_sym_GT_AMP;
	v->a[53709] = anon_sym_GT_PIPE;
	v->a[53710] = anon_sym_LT_AMP_DASH;
	v->a[53711] = anon_sym_GT_AMP_DASH;
	v->a[53712] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[53713] = anon_sym_DOLLAR;
	v->a[53714] = anon_sym_DQUOTE;
	v->a[53715] = sym_raw_string;
	v->a[53716] = sym_number;
	v->a[53717] = anon_sym_DOLLAR_LBRACE;
	v->a[53718] = anon_sym_DOLLAR_LPAREN;
	v->a[53719] = anon_sym_BQUOTE;
	small_parse_table_2686(v);
}

void	small_parse_table_2686(t_small_parse_table_array *v)
{
	v->a[53720] = sym_word;
	v->a[53721] = 12;
	v->a[53722] = actions(3);
	v->a[53723] = 1;
	v->a[53724] = sym_comment;
	v->a[53725] = actions(608);
	v->a[53726] = 1;
	v->a[53727] = sym_file_descriptor;
	v->a[53728] = actions(1749);
	v->a[53729] = 1;
	v->a[53730] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[53731] = actions(1751);
	v->a[53732] = 1;
	v->a[53733] = anon_sym_DOLLAR;
	v->a[53734] = actions(1753);
	v->a[53735] = 1;
	v->a[53736] = anon_sym_DQUOTE;
	v->a[53737] = actions(1755);
	v->a[53738] = 1;
	v->a[53739] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_2687(v);
}

void	small_parse_table_2687(t_small_parse_table_array *v)
{
	v->a[53740] = actions(1757);
	v->a[53741] = 1;
	v->a[53742] = anon_sym_DOLLAR_LPAREN;
	v->a[53743] = actions(1759);
	v->a[53744] = 1;
	v->a[53745] = anon_sym_BQUOTE;
	v->a[53746] = state(853);
	v->a[53747] = 2;
	v->a[53748] = sym_concatenation;
	v->a[53749] = aux_sym_for_statement_repeat1;
	v->a[53750] = actions(1747);
	v->a[53751] = 3;
	v->a[53752] = sym_raw_string;
	v->a[53753] = sym_number;
	v->a[53754] = sym_word;
	v->a[53755] = state(1084);
	v->a[53756] = 5;
	v->a[53757] = sym_arithmetic_expansion;
	v->a[53758] = sym_string;
	v->a[53759] = sym_simple_expansion;
	small_parse_table_2688(v);
}

void	small_parse_table_2688(t_small_parse_table_array *v)
{
	v->a[53760] = sym_expansion;
	v->a[53761] = sym_command_substitution;
	v->a[53762] = actions(610);
	v->a[53763] = 13;
	v->a[53764] = anon_sym_AMP_AMP;
	v->a[53765] = anon_sym_PIPE_PIPE;
	v->a[53766] = anon_sym_LT;
	v->a[53767] = anon_sym_GT;
	v->a[53768] = anon_sym_GT_GT;
	v->a[53769] = anon_sym_AMP_GT;
	v->a[53770] = anon_sym_AMP_GT_GT;
	v->a[53771] = anon_sym_LT_AMP;
	v->a[53772] = anon_sym_GT_AMP;
	v->a[53773] = anon_sym_GT_PIPE;
	v->a[53774] = anon_sym_LT_AMP_DASH;
	v->a[53775] = anon_sym_GT_AMP_DASH;
	v->a[53776] = aux_sym_heredoc_redirect_token1;
	v->a[53777] = 4;
	v->a[53778] = actions(3);
	v->a[53779] = 1;
	small_parse_table_2689(v);
}

void	small_parse_table_2689(t_small_parse_table_array *v)
{
	v->a[53780] = sym_comment;
	v->a[53781] = actions(1718);
	v->a[53782] = 1;
	v->a[53783] = ts_builtin_sym_end;
	v->a[53784] = actions(1556);
	v->a[53785] = 2;
	v->a[53786] = sym_file_descriptor;
	v->a[53787] = sym_variable_name;
	v->a[53788] = actions(1552);
	v->a[53789] = 27;
	v->a[53790] = anon_sym_for;
	v->a[53791] = anon_sym_while;
	v->a[53792] = anon_sym_until;
	v->a[53793] = anon_sym_if;
	v->a[53794] = anon_sym_case;
	v->a[53795] = anon_sym_LPAREN;
	v->a[53796] = anon_sym_LBRACE;
	v->a[53797] = anon_sym_BANG;
	v->a[53798] = anon_sym_LT;
	v->a[53799] = anon_sym_GT;
	small_parse_table_2690(v);
}

/* EOF small_parse_table_537.c */
