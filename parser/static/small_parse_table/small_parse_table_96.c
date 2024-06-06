/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_96.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_480(t_small_parse_table_array *v)
{
	v->a[9600] = anon_sym_BQUOTE;
	v->a[9601] = anon_sym_DOLLAR_BQUOTE;
	v->a[9602] = sym_word;
	v->a[9603] = anon_sym_SEMI;
	v->a[9604] = 5;
	v->a[9605] = actions(57);
	v->a[9606] = 1;
	v->a[9607] = sym_comment;
	v->a[9608] = actions(1995);
	v->a[9609] = 1;
	v->a[9610] = anon_sym_SEMI_SEMI;
	v->a[9611] = actions(1997);
	v->a[9612] = 3;
	v->a[9613] = anon_sym_RPAREN;
	v->a[9614] = anon_sym_SEMI_AMP;
	v->a[9615] = anon_sym_SEMI_SEMI_AMP;
	v->a[9616] = actions(1691);
	v->a[9617] = 17;
	v->a[9618] = sym_file_descriptor;
	v->a[9619] = sym_variable_name;
	small_parse_table_481(v);
}

void	small_parse_table_481(t_small_parse_table_array *v)
{
	v->a[9620] = sym_test_operator;
	v->a[9621] = sym__brace_start;
	v->a[9622] = anon_sym_LPAREN;
	v->a[9623] = anon_sym_LBRACE;
	v->a[9624] = anon_sym_GT_GT;
	v->a[9625] = anon_sym_AMP_GT_GT;
	v->a[9626] = anon_sym_GT_PIPE;
	v->a[9627] = anon_sym_LT_AMP_DASH;
	v->a[9628] = anon_sym_GT_AMP_DASH;
	v->a[9629] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[9630] = anon_sym_DQUOTE;
	v->a[9631] = sym_raw_string;
	v->a[9632] = anon_sym_DOLLAR_LBRACE;
	v->a[9633] = anon_sym_BQUOTE;
	v->a[9634] = anon_sym_DOLLAR_BQUOTE;
	v->a[9635] = actions(1689);
	v->a[9636] = 26;
	v->a[9637] = anon_sym_for;
	v->a[9638] = anon_sym_select;
	v->a[9639] = anon_sym_while;
	small_parse_table_482(v);
}

void	small_parse_table_482(t_small_parse_table_array *v)
{
	v->a[9640] = anon_sym_until;
	v->a[9641] = anon_sym_if;
	v->a[9642] = anon_sym_case;
	v->a[9643] = anon_sym_function;
	v->a[9644] = anon_sym_BANG;
	v->a[9645] = anon_sym_declare;
	v->a[9646] = anon_sym_typeset;
	v->a[9647] = anon_sym_export;
	v->a[9648] = anon_sym_readonly;
	v->a[9649] = anon_sym_local;
	v->a[9650] = anon_sym_unset;
	v->a[9651] = anon_sym_unsetenv;
	v->a[9652] = anon_sym_LT;
	v->a[9653] = anon_sym_GT;
	v->a[9654] = anon_sym_AMP_GT;
	v->a[9655] = anon_sym_LT_AMP;
	v->a[9656] = anon_sym_GT_AMP;
	v->a[9657] = anon_sym_DOLLAR;
	v->a[9658] = sym__special_character;
	v->a[9659] = aux_sym_number_token1;
	small_parse_table_483(v);
}

void	small_parse_table_483(t_small_parse_table_array *v)
{
	v->a[9660] = aux_sym_number_token2;
	v->a[9661] = anon_sym_DOLLAR_LPAREN;
	v->a[9662] = sym_word;
	v->a[9663] = 6;
	v->a[9664] = actions(3);
	v->a[9665] = 1;
	v->a[9666] = sym_comment;
	v->a[9667] = actions(1733);
	v->a[9668] = 1;
	v->a[9669] = sym_variable_name;
	v->a[9670] = actions(1731);
	v->a[9671] = 2;
	v->a[9672] = aux_sym__simple_variable_name_token1;
	v->a[9673] = aux_sym__multiline_variable_name_token1;
	v->a[9674] = actions(816);
	v->a[9675] = 4;
	v->a[9676] = sym_file_descriptor;
	v->a[9677] = sym_test_operator;
	v->a[9678] = sym__brace_start;
	v->a[9679] = ts_builtin_sym_end;
	small_parse_table_484(v);
}

void	small_parse_table_484(t_small_parse_table_array *v)
{
	v->a[9680] = actions(1729);
	v->a[9681] = 9;
	v->a[9682] = anon_sym_BANG;
	v->a[9683] = anon_sym_DASH;
	v->a[9684] = anon_sym_STAR;
	v->a[9685] = anon_sym_QMARK;
	v->a[9686] = anon_sym_DOLLAR;
	v->a[9687] = anon_sym_POUND;
	v->a[9688] = anon_sym_AT;
	v->a[9689] = anon_sym_0;
	v->a[9690] = anon_sym__;
	v->a[9691] = actions(810);
	v->a[9692] = 31;
	v->a[9693] = anon_sym_PIPE;
	v->a[9694] = anon_sym_SEMI_SEMI;
	v->a[9695] = anon_sym_PIPE_AMP;
	v->a[9696] = anon_sym_AMP_AMP;
	v->a[9697] = anon_sym_PIPE_PIPE;
	v->a[9698] = anon_sym_LT;
	v->a[9699] = anon_sym_GT;
	small_parse_table_485(v);
}

/* EOF small_parse_table_96.c */
