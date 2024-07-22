/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_607.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3035(t_small_parse_table_array *v)
{
	v->a[60700] = actions(1888);
	v->a[60701] = 1;
	v->a[60702] = aux_sym_heredoc_redirect_token1;
	v->a[60703] = actions(1945);
	v->a[60704] = 1;
	v->a[60705] = sym_file_descriptor;
	v->a[60706] = state(581);
	v->a[60707] = 1;
	v->a[60708] = sym_terminator;
	v->a[60709] = actions(790);
	v->a[60710] = 2;
	v->a[60711] = anon_sym_LT_LT;
	v->a[60712] = anon_sym_LT_LT_DASH;
	v->a[60713] = actions(1028);
	v->a[60714] = 2;
	v->a[60715] = anon_sym_AMP_AMP;
	v->a[60716] = anon_sym_PIPE_PIPE;
	v->a[60717] = state(1194);
	v->a[60718] = 3;
	v->a[60719] = sym_file_redirect;
	small_parse_table_3036(v);
}

void	small_parse_table_3036(t_small_parse_table_array *v)
{
	v->a[60720] = sym_heredoc_redirect;
	v->a[60721] = aux_sym_redirected_statement_repeat1;
	v->a[60722] = actions(1941);
	v->a[60723] = 7;
	v->a[60724] = anon_sym_LT;
	v->a[60725] = anon_sym_GT;
	v->a[60726] = anon_sym_GT_GT;
	v->a[60727] = anon_sym_LT_AMP;
	v->a[60728] = anon_sym_GT_AMP;
	v->a[60729] = anon_sym_GT_PIPE;
	v->a[60730] = anon_sym_LT_GT;
	v->a[60731] = 5;
	v->a[60732] = actions(3);
	v->a[60733] = 1;
	v->a[60734] = sym_comment;
	v->a[60735] = actions(792);
	v->a[60736] = 1;
	v->a[60737] = sym_file_descriptor;
	v->a[60738] = actions(1435);
	v->a[60739] = 1;
	small_parse_table_3037(v);
}

void	small_parse_table_3037(t_small_parse_table_array *v)
{
	v->a[60740] = sym_variable_name;
	v->a[60741] = state(1370);
	v->a[60742] = 2;
	v->a[60743] = sym_variable_assignment;
	v->a[60744] = aux_sym__variable_assignments_repeat1;
	v->a[60745] = actions(780);
	v->a[60746] = 16;
	v->a[60747] = anon_sym_LT;
	v->a[60748] = anon_sym_GT;
	v->a[60749] = anon_sym_GT_GT;
	v->a[60750] = anon_sym_LT_AMP;
	v->a[60751] = anon_sym_GT_AMP;
	v->a[60752] = anon_sym_GT_PIPE;
	v->a[60753] = anon_sym_LT_GT;
	v->a[60754] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[60755] = anon_sym_DOLLAR;
	v->a[60756] = anon_sym_DQUOTE;
	v->a[60757] = sym_raw_string;
	v->a[60758] = sym_number;
	v->a[60759] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3038(v);
}

void	small_parse_table_3038(t_small_parse_table_array *v)
{
	v->a[60760] = anon_sym_DOLLAR_LPAREN;
	v->a[60761] = anon_sym_BQUOTE;
	v->a[60762] = sym_word;
	v->a[60763] = 6;
	v->a[60764] = actions(3);
	v->a[60765] = 1;
	v->a[60766] = sym_comment;
	v->a[60767] = actions(2061);
	v->a[60768] = 1;
	v->a[60769] = aux_sym_heredoc_redirect_token1;
	v->a[60770] = actions(2063);
	v->a[60771] = 1;
	v->a[60772] = sym_file_descriptor;
	v->a[60773] = state(1147);
	v->a[60774] = 2;
	v->a[60775] = sym_file_redirect;
	v->a[60776] = aux_sym_redirected_statement_repeat2;
	v->a[60777] = actions(1886);
	v->a[60778] = 7;
	v->a[60779] = anon_sym_LT;
	small_parse_table_3039(v);
}

void	small_parse_table_3039(t_small_parse_table_array *v)
{
	v->a[60780] = anon_sym_GT;
	v->a[60781] = anon_sym_GT_GT;
	v->a[60782] = anon_sym_LT_AMP;
	v->a[60783] = anon_sym_GT_AMP;
	v->a[60784] = anon_sym_GT_PIPE;
	v->a[60785] = anon_sym_LT_GT;
	v->a[60786] = actions(2059);
	v->a[60787] = 8;
	v->a[60788] = anon_sym_PIPE;
	v->a[60789] = anon_sym_SEMI_SEMI;
	v->a[60790] = anon_sym_AMP_AMP;
	v->a[60791] = anon_sym_PIPE_PIPE;
	v->a[60792] = anon_sym_LT_LT;
	v->a[60793] = anon_sym_LT_LT_DASH;
	v->a[60794] = anon_sym_BQUOTE;
	v->a[60795] = anon_sym_SEMI;
	v->a[60796] = 3;
	v->a[60797] = actions(3);
	v->a[60798] = 1;
	v->a[60799] = sym_comment;
	small_parse_table_3040(v);
}

/* EOF small_parse_table_607.c */
