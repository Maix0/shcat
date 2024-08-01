/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_390.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1950(t_small_parse_table_array *v)
{
	v->a[39000] = 1;
	v->a[39001] = anon_sym_DOLLAR_LBRACE;
	v->a[39002] = actions(63);
	v->a[39003] = 1;
	v->a[39004] = anon_sym_DOLLAR_LPAREN;
	v->a[39005] = actions(65);
	v->a[39006] = 1;
	v->a[39007] = anon_sym_BQUOTE;
	v->a[39008] = actions(1501);
	v->a[39009] = 1;
	v->a[39010] = sym__bare_dollar;
	v->a[39011] = actions(1796);
	v->a[39012] = 1;
	v->a[39013] = anon_sym_DOLLAR;
	v->a[39014] = actions(1497);
	v->a[39015] = 5;
	v->a[39016] = aux_sym_concatenation_token1;
	v->a[39017] = sym_raw_string;
	v->a[39018] = sym_number;
	v->a[39019] = sym__comment_word;
	small_parse_table_1951(v);
}

void	small_parse_table_1951(t_small_parse_table_array *v)
{
	v->a[39020] = sym_word;
	v->a[39021] = state(403);
	v->a[39022] = 5;
	v->a[39023] = sym_arithmetic_expansion;
	v->a[39024] = sym_string;
	v->a[39025] = sym_simple_expansion;
	v->a[39026] = sym_expansion;
	v->a[39027] = sym_command_substitution;
	v->a[39028] = 3;
	v->a[39029] = actions(3);
	v->a[39030] = 1;
	v->a[39031] = sym_comment;
	v->a[39032] = actions(917);
	v->a[39033] = 1;
	v->a[39034] = sym_variable_name;
	v->a[39035] = actions(919);
	v->a[39036] = 16;
	v->a[39037] = anon_sym_PIPE;
	v->a[39038] = anon_sym_AMP_AMP;
	v->a[39039] = anon_sym_PIPE_PIPE;
	small_parse_table_1952(v);
}

void	small_parse_table_1952(t_small_parse_table_array *v)
{
	v->a[39040] = anon_sym_LT;
	v->a[39041] = anon_sym_GT;
	v->a[39042] = anon_sym_GT_GT;
	v->a[39043] = anon_sym_LT_LT;
	v->a[39044] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39045] = anon_sym_DOLLAR;
	v->a[39046] = anon_sym_DQUOTE;
	v->a[39047] = sym_raw_string;
	v->a[39048] = sym_number;
	v->a[39049] = anon_sym_DOLLAR_LBRACE;
	v->a[39050] = anon_sym_DOLLAR_LPAREN;
	v->a[39051] = anon_sym_BQUOTE;
	v->a[39052] = sym_word;
	v->a[39053] = 10;
	v->a[39054] = actions(3);
	v->a[39055] = 1;
	v->a[39056] = sym_comment;
	v->a[39057] = actions(1665);
	v->a[39058] = 1;
	v->a[39059] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1953(v);
}

void	small_parse_table_1953(t_small_parse_table_array *v)
{
	v->a[39060] = actions(1669);
	v->a[39061] = 1;
	v->a[39062] = anon_sym_DQUOTE;
	v->a[39063] = actions(1671);
	v->a[39064] = 1;
	v->a[39065] = anon_sym_DOLLAR_LBRACE;
	v->a[39066] = actions(1673);
	v->a[39067] = 1;
	v->a[39068] = anon_sym_DOLLAR_LPAREN;
	v->a[39069] = actions(1675);
	v->a[39070] = 1;
	v->a[39071] = anon_sym_BQUOTE;
	v->a[39072] = actions(1731);
	v->a[39073] = 1;
	v->a[39074] = sym__bare_dollar;
	v->a[39075] = actions(1798);
	v->a[39076] = 1;
	v->a[39077] = anon_sym_DOLLAR;
	v->a[39078] = actions(1729);
	v->a[39079] = 5;
	small_parse_table_1954(v);
}

void	small_parse_table_1954(t_small_parse_table_array *v)
{
	v->a[39080] = aux_sym_concatenation_token1;
	v->a[39081] = sym_raw_string;
	v->a[39082] = sym_number;
	v->a[39083] = sym__comment_word;
	v->a[39084] = sym_word;
	v->a[39085] = state(1293);
	v->a[39086] = 5;
	v->a[39087] = sym_arithmetic_expansion;
	v->a[39088] = sym_string;
	v->a[39089] = sym_simple_expansion;
	v->a[39090] = sym_expansion;
	v->a[39091] = sym_command_substitution;
	v->a[39092] = 10;
	v->a[39093] = actions(3);
	v->a[39094] = 1;
	v->a[39095] = sym_comment;
	v->a[39096] = actions(627);
	v->a[39097] = 1;
	v->a[39098] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39099] = actions(631);
	small_parse_table_1955(v);
}

/* EOF small_parse_table_390.c */
