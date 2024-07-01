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
	v->a[60700] = actions(2037);
	v->a[60701] = 6;
	v->a[60702] = anon_sym_LT;
	v->a[60703] = anon_sym_GT;
	v->a[60704] = anon_sym_GT_GT;
	v->a[60705] = anon_sym_LT_AMP;
	v->a[60706] = anon_sym_GT_AMP;
	v->a[60707] = anon_sym_GT_PIPE;
	v->a[60708] = 12;
	v->a[60709] = actions(3);
	v->a[60710] = 1;
	v->a[60711] = sym_comment;
	v->a[60712] = actions(682);
	v->a[60713] = 1;
	v->a[60714] = anon_sym_PIPE;
	v->a[60715] = actions(695);
	v->a[60716] = 1;
	v->a[60717] = anon_sym_BQUOTE;
	v->a[60718] = actions(2009);
	v->a[60719] = 1;
	small_parse_table_3036(v);
}

void	small_parse_table_3036(t_small_parse_table_array *v)
{
	v->a[60720] = aux_sym_heredoc_redirect_token1;
	v->a[60721] = actions(2041);
	v->a[60722] = 1;
	v->a[60723] = sym_file_descriptor;
	v->a[60724] = state(815);
	v->a[60725] = 1;
	v->a[60726] = sym_terminator;
	v->a[60727] = actions(754);
	v->a[60728] = 2;
	v->a[60729] = anon_sym_LT_LT;
	v->a[60730] = anon_sym_LT_LT_DASH;
	v->a[60731] = actions(963);
	v->a[60732] = 2;
	v->a[60733] = anon_sym_AMP_AMP;
	v->a[60734] = anon_sym_PIPE_PIPE;
	v->a[60735] = actions(2039);
	v->a[60736] = 2;
	v->a[60737] = anon_sym_LT_AMP_DASH;
	v->a[60738] = anon_sym_GT_AMP_DASH;
	v->a[60739] = actions(750);
	small_parse_table_3037(v);
}

void	small_parse_table_3037(t_small_parse_table_array *v)
{
	v->a[60740] = 3;
	v->a[60741] = anon_sym_SEMI_SEMI;
	v->a[60742] = anon_sym_AMP;
	v->a[60743] = anon_sym_SEMI;
	v->a[60744] = state(1165);
	v->a[60745] = 3;
	v->a[60746] = sym_file_redirect;
	v->a[60747] = sym_heredoc_redirect;
	v->a[60748] = aux_sym_redirected_statement_repeat1;
	v->a[60749] = actions(2037);
	v->a[60750] = 6;
	v->a[60751] = anon_sym_LT;
	v->a[60752] = anon_sym_GT;
	v->a[60753] = anon_sym_GT_GT;
	v->a[60754] = anon_sym_LT_AMP;
	v->a[60755] = anon_sym_GT_AMP;
	v->a[60756] = anon_sym_GT_PIPE;
	v->a[60757] = 12;
	v->a[60758] = actions(3);
	v->a[60759] = 1;
	small_parse_table_3038(v);
}

void	small_parse_table_3038(t_small_parse_table_array *v)
{
	v->a[60760] = sym_comment;
	v->a[60761] = actions(682);
	v->a[60762] = 1;
	v->a[60763] = anon_sym_PIPE;
	v->a[60764] = actions(2017);
	v->a[60765] = 1;
	v->a[60766] = aux_sym_heredoc_redirect_token1;
	v->a[60767] = actions(2019);
	v->a[60768] = 1;
	v->a[60769] = sym_file_descriptor;
	v->a[60770] = state(687);
	v->a[60771] = 1;
	v->a[60772] = sym_terminator;
	v->a[60773] = actions(684);
	v->a[60774] = 2;
	v->a[60775] = anon_sym_AMP_AMP;
	v->a[60776] = anon_sym_PIPE_PIPE;
	v->a[60777] = actions(686);
	v->a[60778] = 2;
	v->a[60779] = anon_sym_LT_LT;
	small_parse_table_3039(v);
}

void	small_parse_table_3039(t_small_parse_table_array *v)
{
	v->a[60780] = anon_sym_LT_LT_DASH;
	v->a[60781] = actions(688);
	v->a[60782] = 2;
	v->a[60783] = anon_sym_AMP;
	v->a[60784] = anon_sym_SEMI;
	v->a[60785] = actions(695);
	v->a[60786] = 2;
	v->a[60787] = anon_sym_esac;
	v->a[60788] = anon_sym_SEMI_SEMI;
	v->a[60789] = actions(2015);
	v->a[60790] = 2;
	v->a[60791] = anon_sym_LT_AMP_DASH;
	v->a[60792] = anon_sym_GT_AMP_DASH;
	v->a[60793] = state(1176);
	v->a[60794] = 3;
	v->a[60795] = sym_file_redirect;
	v->a[60796] = sym_heredoc_redirect;
	v->a[60797] = aux_sym_redirected_statement_repeat1;
	v->a[60798] = actions(2013);
	v->a[60799] = 6;
	small_parse_table_3040(v);
}

/* EOF small_parse_table_607.c */
