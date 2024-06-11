/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_877.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4385(t_small_parse_table_array *v)
{
	v->a[87700] = actions(3359);
	v->a[87701] = 5;
	v->a[87702] = aux_sym_concatenation_token1;
	v->a[87703] = sym_raw_string;
	v->a[87704] = sym_number;
	v->a[87705] = sym__comment_word;
	v->a[87706] = sym_word;
	v->a[87707] = state(2131);
	v->a[87708] = 5;
	v->a[87709] = sym_arithmetic_expansion;
	v->a[87710] = sym_string;
	v->a[87711] = sym_simple_expansion;
	v->a[87712] = sym_expansion;
	v->a[87713] = sym_command_substitution;
	v->a[87714] = 6;
	v->a[87715] = actions(3);
	v->a[87716] = 1;
	v->a[87717] = sym_comment;
	v->a[87718] = actions(3234);
	v->a[87719] = 1;
	small_parse_table_4386(v);
}

void	small_parse_table_4386(t_small_parse_table_array *v)
{
	v->a[87720] = aux_sym_concatenation_token1;
	v->a[87721] = actions(3541);
	v->a[87722] = 1;
	v->a[87723] = sym__concat;
	v->a[87724] = state(1625);
	v->a[87725] = 1;
	v->a[87726] = aux_sym_concatenation_repeat1;
	v->a[87727] = actions(608);
	v->a[87728] = 2;
	v->a[87729] = sym_file_descriptor;
	v->a[87730] = aux_sym_heredoc_redirect_token1;
	v->a[87731] = actions(610);
	v->a[87732] = 12;
	v->a[87733] = anon_sym_AMP_AMP;
	v->a[87734] = anon_sym_PIPE_PIPE;
	v->a[87735] = anon_sym_LT;
	v->a[87736] = anon_sym_GT;
	v->a[87737] = anon_sym_GT_GT;
	v->a[87738] = anon_sym_AMP_GT;
	v->a[87739] = anon_sym_AMP_GT_GT;
	small_parse_table_4387(v);
}

void	small_parse_table_4387(t_small_parse_table_array *v)
{
	v->a[87740] = anon_sym_LT_AMP;
	v->a[87741] = anon_sym_GT_AMP;
	v->a[87742] = anon_sym_GT_PIPE;
	v->a[87743] = anon_sym_LT_AMP_DASH;
	v->a[87744] = anon_sym_GT_AMP_DASH;
	v->a[87745] = 10;
	v->a[87746] = actions(3);
	v->a[87747] = 1;
	v->a[87748] = sym_comment;
	v->a[87749] = actions(701);
	v->a[87750] = 1;
	v->a[87751] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87752] = actions(705);
	v->a[87753] = 1;
	v->a[87754] = anon_sym_DQUOTE;
	v->a[87755] = actions(707);
	v->a[87756] = 1;
	v->a[87757] = anon_sym_DOLLAR_LBRACE;
	v->a[87758] = actions(709);
	v->a[87759] = 1;
	small_parse_table_4388(v);
}

void	small_parse_table_4388(t_small_parse_table_array *v)
{
	v->a[87760] = anon_sym_DOLLAR_LPAREN;
	v->a[87761] = actions(711);
	v->a[87762] = 1;
	v->a[87763] = anon_sym_BQUOTE;
	v->a[87764] = actions(3216);
	v->a[87765] = 1;
	v->a[87766] = sym__bare_dollar;
	v->a[87767] = actions(3561);
	v->a[87768] = 1;
	v->a[87769] = anon_sym_DOLLAR;
	v->a[87770] = actions(3214);
	v->a[87771] = 5;
	v->a[87772] = aux_sym_concatenation_token1;
	v->a[87773] = sym_raw_string;
	v->a[87774] = sym_number;
	v->a[87775] = sym__comment_word;
	v->a[87776] = sym_word;
	v->a[87777] = state(663);
	v->a[87778] = 5;
	v->a[87779] = sym_arithmetic_expansion;
	small_parse_table_4389(v);
}

void	small_parse_table_4389(t_small_parse_table_array *v)
{
	v->a[87780] = sym_string;
	v->a[87781] = sym_simple_expansion;
	v->a[87782] = sym_expansion;
	v->a[87783] = sym_command_substitution;
	v->a[87784] = 12;
	v->a[87785] = actions(3);
	v->a[87786] = 1;
	v->a[87787] = sym_comment;
	v->a[87788] = actions(884);
	v->a[87789] = 1;
	v->a[87790] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[87791] = actions(886);
	v->a[87792] = 1;
	v->a[87793] = anon_sym_DOLLAR;
	v->a[87794] = actions(888);
	v->a[87795] = 1;
	v->a[87796] = anon_sym_DQUOTE;
	v->a[87797] = actions(890);
	v->a[87798] = 1;
	v->a[87799] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_4390(v);
}

/* EOF small_parse_table_877.c */
