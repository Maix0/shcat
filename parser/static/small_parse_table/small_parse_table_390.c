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
	v->a[39000] = anon_sym_DOLLAR_LPAREN;
	v->a[39001] = sym_word;
	v->a[39002] = 4;
	v->a[39003] = actions(3);
	v->a[39004] = 1;
	v->a[39005] = sym_comment;
	v->a[39006] = actions(1249);
	v->a[39007] = 1;
	v->a[39008] = sym_variable_name;
	v->a[39009] = actions(1268);
	v->a[39010] = 1;
	v->a[39011] = anon_sym_BQUOTE;
	v->a[39012] = actions(1245);
	v->a[39013] = 23;
	v->a[39014] = anon_sym_for;
	v->a[39015] = anon_sym_while;
	v->a[39016] = anon_sym_until;
	v->a[39017] = anon_sym_if;
	v->a[39018] = anon_sym_case;
	v->a[39019] = anon_sym_LPAREN;
	small_parse_table_1951(v);
}

void	small_parse_table_1951(t_small_parse_table_array *v)
{
	v->a[39020] = anon_sym_LBRACE;
	v->a[39021] = anon_sym_BANG;
	v->a[39022] = anon_sym_LT;
	v->a[39023] = anon_sym_GT;
	v->a[39024] = anon_sym_GT_GT;
	v->a[39025] = anon_sym_LT_AMP;
	v->a[39026] = anon_sym_GT_AMP;
	v->a[39027] = anon_sym_GT_PIPE;
	v->a[39028] = anon_sym_LT_GT;
	v->a[39029] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39030] = anon_sym_DOLLAR;
	v->a[39031] = anon_sym_DQUOTE;
	v->a[39032] = sym_raw_string;
	v->a[39033] = sym_number;
	v->a[39034] = anon_sym_DOLLAR_LBRACE;
	v->a[39035] = anon_sym_DOLLAR_LPAREN;
	v->a[39036] = sym_word;
	v->a[39037] = 4;
	v->a[39038] = actions(3);
	v->a[39039] = 1;
	small_parse_table_1952(v);
}

void	small_parse_table_1952(t_small_parse_table_array *v)
{
	v->a[39040] = sym_comment;
	v->a[39041] = actions(1249);
	v->a[39042] = 1;
	v->a[39043] = sym_variable_name;
	v->a[39044] = actions(1268);
	v->a[39045] = 1;
	v->a[39046] = anon_sym_BQUOTE;
	v->a[39047] = actions(1245);
	v->a[39048] = 23;
	v->a[39049] = anon_sym_for;
	v->a[39050] = anon_sym_while;
	v->a[39051] = anon_sym_until;
	v->a[39052] = anon_sym_if;
	v->a[39053] = anon_sym_case;
	v->a[39054] = anon_sym_LPAREN;
	v->a[39055] = anon_sym_LBRACE;
	v->a[39056] = anon_sym_BANG;
	v->a[39057] = anon_sym_LT;
	v->a[39058] = anon_sym_GT;
	v->a[39059] = anon_sym_GT_GT;
	small_parse_table_1953(v);
}

void	small_parse_table_1953(t_small_parse_table_array *v)
{
	v->a[39060] = anon_sym_LT_AMP;
	v->a[39061] = anon_sym_GT_AMP;
	v->a[39062] = anon_sym_GT_PIPE;
	v->a[39063] = anon_sym_LT_GT;
	v->a[39064] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39065] = anon_sym_DOLLAR;
	v->a[39066] = anon_sym_DQUOTE;
	v->a[39067] = sym_raw_string;
	v->a[39068] = sym_number;
	v->a[39069] = anon_sym_DOLLAR_LBRACE;
	v->a[39070] = anon_sym_DOLLAR_LPAREN;
	v->a[39071] = sym_word;
	v->a[39072] = 5;
	v->a[39073] = actions(3);
	v->a[39074] = 1;
	v->a[39075] = sym_comment;
	v->a[39076] = actions(1459);
	v->a[39077] = 1;
	v->a[39078] = aux_sym_concatenation_token1;
	v->a[39079] = actions(1462);
	small_parse_table_1954(v);
}

void	small_parse_table_1954(t_small_parse_table_array *v)
{
	v->a[39080] = 1;
	v->a[39081] = sym__concat;
	v->a[39082] = state(656);
	v->a[39083] = 1;
	v->a[39084] = aux_sym_concatenation_repeat1;
	v->a[39085] = actions(1003);
	v->a[39086] = 21;
	v->a[39087] = anon_sym_SEMI_SEMI;
	v->a[39088] = anon_sym_AMP_AMP;
	v->a[39089] = anon_sym_PIPE_PIPE;
	v->a[39090] = anon_sym_LT;
	v->a[39091] = anon_sym_GT;
	v->a[39092] = anon_sym_GT_GT;
	v->a[39093] = anon_sym_LT_AMP;
	v->a[39094] = anon_sym_GT_AMP;
	v->a[39095] = anon_sym_GT_PIPE;
	v->a[39096] = anon_sym_LT_GT;
	v->a[39097] = aux_sym_heredoc_redirect_token1;
	v->a[39098] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[39099] = anon_sym_DOLLAR;
	small_parse_table_1955(v);
}

/* EOF small_parse_table_390.c */
