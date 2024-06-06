/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1156.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5780(t_small_parse_table_array *v)
{
	v->a[115600] = 7;
	v->a[115601] = sym_arithmetic_expansion;
	v->a[115602] = sym_brace_expression;
	v->a[115603] = sym_string;
	v->a[115604] = sym_number;
	v->a[115605] = sym_simple_expansion;
	v->a[115606] = sym_expansion;
	v->a[115607] = sym_command_substitution;
	v->a[115608] = 16;
	v->a[115609] = actions(3);
	v->a[115610] = 1;
	v->a[115611] = sym_comment;
	v->a[115612] = actions(5545);
	v->a[115613] = 1;
	v->a[115614] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[115615] = actions(5551);
	v->a[115616] = 1;
	v->a[115617] = anon_sym_DQUOTE;
	v->a[115618] = actions(5555);
	v->a[115619] = 1;
	small_parse_table_5781(v);
}

void	small_parse_table_5781(t_small_parse_table_array *v)
{
	v->a[115620] = aux_sym_number_token1;
	v->a[115621] = actions(5557);
	v->a[115622] = 1;
	v->a[115623] = aux_sym_number_token2;
	v->a[115624] = actions(5559);
	v->a[115625] = 1;
	v->a[115626] = anon_sym_DOLLAR_LBRACE;
	v->a[115627] = actions(5561);
	v->a[115628] = 1;
	v->a[115629] = anon_sym_DOLLAR_LPAREN;
	v->a[115630] = actions(5563);
	v->a[115631] = 1;
	v->a[115632] = anon_sym_BQUOTE;
	v->a[115633] = actions(5565);
	v->a[115634] = 1;
	v->a[115635] = anon_sym_DOLLAR_BQUOTE;
	v->a[115636] = actions(5571);
	v->a[115637] = 1;
	v->a[115638] = sym__brace_start;
	v->a[115639] = actions(6332);
	small_parse_table_5782(v);
}

void	small_parse_table_5782(t_small_parse_table_array *v)
{
	v->a[115640] = 1;
	v->a[115641] = sym_word;
	v->a[115642] = actions(6334);
	v->a[115643] = 1;
	v->a[115644] = sym__special_character;
	v->a[115645] = actions(6338);
	v->a[115646] = 1;
	v->a[115647] = sym__comment_word;
	v->a[115648] = actions(6775);
	v->a[115649] = 1;
	v->a[115650] = anon_sym_DOLLAR;
	v->a[115651] = actions(6336);
	v->a[115652] = 3;
	v->a[115653] = sym_test_operator;
	v->a[115654] = sym__bare_dollar;
	v->a[115655] = sym_raw_string;
	v->a[115656] = state(836);
	v->a[115657] = 7;
	v->a[115658] = sym_arithmetic_expansion;
	v->a[115659] = sym_brace_expression;
	small_parse_table_5783(v);
}

void	small_parse_table_5783(t_small_parse_table_array *v)
{
	v->a[115660] = sym_string;
	v->a[115661] = sym_number;
	v->a[115662] = sym_simple_expansion;
	v->a[115663] = sym_expansion;
	v->a[115664] = sym_command_substitution;
	v->a[115665] = 16;
	v->a[115666] = actions(3);
	v->a[115667] = 1;
	v->a[115668] = sym_comment;
	v->a[115669] = actions(5545);
	v->a[115670] = 1;
	v->a[115671] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[115672] = actions(5551);
	v->a[115673] = 1;
	v->a[115674] = anon_sym_DQUOTE;
	v->a[115675] = actions(5555);
	v->a[115676] = 1;
	v->a[115677] = aux_sym_number_token1;
	v->a[115678] = actions(5557);
	v->a[115679] = 1;
	small_parse_table_5784(v);
}

void	small_parse_table_5784(t_small_parse_table_array *v)
{
	v->a[115680] = aux_sym_number_token2;
	v->a[115681] = actions(5559);
	v->a[115682] = 1;
	v->a[115683] = anon_sym_DOLLAR_LBRACE;
	v->a[115684] = actions(5561);
	v->a[115685] = 1;
	v->a[115686] = anon_sym_DOLLAR_LPAREN;
	v->a[115687] = actions(5563);
	v->a[115688] = 1;
	v->a[115689] = anon_sym_BQUOTE;
	v->a[115690] = actions(5565);
	v->a[115691] = 1;
	v->a[115692] = anon_sym_DOLLAR_BQUOTE;
	v->a[115693] = actions(5571);
	v->a[115694] = 1;
	v->a[115695] = sym__brace_start;
	v->a[115696] = actions(6332);
	v->a[115697] = 1;
	v->a[115698] = sym_word;
	v->a[115699] = actions(6334);
	small_parse_table_5785(v);
}

/* EOF small_parse_table_1156.c */
