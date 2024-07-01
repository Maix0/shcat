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
	v->a[20700] = 18;
	v->a[20701] = anon_sym_esac;
	v->a[20702] = anon_sym_PIPE;
	v->a[20703] = anon_sym_SEMI_SEMI;
	v->a[20704] = anon_sym_AMP_AMP;
	v->a[20705] = anon_sym_PIPE_PIPE;
	v->a[20706] = anon_sym_LT;
	v->a[20707] = anon_sym_GT;
	v->a[20708] = anon_sym_GT_GT;
	v->a[20709] = anon_sym_LT_AMP;
	v->a[20710] = anon_sym_GT_AMP;
	v->a[20711] = anon_sym_GT_PIPE;
	v->a[20712] = anon_sym_LT_AMP_DASH;
	v->a[20713] = anon_sym_GT_AMP_DASH;
	v->a[20714] = anon_sym_LT_LT;
	v->a[20715] = anon_sym_LT_LT_DASH;
	v->a[20716] = aux_sym_heredoc_redirect_token1;
	v->a[20717] = anon_sym_AMP;
	v->a[20718] = anon_sym_SEMI;
	v->a[20719] = 16;
	small_parse_table_1036(v);
}

void	small_parse_table_1036(t_small_parse_table_array *v)
{
	v->a[20720] = actions(3);
	v->a[20721] = 1;
	v->a[20722] = sym_comment;
	v->a[20723] = actions(17);
	v->a[20724] = 1;
	v->a[20725] = anon_sym_LPAREN;
	v->a[20726] = actions(477);
	v->a[20727] = 1;
	v->a[20728] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20729] = actions(479);
	v->a[20730] = 1;
	v->a[20731] = anon_sym_DOLLAR;
	v->a[20732] = actions(481);
	v->a[20733] = 1;
	v->a[20734] = anon_sym_DQUOTE;
	v->a[20735] = actions(483);
	v->a[20736] = 1;
	v->a[20737] = anon_sym_DOLLAR_LBRACE;
	v->a[20738] = actions(485);
	v->a[20739] = 1;
	small_parse_table_1037(v);
}

void	small_parse_table_1037(t_small_parse_table_array *v)
{
	v->a[20740] = anon_sym_DOLLAR_LPAREN;
	v->a[20741] = actions(487);
	v->a[20742] = 1;
	v->a[20743] = anon_sym_BQUOTE;
	v->a[20744] = actions(489);
	v->a[20745] = 1;
	v->a[20746] = sym__bare_dollar;
	v->a[20747] = state(204);
	v->a[20748] = 1;
	v->a[20749] = aux_sym_command_repeat2;
	v->a[20750] = state(731);
	v->a[20751] = 1;
	v->a[20752] = sym_concatenation;
	v->a[20753] = state(1264);
	v->a[20754] = 1;
	v->a[20755] = sym_subshell;
	v->a[20756] = actions(493);
	v->a[20757] = 2;
	v->a[20758] = sym_file_descriptor;
	v->a[20759] = ts_builtin_sym_end;
	small_parse_table_1038(v);
}

void	small_parse_table_1038(t_small_parse_table_array *v)
{
	v->a[20760] = actions(475);
	v->a[20761] = 3;
	v->a[20762] = sym_raw_string;
	v->a[20763] = sym_number;
	v->a[20764] = sym_word;
	v->a[20765] = state(476);
	v->a[20766] = 5;
	v->a[20767] = sym_arithmetic_expansion;
	v->a[20768] = sym_string;
	v->a[20769] = sym_simple_expansion;
	v->a[20770] = sym_expansion;
	v->a[20771] = sym_command_substitution;
	v->a[20772] = actions(491);
	v->a[20773] = 17;
	v->a[20774] = anon_sym_PIPE;
	v->a[20775] = anon_sym_SEMI_SEMI;
	v->a[20776] = anon_sym_AMP_AMP;
	v->a[20777] = anon_sym_PIPE_PIPE;
	v->a[20778] = anon_sym_LT;
	v->a[20779] = anon_sym_GT;
	small_parse_table_1039(v);
}

void	small_parse_table_1039(t_small_parse_table_array *v)
{
	v->a[20780] = anon_sym_GT_GT;
	v->a[20781] = anon_sym_LT_AMP;
	v->a[20782] = anon_sym_GT_AMP;
	v->a[20783] = anon_sym_GT_PIPE;
	v->a[20784] = anon_sym_LT_AMP_DASH;
	v->a[20785] = anon_sym_GT_AMP_DASH;
	v->a[20786] = anon_sym_LT_LT;
	v->a[20787] = anon_sym_LT_LT_DASH;
	v->a[20788] = aux_sym_heredoc_redirect_token1;
	v->a[20789] = anon_sym_AMP;
	v->a[20790] = anon_sym_SEMI;
	v->a[20791] = 16;
	v->a[20792] = actions(3);
	v->a[20793] = 1;
	v->a[20794] = sym_comment;
	v->a[20795] = actions(166);
	v->a[20796] = 1;
	v->a[20797] = anon_sym_LPAREN;
	v->a[20798] = actions(471);
	v->a[20799] = 1;
	small_parse_table_1040(v);
}

/* EOF small_parse_table_207.c */
