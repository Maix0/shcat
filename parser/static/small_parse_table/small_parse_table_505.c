/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_505.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2525(t_small_parse_table_array *v)
{
	v->a[50500] = anon_sym_while;
	v->a[50501] = anon_sym_until;
	v->a[50502] = anon_sym_if;
	v->a[50503] = anon_sym_case;
	v->a[50504] = anon_sym_LPAREN;
	v->a[50505] = anon_sym_LBRACE;
	v->a[50506] = anon_sym_BANG;
	v->a[50507] = anon_sym_LT;
	v->a[50508] = anon_sym_GT;
	v->a[50509] = anon_sym_GT_GT;
	v->a[50510] = anon_sym_AMP_GT;
	v->a[50511] = anon_sym_AMP_GT_GT;
	v->a[50512] = anon_sym_LT_AMP;
	v->a[50513] = anon_sym_GT_AMP;
	v->a[50514] = anon_sym_GT_PIPE;
	v->a[50515] = anon_sym_LT_AMP_DASH;
	v->a[50516] = anon_sym_GT_AMP_DASH;
	v->a[50517] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50518] = anon_sym_DOLLAR;
	v->a[50519] = anon_sym_DQUOTE;
	small_parse_table_2526(v);
}

void	small_parse_table_2526(t_small_parse_table_array *v)
{
	v->a[50520] = sym_raw_string;
	v->a[50521] = sym_number;
	v->a[50522] = anon_sym_DOLLAR_LBRACE;
	v->a[50523] = anon_sym_DOLLAR_LPAREN;
	v->a[50524] = anon_sym_BQUOTE;
	v->a[50525] = sym_word;
	v->a[50526] = 7;
	v->a[50527] = actions(3);
	v->a[50528] = 1;
	v->a[50529] = sym_comment;
	v->a[50530] = actions(1565);
	v->a[50531] = 1;
	v->a[50532] = sym_file_descriptor;
	v->a[50533] = actions(1568);
	v->a[50534] = 1;
	v->a[50535] = sym_variable_name;
	v->a[50536] = actions(1665);
	v->a[50537] = 1;
	v->a[50538] = anon_sym_RPAREN;
	v->a[50539] = actions(1558);
	small_parse_table_2527(v);
}

void	small_parse_table_2527(t_small_parse_table_array *v)
{
	v->a[50540] = 9;
	v->a[50541] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[50542] = anon_sym_DOLLAR;
	v->a[50543] = anon_sym_DQUOTE;
	v->a[50544] = sym_raw_string;
	v->a[50545] = sym_number;
	v->a[50546] = anon_sym_DOLLAR_LBRACE;
	v->a[50547] = anon_sym_DOLLAR_LPAREN;
	v->a[50548] = anon_sym_BQUOTE;
	v->a[50549] = sym_word;
	v->a[50550] = actions(1560);
	v->a[50551] = 9;
	v->a[50552] = anon_sym_PIPE;
	v->a[50553] = anon_sym_SEMI_SEMI;
	v->a[50554] = anon_sym_AMP_AMP;
	v->a[50555] = anon_sym_PIPE_PIPE;
	v->a[50556] = anon_sym_LT_LT;
	v->a[50557] = anon_sym_LT_LT_DASH;
	v->a[50558] = aux_sym_heredoc_redirect_token1;
	v->a[50559] = anon_sym_AMP;
	small_parse_table_2528(v);
}

void	small_parse_table_2528(t_small_parse_table_array *v)
{
	v->a[50560] = anon_sym_SEMI;
	v->a[50561] = actions(1562);
	v->a[50562] = 10;
	v->a[50563] = anon_sym_LT;
	v->a[50564] = anon_sym_GT;
	v->a[50565] = anon_sym_GT_GT;
	v->a[50566] = anon_sym_AMP_GT;
	v->a[50567] = anon_sym_AMP_GT_GT;
	v->a[50568] = anon_sym_LT_AMP;
	v->a[50569] = anon_sym_GT_AMP;
	v->a[50570] = anon_sym_GT_PIPE;
	v->a[50571] = anon_sym_LT_AMP_DASH;
	v->a[50572] = anon_sym_GT_AMP_DASH;
	v->a[50573] = 4;
	v->a[50574] = actions(3);
	v->a[50575] = 1;
	v->a[50576] = sym_comment;
	v->a[50577] = actions(1554);
	v->a[50578] = 2;
	v->a[50579] = anon_sym_RPAREN;
	small_parse_table_2529(v);
}

void	small_parse_table_2529(t_small_parse_table_array *v)
{
	v->a[50580] = anon_sym_SEMI_SEMI;
	v->a[50581] = actions(1556);
	v->a[50582] = 2;
	v->a[50583] = sym_file_descriptor;
	v->a[50584] = sym_variable_name;
	v->a[50585] = actions(1552);
	v->a[50586] = 27;
	v->a[50587] = anon_sym_for;
	v->a[50588] = anon_sym_while;
	v->a[50589] = anon_sym_until;
	v->a[50590] = anon_sym_if;
	v->a[50591] = anon_sym_case;
	v->a[50592] = anon_sym_LPAREN;
	v->a[50593] = anon_sym_LBRACE;
	v->a[50594] = anon_sym_BANG;
	v->a[50595] = anon_sym_LT;
	v->a[50596] = anon_sym_GT;
	v->a[50597] = anon_sym_GT_GT;
	v->a[50598] = anon_sym_AMP_GT;
	v->a[50599] = anon_sym_AMP_GT_GT;
	small_parse_table_2530(v);
}

/* EOF small_parse_table_505.c */
