/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_256.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1280(t_small_parse_table_array *v)
{
	v->a[25600] = sym_file_descriptor;
	v->a[25601] = sym_variable_name;
	v->a[25602] = sym_test_operator;
	v->a[25603] = sym__brace_start;
	v->a[25604] = anon_sym_LPAREN_LPAREN;
	v->a[25605] = anon_sym_GT_GT;
	v->a[25606] = anon_sym_LBRACE;
	v->a[25607] = anon_sym_LBRACK_LBRACK;
	v->a[25608] = anon_sym_AMP_GT_GT;
	v->a[25609] = anon_sym_GT_PIPE;
	v->a[25610] = anon_sym_LT_AMP_DASH;
	v->a[25611] = anon_sym_GT_AMP_DASH;
	v->a[25612] = anon_sym_LT_LT_LT;
	v->a[25613] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25614] = anon_sym_DOLLAR_LBRACK;
	v->a[25615] = anon_sym_DQUOTE;
	v->a[25616] = sym_raw_string;
	v->a[25617] = sym_ansi_c_string;
	v->a[25618] = anon_sym_DOLLAR_LBRACE;
	v->a[25619] = anon_sym_BQUOTE;
	small_parse_table_1281(v);
}

void	small_parse_table_1281(t_small_parse_table_array *v)
{
	v->a[25620] = anon_sym_DOLLAR_BQUOTE;
	v->a[25621] = anon_sym_LT_LPAREN;
	v->a[25622] = anon_sym_GT_LPAREN;
	v->a[25623] = actions(2715);
	v->a[25624] = 28;
	v->a[25625] = anon_sym_for;
	v->a[25626] = anon_sym_select;
	v->a[25627] = anon_sym_LT;
	v->a[25628] = anon_sym_GT;
	v->a[25629] = anon_sym_LPAREN;
	v->a[25630] = anon_sym_while;
	v->a[25631] = anon_sym_until;
	v->a[25632] = anon_sym_if;
	v->a[25633] = anon_sym_case;
	v->a[25634] = anon_sym_function;
	v->a[25635] = anon_sym_BANG;
	v->a[25636] = anon_sym_LBRACK;
	v->a[25637] = anon_sym_declare;
	v->a[25638] = anon_sym_typeset;
	v->a[25639] = anon_sym_export;
	small_parse_table_1282(v);
}

void	small_parse_table_1282(t_small_parse_table_array *v)
{
	v->a[25640] = anon_sym_readonly;
	v->a[25641] = anon_sym_local;
	v->a[25642] = anon_sym_unset;
	v->a[25643] = anon_sym_unsetenv;
	v->a[25644] = anon_sym_AMP_GT;
	v->a[25645] = anon_sym_LT_AMP;
	v->a[25646] = anon_sym_GT_AMP;
	v->a[25647] = anon_sym_DOLLAR;
	v->a[25648] = sym__special_character;
	v->a[25649] = aux_sym_number_token1;
	v->a[25650] = aux_sym_number_token2;
	v->a[25651] = anon_sym_DOLLAR_LPAREN;
	v->a[25652] = sym_word;
	v->a[25653] = 8;
	v->a[25654] = actions(3);
	v->a[25655] = 1;
	v->a[25656] = sym_comment;
	v->a[25657] = actions(2267);
	v->a[25658] = 1;
	v->a[25659] = anon_sym_DQUOTE;
	small_parse_table_1283(v);
}

void	small_parse_table_1283(t_small_parse_table_array *v)
{
	v->a[25660] = actions(3829);
	v->a[25661] = 1;
	v->a[25662] = sym_variable_name;
	v->a[25663] = state(1595);
	v->a[25664] = 1;
	v->a[25665] = sym_string;
	v->a[25666] = actions(3827);
	v->a[25667] = 2;
	v->a[25668] = aux_sym__simple_variable_name_token1;
	v->a[25669] = aux_sym__multiline_variable_name_token1;
	v->a[25670] = actions(1241);
	v->a[25671] = 3;
	v->a[25672] = sym_file_descriptor;
	v->a[25673] = sym_test_operator;
	v->a[25674] = sym__brace_start;
	v->a[25675] = actions(3825);
	v->a[25676] = 9;
	v->a[25677] = anon_sym_DASH;
	v->a[25678] = anon_sym_STAR;
	v->a[25679] = anon_sym_BANG;
	small_parse_table_1284(v);
}

void	small_parse_table_1284(t_small_parse_table_array *v)
{
	v->a[25680] = anon_sym_QMARK;
	v->a[25681] = anon_sym_DOLLAR;
	v->a[25682] = anon_sym_POUND;
	v->a[25683] = anon_sym_AT2;
	v->a[25684] = anon_sym_0;
	v->a[25685] = anon_sym__;
	v->a[25686] = actions(1239);
	v->a[25687] = 35;
	v->a[25688] = anon_sym_LPAREN_LPAREN;
	v->a[25689] = anon_sym_SEMI;
	v->a[25690] = anon_sym_PIPE_PIPE;
	v->a[25691] = anon_sym_AMP_AMP;
	v->a[25692] = anon_sym_PIPE;
	v->a[25693] = anon_sym_AMP;
	v->a[25694] = anon_sym_LT;
	v->a[25695] = anon_sym_GT;
	v->a[25696] = anon_sym_LT_LT;
	v->a[25697] = anon_sym_GT_GT;
	v->a[25698] = anon_sym_SEMI_SEMI;
	v->a[25699] = anon_sym_PIPE_AMP;
	small_parse_table_1285(v);
}

/* EOF small_parse_table_256.c */
