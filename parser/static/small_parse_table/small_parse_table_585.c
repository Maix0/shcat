/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_585.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2925(t_small_parse_table_array *v)
{
	v->a[58500] = actions(3);
	v->a[58501] = 1;
	v->a[58502] = sym_comment;
	v->a[58503] = actions(2157);
	v->a[58504] = 1;
	v->a[58505] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[58506] = actions(2161);
	v->a[58507] = 1;
	v->a[58508] = anon_sym_DQUOTE;
	v->a[58509] = actions(2163);
	v->a[58510] = 1;
	v->a[58511] = anon_sym_DOLLAR_LBRACE;
	v->a[58512] = actions(2165);
	v->a[58513] = 1;
	v->a[58514] = anon_sym_DOLLAR_LPAREN;
	v->a[58515] = actions(2167);
	v->a[58516] = 1;
	v->a[58517] = anon_sym_BQUOTE;
	v->a[58518] = actions(2274);
	v->a[58519] = 1;
	small_parse_table_2926(v);
}

void	small_parse_table_2926(t_small_parse_table_array *v)
{
	v->a[58520] = anon_sym_DOLLAR;
	v->a[58521] = state(1554);
	v->a[58522] = 1;
	v->a[58523] = sym_concatenation;
	v->a[58524] = actions(2332);
	v->a[58525] = 3;
	v->a[58526] = sym_raw_string;
	v->a[58527] = sym_number;
	v->a[58528] = sym_word;
	v->a[58529] = state(1469);
	v->a[58530] = 5;
	v->a[58531] = sym_arithmetic_expansion;
	v->a[58532] = sym_string;
	v->a[58533] = sym_simple_expansion;
	v->a[58534] = sym_expansion;
	v->a[58535] = sym_command_substitution;
	v->a[58536] = 5;
	v->a[58537] = actions(3);
	v->a[58538] = 1;
	v->a[58539] = sym_comment;
	small_parse_table_2927(v);
}

void	small_parse_table_2927(t_small_parse_table_array *v)
{
	v->a[58540] = actions(1828);
	v->a[58541] = 1;
	v->a[58542] = aux_sym_heredoc_redirect_token1;
	v->a[58543] = state(1211);
	v->a[58544] = 2;
	v->a[58545] = sym_file_redirect;
	v->a[58546] = aux_sym_redirected_statement_repeat2;
	v->a[58547] = actions(1826);
	v->a[58548] = 5;
	v->a[58549] = anon_sym_PIPE;
	v->a[58550] = anon_sym_AMP_AMP;
	v->a[58551] = anon_sym_PIPE_PIPE;
	v->a[58552] = anon_sym_LT_LT;
	v->a[58553] = anon_sym_LT_LT_DASH;
	v->a[58554] = actions(2307);
	v->a[58555] = 7;
	v->a[58556] = anon_sym_LT;
	v->a[58557] = anon_sym_GT;
	v->a[58558] = anon_sym_GT_GT;
	v->a[58559] = anon_sym_LT_AMP;
	small_parse_table_2928(v);
}

void	small_parse_table_2928(t_small_parse_table_array *v)
{
	v->a[58560] = anon_sym_GT_AMP;
	v->a[58561] = anon_sym_GT_PIPE;
	v->a[58562] = anon_sym_LT_GT;
	v->a[58563] = 7;
	v->a[58564] = actions(3);
	v->a[58565] = 1;
	v->a[58566] = sym_comment;
	v->a[58567] = actions(1498);
	v->a[58568] = 1;
	v->a[58569] = anon_sym_RBRACE;
	v->a[58570] = actions(1504);
	v->a[58571] = 1;
	v->a[58572] = anon_sym_PERCENT;
	v->a[58573] = state(1750);
	v->a[58574] = 1;
	v->a[58575] = sym__expansion_regex;
	v->a[58576] = state(1752);
	v->a[58577] = 1;
	v->a[58578] = sym__expansion_expression;
	v->a[58579] = actions(1510);
	small_parse_table_2929(v);
}

void	small_parse_table_2929(t_small_parse_table_array *v)
{
	v->a[58580] = 3;
	v->a[58581] = sym__immediate_double_hash;
	v->a[58582] = anon_sym_POUND;
	v->a[58583] = anon_sym_PERCENT_PERCENT;
	v->a[58584] = actions(1508);
	v->a[58585] = 8;
	v->a[58586] = anon_sym_COLON_DASH;
	v->a[58587] = anon_sym_DASH3;
	v->a[58588] = anon_sym_COLON_EQ;
	v->a[58589] = anon_sym_EQ2;
	v->a[58590] = anon_sym_COLON_QMARK;
	v->a[58591] = anon_sym_QMARK2;
	v->a[58592] = anon_sym_COLON_PLUS;
	v->a[58593] = anon_sym_PLUS3;
	v->a[58594] = 3;
	v->a[58595] = actions(407);
	v->a[58596] = 1;
	v->a[58597] = sym_comment;
	v->a[58598] = actions(455);
	v->a[58599] = 4;
	small_parse_table_2930(v);
}

/* EOF small_parse_table_585.c */
