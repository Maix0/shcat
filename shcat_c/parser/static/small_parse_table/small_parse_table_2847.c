/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2847.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14235(t_small_parse_table_array *v)
{
	v->a[284700] = anon_sym_PIPE_AMP;
	v->a[284701] = anon_sym_RBRACK;
	v->a[284702] = anon_sym_AMP_GT_GT;
	v->a[284703] = anon_sym_GT_PIPE;
	v->a[284704] = anon_sym_LT_AMP_DASH;
	v->a[284705] = anon_sym_GT_AMP_DASH;
	v->a[284706] = anon_sym_LT_LT_DASH;
	v->a[284707] = 3;
	v->a[284708] = actions(71);
	v->a[284709] = 1;
	v->a[284710] = sym_comment;
	v->a[284711] = actions(1324);
	v->a[284712] = 7;
	v->a[284713] = anon_sym_PIPE;
	v->a[284714] = anon_sym_LT;
	v->a[284715] = anon_sym_GT;
	v->a[284716] = anon_sym_LT_LT;
	v->a[284717] = anon_sym_AMP_GT;
	v->a[284718] = anon_sym_LT_AMP;
	v->a[284719] = anon_sym_GT_AMP;
	small_parse_table_14236(v);
}

void	small_parse_table_14236(t_small_parse_table_array *v)
{
	v->a[284720] = actions(1326);
	v->a[284721] = 14;
	v->a[284722] = sym_file_descriptor;
	v->a[284723] = sym__concat;
	v->a[284724] = anon_sym_PIPE_PIPE;
	v->a[284725] = anon_sym_AMP_AMP;
	v->a[284726] = anon_sym_GT_GT;
	v->a[284727] = anon_sym_PIPE_AMP;
	v->a[284728] = anon_sym_RBRACK;
	v->a[284729] = anon_sym_AMP_GT_GT;
	v->a[284730] = anon_sym_GT_PIPE;
	v->a[284731] = anon_sym_LT_AMP_DASH;
	v->a[284732] = anon_sym_GT_AMP_DASH;
	v->a[284733] = anon_sym_LT_LT_DASH;
	v->a[284734] = anon_sym_LT_LT_LT;
	v->a[284735] = aux_sym_concatenation_token1;
	v->a[284736] = 9;
	v->a[284737] = actions(3);
	v->a[284738] = 1;
	v->a[284739] = sym_comment;
	small_parse_table_14237(v);
}

void	small_parse_table_14237(t_small_parse_table_array *v)
{
	v->a[284740] = actions(5942);
	v->a[284741] = 1;
	v->a[284742] = aux_sym_heredoc_redirect_token1;
	v->a[284743] = actions(12778);
	v->a[284744] = 1;
	v->a[284745] = sym_file_descriptor;
	v->a[284746] = actions(4253);
	v->a[284747] = 2;
	v->a[284748] = anon_sym_PIPE;
	v->a[284749] = anon_sym_PIPE_AMP;
	v->a[284750] = actions(4692);
	v->a[284751] = 2;
	v->a[284752] = anon_sym_LT_LT;
	v->a[284753] = anon_sym_LT_LT_DASH;
	v->a[284754] = actions(5940);
	v->a[284755] = 2;
	v->a[284756] = anon_sym_PIPE_PIPE;
	v->a[284757] = anon_sym_AMP_AMP;
	v->a[284758] = actions(12346);
	v->a[284759] = 2;
	small_parse_table_14238(v);
}

void	small_parse_table_14238(t_small_parse_table_array *v)
{
	v->a[284760] = anon_sym_LT_AMP_DASH;
	v->a[284761] = anon_sym_GT_AMP_DASH;
	v->a[284762] = state(5366);
	v->a[284763] = 3;
	v->a[284764] = sym_file_redirect;
	v->a[284765] = sym_heredoc_redirect;
	v->a[284766] = aux_sym_redirected_statement_repeat1;
	v->a[284767] = actions(12344);
	v->a[284768] = 8;
	v->a[284769] = anon_sym_LT;
	v->a[284770] = anon_sym_GT;
	v->a[284771] = anon_sym_GT_GT;
	v->a[284772] = anon_sym_AMP_GT;
	v->a[284773] = anon_sym_AMP_GT_GT;
	v->a[284774] = anon_sym_LT_AMP;
	v->a[284775] = anon_sym_GT_AMP;
	v->a[284776] = anon_sym_GT_PIPE;
	v->a[284777] = 10;
	v->a[284778] = actions(71);
	v->a[284779] = 1;
	small_parse_table_14239(v);
}

void	small_parse_table_14239(t_small_parse_table_array *v)
{
	v->a[284780] = sym_comment;
	v->a[284781] = actions(11420);
	v->a[284782] = 1;
	v->a[284783] = anon_sym_PIPE;
	v->a[284784] = actions(12797);
	v->a[284785] = 1;
	v->a[284786] = anon_sym_LT_LT;
	v->a[284787] = actions(12806);
	v->a[284788] = 1;
	v->a[284789] = anon_sym_LT_LT_DASH;
	v->a[284790] = actions(12809);
	v->a[284791] = 1;
	v->a[284792] = sym_file_descriptor;
	v->a[284793] = actions(12803);
	v->a[284794] = 2;
	v->a[284795] = anon_sym_LT_AMP_DASH;
	v->a[284796] = anon_sym_GT_AMP_DASH;
	v->a[284797] = actions(12800);
	v->a[284798] = 3;
	v->a[284799] = anon_sym_GT_GT;
	small_parse_table_14240(v);
}

/* EOF small_parse_table_2847.c */
