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
	v->a[20700] = 3;
	v->a[20701] = sym_raw_string;
	v->a[20702] = sym_number;
	v->a[20703] = sym_word;
	v->a[20704] = state(396);
	v->a[20705] = 5;
	v->a[20706] = sym_arithmetic_expansion;
	v->a[20707] = sym_string;
	v->a[20708] = sym_simple_expansion;
	v->a[20709] = sym_expansion;
	v->a[20710] = sym_command_substitution;
	v->a[20711] = actions(628);
	v->a[20712] = 16;
	v->a[20713] = anon_sym_PIPE;
	v->a[20714] = anon_sym_RPAREN;
	v->a[20715] = anon_sym_SEMI_SEMI;
	v->a[20716] = anon_sym_AMP_AMP;
	v->a[20717] = anon_sym_PIPE_PIPE;
	v->a[20718] = anon_sym_LT;
	v->a[20719] = anon_sym_GT;
	small_parse_table_1036(v);
}

void	small_parse_table_1036(t_small_parse_table_array *v)
{
	v->a[20720] = anon_sym_GT_GT;
	v->a[20721] = anon_sym_LT_AMP;
	v->a[20722] = anon_sym_GT_AMP;
	v->a[20723] = anon_sym_GT_PIPE;
	v->a[20724] = anon_sym_LT_GT;
	v->a[20725] = anon_sym_LT_LT;
	v->a[20726] = anon_sym_LT_LT_DASH;
	v->a[20727] = aux_sym_heredoc_redirect_token1;
	v->a[20728] = anon_sym_SEMI;
	v->a[20729] = 15;
	v->a[20730] = actions(501);
	v->a[20731] = 1;
	v->a[20732] = sym_comment;
	v->a[20733] = actions(650);
	v->a[20734] = 1;
	v->a[20735] = anon_sym_PIPE;
	v->a[20736] = actions(652);
	v->a[20737] = 1;
	v->a[20738] = anon_sym_AMP_AMP;
	v->a[20739] = actions(654);
	small_parse_table_1037(v);
}

void	small_parse_table_1037(t_small_parse_table_array *v)
{
	v->a[20740] = 1;
	v->a[20741] = anon_sym_PIPE_PIPE;
	v->a[20742] = actions(656);
	v->a[20743] = 1;
	v->a[20744] = anon_sym_EQ;
	v->a[20745] = actions(664);
	v->a[20746] = 1;
	v->a[20747] = anon_sym_CARET;
	v->a[20748] = actions(666);
	v->a[20749] = 1;
	v->a[20750] = anon_sym_AMP;
	v->a[20751] = actions(499);
	v->a[20752] = 2;
	v->a[20753] = anon_sym_PLUS_PLUS2;
	v->a[20754] = anon_sym_DASH_DASH2;
	v->a[20755] = actions(658);
	v->a[20756] = 2;
	v->a[20757] = anon_sym_LT;
	v->a[20758] = anon_sym_GT;
	v->a[20759] = actions(660);
	small_parse_table_1038(v);
}

void	small_parse_table_1038(t_small_parse_table_array *v)
{
	v->a[20760] = 2;
	v->a[20761] = anon_sym_GT_GT;
	v->a[20762] = anon_sym_LT_LT;
	v->a[20763] = actions(668);
	v->a[20764] = 2;
	v->a[20765] = anon_sym_EQ_EQ;
	v->a[20766] = anon_sym_BANG_EQ;
	v->a[20767] = actions(670);
	v->a[20768] = 2;
	v->a[20769] = anon_sym_LT_EQ;
	v->a[20770] = anon_sym_GT_EQ;
	v->a[20771] = actions(672);
	v->a[20772] = 2;
	v->a[20773] = anon_sym_PLUS;
	v->a[20774] = anon_sym_DASH;
	v->a[20775] = actions(674);
	v->a[20776] = 3;
	v->a[20777] = anon_sym_STAR;
	v->a[20778] = anon_sym_SLASH;
	v->a[20779] = anon_sym_PERCENT;
	small_parse_table_1039(v);
}

void	small_parse_table_1039(t_small_parse_table_array *v)
{
	v->a[20780] = actions(662);
	v->a[20781] = 13;
	v->a[20782] = anon_sym_RPAREN_RPAREN;
	v->a[20783] = anon_sym_PLUS_EQ;
	v->a[20784] = anon_sym_DASH_EQ;
	v->a[20785] = anon_sym_STAR_EQ;
	v->a[20786] = anon_sym_SLASH_EQ;
	v->a[20787] = anon_sym_PERCENT_EQ;
	v->a[20788] = anon_sym_LT_LT_EQ;
	v->a[20789] = anon_sym_GT_GT_EQ;
	v->a[20790] = anon_sym_AMP_EQ;
	v->a[20791] = anon_sym_CARET_EQ;
	v->a[20792] = anon_sym_PIPE_EQ;
	v->a[20793] = anon_sym_QMARK;
	v->a[20794] = anon_sym_COLON;
	v->a[20795] = 5;
	v->a[20796] = actions(3);
	v->a[20797] = 1;
	v->a[20798] = sym_comment;
	v->a[20799] = actions(678);
	small_parse_table_1040(v);
}

/* EOF small_parse_table_207.c */
