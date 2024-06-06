/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1166.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5830(t_small_parse_table_array *v)
{
	v->a[116600] = 3;
	v->a[116601] = sym_test_operator;
	v->a[116602] = sym__bare_dollar;
	v->a[116603] = sym_raw_string;
	v->a[116604] = state(872);
	v->a[116605] = 7;
	v->a[116606] = sym_arithmetic_expansion;
	v->a[116607] = sym_brace_expression;
	v->a[116608] = sym_string;
	v->a[116609] = sym_number;
	v->a[116610] = sym_simple_expansion;
	v->a[116611] = sym_expansion;
	v->a[116612] = sym_command_substitution;
	v->a[116613] = 16;
	v->a[116614] = actions(3);
	v->a[116615] = 1;
	v->a[116616] = sym_comment;
	v->a[116617] = actions(1017);
	v->a[116618] = 1;
	v->a[116619] = aux_sym_number_token1;
	small_parse_table_5831(v);
}

void	small_parse_table_5831(t_small_parse_table_array *v)
{
	v->a[116620] = actions(1019);
	v->a[116621] = 1;
	v->a[116622] = aux_sym_number_token2;
	v->a[116623] = actions(1023);
	v->a[116624] = 1;
	v->a[116625] = anon_sym_DOLLAR_LPAREN;
	v->a[116626] = actions(1035);
	v->a[116627] = 1;
	v->a[116628] = sym__brace_start;
	v->a[116629] = actions(5763);
	v->a[116630] = 1;
	v->a[116631] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[116632] = actions(5767);
	v->a[116633] = 1;
	v->a[116634] = anon_sym_DQUOTE;
	v->a[116635] = actions(5771);
	v->a[116636] = 1;
	v->a[116637] = anon_sym_DOLLAR_LBRACE;
	v->a[116638] = actions(5773);
	v->a[116639] = 1;
	small_parse_table_5832(v);
}

void	small_parse_table_5832(t_small_parse_table_array *v)
{
	v->a[116640] = anon_sym_BQUOTE;
	v->a[116641] = actions(5775);
	v->a[116642] = 1;
	v->a[116643] = anon_sym_DOLLAR_BQUOTE;
	v->a[116644] = actions(6731);
	v->a[116645] = 1;
	v->a[116646] = sym_word;
	v->a[116647] = actions(6735);
	v->a[116648] = 1;
	v->a[116649] = sym__special_character;
	v->a[116650] = actions(6739);
	v->a[116651] = 1;
	v->a[116652] = sym__comment_word;
	v->a[116653] = actions(6859);
	v->a[116654] = 1;
	v->a[116655] = anon_sym_DOLLAR;
	v->a[116656] = actions(6737);
	v->a[116657] = 3;
	v->a[116658] = sym_test_operator;
	v->a[116659] = sym__bare_dollar;
	small_parse_table_5833(v);
}

void	small_parse_table_5833(t_small_parse_table_array *v)
{
	v->a[116660] = sym_raw_string;
	v->a[116661] = state(872);
	v->a[116662] = 7;
	v->a[116663] = sym_arithmetic_expansion;
	v->a[116664] = sym_brace_expression;
	v->a[116665] = sym_string;
	v->a[116666] = sym_number;
	v->a[116667] = sym_simple_expansion;
	v->a[116668] = sym_expansion;
	v->a[116669] = sym_command_substitution;
	v->a[116670] = 16;
	v->a[116671] = actions(3);
	v->a[116672] = 1;
	v->a[116673] = sym_comment;
	v->a[116674] = actions(1745);
	v->a[116675] = 1;
	v->a[116676] = aux_sym_number_token1;
	v->a[116677] = actions(1747);
	v->a[116678] = 1;
	v->a[116679] = aux_sym_number_token2;
	small_parse_table_5834(v);
}

void	small_parse_table_5834(t_small_parse_table_array *v)
{
	v->a[116680] = actions(1751);
	v->a[116681] = 1;
	v->a[116682] = anon_sym_DOLLAR_LPAREN;
	v->a[116683] = actions(1761);
	v->a[116684] = 1;
	v->a[116685] = sym__brace_start;
	v->a[116686] = actions(6789);
	v->a[116687] = 1;
	v->a[116688] = sym_word;
	v->a[116689] = actions(6791);
	v->a[116690] = 1;
	v->a[116691] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[116692] = actions(6795);
	v->a[116693] = 1;
	v->a[116694] = sym__special_character;
	v->a[116695] = actions(6797);
	v->a[116696] = 1;
	v->a[116697] = anon_sym_DQUOTE;
	v->a[116698] = actions(6801);
	v->a[116699] = 1;
	small_parse_table_5835(v);
}

/* EOF small_parse_table_1166.c */
