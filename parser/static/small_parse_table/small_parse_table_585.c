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
	v->a[58500] = sym_word;
	v->a[58501] = state(1806);
	v->a[58502] = 5;
	v->a[58503] = sym_arithmetic_expansion;
	v->a[58504] = sym_string;
	v->a[58505] = sym_simple_expansion;
	v->a[58506] = sym_expansion;
	v->a[58507] = sym_command_substitution;
	v->a[58508] = 10;
	v->a[58509] = actions(3);
	v->a[58510] = 1;
	v->a[58511] = sym_comment;
	v->a[58512] = actions(692);
	v->a[58513] = 1;
	v->a[58514] = anon_sym_PIPE;
	v->a[58515] = actions(1857);
	v->a[58516] = 1;
	v->a[58517] = aux_sym_heredoc_redirect_token1;
	v->a[58518] = actions(1946);
	v->a[58519] = 1;
	small_parse_table_2926(v);
}

void	small_parse_table_2926(t_small_parse_table_array *v)
{
	v->a[58520] = sym_file_descriptor;
	v->a[58521] = state(834);
	v->a[58522] = 1;
	v->a[58523] = sym_terminator;
	v->a[58524] = actions(700);
	v->a[58525] = 2;
	v->a[58526] = anon_sym_LT_LT;
	v->a[58527] = anon_sym_LT_LT_DASH;
	v->a[58528] = actions(914);
	v->a[58529] = 2;
	v->a[58530] = anon_sym_AMP_AMP;
	v->a[58531] = anon_sym_PIPE_PIPE;
	v->a[58532] = actions(696);
	v->a[58533] = 3;
	v->a[58534] = anon_sym_SEMI_SEMI;
	v->a[58535] = anon_sym_AMP;
	v->a[58536] = anon_sym_SEMI;
	v->a[58537] = state(1134);
	v->a[58538] = 3;
	v->a[58539] = sym_file_redirect;
	small_parse_table_2927(v);
}

void	small_parse_table_2927(t_small_parse_table_array *v)
{
	v->a[58540] = sym_heredoc_redirect;
	v->a[58541] = aux_sym_redirected_statement_repeat1;
	v->a[58542] = actions(1942);
	v->a[58543] = 7;
	v->a[58544] = anon_sym_LT;
	v->a[58545] = anon_sym_GT;
	v->a[58546] = anon_sym_GT_GT;
	v->a[58547] = anon_sym_LT_AMP;
	v->a[58548] = anon_sym_GT_AMP;
	v->a[58549] = anon_sym_GT_PIPE;
	v->a[58550] = anon_sym_LT_GT;
	v->a[58551] = 15;
	v->a[58552] = actions(3);
	v->a[58553] = 1;
	v->a[58554] = sym_comment;
	v->a[58555] = actions(1637);
	v->a[58556] = 1;
	v->a[58557] = anon_sym_LPAREN;
	v->a[58558] = actions(1641);
	v->a[58559] = 1;
	small_parse_table_2928(v);
}

void	small_parse_table_2928(t_small_parse_table_array *v)
{
	v->a[58560] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[58561] = actions(1643);
	v->a[58562] = 1;
	v->a[58563] = anon_sym_DOLLAR;
	v->a[58564] = actions(1645);
	v->a[58565] = 1;
	v->a[58566] = anon_sym_DQUOTE;
	v->a[58567] = actions(1647);
	v->a[58568] = 1;
	v->a[58569] = anon_sym_DOLLAR_LBRACE;
	v->a[58570] = actions(1649);
	v->a[58571] = 1;
	v->a[58572] = anon_sym_DOLLAR_LPAREN;
	v->a[58573] = actions(1651);
	v->a[58574] = 1;
	v->a[58575] = anon_sym_BQUOTE;
	v->a[58576] = actions(1653);
	v->a[58577] = 1;
	v->a[58578] = sym_extglob_pattern;
	v->a[58579] = state(1123);
	small_parse_table_2929(v);
}

void	small_parse_table_2929(t_small_parse_table_array *v)
{
	v->a[58580] = 1;
	v->a[58581] = aux_sym_case_statement_repeat1;
	v->a[58582] = state(1713);
	v->a[58583] = 1;
	v->a[58584] = sym_case_item;
	v->a[58585] = state(2083);
	v->a[58586] = 1;
	v->a[58587] = sym__case_item_last;
	v->a[58588] = state(1873);
	v->a[58589] = 2;
	v->a[58590] = sym_concatenation;
	v->a[58591] = sym__extglob_blob;
	v->a[58592] = actions(1633);
	v->a[58593] = 3;
	v->a[58594] = sym_raw_string;
	v->a[58595] = sym_number;
	v->a[58596] = sym_word;
	v->a[58597] = state(1806);
	v->a[58598] = 5;
	v->a[58599] = sym_arithmetic_expansion;
	small_parse_table_2930(v);
}

/* EOF small_parse_table_585.c */
