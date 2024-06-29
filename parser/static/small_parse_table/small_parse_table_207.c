/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_207.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1035(t_small_parse_table_array *v)
{
	v->a[20700] = actions(469);
	v->a[20701] = 1;
	v->a[20702] = anon_sym_DOLLAR_LPAREN;
	v->a[20703] = actions(471);
	v->a[20704] = 1;
	v->a[20705] = anon_sym_BQUOTE;
	v->a[20706] = actions(473);
	v->a[20707] = 1;
	v->a[20708] = sym__bare_dollar;
	v->a[20709] = state(194);
	v->a[20710] = 1;
	v->a[20711] = aux_sym_command_repeat2;
	v->a[20712] = state(706);
	v->a[20713] = 1;
	v->a[20714] = sym_concatenation;
	v->a[20715] = state(1204);
	v->a[20716] = 1;
	v->a[20717] = sym_subshell;
	v->a[20718] = actions(455);
	v->a[20719] = 2;
	small_parse_table_1036(v);
}

void	small_parse_table_1036(t_small_parse_table_array *v)
{
	v->a[20720] = sym_file_descriptor;
	v->a[20721] = ts_builtin_sym_end;
	v->a[20722] = actions(457);
	v->a[20723] = 3;
	v->a[20724] = sym_raw_string;
	v->a[20725] = sym_number;
	v->a[20726] = sym_word;
	v->a[20727] = state(333);
	v->a[20728] = 5;
	v->a[20729] = sym_arithmetic_expansion;
	v->a[20730] = sym_string;
	v->a[20731] = sym_simple_expansion;
	v->a[20732] = sym_expansion;
	v->a[20733] = sym_command_substitution;
	v->a[20734] = actions(459);
	v->a[20735] = 19;
	v->a[20736] = anon_sym_PIPE;
	v->a[20737] = anon_sym_SEMI_SEMI;
	v->a[20738] = anon_sym_AMP_AMP;
	v->a[20739] = anon_sym_PIPE_PIPE;
	small_parse_table_1037(v);
}

void	small_parse_table_1037(t_small_parse_table_array *v)
{
	v->a[20740] = anon_sym_LT;
	v->a[20741] = anon_sym_GT;
	v->a[20742] = anon_sym_GT_GT;
	v->a[20743] = anon_sym_AMP_GT;
	v->a[20744] = anon_sym_AMP_GT_GT;
	v->a[20745] = anon_sym_LT_AMP;
	v->a[20746] = anon_sym_GT_AMP;
	v->a[20747] = anon_sym_GT_PIPE;
	v->a[20748] = anon_sym_LT_AMP_DASH;
	v->a[20749] = anon_sym_GT_AMP_DASH;
	v->a[20750] = anon_sym_LT_LT;
	v->a[20751] = anon_sym_LT_LT_DASH;
	v->a[20752] = aux_sym_heredoc_redirect_token1;
	v->a[20753] = anon_sym_AMP;
	v->a[20754] = anon_sym_SEMI;
	v->a[20755] = 16;
	v->a[20756] = actions(3);
	v->a[20757] = 1;
	v->a[20758] = sym_comment;
	v->a[20759] = actions(17);
	small_parse_table_1038(v);
}

void	small_parse_table_1038(t_small_parse_table_array *v)
{
	v->a[20760] = 1;
	v->a[20761] = anon_sym_LPAREN;
	v->a[20762] = actions(455);
	v->a[20763] = 1;
	v->a[20764] = sym_file_descriptor;
	v->a[20765] = actions(477);
	v->a[20766] = 1;
	v->a[20767] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20768] = actions(479);
	v->a[20769] = 1;
	v->a[20770] = anon_sym_DOLLAR;
	v->a[20771] = actions(481);
	v->a[20772] = 1;
	v->a[20773] = anon_sym_DQUOTE;
	v->a[20774] = actions(483);
	v->a[20775] = 1;
	v->a[20776] = anon_sym_DOLLAR_LBRACE;
	v->a[20777] = actions(485);
	v->a[20778] = 1;
	v->a[20779] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1039(v);
}

void	small_parse_table_1039(t_small_parse_table_array *v)
{
	v->a[20780] = actions(487);
	v->a[20781] = 1;
	v->a[20782] = anon_sym_BQUOTE;
	v->a[20783] = actions(489);
	v->a[20784] = 1;
	v->a[20785] = sym__bare_dollar;
	v->a[20786] = state(199);
	v->a[20787] = 1;
	v->a[20788] = aux_sym_command_repeat2;
	v->a[20789] = state(712);
	v->a[20790] = 1;
	v->a[20791] = sym_concatenation;
	v->a[20792] = state(1204);
	v->a[20793] = 1;
	v->a[20794] = sym_subshell;
	v->a[20795] = actions(475);
	v->a[20796] = 3;
	v->a[20797] = sym_raw_string;
	v->a[20798] = sym_number;
	v->a[20799] = sym_word;
	small_parse_table_1040(v);
}

/* EOF small_parse_table_207.c */
