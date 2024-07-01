/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_420.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2100(t_small_parse_table_array *v)
{
	v->a[42000] = 5;
	v->a[42001] = actions(3);
	v->a[42002] = 1;
	v->a[42003] = sym_comment;
	v->a[42004] = actions(746);
	v->a[42005] = 1;
	v->a[42006] = sym_variable_name;
	v->a[42007] = actions(1469);
	v->a[42008] = 2;
	v->a[42009] = sym_file_descriptor;
	v->a[42010] = ts_builtin_sym_end;
	v->a[42011] = actions(734);
	v->a[42012] = 9;
	v->a[42013] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42014] = anon_sym_DOLLAR;
	v->a[42015] = anon_sym_DQUOTE;
	v->a[42016] = sym_raw_string;
	v->a[42017] = sym_number;
	v->a[42018] = anon_sym_DOLLAR_LBRACE;
	v->a[42019] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2101(v);
}

void	small_parse_table_2101(t_small_parse_table_array *v)
{
	v->a[42020] = anon_sym_BQUOTE;
	v->a[42021] = sym_word;
	v->a[42022] = actions(1467);
	v->a[42023] = 16;
	v->a[42024] = anon_sym_PIPE;
	v->a[42025] = anon_sym_SEMI_SEMI;
	v->a[42026] = anon_sym_AMP_AMP;
	v->a[42027] = anon_sym_PIPE_PIPE;
	v->a[42028] = anon_sym_LT;
	v->a[42029] = anon_sym_GT;
	v->a[42030] = anon_sym_GT_GT;
	v->a[42031] = anon_sym_LT_AMP;
	v->a[42032] = anon_sym_GT_AMP;
	v->a[42033] = anon_sym_GT_PIPE;
	v->a[42034] = anon_sym_LT_GT;
	v->a[42035] = anon_sym_LT_LT;
	v->a[42036] = anon_sym_LT_LT_DASH;
	v->a[42037] = aux_sym_heredoc_redirect_token1;
	v->a[42038] = anon_sym_AMP;
	v->a[42039] = anon_sym_SEMI;
	small_parse_table_2102(v);
}

void	small_parse_table_2102(t_small_parse_table_array *v)
{
	v->a[42040] = 5;
	v->a[42041] = actions(3);
	v->a[42042] = 1;
	v->a[42043] = sym_comment;
	v->a[42044] = actions(1491);
	v->a[42045] = 1;
	v->a[42046] = anon_sym_LF;
	v->a[42047] = state(657);
	v->a[42048] = 1;
	v->a[42049] = aux_sym__case_item_last_repeat2;
	v->a[42050] = actions(1494);
	v->a[42051] = 2;
	v->a[42052] = sym_file_descriptor;
	v->a[42053] = sym_variable_name;
	v->a[42054] = actions(1489);
	v->a[42055] = 24;
	v->a[42056] = anon_sym_for;
	v->a[42057] = anon_sym_while;
	v->a[42058] = anon_sym_until;
	v->a[42059] = anon_sym_if;
	small_parse_table_2103(v);
}

void	small_parse_table_2103(t_small_parse_table_array *v)
{
	v->a[42060] = anon_sym_case;
	v->a[42061] = anon_sym_LPAREN;
	v->a[42062] = anon_sym_LBRACE;
	v->a[42063] = anon_sym_BANG;
	v->a[42064] = anon_sym_LT;
	v->a[42065] = anon_sym_GT;
	v->a[42066] = anon_sym_GT_GT;
	v->a[42067] = anon_sym_LT_AMP;
	v->a[42068] = anon_sym_GT_AMP;
	v->a[42069] = anon_sym_GT_PIPE;
	v->a[42070] = anon_sym_LT_GT;
	v->a[42071] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42072] = anon_sym_DOLLAR;
	v->a[42073] = anon_sym_DQUOTE;
	v->a[42074] = sym_raw_string;
	v->a[42075] = sym_number;
	v->a[42076] = anon_sym_DOLLAR_LBRACE;
	v->a[42077] = anon_sym_DOLLAR_LPAREN;
	v->a[42078] = anon_sym_BQUOTE;
	v->a[42079] = sym_word;
	small_parse_table_2104(v);
}

void	small_parse_table_2104(t_small_parse_table_array *v)
{
	v->a[42080] = 16;
	v->a[42081] = actions(3);
	v->a[42082] = 1;
	v->a[42083] = sym_comment;
	v->a[42084] = actions(55);
	v->a[42085] = 1;
	v->a[42086] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42087] = actions(57);
	v->a[42088] = 1;
	v->a[42089] = anon_sym_DOLLAR;
	v->a[42090] = actions(59);
	v->a[42091] = 1;
	v->a[42092] = anon_sym_DQUOTE;
	v->a[42093] = actions(63);
	v->a[42094] = 1;
	v->a[42095] = anon_sym_DOLLAR_LBRACE;
	v->a[42096] = actions(65);
	v->a[42097] = 1;
	v->a[42098] = anon_sym_DOLLAR_LPAREN;
	v->a[42099] = actions(67);
	small_parse_table_2105(v);
}

/* EOF small_parse_table_420.c */
