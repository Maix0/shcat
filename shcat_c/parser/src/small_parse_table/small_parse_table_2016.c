/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2016.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10080(t_small_parse_table_array *v)
{
	v->a[201600] = actions(9194);
	v->a[201601] = 1;
	v->a[201602] = sym_word;
	v->a[201603] = actions(9198);
	v->a[201604] = 1;
	v->a[201605] = anon_sym_DOLLAR_LBRACK;
	v->a[201606] = actions(9200);
	v->a[201607] = 1;
	v->a[201608] = sym__special_character;
	v->a[201609] = actions(9202);
	v->a[201610] = 1;
	v->a[201611] = anon_sym_DQUOTE;
	v->a[201612] = actions(9206);
	v->a[201613] = 1;
	v->a[201614] = anon_sym_DOLLAR_LBRACE;
	v->a[201615] = actions(9208);
	v->a[201616] = 1;
	v->a[201617] = anon_sym_BQUOTE;
	v->a[201618] = actions(9210);
	v->a[201619] = 1;
	small_parse_table_10081(v);
}

void	small_parse_table_10081(t_small_parse_table_array *v)
{
	v->a[201620] = anon_sym_DOLLAR_BQUOTE;
	v->a[201621] = actions(9214);
	v->a[201622] = 1;
	v->a[201623] = sym_test_operator;
	v->a[201624] = actions(9216);
	v->a[201625] = 1;
	v->a[201626] = sym_regex;
	v->a[201627] = state(1379);
	v->a[201628] = 1;
	v->a[201629] = aux_sym__literal_repeat1;
	v->a[201630] = state(1611);
	v->a[201631] = 1;
	v->a[201632] = sym_concatenation;
	v->a[201633] = actions(9196);
	v->a[201634] = 2;
	v->a[201635] = anon_sym_LPAREN_LPAREN;
	v->a[201636] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[201637] = actions(9204);
	v->a[201638] = 2;
	v->a[201639] = sym_raw_string;
	small_parse_table_10082(v);
}

void	small_parse_table_10082(t_small_parse_table_array *v)
{
	v->a[201640] = sym_ansi_c_string;
	v->a[201641] = actions(9212);
	v->a[201642] = 2;
	v->a[201643] = anon_sym_LT_LPAREN;
	v->a[201644] = anon_sym_GT_LPAREN;
	v->a[201645] = state(1244);
	v->a[201646] = 9;
	v->a[201647] = sym_arithmetic_expansion;
	v->a[201648] = sym_brace_expression;
	v->a[201649] = sym_string;
	v->a[201650] = sym_translated_string;
	v->a[201651] = sym_number;
	v->a[201652] = sym_simple_expansion;
	v->a[201653] = sym_expansion;
	v->a[201654] = sym_command_substitution;
	v->a[201655] = sym_process_substitution;
	v->a[201656] = 19;
	v->a[201657] = actions(3);
	v->a[201658] = 1;
	v->a[201659] = sym_comment;
	small_parse_table_10083(v);
}

void	small_parse_table_10083(t_small_parse_table_array *v)
{
	v->a[201660] = actions(363);
	v->a[201661] = 1;
	v->a[201662] = anon_sym_DOLLAR_LBRACK;
	v->a[201663] = actions(367);
	v->a[201664] = 1;
	v->a[201665] = anon_sym_DOLLAR;
	v->a[201666] = actions(371);
	v->a[201667] = 1;
	v->a[201668] = anon_sym_DQUOTE;
	v->a[201669] = actions(375);
	v->a[201670] = 1;
	v->a[201671] = aux_sym_number_token1;
	v->a[201672] = actions(377);
	v->a[201673] = 1;
	v->a[201674] = aux_sym_number_token2;
	v->a[201675] = actions(379);
	v->a[201676] = 1;
	v->a[201677] = anon_sym_DOLLAR_LBRACE;
	v->a[201678] = actions(381);
	v->a[201679] = 1;
	small_parse_table_10084(v);
}

void	small_parse_table_10084(t_small_parse_table_array *v)
{
	v->a[201680] = anon_sym_DOLLAR_LPAREN;
	v->a[201681] = actions(385);
	v->a[201682] = 1;
	v->a[201683] = anon_sym_DOLLAR_BQUOTE;
	v->a[201684] = actions(391);
	v->a[201685] = 1;
	v->a[201686] = sym__brace_start;
	v->a[201687] = actions(5809);
	v->a[201688] = 1;
	v->a[201689] = anon_sym_BQUOTE;
	v->a[201690] = actions(8836);
	v->a[201691] = 1;
	v->a[201692] = sym_word;
	v->a[201693] = actions(8844);
	v->a[201694] = 1;
	v->a[201695] = sym_test_operator;
	v->a[201696] = actions(9218);
	v->a[201697] = 1;
	v->a[201698] = anon_sym_RBRACK;
	v->a[201699] = actions(352);
	small_parse_table_10085(v);
}

/* EOF small_parse_table_2016.c */
