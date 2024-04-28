/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1157.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5785(t_small_parse_table_array *v)
{
	v->a[115700] = aux_sym_number_token2;
	v->a[115701] = actions(1157);
	v->a[115702] = 1;
	v->a[115703] = anon_sym_DOLLAR_LBRACE;
	v->a[115704] = actions(1159);
	v->a[115705] = 1;
	v->a[115706] = anon_sym_DOLLAR_LPAREN;
	v->a[115707] = actions(1163);
	v->a[115708] = 1;
	v->a[115709] = anon_sym_DOLLAR_BQUOTE;
	v->a[115710] = actions(1169);
	v->a[115711] = 1;
	v->a[115712] = sym__brace_start;
	v->a[115713] = actions(1187);
	v->a[115714] = 1;
	v->a[115715] = sym_word;
	v->a[115716] = actions(1189);
	v->a[115717] = 1;
	v->a[115718] = anon_sym_BANG;
	v->a[115719] = actions(1195);
	small_parse_table_5786(v);
}

void	small_parse_table_5786(t_small_parse_table_array *v)
{
	v->a[115720] = 1;
	v->a[115721] = anon_sym_TILDE;
	v->a[115722] = actions(1201);
	v->a[115723] = 1;
	v->a[115724] = sym_test_operator;
	v->a[115725] = actions(3060);
	v->a[115726] = 1;
	v->a[115727] = anon_sym_BQUOTE;
	v->a[115728] = actions(5779);
	v->a[115729] = 1;
	v->a[115730] = sym__special_character;
	v->a[115731] = state(2717);
	v->a[115732] = 1;
	v->a[115733] = aux_sym__literal_repeat1;
	v->a[115734] = state(3008);
	v->a[115735] = 1;
	v->a[115736] = sym__expression;
	v->a[115737] = actions(1129);
	v->a[115738] = 2;
	v->a[115739] = anon_sym_LPAREN_LPAREN;
	small_parse_table_5787(v);
}

void	small_parse_table_5787(t_small_parse_table_array *v)
{
	v->a[115740] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[115741] = actions(1165);
	v->a[115742] = 2;
	v->a[115743] = anon_sym_LT_LPAREN;
	v->a[115744] = anon_sym_GT_LPAREN;
	v->a[115745] = actions(1191);
	v->a[115746] = 2;
	v->a[115747] = anon_sym_PLUS_PLUS2;
	v->a[115748] = anon_sym_DASH_DASH2;
	v->a[115749] = actions(1193);
	v->a[115750] = 2;
	v->a[115751] = anon_sym_DASH2;
	v->a[115752] = anon_sym_PLUS2;
	v->a[115753] = actions(1199);
	v->a[115754] = 2;
	v->a[115755] = sym_raw_string;
	v->a[115756] = sym_ansi_c_string;
	v->a[115757] = state(2594);
	v->a[115758] = 6;
	v->a[115759] = sym_binary_expression;
	small_parse_table_5788(v);
}

void	small_parse_table_5788(t_small_parse_table_array *v)
{
	v->a[115760] = sym_ternary_expression;
	v->a[115761] = sym_unary_expression;
	v->a[115762] = sym_postfix_expression;
	v->a[115763] = sym_parenthesized_expression;
	v->a[115764] = sym_concatenation;
	v->a[115765] = state(2503);
	v->a[115766] = 9;
	v->a[115767] = sym_arithmetic_expansion;
	v->a[115768] = sym_brace_expression;
	v->a[115769] = sym_string;
	v->a[115770] = sym_translated_string;
	v->a[115771] = sym_number;
	v->a[115772] = sym_simple_expansion;
	v->a[115773] = sym_expansion;
	v->a[115774] = sym_command_substitution;
	v->a[115775] = sym_process_substitution;
	v->a[115776] = 26;
	v->a[115777] = actions(71);
	v->a[115778] = 1;
	v->a[115779] = sym_comment;
	small_parse_table_5789(v);
}

void	small_parse_table_5789(t_small_parse_table_array *v)
{
	v->a[115780] = actions(1131);
	v->a[115781] = 1;
	v->a[115782] = anon_sym_LPAREN;
	v->a[115783] = actions(1141);
	v->a[115784] = 1;
	v->a[115785] = anon_sym_DOLLAR_LBRACK;
	v->a[115786] = actions(1145);
	v->a[115787] = 1;
	v->a[115788] = anon_sym_DOLLAR;
	v->a[115789] = actions(1149);
	v->a[115790] = 1;
	v->a[115791] = anon_sym_DQUOTE;
	v->a[115792] = actions(1153);
	v->a[115793] = 1;
	v->a[115794] = aux_sym_number_token1;
	v->a[115795] = actions(1155);
	v->a[115796] = 1;
	v->a[115797] = aux_sym_number_token2;
	v->a[115798] = actions(1157);
	v->a[115799] = 1;
	small_parse_table_5790(v);
}

/* EOF small_parse_table_1157.c */
