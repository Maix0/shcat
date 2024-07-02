/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_665.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3325(t_small_parse_table_array *v)
{
	v->a[66500] = sym_variable_name;
	v->a[66501] = actions(1959);
	v->a[66502] = 2;
	v->a[66503] = sym_file_descriptor;
	v->a[66504] = aux_sym_heredoc_redirect_token1;
	v->a[66505] = state(1290);
	v->a[66506] = 2;
	v->a[66507] = sym_variable_assignment;
	v->a[66508] = aux_sym__variable_assignments_repeat1;
	v->a[66509] = actions(1957);
	v->a[66510] = 12;
	v->a[66511] = anon_sym_PIPE;
	v->a[66512] = anon_sym_AMP_AMP;
	v->a[66513] = anon_sym_PIPE_PIPE;
	v->a[66514] = anon_sym_LT;
	v->a[66515] = anon_sym_GT;
	v->a[66516] = anon_sym_GT_GT;
	v->a[66517] = anon_sym_LT_AMP;
	v->a[66518] = anon_sym_GT_AMP;
	v->a[66519] = anon_sym_GT_PIPE;
	small_parse_table_3326(v);
}

void	small_parse_table_3326(t_small_parse_table_array *v)
{
	v->a[66520] = anon_sym_LT_GT;
	v->a[66521] = anon_sym_LT_LT;
	v->a[66522] = anon_sym_LT_LT_DASH;
	v->a[66523] = 10;
	v->a[66524] = actions(3);
	v->a[66525] = 1;
	v->a[66526] = sym_comment;
	v->a[66527] = actions(770);
	v->a[66528] = 1;
	v->a[66529] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66530] = actions(772);
	v->a[66531] = 1;
	v->a[66532] = anon_sym_DOLLAR;
	v->a[66533] = actions(774);
	v->a[66534] = 1;
	v->a[66535] = anon_sym_DQUOTE;
	v->a[66536] = actions(776);
	v->a[66537] = 1;
	v->a[66538] = anon_sym_DOLLAR_LBRACE;
	v->a[66539] = actions(778);
	small_parse_table_3327(v);
}

void	small_parse_table_3327(t_small_parse_table_array *v)
{
	v->a[66540] = 1;
	v->a[66541] = anon_sym_DOLLAR_LPAREN;
	v->a[66542] = actions(780);
	v->a[66543] = 1;
	v->a[66544] = anon_sym_BQUOTE;
	v->a[66545] = actions(2400);
	v->a[66546] = 1;
	v->a[66547] = sym__bare_dollar;
	v->a[66548] = actions(2396);
	v->a[66549] = 5;
	v->a[66550] = aux_sym_concatenation_token1;
	v->a[66551] = sym_raw_string;
	v->a[66552] = sym_number;
	v->a[66553] = sym__comment_word;
	v->a[66554] = sym_word;
	v->a[66555] = state(569);
	v->a[66556] = 5;
	v->a[66557] = sym_arithmetic_expansion;
	v->a[66558] = sym_string;
	v->a[66559] = sym_simple_expansion;
	small_parse_table_3328(v);
}

void	small_parse_table_3328(t_small_parse_table_array *v)
{
	v->a[66560] = sym_expansion;
	v->a[66561] = sym_command_substitution;
	v->a[66562] = 10;
	v->a[66563] = actions(3);
	v->a[66564] = 1;
	v->a[66565] = sym_comment;
	v->a[66566] = actions(463);
	v->a[66567] = 1;
	v->a[66568] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[66569] = actions(467);
	v->a[66570] = 1;
	v->a[66571] = anon_sym_DQUOTE;
	v->a[66572] = actions(469);
	v->a[66573] = 1;
	v->a[66574] = anon_sym_DOLLAR_LBRACE;
	v->a[66575] = actions(471);
	v->a[66576] = 1;
	v->a[66577] = anon_sym_DOLLAR_LPAREN;
	v->a[66578] = actions(473);
	v->a[66579] = 1;
	small_parse_table_3329(v);
}

void	small_parse_table_3329(t_small_parse_table_array *v)
{
	v->a[66580] = anon_sym_BQUOTE;
	v->a[66581] = actions(2404);
	v->a[66582] = 1;
	v->a[66583] = sym__bare_dollar;
	v->a[66584] = actions(2525);
	v->a[66585] = 1;
	v->a[66586] = anon_sym_DOLLAR;
	v->a[66587] = actions(2402);
	v->a[66588] = 5;
	v->a[66589] = aux_sym_concatenation_token1;
	v->a[66590] = sym_raw_string;
	v->a[66591] = sym_number;
	v->a[66592] = sym__comment_word;
	v->a[66593] = sym_word;
	v->a[66594] = state(533);
	v->a[66595] = 5;
	v->a[66596] = sym_arithmetic_expansion;
	v->a[66597] = sym_string;
	v->a[66598] = sym_simple_expansion;
	v->a[66599] = sym_expansion;
	small_parse_table_3330(v);
}

/* EOF small_parse_table_665.c */
