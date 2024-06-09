/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_910.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4550(t_small_parse_table_array *v)
{
	v->a[91000] = 1;
	v->a[91001] = sym_comment;
	v->a[91002] = actions(4073);
	v->a[91003] = 2;
	v->a[91004] = anon_sym_LT_AMP_DASH;
	v->a[91005] = anon_sym_GT_AMP_DASH;
	v->a[91006] = actions(4071);
	v->a[91007] = 3;
	v->a[91008] = anon_sym_GT_GT;
	v->a[91009] = anon_sym_AMP_GT_GT;
	v->a[91010] = anon_sym_GT_PIPE;
	v->a[91011] = actions(4069);
	v->a[91012] = 5;
	v->a[91013] = anon_sym_LT;
	v->a[91014] = anon_sym_GT;
	v->a[91015] = anon_sym_AMP_GT;
	v->a[91016] = anon_sym_LT_AMP;
	v->a[91017] = anon_sym_GT_AMP;
	v->a[91018] = 4;
	v->a[91019] = actions(1404);
	small_parse_table_4551(v);
}

void	small_parse_table_4551(t_small_parse_table_array *v)
{
	v->a[91020] = 1;
	v->a[91021] = sym_comment;
	v->a[91022] = actions(3950);
	v->a[91023] = 2;
	v->a[91024] = anon_sym_LT_AMP_DASH;
	v->a[91025] = anon_sym_GT_AMP_DASH;
	v->a[91026] = actions(3948);
	v->a[91027] = 3;
	v->a[91028] = anon_sym_GT_GT;
	v->a[91029] = anon_sym_AMP_GT_GT;
	v->a[91030] = anon_sym_GT_PIPE;
	v->a[91031] = actions(3946);
	v->a[91032] = 5;
	v->a[91033] = anon_sym_LT;
	v->a[91034] = anon_sym_GT;
	v->a[91035] = anon_sym_AMP_GT;
	v->a[91036] = anon_sym_LT_AMP;
	v->a[91037] = anon_sym_GT_AMP;
	v->a[91038] = 8;
	v->a[91039] = actions(1404);
	small_parse_table_4552(v);
}

void	small_parse_table_4552(t_small_parse_table_array *v)
{
	v->a[91040] = 1;
	v->a[91041] = sym_comment;
	v->a[91042] = actions(4028);
	v->a[91043] = 1;
	v->a[91044] = anon_sym_DOLLAR;
	v->a[91045] = actions(4030);
	v->a[91046] = 1;
	v->a[91047] = anon_sym_DOLLAR_LBRACE;
	v->a[91048] = actions(4032);
	v->a[91049] = 1;
	v->a[91050] = anon_sym_DOLLAR_LPAREN;
	v->a[91051] = actions(4034);
	v->a[91052] = 1;
	v->a[91053] = anon_sym_BQUOTE;
	v->a[91054] = actions(4075);
	v->a[91055] = 1;
	v->a[91056] = sym_heredoc_content;
	v->a[91057] = actions(4077);
	v->a[91058] = 1;
	v->a[91059] = sym_heredoc_end;
	small_parse_table_4553(v);
}

void	small_parse_table_4553(t_small_parse_table_array *v)
{
	v->a[91060] = state(1837);
	v->a[91061] = 4;
	v->a[91062] = sym_simple_expansion;
	v->a[91063] = sym_expansion;
	v->a[91064] = sym_command_substitution;
	v->a[91065] = aux_sym_heredoc_body_repeat1;
	v->a[91066] = 4;
	v->a[91067] = actions(1404);
	v->a[91068] = 1;
	v->a[91069] = sym_comment;
	v->a[91070] = actions(4083);
	v->a[91071] = 2;
	v->a[91072] = anon_sym_LT_AMP_DASH;
	v->a[91073] = anon_sym_GT_AMP_DASH;
	v->a[91074] = actions(4081);
	v->a[91075] = 3;
	v->a[91076] = anon_sym_GT_GT;
	v->a[91077] = anon_sym_AMP_GT_GT;
	v->a[91078] = anon_sym_GT_PIPE;
	v->a[91079] = actions(4079);
	small_parse_table_4554(v);
}

void	small_parse_table_4554(t_small_parse_table_array *v)
{
	v->a[91080] = 5;
	v->a[91081] = anon_sym_LT;
	v->a[91082] = anon_sym_GT;
	v->a[91083] = anon_sym_AMP_GT;
	v->a[91084] = anon_sym_LT_AMP;
	v->a[91085] = anon_sym_GT_AMP;
	v->a[91086] = 4;
	v->a[91087] = actions(1404);
	v->a[91088] = 1;
	v->a[91089] = sym_comment;
	v->a[91090] = actions(3990);
	v->a[91091] = 2;
	v->a[91092] = anon_sym_LT_AMP_DASH;
	v->a[91093] = anon_sym_GT_AMP_DASH;
	v->a[91094] = actions(3988);
	v->a[91095] = 3;
	v->a[91096] = anon_sym_GT_GT;
	v->a[91097] = anon_sym_AMP_GT_GT;
	v->a[91098] = anon_sym_GT_PIPE;
	v->a[91099] = actions(3986);
	small_parse_table_4555(v);
}

/* EOF small_parse_table_910.c */
