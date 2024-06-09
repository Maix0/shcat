/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_657.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3285(t_small_parse_table_array *v)
{
	v->a[65700] = anon_sym_AMP_AMP;
	v->a[65701] = anon_sym_PIPE_PIPE;
	v->a[65702] = actions(2286);
	v->a[65703] = 2;
	v->a[65704] = anon_sym_LT_AMP_DASH;
	v->a[65705] = anon_sym_GT_AMP_DASH;
	v->a[65706] = actions(1077);
	v->a[65707] = 3;
	v->a[65708] = anon_sym_SEMI_SEMI;
	v->a[65709] = anon_sym_AMP;
	v->a[65710] = anon_sym_SEMI;
	v->a[65711] = state(1050);
	v->a[65712] = 3;
	v->a[65713] = sym_file_redirect;
	v->a[65714] = sym_heredoc_redirect;
	v->a[65715] = aux_sym_redirected_statement_repeat1;
	v->a[65716] = actions(2284);
	v->a[65717] = 8;
	v->a[65718] = anon_sym_LT;
	v->a[65719] = anon_sym_GT;
	small_parse_table_3286(v);
}

void	small_parse_table_3286(t_small_parse_table_array *v)
{
	v->a[65720] = anon_sym_GT_GT;
	v->a[65721] = anon_sym_AMP_GT;
	v->a[65722] = anon_sym_AMP_GT_GT;
	v->a[65723] = anon_sym_LT_AMP;
	v->a[65724] = anon_sym_GT_AMP;
	v->a[65725] = anon_sym_GT_PIPE;
	v->a[65726] = 18;
	v->a[65727] = actions(3);
	v->a[65728] = 1;
	v->a[65729] = sym_comment;
	v->a[65730] = actions(2115);
	v->a[65731] = 1;
	v->a[65732] = anon_sym_LPAREN;
	v->a[65733] = actions(2119);
	v->a[65734] = 1;
	v->a[65735] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[65736] = actions(2121);
	v->a[65737] = 1;
	v->a[65738] = anon_sym_DOLLAR;
	v->a[65739] = actions(2123);
	small_parse_table_3287(v);
}

void	small_parse_table_3287(t_small_parse_table_array *v)
{
	v->a[65740] = 1;
	v->a[65741] = anon_sym_DQUOTE;
	v->a[65742] = actions(2125);
	v->a[65743] = 1;
	v->a[65744] = aux_sym_number_token1;
	v->a[65745] = actions(2127);
	v->a[65746] = 1;
	v->a[65747] = aux_sym_number_token2;
	v->a[65748] = actions(2129);
	v->a[65749] = 1;
	v->a[65750] = anon_sym_DOLLAR_LBRACE;
	v->a[65751] = actions(2131);
	v->a[65752] = 1;
	v->a[65753] = anon_sym_DOLLAR_LPAREN;
	v->a[65754] = actions(2133);
	v->a[65755] = 1;
	v->a[65756] = anon_sym_BQUOTE;
	v->a[65757] = actions(2135);
	v->a[65758] = 1;
	v->a[65759] = sym_extglob_pattern;
	small_parse_table_3288(v);
}

void	small_parse_table_3288(t_small_parse_table_array *v)
{
	v->a[65760] = actions(2159);
	v->a[65761] = 1;
	v->a[65762] = anon_sym_esac;
	v->a[65763] = state(1178);
	v->a[65764] = 1;
	v->a[65765] = aux_sym_case_statement_repeat1;
	v->a[65766] = state(1786);
	v->a[65767] = 1;
	v->a[65768] = sym_case_item;
	v->a[65769] = state(2170);
	v->a[65770] = 1;
	v->a[65771] = sym__case_item_last;
	v->a[65772] = actions(2111);
	v->a[65773] = 2;
	v->a[65774] = sym_raw_string;
	v->a[65775] = sym_word;
	v->a[65776] = state(2016);
	v->a[65777] = 2;
	v->a[65778] = sym_concatenation;
	v->a[65779] = sym__extglob_blob;
	small_parse_table_3289(v);
}

void	small_parse_table_3289(t_small_parse_table_array *v)
{
	v->a[65780] = state(1896);
	v->a[65781] = 6;
	v->a[65782] = sym_arithmetic_expansion;
	v->a[65783] = sym_string;
	v->a[65784] = sym_number;
	v->a[65785] = sym_simple_expansion;
	v->a[65786] = sym_expansion;
	v->a[65787] = sym_command_substitution;
	v->a[65788] = 6;
	v->a[65789] = actions(3);
	v->a[65790] = 1;
	v->a[65791] = sym_comment;
	v->a[65792] = actions(2261);
	v->a[65793] = 1;
	v->a[65794] = aux_sym_concatenation_token1;
	v->a[65795] = actions(2367);
	v->a[65796] = 1;
	v->a[65797] = sym__concat;
	v->a[65798] = state(973);
	v->a[65799] = 1;
	small_parse_table_3290(v);
}

/* EOF small_parse_table_657.c */
