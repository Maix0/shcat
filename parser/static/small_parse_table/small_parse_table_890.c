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
	v->a[89000] = actions(3174);
	v->a[89001] = 1;
	v->a[89002] = anon_sym_DOLLAR;
	v->a[89003] = actions(3176);
	v->a[89004] = 1;
	v->a[89005] = anon_sym_DQUOTE;
	v->a[89006] = actions(3178);
	v->a[89007] = 1;
	v->a[89008] = anon_sym_DOLLAR_LBRACE;
	v->a[89009] = actions(3180);
	v->a[89010] = 1;
	v->a[89011] = anon_sym_DOLLAR_LPAREN;
	v->a[89012] = actions(3182);
	v->a[89013] = 1;
	v->a[89014] = anon_sym_BQUOTE;
	v->a[89015] = state(376);
	v->a[89016] = 2;
	v->a[89017] = sym_concatenation;
	v->a[89018] = aux_sym_for_statement_repeat1;
	v->a[89019] = actions(3600);
	small_parse_table_4451(v);
}

void	small_parse_table_4451(t_small_parse_table_array *v)
{
	v->a[89020] = 3;
	v->a[89021] = sym_raw_string;
	v->a[89022] = sym_number;
	v->a[89023] = sym_word;
	v->a[89024] = state(909);
	v->a[89025] = 5;
	v->a[89026] = sym_arithmetic_expansion;
	v->a[89027] = sym_string;
	v->a[89028] = sym_simple_expansion;
	v->a[89029] = sym_expansion;
	v->a[89030] = sym_command_substitution;
	v->a[89031] = 3;
	v->a[89032] = actions(1094);
	v->a[89033] = 1;
	v->a[89034] = sym_comment;
	v->a[89035] = actions(2742);
	v->a[89036] = 7;
	v->a[89037] = anon_sym_PIPE;
	v->a[89038] = anon_sym_LT;
	v->a[89039] = anon_sym_GT;
	small_parse_table_4452(v);
}

void	small_parse_table_4452(t_small_parse_table_array *v)
{
	v->a[89040] = anon_sym_AMP_GT;
	v->a[89041] = anon_sym_LT_AMP;
	v->a[89042] = anon_sym_GT_AMP;
	v->a[89043] = anon_sym_LT_LT;
	v->a[89044] = actions(2740);
	v->a[89045] = 9;
	v->a[89046] = sym_file_descriptor;
	v->a[89047] = anon_sym_AMP_AMP;
	v->a[89048] = anon_sym_PIPE_PIPE;
	v->a[89049] = anon_sym_GT_GT;
	v->a[89050] = anon_sym_AMP_GT_GT;
	v->a[89051] = anon_sym_GT_PIPE;
	v->a[89052] = anon_sym_LT_AMP_DASH;
	v->a[89053] = anon_sym_GT_AMP_DASH;
	v->a[89054] = anon_sym_LT_LT_DASH;
	v->a[89055] = 10;
	v->a[89056] = actions(3);
	v->a[89057] = 1;
	v->a[89058] = sym_comment;
	v->a[89059] = actions(3172);
	small_parse_table_4453(v);
}

void	small_parse_table_4453(t_small_parse_table_array *v)
{
	v->a[89060] = 1;
	v->a[89061] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[89062] = actions(3174);
	v->a[89063] = 1;
	v->a[89064] = anon_sym_DOLLAR;
	v->a[89065] = actions(3176);
	v->a[89066] = 1;
	v->a[89067] = anon_sym_DQUOTE;
	v->a[89068] = actions(3178);
	v->a[89069] = 1;
	v->a[89070] = anon_sym_DOLLAR_LBRACE;
	v->a[89071] = actions(3180);
	v->a[89072] = 1;
	v->a[89073] = anon_sym_DOLLAR_LPAREN;
	v->a[89074] = actions(3182);
	v->a[89075] = 1;
	v->a[89076] = anon_sym_BQUOTE;
	v->a[89077] = state(397);
	v->a[89078] = 2;
	v->a[89079] = sym_concatenation;
	small_parse_table_4454(v);
}

void	small_parse_table_4454(t_small_parse_table_array *v)
{
	v->a[89080] = aux_sym_for_statement_repeat1;
	v->a[89081] = actions(3600);
	v->a[89082] = 3;
	v->a[89083] = sym_raw_string;
	v->a[89084] = sym_number;
	v->a[89085] = sym_word;
	v->a[89086] = state(909);
	v->a[89087] = 5;
	v->a[89088] = sym_arithmetic_expansion;
	v->a[89089] = sym_string;
	v->a[89090] = sym_simple_expansion;
	v->a[89091] = sym_expansion;
	v->a[89092] = sym_command_substitution;
	v->a[89093] = 3;
	v->a[89094] = actions(1094);
	v->a[89095] = 1;
	v->a[89096] = sym_comment;
	v->a[89097] = actions(2746);
	v->a[89098] = 7;
	v->a[89099] = anon_sym_PIPE;
	small_parse_table_4455(v);
}

/* EOF small_parse_table_890.c */
