/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1185.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5925(t_small_parse_table_array *v)
{
	v->a[118500] = actions(6927);
	v->a[118501] = 1;
	v->a[118502] = sym__special_character;
	v->a[118503] = actions(6931);
	v->a[118504] = 1;
	v->a[118505] = sym__comment_word;
	v->a[118506] = actions(6957);
	v->a[118507] = 1;
	v->a[118508] = anon_sym_DOLLAR;
	v->a[118509] = actions(6929);
	v->a[118510] = 3;
	v->a[118511] = sym_test_operator;
	v->a[118512] = sym__bare_dollar;
	v->a[118513] = sym_raw_string;
	v->a[118514] = state(3240);
	v->a[118515] = 7;
	v->a[118516] = sym_arithmetic_expansion;
	v->a[118517] = sym_brace_expression;
	v->a[118518] = sym_string;
	v->a[118519] = sym_number;
	small_parse_table_5926(v);
}

void	small_parse_table_5926(t_small_parse_table_array *v)
{
	v->a[118520] = sym_simple_expansion;
	v->a[118521] = sym_expansion;
	v->a[118522] = sym_command_substitution;
	v->a[118523] = 16;
	v->a[118524] = actions(3);
	v->a[118525] = 1;
	v->a[118526] = sym_comment;
	v->a[118527] = actions(1546);
	v->a[118528] = 1;
	v->a[118529] = aux_sym_number_token1;
	v->a[118530] = actions(1548);
	v->a[118531] = 1;
	v->a[118532] = aux_sym_number_token2;
	v->a[118533] = actions(1552);
	v->a[118534] = 1;
	v->a[118535] = anon_sym_DOLLAR_LPAREN;
	v->a[118536] = actions(1560);
	v->a[118537] = 1;
	v->a[118538] = sym__brace_start;
	v->a[118539] = actions(6169);
	small_parse_table_5927(v);
}

void	small_parse_table_5927(t_small_parse_table_array *v)
{
	v->a[118540] = 1;
	v->a[118541] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[118542] = actions(6173);
	v->a[118543] = 1;
	v->a[118544] = anon_sym_DQUOTE;
	v->a[118545] = actions(6175);
	v->a[118546] = 1;
	v->a[118547] = anon_sym_DOLLAR_LBRACE;
	v->a[118548] = actions(6177);
	v->a[118549] = 1;
	v->a[118550] = anon_sym_BQUOTE;
	v->a[118551] = actions(6179);
	v->a[118552] = 1;
	v->a[118553] = anon_sym_DOLLAR_BQUOTE;
	v->a[118554] = actions(6933);
	v->a[118555] = 1;
	v->a[118556] = sym_word;
	v->a[118557] = actions(6935);
	v->a[118558] = 1;
	v->a[118559] = sym__special_character;
	small_parse_table_5928(v);
}

void	small_parse_table_5928(t_small_parse_table_array *v)
{
	v->a[118560] = actions(6939);
	v->a[118561] = 1;
	v->a[118562] = sym__comment_word;
	v->a[118563] = actions(6959);
	v->a[118564] = 1;
	v->a[118565] = anon_sym_DOLLAR;
	v->a[118566] = actions(6937);
	v->a[118567] = 3;
	v->a[118568] = sym_test_operator;
	v->a[118569] = sym__bare_dollar;
	v->a[118570] = sym_raw_string;
	v->a[118571] = state(842);
	v->a[118572] = 7;
	v->a[118573] = sym_arithmetic_expansion;
	v->a[118574] = sym_brace_expression;
	v->a[118575] = sym_string;
	v->a[118576] = sym_number;
	v->a[118577] = sym_simple_expansion;
	v->a[118578] = sym_expansion;
	v->a[118579] = sym_command_substitution;
	small_parse_table_5929(v);
}

void	small_parse_table_5929(t_small_parse_table_array *v)
{
	v->a[118580] = 16;
	v->a[118581] = actions(3);
	v->a[118582] = 1;
	v->a[118583] = sym_comment;
	v->a[118584] = actions(2541);
	v->a[118585] = 1;
	v->a[118586] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[118587] = actions(2547);
	v->a[118588] = 1;
	v->a[118589] = anon_sym_DQUOTE;
	v->a[118590] = actions(2551);
	v->a[118591] = 1;
	v->a[118592] = aux_sym_number_token1;
	v->a[118593] = actions(2553);
	v->a[118594] = 1;
	v->a[118595] = aux_sym_number_token2;
	v->a[118596] = actions(2555);
	v->a[118597] = 1;
	v->a[118598] = anon_sym_DOLLAR_LBRACE;
	v->a[118599] = actions(2557);
	small_parse_table_5930(v);
}

/* EOF small_parse_table_1185.c */
