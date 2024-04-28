/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_276.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1380(t_small_parse_table_array *v)
{
	v->a[27600] = anon_sym_DOLLAR_LBRACE;
	v->a[27601] = anon_sym_BQUOTE;
	v->a[27602] = anon_sym_DOLLAR_BQUOTE;
	v->a[27603] = anon_sym_LT_LPAREN;
	v->a[27604] = anon_sym_GT_LPAREN;
	v->a[27605] = actions(2715);
	v->a[27606] = 28;
	v->a[27607] = anon_sym_for;
	v->a[27608] = anon_sym_select;
	v->a[27609] = anon_sym_LT;
	v->a[27610] = anon_sym_GT;
	v->a[27611] = anon_sym_LPAREN;
	v->a[27612] = anon_sym_while;
	v->a[27613] = anon_sym_until;
	v->a[27614] = anon_sym_if;
	v->a[27615] = anon_sym_case;
	v->a[27616] = anon_sym_function;
	v->a[27617] = anon_sym_BANG;
	v->a[27618] = anon_sym_LBRACK;
	v->a[27619] = anon_sym_declare;
	small_parse_table_1381(v);
}

void	small_parse_table_1381(t_small_parse_table_array *v)
{
	v->a[27620] = anon_sym_typeset;
	v->a[27621] = anon_sym_export;
	v->a[27622] = anon_sym_readonly;
	v->a[27623] = anon_sym_local;
	v->a[27624] = anon_sym_unset;
	v->a[27625] = anon_sym_unsetenv;
	v->a[27626] = anon_sym_AMP_GT;
	v->a[27627] = anon_sym_LT_AMP;
	v->a[27628] = anon_sym_GT_AMP;
	v->a[27629] = anon_sym_DOLLAR;
	v->a[27630] = sym__special_character;
	v->a[27631] = aux_sym_number_token1;
	v->a[27632] = aux_sym_number_token2;
	v->a[27633] = anon_sym_DOLLAR_LPAREN;
	v->a[27634] = sym_word;
	v->a[27635] = 20;
	v->a[27636] = actions(3);
	v->a[27637] = 1;
	v->a[27638] = sym_comment;
	v->a[27639] = actions(4078);
	small_parse_table_1382(v);
}

void	small_parse_table_1382(t_small_parse_table_array *v)
{
	v->a[27640] = 1;
	v->a[27641] = anon_sym_DOLLAR_LBRACK;
	v->a[27642] = actions(4080);
	v->a[27643] = 1;
	v->a[27644] = anon_sym_DOLLAR;
	v->a[27645] = actions(4084);
	v->a[27646] = 1;
	v->a[27647] = anon_sym_DQUOTE;
	v->a[27648] = actions(4086);
	v->a[27649] = 1;
	v->a[27650] = aux_sym_number_token1;
	v->a[27651] = actions(4088);
	v->a[27652] = 1;
	v->a[27653] = aux_sym_number_token2;
	v->a[27654] = actions(4090);
	v->a[27655] = 1;
	v->a[27656] = anon_sym_DOLLAR_LBRACE;
	v->a[27657] = actions(4092);
	v->a[27658] = 1;
	v->a[27659] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1383(v);
}

void	small_parse_table_1383(t_small_parse_table_array *v)
{
	v->a[27660] = actions(4096);
	v->a[27661] = 1;
	v->a[27662] = anon_sym_DOLLAR_BQUOTE;
	v->a[27663] = actions(4102);
	v->a[27664] = 1;
	v->a[27665] = sym__brace_start;
	v->a[27666] = actions(4362);
	v->a[27667] = 1;
	v->a[27668] = sym__special_character;
	v->a[27669] = actions(4364);
	v->a[27670] = 1;
	v->a[27671] = sym_test_operator;
	v->a[27672] = state(4546);
	v->a[27673] = 1;
	v->a[27674] = aux_sym__literal_repeat1;
	v->a[27675] = state(4907);
	v->a[27676] = 1;
	v->a[27677] = sym_concatenation;
	v->a[27678] = actions(2500);
	v->a[27679] = 2;
	small_parse_table_1384(v);
}

void	small_parse_table_1384(t_small_parse_table_array *v)
{
	v->a[27680] = sym_file_descriptor;
	v->a[27681] = aux_sym_heredoc_redirect_token1;
	v->a[27682] = actions(4076);
	v->a[27683] = 2;
	v->a[27684] = anon_sym_LPAREN_LPAREN;
	v->a[27685] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[27686] = actions(4098);
	v->a[27687] = 2;
	v->a[27688] = anon_sym_LT_LPAREN;
	v->a[27689] = anon_sym_GT_LPAREN;
	v->a[27690] = actions(4360);
	v->a[27691] = 3;
	v->a[27692] = sym_raw_string;
	v->a[27693] = sym_ansi_c_string;
	v->a[27694] = sym_word;
	v->a[27695] = state(4640);
	v->a[27696] = 9;
	v->a[27697] = sym_arithmetic_expansion;
	v->a[27698] = sym_brace_expression;
	v->a[27699] = sym_string;
	small_parse_table_1385(v);
}

/* EOF small_parse_table_276.c */
