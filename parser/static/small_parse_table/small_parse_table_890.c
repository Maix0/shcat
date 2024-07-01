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
	v->a[89000] = 1;
	v->a[89001] = sym_comment;
	v->a[89002] = actions(3414);
	v->a[89003] = 1;
	v->a[89004] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[89005] = actions(3420);
	v->a[89006] = 1;
	v->a[89007] = sym_string_content;
	v->a[89008] = actions(3422);
	v->a[89009] = 1;
	v->a[89010] = anon_sym_DOLLAR_LBRACE;
	v->a[89011] = actions(3424);
	v->a[89012] = 1;
	v->a[89013] = anon_sym_DOLLAR_LPAREN;
	v->a[89014] = actions(3426);
	v->a[89015] = 1;
	v->a[89016] = anon_sym_BQUOTE;
	v->a[89017] = actions(3758);
	v->a[89018] = 1;
	v->a[89019] = anon_sym_DOLLAR;
	small_parse_table_4451(v);
}

void	small_parse_table_4451(t_small_parse_table_array *v)
{
	v->a[89020] = actions(3760);
	v->a[89021] = 1;
	v->a[89022] = anon_sym_DQUOTE;
	v->a[89023] = state(1889);
	v->a[89024] = 1;
	v->a[89025] = aux_sym_string_repeat1;
	v->a[89026] = state(1959);
	v->a[89027] = 4;
	v->a[89028] = sym_arithmetic_expansion;
	v->a[89029] = sym_simple_expansion;
	v->a[89030] = sym_expansion;
	v->a[89031] = sym_command_substitution;
	v->a[89032] = 10;
	v->a[89033] = actions(3);
	v->a[89034] = 1;
	v->a[89035] = sym_comment;
	v->a[89036] = actions(3414);
	v->a[89037] = 1;
	v->a[89038] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[89039] = actions(3420);
	small_parse_table_4452(v);
}

void	small_parse_table_4452(t_small_parse_table_array *v)
{
	v->a[89040] = 1;
	v->a[89041] = sym_string_content;
	v->a[89042] = actions(3422);
	v->a[89043] = 1;
	v->a[89044] = anon_sym_DOLLAR_LBRACE;
	v->a[89045] = actions(3424);
	v->a[89046] = 1;
	v->a[89047] = anon_sym_DOLLAR_LPAREN;
	v->a[89048] = actions(3426);
	v->a[89049] = 1;
	v->a[89050] = anon_sym_BQUOTE;
	v->a[89051] = actions(3762);
	v->a[89052] = 1;
	v->a[89053] = anon_sym_DOLLAR;
	v->a[89054] = actions(3764);
	v->a[89055] = 1;
	v->a[89056] = anon_sym_DQUOTE;
	v->a[89057] = state(1906);
	v->a[89058] = 1;
	v->a[89059] = aux_sym_string_repeat1;
	small_parse_table_4453(v);
}

void	small_parse_table_4453(t_small_parse_table_array *v)
{
	v->a[89060] = state(1959);
	v->a[89061] = 4;
	v->a[89062] = sym_arithmetic_expansion;
	v->a[89063] = sym_simple_expansion;
	v->a[89064] = sym_expansion;
	v->a[89065] = sym_command_substitution;
	v->a[89066] = 3;
	v->a[89067] = actions(3);
	v->a[89068] = 1;
	v->a[89069] = sym_comment;
	v->a[89070] = actions(3602);
	v->a[89071] = 1;
	v->a[89072] = sym_extglob_pattern;
	v->a[89073] = actions(3598);
	v->a[89074] = 10;
	v->a[89075] = anon_sym_LPAREN;
	v->a[89076] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[89077] = anon_sym_DOLLAR;
	v->a[89078] = anon_sym_DQUOTE;
	v->a[89079] = sym_raw_string;
	small_parse_table_4454(v);
}

void	small_parse_table_4454(t_small_parse_table_array *v)
{
	v->a[89080] = sym_number;
	v->a[89081] = anon_sym_DOLLAR_LBRACE;
	v->a[89082] = anon_sym_DOLLAR_LPAREN;
	v->a[89083] = anon_sym_BQUOTE;
	v->a[89084] = sym_word;
	v->a[89085] = 3;
	v->a[89086] = actions(3);
	v->a[89087] = 1;
	v->a[89088] = sym_comment;
	v->a[89089] = actions(3678);
	v->a[89090] = 1;
	v->a[89091] = sym_extglob_pattern;
	v->a[89092] = actions(3674);
	v->a[89093] = 10;
	v->a[89094] = anon_sym_LPAREN;
	v->a[89095] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[89096] = anon_sym_DOLLAR;
	v->a[89097] = anon_sym_DQUOTE;
	v->a[89098] = sym_raw_string;
	v->a[89099] = sym_number;
	small_parse_table_4455(v);
}

/* EOF small_parse_table_890.c */
