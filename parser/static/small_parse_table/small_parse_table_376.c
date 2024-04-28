/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_376.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1880(t_small_parse_table_array *v)
{
	v->a[37600] = aux_sym_number_token2;
	v->a[37601] = anon_sym_DOLLAR_LBRACE;
	v->a[37602] = anon_sym_DOLLAR_LPAREN;
	v->a[37603] = anon_sym_BQUOTE;
	v->a[37604] = anon_sym_DOLLAR_BQUOTE;
	v->a[37605] = anon_sym_LT_LPAREN;
	v->a[37606] = anon_sym_GT_LPAREN;
	v->a[37607] = sym_word;
	v->a[37608] = 22;
	v->a[37609] = actions(71);
	v->a[37610] = 1;
	v->a[37611] = sym_comment;
	v->a[37612] = actions(4943);
	v->a[37613] = 1;
	v->a[37614] = sym_word;
	v->a[37615] = actions(4947);
	v->a[37616] = 1;
	v->a[37617] = anon_sym_DOLLAR_LBRACK;
	v->a[37618] = actions(4949);
	v->a[37619] = 1;
	small_parse_table_1881(v);
}

void	small_parse_table_1881(t_small_parse_table_array *v)
{
	v->a[37620] = anon_sym_DOLLAR;
	v->a[37621] = actions(4951);
	v->a[37622] = 1;
	v->a[37623] = sym__special_character;
	v->a[37624] = actions(4953);
	v->a[37625] = 1;
	v->a[37626] = anon_sym_DQUOTE;
	v->a[37627] = actions(4957);
	v->a[37628] = 1;
	v->a[37629] = aux_sym_number_token1;
	v->a[37630] = actions(4959);
	v->a[37631] = 1;
	v->a[37632] = aux_sym_number_token2;
	v->a[37633] = actions(4961);
	v->a[37634] = 1;
	v->a[37635] = anon_sym_DOLLAR_LBRACE;
	v->a[37636] = actions(4963);
	v->a[37637] = 1;
	v->a[37638] = anon_sym_DOLLAR_LPAREN;
	v->a[37639] = actions(4965);
	small_parse_table_1882(v);
}

void	small_parse_table_1882(t_small_parse_table_array *v)
{
	v->a[37640] = 1;
	v->a[37641] = anon_sym_BQUOTE;
	v->a[37642] = actions(4967);
	v->a[37643] = 1;
	v->a[37644] = anon_sym_DOLLAR_BQUOTE;
	v->a[37645] = actions(4971);
	v->a[37646] = 1;
	v->a[37647] = sym_test_operator;
	v->a[37648] = actions(4973);
	v->a[37649] = 1;
	v->a[37650] = sym__brace_start;
	v->a[37651] = state(2776);
	v->a[37652] = 1;
	v->a[37653] = aux_sym__literal_repeat1;
	v->a[37654] = actions(4945);
	v->a[37655] = 2;
	v->a[37656] = anon_sym_LPAREN_LPAREN;
	v->a[37657] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37658] = actions(4955);
	v->a[37659] = 2;
	small_parse_table_1883(v);
}

void	small_parse_table_1883(t_small_parse_table_array *v)
{
	v->a[37660] = sym_raw_string;
	v->a[37661] = sym_ansi_c_string;
	v->a[37662] = actions(4969);
	v->a[37663] = 2;
	v->a[37664] = anon_sym_LT_LPAREN;
	v->a[37665] = anon_sym_GT_LPAREN;
	v->a[37666] = state(967);
	v->a[37667] = 2;
	v->a[37668] = sym_concatenation;
	v->a[37669] = aux_sym_for_statement_repeat1;
	v->a[37670] = actions(2072);
	v->a[37671] = 7;
	v->a[37672] = anon_sym_PIPE;
	v->a[37673] = anon_sym_LT;
	v->a[37674] = anon_sym_GT;
	v->a[37675] = anon_sym_LT_LT;
	v->a[37676] = anon_sym_AMP_GT;
	v->a[37677] = anon_sym_LT_AMP;
	v->a[37678] = anon_sym_GT_AMP;
	v->a[37679] = state(2489);
	small_parse_table_1884(v);
}

void	small_parse_table_1884(t_small_parse_table_array *v)
{
	v->a[37680] = 9;
	v->a[37681] = sym_arithmetic_expansion;
	v->a[37682] = sym_brace_expression;
	v->a[37683] = sym_string;
	v->a[37684] = sym_translated_string;
	v->a[37685] = sym_number;
	v->a[37686] = sym_simple_expansion;
	v->a[37687] = sym_expansion;
	v->a[37688] = sym_command_substitution;
	v->a[37689] = sym_process_substitution;
	v->a[37690] = actions(2074);
	v->a[37691] = 11;
	v->a[37692] = sym_file_descriptor;
	v->a[37693] = anon_sym_PIPE_PIPE;
	v->a[37694] = anon_sym_AMP_AMP;
	v->a[37695] = anon_sym_GT_GT;
	v->a[37696] = anon_sym_PIPE_AMP;
	v->a[37697] = anon_sym_RBRACK;
	v->a[37698] = anon_sym_AMP_GT_GT;
	v->a[37699] = anon_sym_GT_PIPE;
	small_parse_table_1885(v);
}

/* EOF small_parse_table_376.c */
