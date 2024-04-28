/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2077.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10385(t_small_parse_table_array *v)
{
	v->a[207700] = 1;
	v->a[207701] = anon_sym_DOLLAR;
	v->a[207702] = actions(9704);
	v->a[207703] = 1;
	v->a[207704] = sym__comment_word;
	v->a[207705] = actions(8924);
	v->a[207706] = 2;
	v->a[207707] = anon_sym_LPAREN_LPAREN;
	v->a[207708] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[207709] = actions(8940);
	v->a[207710] = 2;
	v->a[207711] = anon_sym_LT_LPAREN;
	v->a[207712] = anon_sym_GT_LPAREN;
	v->a[207713] = actions(9700);
	v->a[207714] = 2;
	v->a[207715] = sym_test_operator;
	v->a[207716] = sym__special_character;
	v->a[207717] = actions(9702);
	v->a[207718] = 3;
	v->a[207719] = sym__bare_dollar;
	small_parse_table_10386(v);
}

void	small_parse_table_10386(t_small_parse_table_array *v)
{
	v->a[207720] = sym_raw_string;
	v->a[207721] = sym_ansi_c_string;
	v->a[207722] = state(1851);
	v->a[207723] = 9;
	v->a[207724] = sym_arithmetic_expansion;
	v->a[207725] = sym_brace_expression;
	v->a[207726] = sym_string;
	v->a[207727] = sym_translated_string;
	v->a[207728] = sym_number;
	v->a[207729] = sym_simple_expansion;
	v->a[207730] = sym_expansion;
	v->a[207731] = sym_command_substitution;
	v->a[207732] = sym_process_substitution;
	v->a[207733] = 18;
	v->a[207734] = actions(3);
	v->a[207735] = 1;
	v->a[207736] = sym_comment;
	v->a[207737] = actions(1043);
	v->a[207738] = 1;
	v->a[207739] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_10387(v);
}

void	small_parse_table_10387(t_small_parse_table_array *v)
{
	v->a[207740] = actions(1045);
	v->a[207741] = 1;
	v->a[207742] = anon_sym_DOLLAR;
	v->a[207743] = actions(1049);
	v->a[207744] = 1;
	v->a[207745] = anon_sym_DQUOTE;
	v->a[207746] = actions(1053);
	v->a[207747] = 1;
	v->a[207748] = aux_sym_number_token1;
	v->a[207749] = actions(1055);
	v->a[207750] = 1;
	v->a[207751] = aux_sym_number_token2;
	v->a[207752] = actions(1057);
	v->a[207753] = 1;
	v->a[207754] = anon_sym_DOLLAR_LBRACE;
	v->a[207755] = actions(1059);
	v->a[207756] = 1;
	v->a[207757] = anon_sym_DOLLAR_LPAREN;
	v->a[207758] = actions(1061);
	v->a[207759] = 1;
	small_parse_table_10388(v);
}

void	small_parse_table_10388(t_small_parse_table_array *v)
{
	v->a[207760] = anon_sym_BQUOTE;
	v->a[207761] = actions(1063);
	v->a[207762] = 1;
	v->a[207763] = anon_sym_DOLLAR_BQUOTE;
	v->a[207764] = actions(1071);
	v->a[207765] = 1;
	v->a[207766] = sym__brace_start;
	v->a[207767] = actions(9706);
	v->a[207768] = 1;
	v->a[207769] = sym_word;
	v->a[207770] = actions(9712);
	v->a[207771] = 1;
	v->a[207772] = sym__comment_word;
	v->a[207773] = actions(1041);
	v->a[207774] = 2;
	v->a[207775] = anon_sym_LPAREN_LPAREN;
	v->a[207776] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[207777] = actions(1065);
	v->a[207778] = 2;
	v->a[207779] = anon_sym_LT_LPAREN;
	small_parse_table_10389(v);
}

void	small_parse_table_10389(t_small_parse_table_array *v)
{
	v->a[207780] = anon_sym_GT_LPAREN;
	v->a[207781] = actions(9708);
	v->a[207782] = 2;
	v->a[207783] = sym_test_operator;
	v->a[207784] = sym__special_character;
	v->a[207785] = actions(9710);
	v->a[207786] = 3;
	v->a[207787] = sym__bare_dollar;
	v->a[207788] = sym_raw_string;
	v->a[207789] = sym_ansi_c_string;
	v->a[207790] = state(2075);
	v->a[207791] = 9;
	v->a[207792] = sym_arithmetic_expansion;
	v->a[207793] = sym_brace_expression;
	v->a[207794] = sym_string;
	v->a[207795] = sym_translated_string;
	v->a[207796] = sym_number;
	v->a[207797] = sym_simple_expansion;
	v->a[207798] = sym_expansion;
	v->a[207799] = sym_command_substitution;
	small_parse_table_10390(v);
}

/* EOF small_parse_table_2077.c */
