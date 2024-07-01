/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_715.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3575(t_small_parse_table_array *v)
{
	v->a[71500] = sym__concat;
	v->a[71501] = actions(893);
	v->a[71502] = 14;
	v->a[71503] = anon_sym_SEMI_SEMI;
	v->a[71504] = aux_sym_heredoc_redirect_token1;
	v->a[71505] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[71506] = anon_sym_AMP;
	v->a[71507] = aux_sym_concatenation_token1;
	v->a[71508] = anon_sym_DOLLAR;
	v->a[71509] = anon_sym_DQUOTE;
	v->a[71510] = sym_raw_string;
	v->a[71511] = sym_number;
	v->a[71512] = anon_sym_DOLLAR_LBRACE;
	v->a[71513] = anon_sym_DOLLAR_LPAREN;
	v->a[71514] = anon_sym_BQUOTE;
	v->a[71515] = sym_word;
	v->a[71516] = anon_sym_SEMI;
	v->a[71517] = 10;
	v->a[71518] = actions(3);
	v->a[71519] = 1;
	small_parse_table_3576(v);
}

void	small_parse_table_3576(t_small_parse_table_array *v)
{
	v->a[71520] = sym_comment;
	v->a[71521] = actions(2574);
	v->a[71522] = 1;
	v->a[71523] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[71524] = actions(2576);
	v->a[71525] = 1;
	v->a[71526] = anon_sym_DOLLAR;
	v->a[71527] = actions(2578);
	v->a[71528] = 1;
	v->a[71529] = anon_sym_DQUOTE;
	v->a[71530] = actions(2580);
	v->a[71531] = 1;
	v->a[71532] = anon_sym_DOLLAR_LBRACE;
	v->a[71533] = actions(2582);
	v->a[71534] = 1;
	v->a[71535] = anon_sym_DOLLAR_LPAREN;
	v->a[71536] = actions(2584);
	v->a[71537] = 1;
	v->a[71538] = anon_sym_BQUOTE;
	v->a[71539] = state(1798);
	small_parse_table_3577(v);
}

void	small_parse_table_3577(t_small_parse_table_array *v)
{
	v->a[71540] = 1;
	v->a[71541] = sym_concatenation;
	v->a[71542] = actions(2792);
	v->a[71543] = 3;
	v->a[71544] = sym_raw_string;
	v->a[71545] = sym_number;
	v->a[71546] = sym_word;
	v->a[71547] = state(1726);
	v->a[71548] = 5;
	v->a[71549] = sym_arithmetic_expansion;
	v->a[71550] = sym_string;
	v->a[71551] = sym_simple_expansion;
	v->a[71552] = sym_expansion;
	v->a[71553] = sym_command_substitution;
	v->a[71554] = 6;
	v->a[71555] = actions(3);
	v->a[71556] = 1;
	v->a[71557] = sym_comment;
	v->a[71558] = actions(2794);
	v->a[71559] = 1;
	small_parse_table_3578(v);
}

void	small_parse_table_3578(t_small_parse_table_array *v)
{
	v->a[71560] = anon_sym_RBRACE;
	v->a[71561] = actions(2796);
	v->a[71562] = 1;
	v->a[71563] = anon_sym_PERCENT;
	v->a[71564] = state(2081);
	v->a[71565] = 2;
	v->a[71566] = sym_expansion_expression;
	v->a[71567] = sym_expansion_regex;
	v->a[71568] = actions(2798);
	v->a[71569] = 3;
	v->a[71570] = sym__immediate_double_hash;
	v->a[71571] = anon_sym_POUND;
	v->a[71572] = anon_sym_PERCENT_PERCENT;
	v->a[71573] = actions(2800);
	v->a[71574] = 8;
	v->a[71575] = anon_sym_COLON_DASH;
	v->a[71576] = anon_sym_DASH3;
	v->a[71577] = anon_sym_COLON_EQ;
	v->a[71578] = anon_sym_EQ2;
	v->a[71579] = anon_sym_COLON_QMARK;
	small_parse_table_3579(v);
}

void	small_parse_table_3579(t_small_parse_table_array *v)
{
	v->a[71580] = anon_sym_QMARK2;
	v->a[71581] = anon_sym_COLON_PLUS;
	v->a[71582] = anon_sym_PLUS3;
	v->a[71583] = 8;
	v->a[71584] = actions(664);
	v->a[71585] = 1;
	v->a[71586] = sym_comment;
	v->a[71587] = actions(744);
	v->a[71588] = 1;
	v->a[71589] = anon_sym_LT_LT;
	v->a[71590] = actions(2436);
	v->a[71591] = 1;
	v->a[71592] = sym_file_descriptor;
	v->a[71593] = actions(2786);
	v->a[71594] = 1;
	v->a[71595] = anon_sym_LT_LT_DASH;
	v->a[71596] = actions(2432);
	v->a[71597] = 2;
	v->a[71598] = anon_sym_LT;
	v->a[71599] = anon_sym_GT;
	small_parse_table_3580(v);
}

/* EOF small_parse_table_715.c */
