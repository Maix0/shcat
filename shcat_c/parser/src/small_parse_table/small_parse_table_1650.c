/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1650.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8250(t_small_parse_table_array *v)
{
	v->a[165000] = actions(7218);
	v->a[165001] = 3;
	v->a[165002] = anon_sym_STAR;
	v->a[165003] = anon_sym_SLASH;
	v->a[165004] = anon_sym_PERCENT;
	v->a[165005] = actions(6791);
	v->a[165006] = 6;
	v->a[165007] = anon_sym_EQ;
	v->a[165008] = anon_sym_PIPE;
	v->a[165009] = anon_sym_CARET;
	v->a[165010] = anon_sym_AMP;
	v->a[165011] = anon_sym_LT;
	v->a[165012] = anon_sym_GT;
	v->a[165013] = actions(6789);
	v->a[165014] = 21;
	v->a[165015] = sym_test_operator;
	v->a[165016] = anon_sym_RPAREN_RPAREN;
	v->a[165017] = anon_sym_PLUS_EQ;
	v->a[165018] = anon_sym_DASH_EQ;
	v->a[165019] = anon_sym_STAR_EQ;
	small_parse_table_8251(v);
}

void	small_parse_table_8251(t_small_parse_table_array *v)
{
	v->a[165020] = anon_sym_SLASH_EQ;
	v->a[165021] = anon_sym_PERCENT_EQ;
	v->a[165022] = anon_sym_STAR_STAR_EQ;
	v->a[165023] = anon_sym_LT_LT_EQ;
	v->a[165024] = anon_sym_GT_GT_EQ;
	v->a[165025] = anon_sym_AMP_EQ;
	v->a[165026] = anon_sym_CARET_EQ;
	v->a[165027] = anon_sym_PIPE_EQ;
	v->a[165028] = anon_sym_PIPE_PIPE;
	v->a[165029] = anon_sym_AMP_AMP;
	v->a[165030] = anon_sym_EQ_EQ;
	v->a[165031] = anon_sym_BANG_EQ;
	v->a[165032] = anon_sym_LT_EQ;
	v->a[165033] = anon_sym_GT_EQ;
	v->a[165034] = anon_sym_EQ_TILDE;
	v->a[165035] = anon_sym_QMARK;
	v->a[165036] = 8;
	v->a[165037] = actions(71);
	v->a[165038] = 1;
	v->a[165039] = sym_comment;
	small_parse_table_8252(v);
}

void	small_parse_table_8252(t_small_parse_table_array *v)
{
	v->a[165040] = actions(7198);
	v->a[165041] = 1;
	v->a[165042] = anon_sym_STAR_STAR;
	v->a[165043] = actions(6793);
	v->a[165044] = 2;
	v->a[165045] = anon_sym_PLUS_PLUS;
	v->a[165046] = anon_sym_DASH_DASH;
	v->a[165047] = actions(7192);
	v->a[165048] = 2;
	v->a[165049] = anon_sym_LT_LT;
	v->a[165050] = anon_sym_GT_GT;
	v->a[165051] = actions(7194);
	v->a[165052] = 2;
	v->a[165053] = anon_sym_PLUS;
	v->a[165054] = anon_sym_DASH;
	v->a[165055] = actions(7196);
	v->a[165056] = 3;
	v->a[165057] = anon_sym_STAR;
	v->a[165058] = anon_sym_SLASH;
	v->a[165059] = anon_sym_PERCENT;
	small_parse_table_8253(v);
}

void	small_parse_table_8253(t_small_parse_table_array *v)
{
	v->a[165060] = actions(6791);
	v->a[165061] = 6;
	v->a[165062] = anon_sym_EQ;
	v->a[165063] = anon_sym_PIPE;
	v->a[165064] = anon_sym_CARET;
	v->a[165065] = anon_sym_AMP;
	v->a[165066] = anon_sym_LT;
	v->a[165067] = anon_sym_GT;
	v->a[165068] = actions(6789);
	v->a[165069] = 21;
	v->a[165070] = sym_test_operator;
	v->a[165071] = anon_sym_PLUS_EQ;
	v->a[165072] = anon_sym_DASH_EQ;
	v->a[165073] = anon_sym_STAR_EQ;
	v->a[165074] = anon_sym_SLASH_EQ;
	v->a[165075] = anon_sym_PERCENT_EQ;
	v->a[165076] = anon_sym_STAR_STAR_EQ;
	v->a[165077] = anon_sym_LT_LT_EQ;
	v->a[165078] = anon_sym_GT_GT_EQ;
	v->a[165079] = anon_sym_AMP_EQ;
	small_parse_table_8254(v);
}

void	small_parse_table_8254(t_small_parse_table_array *v)
{
	v->a[165080] = anon_sym_CARET_EQ;
	v->a[165081] = anon_sym_PIPE_EQ;
	v->a[165082] = anon_sym_PIPE_PIPE;
	v->a[165083] = anon_sym_AMP_AMP;
	v->a[165084] = anon_sym_EQ_EQ;
	v->a[165085] = anon_sym_BANG_EQ;
	v->a[165086] = anon_sym_LT_EQ;
	v->a[165087] = anon_sym_GT_EQ;
	v->a[165088] = anon_sym_EQ_TILDE;
	v->a[165089] = anon_sym_QMARK;
	v->a[165090] = anon_sym_COLON;
	v->a[165091] = 4;
	v->a[165092] = actions(71);
	v->a[165093] = 1;
	v->a[165094] = sym_comment;
	v->a[165095] = actions(7481);
	v->a[165096] = 1;
	v->a[165097] = sym__concat;
	v->a[165098] = actions(6844);
	v->a[165099] = 14;
	small_parse_table_8255(v);
}

/* EOF small_parse_table_1650.c */
