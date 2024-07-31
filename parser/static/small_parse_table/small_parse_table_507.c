/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_507.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2535(t_small_parse_table_array *v)
{
	v->a[50700] = state(984);
	v->a[50701] = 3;
	v->a[50702] = sym_file_redirect;
	v->a[50703] = sym_heredoc_redirect;
	v->a[50704] = aux_sym_redirected_statement_repeat1;
	v->a[50705] = actions(1676);
	v->a[50706] = 7;
	v->a[50707] = anon_sym_LT;
	v->a[50708] = anon_sym_GT;
	v->a[50709] = anon_sym_GT_GT;
	v->a[50710] = anon_sym_LT_AMP;
	v->a[50711] = anon_sym_GT_AMP;
	v->a[50712] = anon_sym_GT_PIPE;
	v->a[50713] = anon_sym_LT_GT;
	v->a[50714] = 6;
	v->a[50715] = actions(3);
	v->a[50716] = 1;
	v->a[50717] = sym_comment;
	v->a[50718] = actions(1686);
	v->a[50719] = 1;
	small_parse_table_2536(v);
}

void	small_parse_table_2536(t_small_parse_table_array *v)
{
	v->a[50720] = aux_sym_heredoc_redirect_token1;
	v->a[50721] = actions(1736);
	v->a[50722] = 2;
	v->a[50723] = anon_sym_LT_LT;
	v->a[50724] = anon_sym_LT_LT_DASH;
	v->a[50725] = state(957);
	v->a[50726] = 3;
	v->a[50727] = sym_file_redirect;
	v->a[50728] = sym_heredoc_redirect;
	v->a[50729] = aux_sym_redirected_statement_repeat1;
	v->a[50730] = actions(1678);
	v->a[50731] = 6;
	v->a[50732] = anon_sym_esac;
	v->a[50733] = anon_sym_PIPE;
	v->a[50734] = anon_sym_SEMI_SEMI;
	v->a[50735] = anon_sym_AMP_AMP;
	v->a[50736] = anon_sym_PIPE_PIPE;
	v->a[50737] = anon_sym_SEMI;
	v->a[50738] = actions(1733);
	v->a[50739] = 7;
	small_parse_table_2537(v);
}

void	small_parse_table_2537(t_small_parse_table_array *v)
{
	v->a[50740] = anon_sym_LT;
	v->a[50741] = anon_sym_GT;
	v->a[50742] = anon_sym_GT_GT;
	v->a[50743] = anon_sym_LT_AMP;
	v->a[50744] = anon_sym_GT_AMP;
	v->a[50745] = anon_sym_GT_PIPE;
	v->a[50746] = anon_sym_LT_GT;
	v->a[50747] = 3;
	v->a[50748] = actions(3);
	v->a[50749] = 1;
	v->a[50750] = sym_comment;
	v->a[50751] = actions(441);
	v->a[50752] = 3;
	v->a[50753] = sym__concat;
	v->a[50754] = sym_variable_name;
	v->a[50755] = aux_sym_heredoc_redirect_token1;
	v->a[50756] = actions(439);
	v->a[50757] = 16;
	v->a[50758] = anon_sym_esac;
	v->a[50759] = anon_sym_PIPE;
	small_parse_table_2538(v);
}

void	small_parse_table_2538(t_small_parse_table_array *v)
{
	v->a[50760] = anon_sym_SEMI_SEMI;
	v->a[50761] = anon_sym_AMP_AMP;
	v->a[50762] = anon_sym_PIPE_PIPE;
	v->a[50763] = anon_sym_LT;
	v->a[50764] = anon_sym_GT;
	v->a[50765] = anon_sym_GT_GT;
	v->a[50766] = anon_sym_LT_AMP;
	v->a[50767] = anon_sym_GT_AMP;
	v->a[50768] = anon_sym_GT_PIPE;
	v->a[50769] = anon_sym_LT_GT;
	v->a[50770] = anon_sym_LT_LT;
	v->a[50771] = anon_sym_LT_LT_DASH;
	v->a[50772] = aux_sym_concatenation_token1;
	v->a[50773] = anon_sym_SEMI;
	v->a[50774] = 5;
	v->a[50775] = actions(3);
	v->a[50776] = 1;
	v->a[50777] = sym_comment;
	v->a[50778] = actions(1692);
	v->a[50779] = 1;
	small_parse_table_2539(v);
}

void	small_parse_table_2539(t_small_parse_table_array *v)
{
	v->a[50780] = aux_sym_heredoc_redirect_token1;
	v->a[50781] = actions(1739);
	v->a[50782] = 1;
	v->a[50783] = sym_variable_name;
	v->a[50784] = state(969);
	v->a[50785] = 2;
	v->a[50786] = sym_variable_assignment;
	v->a[50787] = aux_sym__variable_assignments_repeat1;
	v->a[50788] = actions(1694);
	v->a[50789] = 15;
	v->a[50790] = anon_sym_PIPE;
	v->a[50791] = anon_sym_RPAREN;
	v->a[50792] = anon_sym_SEMI_SEMI;
	v->a[50793] = anon_sym_AMP_AMP;
	v->a[50794] = anon_sym_PIPE_PIPE;
	v->a[50795] = anon_sym_LT;
	v->a[50796] = anon_sym_GT;
	v->a[50797] = anon_sym_GT_GT;
	v->a[50798] = anon_sym_LT_AMP;
	v->a[50799] = anon_sym_GT_AMP;
	small_parse_table_2540(v);
}

/* EOF small_parse_table_507.c */
