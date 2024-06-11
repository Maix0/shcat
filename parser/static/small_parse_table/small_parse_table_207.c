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
	v->a[20700] = actions(467);
	v->a[20701] = 1;
	v->a[20702] = anon_sym_DOLLAR_LPAREN;
	v->a[20703] = actions(469);
	v->a[20704] = 1;
	v->a[20705] = anon_sym_BQUOTE;
	v->a[20706] = actions(471);
	v->a[20707] = 1;
	v->a[20708] = sym_file_descriptor;
	v->a[20709] = actions(473);
	v->a[20710] = 1;
	v->a[20711] = sym__bare_dollar;
	v->a[20712] = state(211);
	v->a[20713] = 1;
	v->a[20714] = aux_sym_command_repeat2;
	v->a[20715] = state(793);
	v->a[20716] = 1;
	v->a[20717] = sym_concatenation;
	v->a[20718] = state(1521);
	v->a[20719] = 1;
	small_parse_table_1036(v);
}

void	small_parse_table_1036(t_small_parse_table_array *v)
{
	v->a[20720] = sym_subshell;
	v->a[20721] = actions(455);
	v->a[20722] = 3;
	v->a[20723] = sym_raw_string;
	v->a[20724] = sym_number;
	v->a[20725] = sym_word;
	v->a[20726] = state(361);
	v->a[20727] = 5;
	v->a[20728] = sym_arithmetic_expansion;
	v->a[20729] = sym_string;
	v->a[20730] = sym_simple_expansion;
	v->a[20731] = sym_expansion;
	v->a[20732] = sym_command_substitution;
	v->a[20733] = actions(457);
	v->a[20734] = 20;
	v->a[20735] = anon_sym_esac;
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
	v->a[20755] = 6;
	v->a[20756] = actions(3);
	v->a[20757] = 1;
	v->a[20758] = sym_comment;
	v->a[20759] = actions(379);
	small_parse_table_1038(v);
}

void	small_parse_table_1038(t_small_parse_table_array *v)
{
	v->a[20760] = 1;
	v->a[20761] = sym_file_descriptor;
	v->a[20762] = actions(429);
	v->a[20763] = 1;
	v->a[20764] = sym_variable_name;
	v->a[20765] = actions(427);
	v->a[20766] = 2;
	v->a[20767] = aux_sym__simple_variable_name_token1;
	v->a[20768] = aux_sym__multiline_variable_name_token1;
	v->a[20769] = actions(425);
	v->a[20770] = 9;
	v->a[20771] = anon_sym_BANG;
	v->a[20772] = anon_sym_DASH;
	v->a[20773] = anon_sym_STAR;
	v->a[20774] = anon_sym_QMARK;
	v->a[20775] = anon_sym_DOLLAR;
	v->a[20776] = anon_sym_POUND;
	v->a[20777] = anon_sym_AT;
	v->a[20778] = anon_sym_0;
	v->a[20779] = anon_sym__;
	small_parse_table_1039(v);
}

void	small_parse_table_1039(t_small_parse_table_array *v)
{
	v->a[20780] = actions(381);
	v->a[20781] = 27;
	v->a[20782] = anon_sym_PIPE;
	v->a[20783] = anon_sym_SEMI_SEMI;
	v->a[20784] = anon_sym_AMP_AMP;
	v->a[20785] = anon_sym_PIPE_PIPE;
	v->a[20786] = anon_sym_LT;
	v->a[20787] = anon_sym_GT;
	v->a[20788] = anon_sym_GT_GT;
	v->a[20789] = anon_sym_AMP_GT;
	v->a[20790] = anon_sym_AMP_GT_GT;
	v->a[20791] = anon_sym_LT_AMP;
	v->a[20792] = anon_sym_GT_AMP;
	v->a[20793] = anon_sym_GT_PIPE;
	v->a[20794] = anon_sym_LT_AMP_DASH;
	v->a[20795] = anon_sym_GT_AMP_DASH;
	v->a[20796] = anon_sym_LT_LT;
	v->a[20797] = anon_sym_LT_LT_DASH;
	v->a[20798] = aux_sym_heredoc_redirect_token1;
	v->a[20799] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1040(v);
}

/* EOF small_parse_table_207.c */
