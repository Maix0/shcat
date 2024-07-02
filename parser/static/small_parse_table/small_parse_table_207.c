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
	v->a[20700] = anon_sym_GT_AMP;
	v->a[20701] = anon_sym_GT_PIPE;
	v->a[20702] = anon_sym_LT_GT;
	v->a[20703] = anon_sym_LT_LT;
	v->a[20704] = anon_sym_LT_LT_DASH;
	v->a[20705] = aux_sym_heredoc_redirect_token1;
	v->a[20706] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20707] = anon_sym_AMP;
	v->a[20708] = anon_sym_DOLLAR;
	v->a[20709] = anon_sym_DQUOTE;
	v->a[20710] = sym_raw_string;
	v->a[20711] = sym_number;
	v->a[20712] = anon_sym_DOLLAR_LBRACE;
	v->a[20713] = anon_sym_DOLLAR_LPAREN;
	v->a[20714] = anon_sym_BQUOTE;
	v->a[20715] = sym_word;
	v->a[20716] = anon_sym_SEMI;
	v->a[20717] = 14;
	v->a[20718] = actions(3);
	v->a[20719] = 1;
	small_parse_table_1036(v);
}

void	small_parse_table_1036(t_small_parse_table_array *v)
{
	v->a[20720] = sym_comment;
	v->a[20721] = actions(565);
	v->a[20722] = 1;
	v->a[20723] = sym_file_descriptor;
	v->a[20724] = actions(618);
	v->a[20725] = 1;
	v->a[20726] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20727] = actions(621);
	v->a[20728] = 1;
	v->a[20729] = anon_sym_DOLLAR;
	v->a[20730] = actions(624);
	v->a[20731] = 1;
	v->a[20732] = anon_sym_DQUOTE;
	v->a[20733] = actions(627);
	v->a[20734] = 1;
	v->a[20735] = anon_sym_DOLLAR_LBRACE;
	v->a[20736] = actions(630);
	v->a[20737] = 1;
	v->a[20738] = anon_sym_DOLLAR_LPAREN;
	v->a[20739] = actions(633);
	small_parse_table_1037(v);
}

void	small_parse_table_1037(t_small_parse_table_array *v)
{
	v->a[20740] = 1;
	v->a[20741] = anon_sym_BQUOTE;
	v->a[20742] = actions(636);
	v->a[20743] = 1;
	v->a[20744] = sym__bare_dollar;
	v->a[20745] = state(201);
	v->a[20746] = 1;
	v->a[20747] = aux_sym_command_repeat2;
	v->a[20748] = state(666);
	v->a[20749] = 1;
	v->a[20750] = sym_concatenation;
	v->a[20751] = actions(615);
	v->a[20752] = 3;
	v->a[20753] = sym_raw_string;
	v->a[20754] = sym_number;
	v->a[20755] = sym_word;
	v->a[20756] = state(420);
	v->a[20757] = 5;
	v->a[20758] = sym_arithmetic_expansion;
	v->a[20759] = sym_string;
	small_parse_table_1038(v);
}

void	small_parse_table_1038(t_small_parse_table_array *v)
{
	v->a[20760] = sym_simple_expansion;
	v->a[20761] = sym_expansion;
	v->a[20762] = sym_command_substitution;
	v->a[20763] = actions(545);
	v->a[20764] = 17;
	v->a[20765] = anon_sym_esac;
	v->a[20766] = anon_sym_PIPE;
	v->a[20767] = anon_sym_SEMI_SEMI;
	v->a[20768] = anon_sym_AMP_AMP;
	v->a[20769] = anon_sym_PIPE_PIPE;
	v->a[20770] = anon_sym_LT;
	v->a[20771] = anon_sym_GT;
	v->a[20772] = anon_sym_GT_GT;
	v->a[20773] = anon_sym_LT_AMP;
	v->a[20774] = anon_sym_GT_AMP;
	v->a[20775] = anon_sym_GT_PIPE;
	v->a[20776] = anon_sym_LT_GT;
	v->a[20777] = anon_sym_LT_LT;
	v->a[20778] = anon_sym_LT_LT_DASH;
	v->a[20779] = aux_sym_heredoc_redirect_token1;
	small_parse_table_1039(v);
}

void	small_parse_table_1039(t_small_parse_table_array *v)
{
	v->a[20780] = anon_sym_AMP;
	v->a[20781] = anon_sym_SEMI;
	v->a[20782] = 5;
	v->a[20783] = actions(3);
	v->a[20784] = 1;
	v->a[20785] = sym_comment;
	v->a[20786] = state(203);
	v->a[20787] = 2;
	v->a[20788] = sym_concatenation;
	v->a[20789] = aux_sym_for_statement_repeat1;
	v->a[20790] = actions(515);
	v->a[20791] = 3;
	v->a[20792] = sym_file_descriptor;
	v->a[20793] = sym_variable_name;
	v->a[20794] = ts_builtin_sym_end;
	v->a[20795] = state(394);
	v->a[20796] = 5;
	v->a[20797] = sym_arithmetic_expansion;
	v->a[20798] = sym_string;
	v->a[20799] = sym_simple_expansion;
	small_parse_table_1040(v);
}

/* EOF small_parse_table_207.c */
