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
	v->a[53700] = sym__special_character;
	v->a[53701] = anon_sym_DQUOTE;
	v->a[53702] = sym_raw_string;
	v->a[53703] = sym_ansi_c_string;
	v->a[53704] = aux_sym_number_token1;
	v->a[53705] = aux_sym_number_token2;
	v->a[53706] = anon_sym_DOLLAR_LBRACE;
	v->a[53707] = anon_sym_DOLLAR_LPAREN;
	v->a[53708] = anon_sym_BQUOTE;
	v->a[53709] = anon_sym_DOLLAR_BQUOTE;
	v->a[53710] = anon_sym_LT_LPAREN;
	v->a[53711] = anon_sym_GT_LPAREN;
	v->a[53712] = sym_word;
	v->a[53713] = 6;
	v->a[53714] = actions(3);
	v->a[53715] = 1;
	v->a[53716] = sym_comment;
	v->a[53717] = actions(5497);
	v->a[53718] = 1;
	v->a[53719] = aux_sym_concatenation_token1;
	small_parse_table_2686(v);
}

void	small_parse_table_2686(t_small_parse_table_array *v)
{
	v->a[53720] = actions(5501);
	v->a[53721] = 1;
	v->a[53722] = sym__concat;
	v->a[53723] = state(1230);
	v->a[53724] = 1;
	v->a[53725] = aux_sym_concatenation_repeat1;
	v->a[53726] = actions(1288);
	v->a[53727] = 4;
	v->a[53728] = sym_file_descriptor;
	v->a[53729] = sym_test_operator;
	v->a[53730] = sym__brace_start;
	v->a[53731] = aux_sym_heredoc_redirect_token1;
	v->a[53732] = actions(1286);
	v->a[53733] = 40;
	v->a[53734] = anon_sym_LPAREN_LPAREN;
	v->a[53735] = anon_sym_SEMI;
	v->a[53736] = anon_sym_PIPE_PIPE;
	v->a[53737] = anon_sym_AMP_AMP;
	v->a[53738] = anon_sym_PIPE;
	v->a[53739] = anon_sym_AMP;
	small_parse_table_2687(v);
}

void	small_parse_table_2687(t_small_parse_table_array *v)
{
	v->a[53740] = anon_sym_LT;
	v->a[53741] = anon_sym_GT;
	v->a[53742] = anon_sym_LT_LT;
	v->a[53743] = anon_sym_GT_GT;
	v->a[53744] = anon_sym_esac;
	v->a[53745] = anon_sym_SEMI_SEMI;
	v->a[53746] = anon_sym_SEMI_AMP;
	v->a[53747] = anon_sym_SEMI_SEMI_AMP;
	v->a[53748] = anon_sym_PIPE_AMP;
	v->a[53749] = anon_sym_AMP_GT;
	v->a[53750] = anon_sym_AMP_GT_GT;
	v->a[53751] = anon_sym_LT_AMP;
	v->a[53752] = anon_sym_GT_AMP;
	v->a[53753] = anon_sym_GT_PIPE;
	v->a[53754] = anon_sym_LT_AMP_DASH;
	v->a[53755] = anon_sym_GT_AMP_DASH;
	v->a[53756] = anon_sym_LT_LT_DASH;
	v->a[53757] = anon_sym_LT_LT_LT;
	v->a[53758] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[53759] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_2688(v);
}

void	small_parse_table_2688(t_small_parse_table_array *v)
{
	v->a[53760] = anon_sym_DOLLAR;
	v->a[53761] = sym__special_character;
	v->a[53762] = anon_sym_DQUOTE;
	v->a[53763] = sym_raw_string;
	v->a[53764] = sym_ansi_c_string;
	v->a[53765] = aux_sym_number_token1;
	v->a[53766] = aux_sym_number_token2;
	v->a[53767] = anon_sym_DOLLAR_LBRACE;
	v->a[53768] = anon_sym_DOLLAR_LPAREN;
	v->a[53769] = anon_sym_BQUOTE;
	v->a[53770] = anon_sym_DOLLAR_BQUOTE;
	v->a[53771] = anon_sym_LT_LPAREN;
	v->a[53772] = anon_sym_GT_LPAREN;
	v->a[53773] = sym_word;
	v->a[53774] = 3;
	v->a[53775] = actions(3);
	v->a[53776] = 1;
	v->a[53777] = sym_comment;
	v->a[53778] = actions(1263);
	v->a[53779] = 5;
	small_parse_table_2689(v);
}

void	small_parse_table_2689(t_small_parse_table_array *v)
{
	v->a[53780] = sym_file_descriptor;
	v->a[53781] = sym_test_operator;
	v->a[53782] = sym__bare_dollar;
	v->a[53783] = sym__brace_start;
	v->a[53784] = aux_sym_heredoc_redirect_token1;
	v->a[53785] = actions(1261);
	v->a[53786] = 42;
	v->a[53787] = anon_sym_LPAREN_LPAREN;
	v->a[53788] = anon_sym_SEMI;
	v->a[53789] = anon_sym_PIPE_PIPE;
	v->a[53790] = anon_sym_AMP_AMP;
	v->a[53791] = anon_sym_PIPE;
	v->a[53792] = anon_sym_AMP;
	v->a[53793] = anon_sym_EQ_EQ;
	v->a[53794] = anon_sym_LT;
	v->a[53795] = anon_sym_GT;
	v->a[53796] = anon_sym_LT_LT;
	v->a[53797] = anon_sym_GT_GT;
	v->a[53798] = anon_sym_esac;
	v->a[53799] = anon_sym_SEMI_SEMI;
	small_parse_table_2690(v);
}

/* EOF small_parse_table_537.c */
