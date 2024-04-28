/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2617.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13085(t_small_parse_table_array *v)
{
	v->a[261700] = aux_sym_heredoc_redirect_token1;
	v->a[261701] = actions(11941);
	v->a[261702] = 1;
	v->a[261703] = sym_file_descriptor;
	v->a[261704] = actions(11487);
	v->a[261705] = 2;
	v->a[261706] = anon_sym_LT_AMP_DASH;
	v->a[261707] = anon_sym_GT_AMP_DASH;
	v->a[261708] = state(5017);
	v->a[261709] = 2;
	v->a[261710] = sym_file_redirect;
	v->a[261711] = sym_herestring_redirect;
	v->a[261712] = actions(11485);
	v->a[261713] = 8;
	v->a[261714] = anon_sym_LT;
	v->a[261715] = anon_sym_GT;
	v->a[261716] = anon_sym_GT_GT;
	v->a[261717] = anon_sym_AMP_GT;
	v->a[261718] = anon_sym_AMP_GT_GT;
	v->a[261719] = anon_sym_LT_AMP;
	small_parse_table_13086(v);
}

void	small_parse_table_13086(t_small_parse_table_array *v)
{
	v->a[261720] = anon_sym_GT_AMP;
	v->a[261721] = anon_sym_GT_PIPE;
	v->a[261722] = actions(11504);
	v->a[261723] = 10;
	v->a[261724] = anon_sym_SEMI;
	v->a[261725] = anon_sym_PIPE_PIPE;
	v->a[261726] = anon_sym_AMP_AMP;
	v->a[261727] = anon_sym_PIPE;
	v->a[261728] = anon_sym_AMP;
	v->a[261729] = anon_sym_LT_LT;
	v->a[261730] = anon_sym_SEMI_SEMI;
	v->a[261731] = anon_sym_PIPE_AMP;
	v->a[261732] = anon_sym_LT_LT_DASH;
	v->a[261733] = anon_sym_BQUOTE;
	v->a[261734] = 3;
	v->a[261735] = actions(3);
	v->a[261736] = 1;
	v->a[261737] = sym_comment;
	v->a[261738] = actions(5375);
	v->a[261739] = 4;
	small_parse_table_13087(v);
}

void	small_parse_table_13087(t_small_parse_table_array *v)
{
	v->a[261740] = sym_file_descriptor;
	v->a[261741] = sym_variable_name;
	v->a[261742] = ts_builtin_sym_end;
	v->a[261743] = aux_sym_heredoc_redirect_token1;
	v->a[261744] = actions(5373);
	v->a[261745] = 21;
	v->a[261746] = anon_sym_SEMI;
	v->a[261747] = anon_sym_PIPE_PIPE;
	v->a[261748] = anon_sym_AMP_AMP;
	v->a[261749] = anon_sym_PIPE;
	v->a[261750] = anon_sym_AMP;
	v->a[261751] = anon_sym_LT;
	v->a[261752] = anon_sym_GT;
	v->a[261753] = anon_sym_LT_LT;
	v->a[261754] = anon_sym_GT_GT;
	v->a[261755] = anon_sym_RPAREN;
	v->a[261756] = anon_sym_SEMI_SEMI;
	v->a[261757] = anon_sym_PIPE_AMP;
	v->a[261758] = anon_sym_AMP_GT;
	v->a[261759] = anon_sym_AMP_GT_GT;
	small_parse_table_13088(v);
}

void	small_parse_table_13088(t_small_parse_table_array *v)
{
	v->a[261760] = anon_sym_LT_AMP;
	v->a[261761] = anon_sym_GT_AMP;
	v->a[261762] = anon_sym_GT_PIPE;
	v->a[261763] = anon_sym_LT_AMP_DASH;
	v->a[261764] = anon_sym_GT_AMP_DASH;
	v->a[261765] = anon_sym_LT_LT_DASH;
	v->a[261766] = anon_sym_BQUOTE;
	v->a[261767] = 6;
	v->a[261768] = actions(3);
	v->a[261769] = 1;
	v->a[261770] = sym_comment;
	v->a[261771] = actions(11651);
	v->a[261772] = 1;
	v->a[261773] = aux_sym_concatenation_token1;
	v->a[261774] = actions(11653);
	v->a[261775] = 1;
	v->a[261776] = sym__concat;
	v->a[261777] = state(4611);
	v->a[261778] = 1;
	v->a[261779] = aux_sym_concatenation_repeat1;
	small_parse_table_13089(v);
}

void	small_parse_table_13089(t_small_parse_table_array *v)
{
	v->a[261780] = actions(4372);
	v->a[261781] = 3;
	v->a[261782] = sym_file_descriptor;
	v->a[261783] = ts_builtin_sym_end;
	v->a[261784] = aux_sym_heredoc_redirect_token1;
	v->a[261785] = actions(4370);
	v->a[261786] = 19;
	v->a[261787] = anon_sym_SEMI;
	v->a[261788] = anon_sym_PIPE_PIPE;
	v->a[261789] = anon_sym_AMP_AMP;
	v->a[261790] = anon_sym_PIPE;
	v->a[261791] = anon_sym_AMP;
	v->a[261792] = anon_sym_LT;
	v->a[261793] = anon_sym_GT;
	v->a[261794] = anon_sym_LT_LT;
	v->a[261795] = anon_sym_GT_GT;
	v->a[261796] = anon_sym_SEMI_SEMI;
	v->a[261797] = anon_sym_PIPE_AMP;
	v->a[261798] = anon_sym_AMP_GT;
	v->a[261799] = anon_sym_AMP_GT_GT;
	small_parse_table_13090(v);
}

/* EOF small_parse_table_2617.c */
