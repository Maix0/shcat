/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_686.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3430(t_small_parse_table_array *v)
{
	v->a[68600] = actions(3);
	v->a[68601] = 1;
	v->a[68602] = sym_comment;
	v->a[68603] = actions(1774);
	v->a[68604] = 1;
	v->a[68605] = anon_sym_LPAREN;
	v->a[68606] = actions(1778);
	v->a[68607] = 1;
	v->a[68608] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68609] = actions(1780);
	v->a[68610] = 1;
	v->a[68611] = anon_sym_DOLLAR;
	v->a[68612] = actions(1782);
	v->a[68613] = 1;
	v->a[68614] = anon_sym_DQUOTE;
	v->a[68615] = actions(1784);
	v->a[68616] = 1;
	v->a[68617] = anon_sym_DOLLAR_LBRACE;
	v->a[68618] = actions(1786);
	v->a[68619] = 1;
	small_parse_table_3431(v);
}

void	small_parse_table_3431(t_small_parse_table_array *v)
{
	v->a[68620] = anon_sym_DOLLAR_LPAREN;
	v->a[68621] = actions(1788);
	v->a[68622] = 1;
	v->a[68623] = anon_sym_BQUOTE;
	v->a[68624] = actions(1790);
	v->a[68625] = 1;
	v->a[68626] = sym_extglob_pattern;
	v->a[68627] = state(1329);
	v->a[68628] = 1;
	v->a[68629] = aux_sym_case_statement_repeat1;
	v->a[68630] = state(1920);
	v->a[68631] = 1;
	v->a[68632] = sym_case_item;
	v->a[68633] = state(2231);
	v->a[68634] = 1;
	v->a[68635] = sym__case_item_last;
	v->a[68636] = state(2096);
	v->a[68637] = 2;
	v->a[68638] = sym_concatenation;
	v->a[68639] = sym__extglob_blob;
	small_parse_table_3432(v);
}

void	small_parse_table_3432(t_small_parse_table_array *v)
{
	v->a[68640] = actions(1770);
	v->a[68641] = 3;
	v->a[68642] = sym_raw_string;
	v->a[68643] = sym_number;
	v->a[68644] = sym_word;
	v->a[68645] = state(2001);
	v->a[68646] = 5;
	v->a[68647] = sym_arithmetic_expansion;
	v->a[68648] = sym_string;
	v->a[68649] = sym_simple_expansion;
	v->a[68650] = sym_expansion;
	v->a[68651] = sym_command_substitution;
	v->a[68652] = 3;
	v->a[68653] = actions(3);
	v->a[68654] = 1;
	v->a[68655] = sym_comment;
	v->a[68656] = actions(1027);
	v->a[68657] = 3;
	v->a[68658] = sym_file_descriptor;
	v->a[68659] = sym__concat;
	small_parse_table_3433(v);
}

void	small_parse_table_3433(t_small_parse_table_array *v)
{
	v->a[68660] = sym_variable_name;
	v->a[68661] = actions(1025);
	v->a[68662] = 18;
	v->a[68663] = anon_sym_LT;
	v->a[68664] = anon_sym_GT;
	v->a[68665] = anon_sym_GT_GT;
	v->a[68666] = anon_sym_LT_AMP;
	v->a[68667] = anon_sym_GT_AMP;
	v->a[68668] = anon_sym_GT_PIPE;
	v->a[68669] = anon_sym_LT_AMP_DASH;
	v->a[68670] = anon_sym_GT_AMP_DASH;
	v->a[68671] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68672] = aux_sym_concatenation_token1;
	v->a[68673] = anon_sym_DOLLAR;
	v->a[68674] = anon_sym_DQUOTE;
	v->a[68675] = sym_raw_string;
	v->a[68676] = sym_number;
	v->a[68677] = anon_sym_DOLLAR_LBRACE;
	v->a[68678] = anon_sym_DOLLAR_LPAREN;
	v->a[68679] = anon_sym_BQUOTE;
	small_parse_table_3434(v);
}

void	small_parse_table_3434(t_small_parse_table_array *v)
{
	v->a[68680] = sym_word;
	v->a[68681] = 12;
	v->a[68682] = actions(3);
	v->a[68683] = 1;
	v->a[68684] = sym_comment;
	v->a[68685] = actions(894);
	v->a[68686] = 1;
	v->a[68687] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[68688] = actions(896);
	v->a[68689] = 1;
	v->a[68690] = anon_sym_DOLLAR;
	v->a[68691] = actions(898);
	v->a[68692] = 1;
	v->a[68693] = anon_sym_DQUOTE;
	v->a[68694] = actions(900);
	v->a[68695] = 1;
	v->a[68696] = anon_sym_DOLLAR_LBRACE;
	v->a[68697] = actions(902);
	v->a[68698] = 1;
	v->a[68699] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3435(v);
}

/* EOF small_parse_table_686.c */
