/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_747.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3735(t_small_parse_table_array *v)
{
	v->a[74700] = anon_sym_PIPE_PIPE;
	v->a[74701] = anon_sym_GT_GT;
	v->a[74702] = anon_sym_GT_PIPE;
	v->a[74703] = anon_sym_LT_AMP_DASH;
	v->a[74704] = anon_sym_GT_AMP_DASH;
	v->a[74705] = anon_sym_LT_LT_DASH;
	v->a[74706] = aux_sym_concatenation_token1;
	v->a[74707] = 12;
	v->a[74708] = actions(3);
	v->a[74709] = 1;
	v->a[74710] = sym_comment;
	v->a[74711] = actions(2715);
	v->a[74712] = 1;
	v->a[74713] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[74714] = actions(2717);
	v->a[74715] = 1;
	v->a[74716] = anon_sym_DOLLAR;
	v->a[74717] = actions(2719);
	v->a[74718] = 1;
	v->a[74719] = anon_sym_DQUOTE;
	small_parse_table_3736(v);
}

void	small_parse_table_3736(t_small_parse_table_array *v)
{
	v->a[74720] = actions(2721);
	v->a[74721] = 1;
	v->a[74722] = anon_sym_DOLLAR_LBRACE;
	v->a[74723] = actions(2723);
	v->a[74724] = 1;
	v->a[74725] = anon_sym_DOLLAR_LPAREN;
	v->a[74726] = actions(2725);
	v->a[74727] = 1;
	v->a[74728] = anon_sym_BQUOTE;
	v->a[74729] = actions(2727);
	v->a[74730] = 1;
	v->a[74731] = sym__comment_word;
	v->a[74732] = actions(2729);
	v->a[74733] = 1;
	v->a[74734] = sym__empty_value;
	v->a[74735] = state(997);
	v->a[74736] = 1;
	v->a[74737] = sym_concatenation;
	v->a[74738] = actions(2713);
	v->a[74739] = 3;
	small_parse_table_3737(v);
}

void	small_parse_table_3737(t_small_parse_table_array *v)
{
	v->a[74740] = sym_raw_string;
	v->a[74741] = sym_number;
	v->a[74742] = sym_word;
	v->a[74743] = state(880);
	v->a[74744] = 5;
	v->a[74745] = sym_arithmetic_expansion;
	v->a[74746] = sym_string;
	v->a[74747] = sym_simple_expansion;
	v->a[74748] = sym_expansion;
	v->a[74749] = sym_command_substitution;
	v->a[74750] = 7;
	v->a[74751] = actions(3);
	v->a[74752] = 1;
	v->a[74753] = sym_comment;
	v->a[74754] = actions(2222);
	v->a[74755] = 1;
	v->a[74756] = aux_sym_heredoc_redirect_token1;
	v->a[74757] = actions(2731);
	v->a[74758] = 1;
	v->a[74759] = sym_file_descriptor;
	small_parse_table_3738(v);
}

void	small_parse_table_3738(t_small_parse_table_array *v)
{
	v->a[74760] = actions(2542);
	v->a[74761] = 2;
	v->a[74762] = anon_sym_LT_AMP_DASH;
	v->a[74763] = anon_sym_GT_AMP_DASH;
	v->a[74764] = state(1445);
	v->a[74765] = 2;
	v->a[74766] = sym_file_redirect;
	v->a[74767] = aux_sym_redirected_statement_repeat2;
	v->a[74768] = actions(2224);
	v->a[74769] = 5;
	v->a[74770] = anon_sym_PIPE;
	v->a[74771] = anon_sym_AMP_AMP;
	v->a[74772] = anon_sym_PIPE_PIPE;
	v->a[74773] = anon_sym_LT_LT;
	v->a[74774] = anon_sym_LT_LT_DASH;
	v->a[74775] = actions(2540);
	v->a[74776] = 6;
	v->a[74777] = anon_sym_LT;
	v->a[74778] = anon_sym_GT;
	v->a[74779] = anon_sym_GT_GT;
	small_parse_table_3739(v);
}

void	small_parse_table_3739(t_small_parse_table_array *v)
{
	v->a[74780] = anon_sym_LT_AMP;
	v->a[74781] = anon_sym_GT_AMP;
	v->a[74782] = anon_sym_GT_PIPE;
	v->a[74783] = 10;
	v->a[74784] = actions(3);
	v->a[74785] = 1;
	v->a[74786] = sym_comment;
	v->a[74787] = actions(2643);
	v->a[74788] = 1;
	v->a[74789] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[74790] = actions(2647);
	v->a[74791] = 1;
	v->a[74792] = anon_sym_DQUOTE;
	v->a[74793] = actions(2649);
	v->a[74794] = 1;
	v->a[74795] = anon_sym_DOLLAR_LBRACE;
	v->a[74796] = actions(2651);
	v->a[74797] = 1;
	v->a[74798] = anon_sym_DOLLAR_LPAREN;
	v->a[74799] = actions(2653);
	small_parse_table_3740(v);
}

/* EOF small_parse_table_747.c */
