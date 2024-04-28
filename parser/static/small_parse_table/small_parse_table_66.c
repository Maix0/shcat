/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_66.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_330(t_small_parse_table_array *v)
{
	v->a[6600] = 3;
	v->a[6601] = sym_raw_string;
	v->a[6602] = sym_ansi_c_string;
	v->a[6603] = sym_word;
	v->a[6604] = state(1290);
	v->a[6605] = 9;
	v->a[6606] = sym_arithmetic_expansion;
	v->a[6607] = sym_brace_expression;
	v->a[6608] = sym_string;
	v->a[6609] = sym_translated_string;
	v->a[6610] = sym_number;
	v->a[6611] = sym_simple_expansion;
	v->a[6612] = sym_expansion;
	v->a[6613] = sym_command_substitution;
	v->a[6614] = sym_process_substitution;
	v->a[6615] = actions(2214);
	v->a[6616] = 23;
	v->a[6617] = anon_sym_SEMI;
	v->a[6618] = anon_sym_PIPE_PIPE;
	v->a[6619] = anon_sym_AMP_AMP;
	small_parse_table_331(v);
}

void	small_parse_table_331(t_small_parse_table_array *v)
{
	v->a[6620] = anon_sym_PIPE;
	v->a[6621] = anon_sym_AMP;
	v->a[6622] = anon_sym_LT;
	v->a[6623] = anon_sym_GT;
	v->a[6624] = anon_sym_LT_LT;
	v->a[6625] = anon_sym_GT_GT;
	v->a[6626] = anon_sym_esac;
	v->a[6627] = anon_sym_SEMI_SEMI;
	v->a[6628] = anon_sym_SEMI_AMP;
	v->a[6629] = anon_sym_SEMI_SEMI_AMP;
	v->a[6630] = anon_sym_PIPE_AMP;
	v->a[6631] = anon_sym_AMP_GT;
	v->a[6632] = anon_sym_AMP_GT_GT;
	v->a[6633] = anon_sym_LT_AMP;
	v->a[6634] = anon_sym_GT_AMP;
	v->a[6635] = anon_sym_GT_PIPE;
	v->a[6636] = anon_sym_LT_AMP_DASH;
	v->a[6637] = anon_sym_GT_AMP_DASH;
	v->a[6638] = anon_sym_LT_LT_DASH;
	v->a[6639] = anon_sym_LT_LT_LT;
	small_parse_table_332(v);
}

void	small_parse_table_332(t_small_parse_table_array *v)
{
	v->a[6640] = 23;
	v->a[6641] = actions(3);
	v->a[6642] = 1;
	v->a[6643] = sym_comment;
	v->a[6644] = actions(2261);
	v->a[6645] = 1;
	v->a[6646] = anon_sym_DOLLAR_LBRACK;
	v->a[6647] = actions(2263);
	v->a[6648] = 1;
	v->a[6649] = anon_sym_DOLLAR;
	v->a[6650] = actions(2267);
	v->a[6651] = 1;
	v->a[6652] = anon_sym_DQUOTE;
	v->a[6653] = actions(2269);
	v->a[6654] = 1;
	v->a[6655] = aux_sym_number_token1;
	v->a[6656] = actions(2271);
	v->a[6657] = 1;
	v->a[6658] = aux_sym_number_token2;
	v->a[6659] = actions(2273);
	small_parse_table_333(v);
}

void	small_parse_table_333(t_small_parse_table_array *v)
{
	v->a[6660] = 1;
	v->a[6661] = anon_sym_DOLLAR_LBRACE;
	v->a[6662] = actions(2275);
	v->a[6663] = 1;
	v->a[6664] = anon_sym_DOLLAR_LPAREN;
	v->a[6665] = actions(2279);
	v->a[6666] = 1;
	v->a[6667] = anon_sym_DOLLAR_BQUOTE;
	v->a[6668] = actions(2289);
	v->a[6669] = 1;
	v->a[6670] = sym__brace_start;
	v->a[6671] = actions(2361);
	v->a[6672] = 1;
	v->a[6673] = sym__special_character;
	v->a[6674] = actions(2365);
	v->a[6675] = 1;
	v->a[6676] = sym_variable_name;
	v->a[6677] = actions(2367);
	v->a[6678] = 1;
	v->a[6679] = sym_test_operator;
	small_parse_table_334(v);
}

void	small_parse_table_334(t_small_parse_table_array *v)
{
	v->a[6680] = actions(2414);
	v->a[6681] = 1;
	v->a[6682] = aux_sym__simple_variable_name_token1;
	v->a[6683] = state(1743);
	v->a[6684] = 1;
	v->a[6685] = aux_sym__literal_repeat1;
	v->a[6686] = state(6773);
	v->a[6687] = 1;
	v->a[6688] = sym_subscript;
	v->a[6689] = actions(1799);
	v->a[6690] = 2;
	v->a[6691] = sym_file_descriptor;
	v->a[6692] = aux_sym_heredoc_redirect_token1;
	v->a[6693] = actions(2259);
	v->a[6694] = 2;
	v->a[6695] = anon_sym_LPAREN_LPAREN;
	v->a[6696] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[6697] = actions(2281);
	v->a[6698] = 2;
	v->a[6699] = anon_sym_LT_LPAREN;
	small_parse_table_335(v);
}

/* EOF small_parse_table_66.c */
