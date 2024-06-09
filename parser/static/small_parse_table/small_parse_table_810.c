/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_810.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4050(t_small_parse_table_array *v)
{
	v->a[81000] = actions(2837);
	v->a[81001] = 1;
	v->a[81002] = anon_sym_DOLLAR_LPAREN;
	v->a[81003] = actions(2839);
	v->a[81004] = 1;
	v->a[81005] = anon_sym_BQUOTE;
	v->a[81006] = actions(3346);
	v->a[81007] = 2;
	v->a[81008] = sym_raw_string;
	v->a[81009] = sym_word;
	v->a[81010] = state(196);
	v->a[81011] = 2;
	v->a[81012] = sym_concatenation;
	v->a[81013] = aux_sym_for_statement_repeat1;
	v->a[81014] = state(378);
	v->a[81015] = 6;
	v->a[81016] = sym_arithmetic_expansion;
	v->a[81017] = sym_string;
	v->a[81018] = sym_number;
	v->a[81019] = sym_simple_expansion;
	small_parse_table_4051(v);
}

void	small_parse_table_4051(t_small_parse_table_array *v)
{
	v->a[81020] = sym_expansion;
	v->a[81021] = sym_command_substitution;
	v->a[81022] = 12;
	v->a[81023] = actions(3);
	v->a[81024] = 1;
	v->a[81025] = sym_comment;
	v->a[81026] = actions(761);
	v->a[81027] = 1;
	v->a[81028] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81029] = actions(763);
	v->a[81030] = 1;
	v->a[81031] = anon_sym_DOLLAR;
	v->a[81032] = actions(765);
	v->a[81033] = 1;
	v->a[81034] = anon_sym_DQUOTE;
	v->a[81035] = actions(767);
	v->a[81036] = 1;
	v->a[81037] = aux_sym_number_token1;
	v->a[81038] = actions(769);
	v->a[81039] = 1;
	small_parse_table_4052(v);
}

void	small_parse_table_4052(t_small_parse_table_array *v)
{
	v->a[81040] = aux_sym_number_token2;
	v->a[81041] = actions(771);
	v->a[81042] = 1;
	v->a[81043] = anon_sym_DOLLAR_LBRACE;
	v->a[81044] = actions(773);
	v->a[81045] = 1;
	v->a[81046] = anon_sym_DOLLAR_LPAREN;
	v->a[81047] = actions(775);
	v->a[81048] = 1;
	v->a[81049] = anon_sym_BQUOTE;
	v->a[81050] = actions(3126);
	v->a[81051] = 1;
	v->a[81052] = sym__bare_dollar;
	v->a[81053] = actions(3122);
	v->a[81054] = 3;
	v->a[81055] = sym_raw_string;
	v->a[81056] = sym__comment_word;
	v->a[81057] = sym_word;
	v->a[81058] = state(657);
	v->a[81059] = 6;
	small_parse_table_4053(v);
}

void	small_parse_table_4053(t_small_parse_table_array *v)
{
	v->a[81060] = sym_arithmetic_expansion;
	v->a[81061] = sym_string;
	v->a[81062] = sym_number;
	v->a[81063] = sym_simple_expansion;
	v->a[81064] = sym_expansion;
	v->a[81065] = sym_command_substitution;
	v->a[81066] = 12;
	v->a[81067] = actions(3);
	v->a[81068] = 1;
	v->a[81069] = sym_comment;
	v->a[81070] = actions(2119);
	v->a[81071] = 1;
	v->a[81072] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81073] = actions(2123);
	v->a[81074] = 1;
	v->a[81075] = anon_sym_DQUOTE;
	v->a[81076] = actions(2125);
	v->a[81077] = 1;
	v->a[81078] = aux_sym_number_token1;
	v->a[81079] = actions(2127);
	small_parse_table_4054(v);
}

void	small_parse_table_4054(t_small_parse_table_array *v)
{
	v->a[81080] = 1;
	v->a[81081] = aux_sym_number_token2;
	v->a[81082] = actions(2129);
	v->a[81083] = 1;
	v->a[81084] = anon_sym_DOLLAR_LBRACE;
	v->a[81085] = actions(2131);
	v->a[81086] = 1;
	v->a[81087] = anon_sym_DOLLAR_LPAREN;
	v->a[81088] = actions(2133);
	v->a[81089] = 1;
	v->a[81090] = anon_sym_BQUOTE;
	v->a[81091] = actions(3344);
	v->a[81092] = 1;
	v->a[81093] = sym__bare_dollar;
	v->a[81094] = actions(3348);
	v->a[81095] = 1;
	v->a[81096] = anon_sym_DOLLAR;
	v->a[81097] = actions(3342);
	v->a[81098] = 3;
	v->a[81099] = sym_raw_string;
	small_parse_table_4055(v);
}

/* EOF small_parse_table_810.c */
