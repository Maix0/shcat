/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_890.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4450(t_small_parse_table_array *v)
{
	v->a[89000] = actions(3712);
	v->a[89001] = 1;
	v->a[89002] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[89003] = actions(3716);
	v->a[89004] = 1;
	v->a[89005] = sym_string_content;
	v->a[89006] = actions(3718);
	v->a[89007] = 1;
	v->a[89008] = anon_sym_DOLLAR_LBRACE;
	v->a[89009] = actions(3720);
	v->a[89010] = 1;
	v->a[89011] = anon_sym_DOLLAR_LPAREN;
	v->a[89012] = actions(3722);
	v->a[89013] = 1;
	v->a[89014] = anon_sym_BQUOTE;
	v->a[89015] = actions(3838);
	v->a[89016] = 1;
	v->a[89017] = anon_sym_DOLLAR;
	v->a[89018] = state(1738);
	v->a[89019] = 1;
	small_parse_table_4451(v);
}

void	small_parse_table_4451(t_small_parse_table_array *v)
{
	v->a[89020] = aux_sym_string_repeat1;
	v->a[89021] = state(1869);
	v->a[89022] = 4;
	v->a[89023] = sym_arithmetic_expansion;
	v->a[89024] = sym_simple_expansion;
	v->a[89025] = sym_expansion;
	v->a[89026] = sym_command_substitution;
	v->a[89027] = 4;
	v->a[89028] = actions(3);
	v->a[89029] = 1;
	v->a[89030] = sym_comment;
	v->a[89031] = actions(445);
	v->a[89032] = 1;
	v->a[89033] = sym_variable_name;
	v->a[89034] = actions(443);
	v->a[89035] = 2;
	v->a[89036] = aux_sym__simple_variable_name_token1;
	v->a[89037] = aux_sym__multiline_variable_name_token1;
	v->a[89038] = actions(441);
	v->a[89039] = 9;
	small_parse_table_4452(v);
}

void	small_parse_table_4452(t_small_parse_table_array *v)
{
	v->a[89040] = anon_sym_BANG;
	v->a[89041] = anon_sym_DASH;
	v->a[89042] = anon_sym_STAR;
	v->a[89043] = anon_sym_QMARK;
	v->a[89044] = anon_sym_DOLLAR;
	v->a[89045] = anon_sym_POUND;
	v->a[89046] = anon_sym_AT;
	v->a[89047] = anon_sym_0;
	v->a[89048] = anon_sym__;
	v->a[89049] = 6;
	v->a[89050] = actions(1404);
	v->a[89051] = 1;
	v->a[89052] = sym_comment;
	v->a[89053] = actions(3752);
	v->a[89054] = 1;
	v->a[89055] = anon_sym_LT_LT;
	v->a[89056] = actions(3754);
	v->a[89057] = 1;
	v->a[89058] = anon_sym_LT_LT_DASH;
	v->a[89059] = actions(3844);
	small_parse_table_4453(v);
}

void	small_parse_table_4453(t_small_parse_table_array *v)
{
	v->a[89060] = 2;
	v->a[89061] = anon_sym_LT_AMP_DASH;
	v->a[89062] = anon_sym_GT_AMP_DASH;
	v->a[89063] = actions(3842);
	v->a[89064] = 3;
	v->a[89065] = anon_sym_GT_GT;
	v->a[89066] = anon_sym_AMP_GT_GT;
	v->a[89067] = anon_sym_GT_PIPE;
	v->a[89068] = actions(3840);
	v->a[89069] = 5;
	v->a[89070] = anon_sym_LT;
	v->a[89071] = anon_sym_GT;
	v->a[89072] = anon_sym_AMP_GT;
	v->a[89073] = anon_sym_LT_AMP;
	v->a[89074] = anon_sym_GT_AMP;
	v->a[89075] = 10;
	v->a[89076] = actions(3);
	v->a[89077] = 1;
	v->a[89078] = sym_comment;
	v->a[89079] = actions(3712);
	small_parse_table_4454(v);
}

void	small_parse_table_4454(t_small_parse_table_array *v)
{
	v->a[89080] = 1;
	v->a[89081] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[89082] = actions(3716);
	v->a[89083] = 1;
	v->a[89084] = sym_string_content;
	v->a[89085] = actions(3718);
	v->a[89086] = 1;
	v->a[89087] = anon_sym_DOLLAR_LBRACE;
	v->a[89088] = actions(3720);
	v->a[89089] = 1;
	v->a[89090] = anon_sym_DOLLAR_LPAREN;
	v->a[89091] = actions(3722);
	v->a[89092] = 1;
	v->a[89093] = anon_sym_BQUOTE;
	v->a[89094] = actions(3846);
	v->a[89095] = 1;
	v->a[89096] = anon_sym_DOLLAR;
	v->a[89097] = actions(3848);
	v->a[89098] = 1;
	v->a[89099] = anon_sym_DQUOTE;
	small_parse_table_4455(v);
}

/* EOF small_parse_table_890.c */
