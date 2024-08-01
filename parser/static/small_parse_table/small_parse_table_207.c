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
	v->a[20700] = anon_sym_PIPE;
	v->a[20701] = anon_sym_SEMI_SEMI;
	v->a[20702] = anon_sym_AMP_AMP;
	v->a[20703] = anon_sym_PIPE_PIPE;
	v->a[20704] = anon_sym_LT;
	v->a[20705] = anon_sym_GT;
	v->a[20706] = anon_sym_GT_GT;
	v->a[20707] = anon_sym_LT_LT;
	v->a[20708] = aux_sym_heredoc_redirect_token1;
	v->a[20709] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20710] = anon_sym_DOLLAR;
	v->a[20711] = anon_sym_DQUOTE;
	v->a[20712] = sym_raw_string;
	v->a[20713] = sym_number;
	v->a[20714] = anon_sym_DOLLAR_LBRACE;
	v->a[20715] = anon_sym_DOLLAR_LPAREN;
	v->a[20716] = anon_sym_BQUOTE;
	v->a[20717] = sym_word;
	v->a[20718] = anon_sym_SEMI;
	v->a[20719] = 6;
	small_parse_table_1036(v);
}

void	small_parse_table_1036(t_small_parse_table_array *v)
{
	v->a[20720] = actions(3);
	v->a[20721] = 1;
	v->a[20722] = sym_comment;
	v->a[20723] = actions(764);
	v->a[20724] = 1;
	v->a[20725] = sym_variable_name;
	v->a[20726] = state(967);
	v->a[20727] = 2;
	v->a[20728] = sym_variable_assignment;
	v->a[20729] = aux_sym__variable_assignments_repeat1;
	v->a[20730] = state(925);
	v->a[20731] = 3;
	v->a[20732] = sym_file_redirect;
	v->a[20733] = sym_heredoc_redirect;
	v->a[20734] = aux_sym_redirected_statement_repeat1;
	v->a[20735] = actions(576);
	v->a[20736] = 8;
	v->a[20737] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20738] = anon_sym_DOLLAR;
	v->a[20739] = anon_sym_DQUOTE;
	small_parse_table_1037(v);
}

void	small_parse_table_1037(t_small_parse_table_array *v)
{
	v->a[20740] = sym_raw_string;
	v->a[20741] = sym_number;
	v->a[20742] = anon_sym_DOLLAR_LBRACE;
	v->a[20743] = anon_sym_DOLLAR_LPAREN;
	v->a[20744] = sym_word;
	v->a[20745] = actions(580);
	v->a[20746] = 11;
	v->a[20747] = anon_sym_PIPE;
	v->a[20748] = anon_sym_SEMI_SEMI;
	v->a[20749] = anon_sym_AMP_AMP;
	v->a[20750] = anon_sym_PIPE_PIPE;
	v->a[20751] = anon_sym_LT;
	v->a[20752] = anon_sym_GT;
	v->a[20753] = anon_sym_GT_GT;
	v->a[20754] = anon_sym_LT_LT;
	v->a[20755] = aux_sym_heredoc_redirect_token1;
	v->a[20756] = anon_sym_BQUOTE;
	v->a[20757] = anon_sym_SEMI;
	v->a[20758] = 7;
	v->a[20759] = actions(3);
	small_parse_table_1038(v);
}

void	small_parse_table_1038(t_small_parse_table_array *v)
{
	v->a[20760] = 1;
	v->a[20761] = sym_comment;
	v->a[20762] = actions(841);
	v->a[20763] = 1;
	v->a[20764] = sym__bare_dollar;
	v->a[20765] = actions(855);
	v->a[20766] = 1;
	v->a[20767] = anon_sym_LPAREN;
	v->a[20768] = actions(857);
	v->a[20769] = 1;
	v->a[20770] = aux_sym_concatenation_token1;
	v->a[20771] = actions(859);
	v->a[20772] = 1;
	v->a[20773] = sym__concat;
	v->a[20774] = state(283);
	v->a[20775] = 1;
	v->a[20776] = aux_sym_concatenation_repeat1;
	v->a[20777] = actions(833);
	v->a[20778] = 20;
	v->a[20779] = anon_sym_PIPE;
	small_parse_table_1039(v);
}

void	small_parse_table_1039(t_small_parse_table_array *v)
{
	v->a[20780] = anon_sym_RPAREN;
	v->a[20781] = anon_sym_SEMI_SEMI;
	v->a[20782] = anon_sym_AMP_AMP;
	v->a[20783] = anon_sym_PIPE_PIPE;
	v->a[20784] = anon_sym_LT;
	v->a[20785] = anon_sym_GT;
	v->a[20786] = anon_sym_GT_GT;
	v->a[20787] = anon_sym_LT_LT;
	v->a[20788] = aux_sym_heredoc_redirect_token1;
	v->a[20789] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[20790] = anon_sym_DOLLAR;
	v->a[20791] = anon_sym_DQUOTE;
	v->a[20792] = sym_raw_string;
	v->a[20793] = sym_number;
	v->a[20794] = anon_sym_DOLLAR_LBRACE;
	v->a[20795] = anon_sym_DOLLAR_LPAREN;
	v->a[20796] = anon_sym_BQUOTE;
	v->a[20797] = sym_word;
	v->a[20798] = anon_sym_SEMI;
	v->a[20799] = 7;
	small_parse_table_1040(v);
}

/* EOF small_parse_table_207.c */
