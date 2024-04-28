/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1005.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5025(t_small_parse_table_array *v)
{
	v->a[100500] = 1;
	v->a[100501] = anon_sym_DOLLAR_LBRACK;
	v->a[100502] = actions(367);
	v->a[100503] = 1;
	v->a[100504] = anon_sym_DOLLAR;
	v->a[100505] = actions(371);
	v->a[100506] = 1;
	v->a[100507] = anon_sym_DQUOTE;
	v->a[100508] = actions(375);
	v->a[100509] = 1;
	v->a[100510] = aux_sym_number_token1;
	v->a[100511] = actions(377);
	v->a[100512] = 1;
	v->a[100513] = aux_sym_number_token2;
	v->a[100514] = actions(379);
	v->a[100515] = 1;
	v->a[100516] = anon_sym_DOLLAR_LBRACE;
	v->a[100517] = actions(381);
	v->a[100518] = 1;
	v->a[100519] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_5026(v);
}

void	small_parse_table_5026(t_small_parse_table_array *v)
{
	v->a[100520] = actions(385);
	v->a[100521] = 1;
	v->a[100522] = anon_sym_DOLLAR_BQUOTE;
	v->a[100523] = actions(391);
	v->a[100524] = 1;
	v->a[100525] = sym__brace_start;
	v->a[100526] = actions(1091);
	v->a[100527] = 1;
	v->a[100528] = sym_word;
	v->a[100529] = actions(1093);
	v->a[100530] = 1;
	v->a[100531] = anon_sym_LPAREN;
	v->a[100532] = actions(1095);
	v->a[100533] = 1;
	v->a[100534] = anon_sym_BANG;
	v->a[100535] = actions(1103);
	v->a[100536] = 1;
	v->a[100537] = anon_sym_TILDE;
	v->a[100538] = actions(1113);
	v->a[100539] = 1;
	small_parse_table_5027(v);
}

void	small_parse_table_5027(t_small_parse_table_array *v)
{
	v->a[100540] = sym_test_operator;
	v->a[100541] = actions(5809);
	v->a[100542] = 1;
	v->a[100543] = anon_sym_BQUOTE;
	v->a[100544] = actions(5916);
	v->a[100545] = 1;
	v->a[100546] = sym__special_character;
	v->a[100547] = state(2472);
	v->a[100548] = 1;
	v->a[100549] = aux_sym__literal_repeat1;
	v->a[100550] = state(2835);
	v->a[100551] = 1;
	v->a[100552] = sym__expression;
	v->a[100553] = actions(352);
	v->a[100554] = 2;
	v->a[100555] = anon_sym_LPAREN_LPAREN;
	v->a[100556] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[100557] = actions(387);
	v->a[100558] = 2;
	v->a[100559] = anon_sym_LT_LPAREN;
	small_parse_table_5028(v);
}

void	small_parse_table_5028(t_small_parse_table_array *v)
{
	v->a[100560] = anon_sym_GT_LPAREN;
	v->a[100561] = actions(1099);
	v->a[100562] = 2;
	v->a[100563] = anon_sym_PLUS_PLUS2;
	v->a[100564] = anon_sym_DASH_DASH2;
	v->a[100565] = actions(1101);
	v->a[100566] = 2;
	v->a[100567] = anon_sym_DASH2;
	v->a[100568] = anon_sym_PLUS2;
	v->a[100569] = actions(1109);
	v->a[100570] = 2;
	v->a[100571] = sym_raw_string;
	v->a[100572] = sym_ansi_c_string;
	v->a[100573] = state(2863);
	v->a[100574] = 6;
	v->a[100575] = sym_binary_expression;
	v->a[100576] = sym_ternary_expression;
	v->a[100577] = sym_unary_expression;
	v->a[100578] = sym_postfix_expression;
	v->a[100579] = sym_parenthesized_expression;
	small_parse_table_5029(v);
}

void	small_parse_table_5029(t_small_parse_table_array *v)
{
	v->a[100580] = sym_concatenation;
	v->a[100581] = state(2451);
	v->a[100582] = 9;
	v->a[100583] = sym_arithmetic_expansion;
	v->a[100584] = sym_brace_expression;
	v->a[100585] = sym_string;
	v->a[100586] = sym_translated_string;
	v->a[100587] = sym_number;
	v->a[100588] = sym_simple_expansion;
	v->a[100589] = sym_expansion;
	v->a[100590] = sym_command_substitution;
	v->a[100591] = sym_process_substitution;
	v->a[100592] = 3;
	v->a[100593] = actions(3);
	v->a[100594] = 1;
	v->a[100595] = sym_comment;
	v->a[100596] = actions(5768);
	v->a[100597] = 6;
	v->a[100598] = sym_file_descriptor;
	v->a[100599] = sym_variable_name;
	small_parse_table_5030(v);
}

/* EOF small_parse_table_1005.c */
