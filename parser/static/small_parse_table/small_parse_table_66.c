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
	v->a[6600] = anon_sym_GT_PIPE;
	v->a[6601] = anon_sym_LT_AMP_DASH;
	v->a[6602] = anon_sym_GT_AMP_DASH;
	v->a[6603] = anon_sym_LT_LT;
	v->a[6604] = anon_sym_LT_LT_DASH;
	v->a[6605] = anon_sym_AMP;
	v->a[6606] = anon_sym_BQUOTE;
	v->a[6607] = anon_sym_SEMI;
	v->a[6608] = 6;
	v->a[6609] = actions(3);
	v->a[6610] = 1;
	v->a[6611] = sym_comment;
	v->a[6612] = actions(1646);
	v->a[6613] = 1;
	v->a[6614] = sym_variable_name;
	v->a[6615] = actions(1644);
	v->a[6616] = 2;
	v->a[6617] = aux_sym__simple_variable_name_token1;
	v->a[6618] = aux_sym__multiline_variable_name_token1;
	v->a[6619] = actions(816);
	small_parse_table_331(v);
}

void	small_parse_table_331(t_small_parse_table_array *v)
{
	v->a[6620] = 3;
	v->a[6621] = sym_file_descriptor;
	v->a[6622] = sym_test_operator;
	v->a[6623] = sym__brace_start;
	v->a[6624] = actions(1642);
	v->a[6625] = 9;
	v->a[6626] = anon_sym_BANG;
	v->a[6627] = anon_sym_DASH;
	v->a[6628] = anon_sym_STAR;
	v->a[6629] = anon_sym_QMARK;
	v->a[6630] = anon_sym_DOLLAR;
	v->a[6631] = anon_sym_POUND;
	v->a[6632] = anon_sym_AT;
	v->a[6633] = anon_sym_0;
	v->a[6634] = anon_sym__;
	v->a[6635] = actions(810);
	v->a[6636] = 33;
	v->a[6637] = anon_sym_PIPE;
	v->a[6638] = anon_sym_SEMI_SEMI;
	v->a[6639] = anon_sym_SEMI_AMP;
	small_parse_table_332(v);
}

void	small_parse_table_332(t_small_parse_table_array *v)
{
	v->a[6640] = anon_sym_SEMI_SEMI_AMP;
	v->a[6641] = anon_sym_PIPE_AMP;
	v->a[6642] = anon_sym_AMP_AMP;
	v->a[6643] = anon_sym_PIPE_PIPE;
	v->a[6644] = anon_sym_LT;
	v->a[6645] = anon_sym_GT;
	v->a[6646] = anon_sym_GT_GT;
	v->a[6647] = anon_sym_AMP_GT;
	v->a[6648] = anon_sym_AMP_GT_GT;
	v->a[6649] = anon_sym_LT_AMP;
	v->a[6650] = anon_sym_GT_AMP;
	v->a[6651] = anon_sym_GT_PIPE;
	v->a[6652] = anon_sym_LT_AMP_DASH;
	v->a[6653] = anon_sym_GT_AMP_DASH;
	v->a[6654] = anon_sym_LT_LT;
	v->a[6655] = anon_sym_LT_LT_DASH;
	v->a[6656] = aux_sym_heredoc_redirect_token1;
	v->a[6657] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[6658] = anon_sym_AMP;
	v->a[6659] = sym__special_character;
	small_parse_table_333(v);
}

void	small_parse_table_333(t_small_parse_table_array *v)
{
	v->a[6660] = anon_sym_DQUOTE;
	v->a[6661] = sym_raw_string;
	v->a[6662] = aux_sym_number_token1;
	v->a[6663] = aux_sym_number_token2;
	v->a[6664] = anon_sym_DOLLAR_LBRACE;
	v->a[6665] = anon_sym_DOLLAR_LPAREN;
	v->a[6666] = anon_sym_BQUOTE;
	v->a[6667] = anon_sym_DOLLAR_BQUOTE;
	v->a[6668] = sym_word;
	v->a[6669] = anon_sym_SEMI;
	v->a[6670] = 19;
	v->a[6671] = actions(3);
	v->a[6672] = 1;
	v->a[6673] = sym_comment;
	v->a[6674] = actions(1651);
	v->a[6675] = 1;
	v->a[6676] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[6677] = actions(1654);
	v->a[6678] = 1;
	v->a[6679] = anon_sym_DOLLAR;
	small_parse_table_334(v);
}

void	small_parse_table_334(t_small_parse_table_array *v)
{
	v->a[6680] = actions(1657);
	v->a[6681] = 1;
	v->a[6682] = sym__special_character;
	v->a[6683] = actions(1660);
	v->a[6684] = 1;
	v->a[6685] = anon_sym_DQUOTE;
	v->a[6686] = actions(1663);
	v->a[6687] = 1;
	v->a[6688] = aux_sym_number_token1;
	v->a[6689] = actions(1666);
	v->a[6690] = 1;
	v->a[6691] = aux_sym_number_token2;
	v->a[6692] = actions(1669);
	v->a[6693] = 1;
	v->a[6694] = anon_sym_DOLLAR_LBRACE;
	v->a[6695] = actions(1672);
	v->a[6696] = 1;
	v->a[6697] = anon_sym_DOLLAR_LPAREN;
	v->a[6698] = actions(1675);
	v->a[6699] = 1;
	small_parse_table_335(v);
}

/* EOF small_parse_table_66.c */
