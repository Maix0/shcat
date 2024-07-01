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
	v->a[91000] = sym__simple_heredoc_body;
	v->a[91001] = 6;
	v->a[91002] = actions(870);
	v->a[91003] = 1;
	v->a[91004] = sym_comment;
	v->a[91005] = actions(4016);
	v->a[91006] = 1;
	v->a[91007] = sym_simple_heredoc_body;
	v->a[91008] = actions(4018);
	v->a[91009] = 1;
	v->a[91010] = sym__heredoc_body_beginning;
	v->a[91011] = state(1339);
	v->a[91012] = 1;
	v->a[91013] = sym__heredoc_body;
	v->a[91014] = state(1395);
	v->a[91015] = 1;
	v->a[91016] = sym__simple_heredoc_body;
	v->a[91017] = state(2220);
	v->a[91018] = 1;
	v->a[91019] = sym_heredoc_body;
	small_parse_table_4551(v);
}

void	small_parse_table_4551(t_small_parse_table_array *v)
{
	v->a[91020] = 6;
	v->a[91021] = actions(870);
	v->a[91022] = 1;
	v->a[91023] = sym_comment;
	v->a[91024] = actions(4016);
	v->a[91025] = 1;
	v->a[91026] = sym_simple_heredoc_body;
	v->a[91027] = actions(4018);
	v->a[91028] = 1;
	v->a[91029] = sym__heredoc_body_beginning;
	v->a[91030] = state(1375);
	v->a[91031] = 1;
	v->a[91032] = sym__simple_heredoc_body;
	v->a[91033] = state(1382);
	v->a[91034] = 1;
	v->a[91035] = sym__heredoc_body;
	v->a[91036] = state(2220);
	v->a[91037] = 1;
	v->a[91038] = sym_heredoc_body;
	v->a[91039] = 5;
	small_parse_table_4552(v);
}

void	small_parse_table_4552(t_small_parse_table_array *v)
{
	v->a[91040] = actions(870);
	v->a[91041] = 1;
	v->a[91042] = sym_comment;
	v->a[91043] = actions(4016);
	v->a[91044] = 1;
	v->a[91045] = sym_simple_heredoc_body;
	v->a[91046] = actions(4018);
	v->a[91047] = 1;
	v->a[91048] = sym__heredoc_body_beginning;
	v->a[91049] = state(2220);
	v->a[91050] = 1;
	v->a[91051] = sym_heredoc_body;
	v->a[91052] = state(1347);
	v->a[91053] = 2;
	v->a[91054] = sym__heredoc_body;
	v->a[91055] = sym__simple_heredoc_body;
	v->a[91056] = 5;
	v->a[91057] = actions(870);
	v->a[91058] = 1;
	v->a[91059] = sym_comment;
	small_parse_table_4553(v);
}

void	small_parse_table_4553(t_small_parse_table_array *v)
{
	v->a[91060] = actions(4016);
	v->a[91061] = 1;
	v->a[91062] = sym_simple_heredoc_body;
	v->a[91063] = actions(4018);
	v->a[91064] = 1;
	v->a[91065] = sym__heredoc_body_beginning;
	v->a[91066] = state(2220);
	v->a[91067] = 1;
	v->a[91068] = sym_heredoc_body;
	v->a[91069] = state(1344);
	v->a[91070] = 2;
	v->a[91071] = sym__heredoc_body;
	v->a[91072] = sym__simple_heredoc_body;
	v->a[91073] = 5;
	v->a[91074] = actions(870);
	v->a[91075] = 1;
	v->a[91076] = sym_comment;
	v->a[91077] = actions(4018);
	v->a[91078] = 1;
	v->a[91079] = sym__heredoc_body_beginning;
	small_parse_table_4554(v);
}

void	small_parse_table_4554(t_small_parse_table_array *v)
{
	v->a[91080] = actions(4022);
	v->a[91081] = 1;
	v->a[91082] = sym_simple_heredoc_body;
	v->a[91083] = state(2258);
	v->a[91084] = 1;
	v->a[91085] = sym_heredoc_body;
	v->a[91086] = state(1296);
	v->a[91087] = 2;
	v->a[91088] = sym__heredoc_body;
	v->a[91089] = sym__simple_heredoc_body;
	v->a[91090] = 6;
	v->a[91091] = actions(870);
	v->a[91092] = 1;
	v->a[91093] = sym_comment;
	v->a[91094] = actions(4018);
	v->a[91095] = 1;
	v->a[91096] = sym__heredoc_body_beginning;
	v->a[91097] = actions(4022);
	v->a[91098] = 1;
	v->a[91099] = sym_simple_heredoc_body;
	small_parse_table_4555(v);
}

/* EOF small_parse_table_910.c */
