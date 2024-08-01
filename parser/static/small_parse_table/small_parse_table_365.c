/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_365.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1825(t_small_parse_table_array *v)
{
	v->a[36500] = actions(3);
	v->a[36501] = 1;
	v->a[36502] = sym_comment;
	v->a[36503] = actions(1046);
	v->a[36504] = 1;
	v->a[36505] = sym__concat;
	v->a[36506] = actions(1048);
	v->a[36507] = 17;
	v->a[36508] = anon_sym_PIPE;
	v->a[36509] = anon_sym_AMP_AMP;
	v->a[36510] = anon_sym_PIPE_PIPE;
	v->a[36511] = anon_sym_LT;
	v->a[36512] = anon_sym_GT;
	v->a[36513] = anon_sym_GT_GT;
	v->a[36514] = anon_sym_LT_LT;
	v->a[36515] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36516] = aux_sym_concatenation_token1;
	v->a[36517] = anon_sym_DOLLAR;
	v->a[36518] = anon_sym_DQUOTE;
	v->a[36519] = sym_raw_string;
	small_parse_table_1826(v);
}

void	small_parse_table_1826(t_small_parse_table_array *v)
{
	v->a[36520] = sym_number;
	v->a[36521] = anon_sym_DOLLAR_LBRACE;
	v->a[36522] = anon_sym_DOLLAR_LPAREN;
	v->a[36523] = anon_sym_BQUOTE;
	v->a[36524] = sym_word;
	v->a[36525] = 10;
	v->a[36526] = actions(3);
	v->a[36527] = 1;
	v->a[36528] = sym_comment;
	v->a[36529] = actions(1479);
	v->a[36530] = 1;
	v->a[36531] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36532] = actions(1481);
	v->a[36533] = 1;
	v->a[36534] = anon_sym_DOLLAR;
	v->a[36535] = actions(1483);
	v->a[36536] = 1;
	v->a[36537] = anon_sym_DQUOTE;
	v->a[36538] = actions(1485);
	v->a[36539] = 1;
	small_parse_table_1827(v);
}

void	small_parse_table_1827(t_small_parse_table_array *v)
{
	v->a[36540] = anon_sym_DOLLAR_LBRACE;
	v->a[36541] = actions(1487);
	v->a[36542] = 1;
	v->a[36543] = anon_sym_DOLLAR_LPAREN;
	v->a[36544] = actions(1489);
	v->a[36545] = 1;
	v->a[36546] = anon_sym_BQUOTE;
	v->a[36547] = actions(1491);
	v->a[36548] = 1;
	v->a[36549] = sym__bare_dollar;
	v->a[36550] = actions(1477);
	v->a[36551] = 5;
	v->a[36552] = aux_sym_concatenation_token1;
	v->a[36553] = sym_raw_string;
	v->a[36554] = sym_number;
	v->a[36555] = sym__comment_word;
	v->a[36556] = sym_word;
	v->a[36557] = state(353);
	v->a[36558] = 5;
	v->a[36559] = sym_arithmetic_expansion;
	small_parse_table_1828(v);
}

void	small_parse_table_1828(t_small_parse_table_array *v)
{
	v->a[36560] = sym_string;
	v->a[36561] = sym_simple_expansion;
	v->a[36562] = sym_expansion;
	v->a[36563] = sym_command_substitution;
	v->a[36564] = 10;
	v->a[36565] = actions(3);
	v->a[36566] = 1;
	v->a[36567] = sym_comment;
	v->a[36568] = actions(1144);
	v->a[36569] = 1;
	v->a[36570] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36571] = actions(1146);
	v->a[36572] = 1;
	v->a[36573] = anon_sym_DOLLAR;
	v->a[36574] = actions(1148);
	v->a[36575] = 1;
	v->a[36576] = anon_sym_DQUOTE;
	v->a[36577] = actions(1150);
	v->a[36578] = 1;
	v->a[36579] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1829(v);
}

void	small_parse_table_1829(t_small_parse_table_array *v)
{
	v->a[36580] = actions(1152);
	v->a[36581] = 1;
	v->a[36582] = anon_sym_DOLLAR_LPAREN;
	v->a[36583] = actions(1154);
	v->a[36584] = 1;
	v->a[36585] = anon_sym_BQUOTE;
	v->a[36586] = actions(1495);
	v->a[36587] = 1;
	v->a[36588] = sym__bare_dollar;
	v->a[36589] = actions(1493);
	v->a[36590] = 5;
	v->a[36591] = aux_sym_concatenation_token1;
	v->a[36592] = sym_raw_string;
	v->a[36593] = sym_number;
	v->a[36594] = sym__comment_word;
	v->a[36595] = sym_word;
	v->a[36596] = state(686);
	v->a[36597] = 5;
	v->a[36598] = sym_arithmetic_expansion;
	v->a[36599] = sym_string;
	small_parse_table_1830(v);
}

/* EOF small_parse_table_365.c */
