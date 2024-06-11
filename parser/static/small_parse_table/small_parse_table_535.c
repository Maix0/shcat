/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_535.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2675(t_small_parse_table_array *v)
{
	v->a[53500] = sym_number;
	v->a[53501] = anon_sym_DOLLAR_LBRACE;
	v->a[53502] = anon_sym_DOLLAR_LPAREN;
	v->a[53503] = anon_sym_BQUOTE;
	v->a[53504] = sym_word;
	v->a[53505] = 4;
	v->a[53506] = actions(3);
	v->a[53507] = 1;
	v->a[53508] = sym_comment;
	v->a[53509] = actions(1718);
	v->a[53510] = 1;
	v->a[53511] = ts_builtin_sym_end;
	v->a[53512] = actions(1556);
	v->a[53513] = 2;
	v->a[53514] = sym_file_descriptor;
	v->a[53515] = sym_variable_name;
	v->a[53516] = actions(1552);
	v->a[53517] = 27;
	v->a[53518] = anon_sym_for;
	v->a[53519] = anon_sym_while;
	small_parse_table_2676(v);
}

void	small_parse_table_2676(t_small_parse_table_array *v)
{
	v->a[53520] = anon_sym_until;
	v->a[53521] = anon_sym_if;
	v->a[53522] = anon_sym_case;
	v->a[53523] = anon_sym_LPAREN;
	v->a[53524] = anon_sym_LBRACE;
	v->a[53525] = anon_sym_BANG;
	v->a[53526] = anon_sym_LT;
	v->a[53527] = anon_sym_GT;
	v->a[53528] = anon_sym_GT_GT;
	v->a[53529] = anon_sym_AMP_GT;
	v->a[53530] = anon_sym_AMP_GT_GT;
	v->a[53531] = anon_sym_LT_AMP;
	v->a[53532] = anon_sym_GT_AMP;
	v->a[53533] = anon_sym_GT_PIPE;
	v->a[53534] = anon_sym_LT_AMP_DASH;
	v->a[53535] = anon_sym_GT_AMP_DASH;
	v->a[53536] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[53537] = anon_sym_DOLLAR;
	v->a[53538] = anon_sym_DQUOTE;
	v->a[53539] = sym_raw_string;
	small_parse_table_2677(v);
}

void	small_parse_table_2677(t_small_parse_table_array *v)
{
	v->a[53540] = sym_number;
	v->a[53541] = anon_sym_DOLLAR_LBRACE;
	v->a[53542] = anon_sym_DOLLAR_LPAREN;
	v->a[53543] = anon_sym_BQUOTE;
	v->a[53544] = sym_word;
	v->a[53545] = 12;
	v->a[53546] = actions(3);
	v->a[53547] = 1;
	v->a[53548] = sym_comment;
	v->a[53549] = actions(559);
	v->a[53550] = 1;
	v->a[53551] = sym_file_descriptor;
	v->a[53552] = actions(1729);
	v->a[53553] = 1;
	v->a[53554] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[53555] = actions(1732);
	v->a[53556] = 1;
	v->a[53557] = anon_sym_DOLLAR;
	v->a[53558] = actions(1735);
	v->a[53559] = 1;
	small_parse_table_2678(v);
}

void	small_parse_table_2678(t_small_parse_table_array *v)
{
	v->a[53560] = anon_sym_DQUOTE;
	v->a[53561] = actions(1738);
	v->a[53562] = 1;
	v->a[53563] = anon_sym_DOLLAR_LBRACE;
	v->a[53564] = actions(1741);
	v->a[53565] = 1;
	v->a[53566] = anon_sym_DOLLAR_LPAREN;
	v->a[53567] = actions(1744);
	v->a[53568] = 1;
	v->a[53569] = anon_sym_BQUOTE;
	v->a[53570] = state(853);
	v->a[53571] = 2;
	v->a[53572] = sym_concatenation;
	v->a[53573] = aux_sym_for_statement_repeat1;
	v->a[53574] = actions(1726);
	v->a[53575] = 3;
	v->a[53576] = sym_raw_string;
	v->a[53577] = sym_number;
	v->a[53578] = sym_word;
	v->a[53579] = state(1084);
	small_parse_table_2679(v);
}

void	small_parse_table_2679(t_small_parse_table_array *v)
{
	v->a[53580] = 5;
	v->a[53581] = sym_arithmetic_expansion;
	v->a[53582] = sym_string;
	v->a[53583] = sym_simple_expansion;
	v->a[53584] = sym_expansion;
	v->a[53585] = sym_command_substitution;
	v->a[53586] = actions(564);
	v->a[53587] = 13;
	v->a[53588] = anon_sym_AMP_AMP;
	v->a[53589] = anon_sym_PIPE_PIPE;
	v->a[53590] = anon_sym_LT;
	v->a[53591] = anon_sym_GT;
	v->a[53592] = anon_sym_GT_GT;
	v->a[53593] = anon_sym_AMP_GT;
	v->a[53594] = anon_sym_AMP_GT_GT;
	v->a[53595] = anon_sym_LT_AMP;
	v->a[53596] = anon_sym_GT_AMP;
	v->a[53597] = anon_sym_GT_PIPE;
	v->a[53598] = anon_sym_LT_AMP_DASH;
	v->a[53599] = anon_sym_GT_AMP_DASH;
	small_parse_table_2680(v);
}

/* EOF small_parse_table_535.c */
