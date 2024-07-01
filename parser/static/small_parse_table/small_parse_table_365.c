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
	v->a[36500] = aux_sym_heredoc_redirect_token1;
	v->a[36501] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36502] = anon_sym_AMP;
	v->a[36503] = aux_sym_concatenation_token1;
	v->a[36504] = anon_sym_DOLLAR;
	v->a[36505] = anon_sym_DQUOTE;
	v->a[36506] = sym_raw_string;
	v->a[36507] = sym_number;
	v->a[36508] = anon_sym_DOLLAR_LBRACE;
	v->a[36509] = anon_sym_DOLLAR_LPAREN;
	v->a[36510] = anon_sym_BQUOTE;
	v->a[36511] = sym_word;
	v->a[36512] = anon_sym_SEMI;
	v->a[36513] = 3;
	v->a[36514] = actions(3);
	v->a[36515] = 1;
	v->a[36516] = sym_comment;
	v->a[36517] = actions(815);
	v->a[36518] = 3;
	v->a[36519] = sym_file_descriptor;
	small_parse_table_1826(v);
}

void	small_parse_table_1826(t_small_parse_table_array *v)
{
	v->a[36520] = sym__concat;
	v->a[36521] = sym_variable_name;
	v->a[36522] = actions(813);
	v->a[36523] = 27;
	v->a[36524] = anon_sym_PIPE;
	v->a[36525] = anon_sym_RPAREN;
	v->a[36526] = anon_sym_SEMI_SEMI;
	v->a[36527] = anon_sym_AMP_AMP;
	v->a[36528] = anon_sym_PIPE_PIPE;
	v->a[36529] = anon_sym_LT;
	v->a[36530] = anon_sym_GT;
	v->a[36531] = anon_sym_GT_GT;
	v->a[36532] = anon_sym_LT_AMP;
	v->a[36533] = anon_sym_GT_AMP;
	v->a[36534] = anon_sym_GT_PIPE;
	v->a[36535] = anon_sym_LT_GT;
	v->a[36536] = anon_sym_LT_LT;
	v->a[36537] = anon_sym_LT_LT_DASH;
	v->a[36538] = aux_sym_heredoc_redirect_token1;
	v->a[36539] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_1827(v);
}

void	small_parse_table_1827(t_small_parse_table_array *v)
{
	v->a[36540] = anon_sym_AMP;
	v->a[36541] = aux_sym_concatenation_token1;
	v->a[36542] = anon_sym_DOLLAR;
	v->a[36543] = anon_sym_DQUOTE;
	v->a[36544] = sym_raw_string;
	v->a[36545] = sym_number;
	v->a[36546] = anon_sym_DOLLAR_LBRACE;
	v->a[36547] = anon_sym_DOLLAR_LPAREN;
	v->a[36548] = anon_sym_BQUOTE;
	v->a[36549] = sym_word;
	v->a[36550] = anon_sym_SEMI;
	v->a[36551] = 12;
	v->a[36552] = actions(3);
	v->a[36553] = 1;
	v->a[36554] = sym_comment;
	v->a[36555] = actions(495);
	v->a[36556] = 1;
	v->a[36557] = sym_file_descriptor;
	v->a[36558] = actions(871);
	v->a[36559] = 1;
	small_parse_table_1828(v);
}

void	small_parse_table_1828(t_small_parse_table_array *v)
{
	v->a[36560] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[36561] = actions(873);
	v->a[36562] = 1;
	v->a[36563] = anon_sym_DOLLAR;
	v->a[36564] = actions(875);
	v->a[36565] = 1;
	v->a[36566] = anon_sym_DQUOTE;
	v->a[36567] = actions(877);
	v->a[36568] = 1;
	v->a[36569] = anon_sym_DOLLAR_LBRACE;
	v->a[36570] = actions(879);
	v->a[36571] = 1;
	v->a[36572] = anon_sym_DOLLAR_LPAREN;
	v->a[36573] = actions(881);
	v->a[36574] = 1;
	v->a[36575] = anon_sym_BQUOTE;
	v->a[36576] = state(539);
	v->a[36577] = 2;
	v->a[36578] = sym_concatenation;
	v->a[36579] = aux_sym_for_statement_repeat1;
	small_parse_table_1829(v);
}

void	small_parse_table_1829(t_small_parse_table_array *v)
{
	v->a[36580] = actions(1319);
	v->a[36581] = 3;
	v->a[36582] = sym_raw_string;
	v->a[36583] = sym_number;
	v->a[36584] = sym_word;
	v->a[36585] = state(842);
	v->a[36586] = 5;
	v->a[36587] = sym_arithmetic_expansion;
	v->a[36588] = sym_string;
	v->a[36589] = sym_simple_expansion;
	v->a[36590] = sym_expansion;
	v->a[36591] = sym_command_substitution;
	v->a[36592] = actions(497);
	v->a[36593] = 13;
	v->a[36594] = anon_sym_PIPE;
	v->a[36595] = anon_sym_AMP_AMP;
	v->a[36596] = anon_sym_PIPE_PIPE;
	v->a[36597] = anon_sym_LT;
	v->a[36598] = anon_sym_GT;
	v->a[36599] = anon_sym_GT_GT;
	small_parse_table_1830(v);
}

/* EOF small_parse_table_365.c */
