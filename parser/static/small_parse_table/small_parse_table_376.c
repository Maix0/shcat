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
	v->a[37600] = actions(1379);
	v->a[37601] = 2;
	v->a[37602] = aux_sym__simple_variable_name_token1;
	v->a[37603] = aux_sym__multiline_variable_name_token1;
	v->a[37604] = actions(1377);
	v->a[37605] = 9;
	v->a[37606] = anon_sym_BANG;
	v->a[37607] = anon_sym_DASH;
	v->a[37608] = anon_sym_STAR;
	v->a[37609] = anon_sym_QMARK;
	v->a[37610] = anon_sym_DOLLAR;
	v->a[37611] = anon_sym_POUND;
	v->a[37612] = anon_sym_AT;
	v->a[37613] = anon_sym_0;
	v->a[37614] = anon_sym__;
	v->a[37615] = actions(381);
	v->a[37616] = 18;
	v->a[37617] = anon_sym_PIPE;
	v->a[37618] = anon_sym_RPAREN;
	v->a[37619] = anon_sym_SEMI_SEMI;
	small_parse_table_1881(v);
}

void	small_parse_table_1881(t_small_parse_table_array *v)
{
	v->a[37620] = anon_sym_AMP_AMP;
	v->a[37621] = anon_sym_PIPE_PIPE;
	v->a[37622] = anon_sym_LT;
	v->a[37623] = anon_sym_GT;
	v->a[37624] = anon_sym_GT_GT;
	v->a[37625] = anon_sym_LT_AMP;
	v->a[37626] = anon_sym_GT_AMP;
	v->a[37627] = anon_sym_GT_PIPE;
	v->a[37628] = anon_sym_LT_AMP_DASH;
	v->a[37629] = anon_sym_GT_AMP_DASH;
	v->a[37630] = anon_sym_LT_LT;
	v->a[37631] = anon_sym_LT_LT_DASH;
	v->a[37632] = aux_sym_heredoc_redirect_token1;
	v->a[37633] = anon_sym_AMP;
	v->a[37634] = anon_sym_SEMI;
	v->a[37635] = 3;
	v->a[37636] = actions(3);
	v->a[37637] = 1;
	v->a[37638] = sym_comment;
	v->a[37639] = actions(1194);
	small_parse_table_1882(v);
}

void	small_parse_table_1882(t_small_parse_table_array *v)
{
	v->a[37640] = 4;
	v->a[37641] = sym_file_descriptor;
	v->a[37642] = sym__concat;
	v->a[37643] = sym__bare_dollar;
	v->a[37644] = ts_builtin_sym_end;
	v->a[37645] = actions(1189);
	v->a[37646] = 27;
	v->a[37647] = anon_sym_PIPE;
	v->a[37648] = anon_sym_SEMI_SEMI;
	v->a[37649] = anon_sym_AMP_AMP;
	v->a[37650] = anon_sym_PIPE_PIPE;
	v->a[37651] = anon_sym_LT;
	v->a[37652] = anon_sym_GT;
	v->a[37653] = anon_sym_GT_GT;
	v->a[37654] = anon_sym_LT_AMP;
	v->a[37655] = anon_sym_GT_AMP;
	v->a[37656] = anon_sym_GT_PIPE;
	v->a[37657] = anon_sym_LT_AMP_DASH;
	v->a[37658] = anon_sym_GT_AMP_DASH;
	v->a[37659] = anon_sym_LT_LT;
	small_parse_table_1883(v);
}

void	small_parse_table_1883(t_small_parse_table_array *v)
{
	v->a[37660] = anon_sym_LT_LT_DASH;
	v->a[37661] = aux_sym_heredoc_redirect_token1;
	v->a[37662] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37663] = anon_sym_AMP;
	v->a[37664] = aux_sym_concatenation_token1;
	v->a[37665] = anon_sym_DOLLAR;
	v->a[37666] = anon_sym_DQUOTE;
	v->a[37667] = sym_raw_string;
	v->a[37668] = sym_number;
	v->a[37669] = anon_sym_DOLLAR_LBRACE;
	v->a[37670] = anon_sym_DOLLAR_LPAREN;
	v->a[37671] = anon_sym_BQUOTE;
	v->a[37672] = sym_word;
	v->a[37673] = anon_sym_SEMI;
	v->a[37674] = 6;
	v->a[37675] = actions(3);
	v->a[37676] = 1;
	v->a[37677] = sym_comment;
	v->a[37678] = actions(1230);
	v->a[37679] = 1;
	small_parse_table_1884(v);
}

void	small_parse_table_1884(t_small_parse_table_array *v)
{
	v->a[37680] = aux_sym_concatenation_token1;
	v->a[37681] = actions(1232);
	v->a[37682] = 1;
	v->a[37683] = sym__concat;
	v->a[37684] = state(572);
	v->a[37685] = 1;
	v->a[37686] = aux_sym_concatenation_repeat1;
	v->a[37687] = actions(1238);
	v->a[37688] = 2;
	v->a[37689] = sym_file_descriptor;
	v->a[37690] = sym_variable_name;
	v->a[37691] = actions(1234);
	v->a[37692] = 26;
	v->a[37693] = anon_sym_PIPE;
	v->a[37694] = anon_sym_SEMI_SEMI;
	v->a[37695] = anon_sym_AMP_AMP;
	v->a[37696] = anon_sym_PIPE_PIPE;
	v->a[37697] = anon_sym_LT;
	v->a[37698] = anon_sym_GT;
	v->a[37699] = anon_sym_GT_GT;
	small_parse_table_1885(v);
}

/* EOF small_parse_table_376.c */
