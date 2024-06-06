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
	v->a[37600] = aux_sym__simple_variable_name_token1;
	v->a[37601] = sym_word;
	v->a[37602] = anon_sym_SEMI;
	v->a[37603] = 3;
	v->a[37604] = actions(3);
	v->a[37605] = 1;
	v->a[37606] = sym_comment;
	v->a[37607] = actions(3117);
	v->a[37608] = 7;
	v->a[37609] = sym_file_descriptor;
	v->a[37610] = sym__concat;
	v->a[37611] = sym_test_operator;
	v->a[37612] = sym__bare_dollar;
	v->a[37613] = sym__brace_start;
	v->a[37614] = ts_builtin_sym_end;
	v->a[37615] = aux_sym_heredoc_redirect_token1;
	v->a[37616] = actions(3115);
	v->a[37617] = 33;
	v->a[37618] = anon_sym_LPAREN;
	v->a[37619] = anon_sym_PIPE;
	small_parse_table_1881(v);
}

void	small_parse_table_1881(t_small_parse_table_array *v)
{
	v->a[37620] = anon_sym_SEMI_SEMI;
	v->a[37621] = anon_sym_PIPE_AMP;
	v->a[37622] = anon_sym_AMP_AMP;
	v->a[37623] = anon_sym_PIPE_PIPE;
	v->a[37624] = anon_sym_LT;
	v->a[37625] = anon_sym_GT;
	v->a[37626] = anon_sym_GT_GT;
	v->a[37627] = anon_sym_AMP_GT;
	v->a[37628] = anon_sym_AMP_GT_GT;
	v->a[37629] = anon_sym_LT_AMP;
	v->a[37630] = anon_sym_GT_AMP;
	v->a[37631] = anon_sym_GT_PIPE;
	v->a[37632] = anon_sym_LT_AMP_DASH;
	v->a[37633] = anon_sym_GT_AMP_DASH;
	v->a[37634] = anon_sym_LT_LT;
	v->a[37635] = anon_sym_LT_LT_DASH;
	v->a[37636] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37637] = anon_sym_AMP;
	v->a[37638] = aux_sym_concatenation_token1;
	v->a[37639] = anon_sym_DOLLAR;
	small_parse_table_1882(v);
}

void	small_parse_table_1882(t_small_parse_table_array *v)
{
	v->a[37640] = sym__special_character;
	v->a[37641] = anon_sym_DQUOTE;
	v->a[37642] = sym_raw_string;
	v->a[37643] = aux_sym_number_token1;
	v->a[37644] = aux_sym_number_token2;
	v->a[37645] = anon_sym_DOLLAR_LBRACE;
	v->a[37646] = anon_sym_DOLLAR_LPAREN;
	v->a[37647] = anon_sym_BQUOTE;
	v->a[37648] = anon_sym_DOLLAR_BQUOTE;
	v->a[37649] = sym_word;
	v->a[37650] = anon_sym_SEMI;
	v->a[37651] = 3;
	v->a[37652] = actions(3);
	v->a[37653] = 1;
	v->a[37654] = sym_comment;
	v->a[37655] = actions(3062);
	v->a[37656] = 6;
	v->a[37657] = sym_file_descriptor;
	v->a[37658] = sym__concat;
	v->a[37659] = sym_test_operator;
	small_parse_table_1883(v);
}

void	small_parse_table_1883(t_small_parse_table_array *v)
{
	v->a[37660] = sym__bare_dollar;
	v->a[37661] = sym__brace_start;
	v->a[37662] = aux_sym_heredoc_redirect_token1;
	v->a[37663] = actions(3060);
	v->a[37664] = 34;
	v->a[37665] = anon_sym_LPAREN;
	v->a[37666] = anon_sym_PIPE;
	v->a[37667] = anon_sym_RPAREN;
	v->a[37668] = anon_sym_SEMI_SEMI;
	v->a[37669] = anon_sym_PIPE_AMP;
	v->a[37670] = anon_sym_AMP_AMP;
	v->a[37671] = anon_sym_PIPE_PIPE;
	v->a[37672] = anon_sym_LT;
	v->a[37673] = anon_sym_GT;
	v->a[37674] = anon_sym_GT_GT;
	v->a[37675] = anon_sym_AMP_GT;
	v->a[37676] = anon_sym_AMP_GT_GT;
	v->a[37677] = anon_sym_LT_AMP;
	v->a[37678] = anon_sym_GT_AMP;
	v->a[37679] = anon_sym_GT_PIPE;
	small_parse_table_1884(v);
}

void	small_parse_table_1884(t_small_parse_table_array *v)
{
	v->a[37680] = anon_sym_LT_AMP_DASH;
	v->a[37681] = anon_sym_GT_AMP_DASH;
	v->a[37682] = anon_sym_LT_LT;
	v->a[37683] = anon_sym_LT_LT_DASH;
	v->a[37684] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37685] = anon_sym_AMP;
	v->a[37686] = aux_sym_concatenation_token1;
	v->a[37687] = anon_sym_DOLLAR;
	v->a[37688] = sym__special_character;
	v->a[37689] = anon_sym_DQUOTE;
	v->a[37690] = sym_raw_string;
	v->a[37691] = aux_sym_number_token1;
	v->a[37692] = aux_sym_number_token2;
	v->a[37693] = anon_sym_DOLLAR_LBRACE;
	v->a[37694] = anon_sym_DOLLAR_LPAREN;
	v->a[37695] = anon_sym_BQUOTE;
	v->a[37696] = anon_sym_DOLLAR_BQUOTE;
	v->a[37697] = sym_word;
	v->a[37698] = anon_sym_SEMI;
	v->a[37699] = 3;
	small_parse_table_1885(v);
}

/* EOF small_parse_table_376.c */
