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
	v->a[37600] = 3;
	v->a[37601] = anon_sym_STAR;
	v->a[37602] = anon_sym_SLASH;
	v->a[37603] = anon_sym_PERCENT;
	v->a[37604] = actions(1288);
	v->a[37605] = 10;
	v->a[37606] = anon_sym_PLUS_EQ;
	v->a[37607] = anon_sym_DASH_EQ;
	v->a[37608] = anon_sym_STAR_EQ;
	v->a[37609] = anon_sym_SLASH_EQ;
	v->a[37610] = anon_sym_PERCENT_EQ;
	v->a[37611] = anon_sym_LT_LT_EQ;
	v->a[37612] = anon_sym_GT_GT_EQ;
	v->a[37613] = anon_sym_AMP_EQ;
	v->a[37614] = anon_sym_CARET_EQ;
	v->a[37615] = anon_sym_PIPE_EQ;
	v->a[37616] = 3;
	v->a[37617] = actions(3);
	v->a[37618] = 1;
	v->a[37619] = sym_comment;
	small_parse_table_1881(v);
}

void	small_parse_table_1881(t_small_parse_table_array *v)
{
	v->a[37620] = actions(1004);
	v->a[37621] = 4;
	v->a[37622] = sym_file_descriptor;
	v->a[37623] = sym__concat;
	v->a[37624] = sym_variable_name;
	v->a[37625] = ts_builtin_sym_end;
	v->a[37626] = actions(999);
	v->a[37627] = 29;
	v->a[37628] = anon_sym_PIPE;
	v->a[37629] = anon_sym_SEMI_SEMI;
	v->a[37630] = anon_sym_AMP_AMP;
	v->a[37631] = anon_sym_PIPE_PIPE;
	v->a[37632] = anon_sym_LT;
	v->a[37633] = anon_sym_GT;
	v->a[37634] = anon_sym_GT_GT;
	v->a[37635] = anon_sym_AMP_GT;
	v->a[37636] = anon_sym_AMP_GT_GT;
	v->a[37637] = anon_sym_LT_AMP;
	v->a[37638] = anon_sym_GT_AMP;
	v->a[37639] = anon_sym_GT_PIPE;
	small_parse_table_1882(v);
}

void	small_parse_table_1882(t_small_parse_table_array *v)
{
	v->a[37640] = anon_sym_LT_AMP_DASH;
	v->a[37641] = anon_sym_GT_AMP_DASH;
	v->a[37642] = anon_sym_LT_LT;
	v->a[37643] = anon_sym_LT_LT_DASH;
	v->a[37644] = aux_sym_heredoc_redirect_token1;
	v->a[37645] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37646] = anon_sym_AMP;
	v->a[37647] = aux_sym_concatenation_token1;
	v->a[37648] = anon_sym_DOLLAR;
	v->a[37649] = anon_sym_DQUOTE;
	v->a[37650] = sym_raw_string;
	v->a[37651] = sym_number;
	v->a[37652] = anon_sym_DOLLAR_LBRACE;
	v->a[37653] = anon_sym_DOLLAR_LPAREN;
	v->a[37654] = anon_sym_BQUOTE;
	v->a[37655] = sym_word;
	v->a[37656] = anon_sym_SEMI;
	v->a[37657] = 6;
	v->a[37658] = actions(3);
	v->a[37659] = 1;
	small_parse_table_1883(v);
}

void	small_parse_table_1883(t_small_parse_table_array *v)
{
	v->a[37660] = sym_comment;
	v->a[37661] = actions(1118);
	v->a[37662] = 1;
	v->a[37663] = aux_sym_concatenation_token1;
	v->a[37664] = actions(1165);
	v->a[37665] = 1;
	v->a[37666] = sym__concat;
	v->a[37667] = state(472);
	v->a[37668] = 1;
	v->a[37669] = aux_sym_concatenation_repeat1;
	v->a[37670] = actions(1219);
	v->a[37671] = 2;
	v->a[37672] = sym_file_descriptor;
	v->a[37673] = sym_variable_name;
	v->a[37674] = actions(1215);
	v->a[37675] = 28;
	v->a[37676] = anon_sym_PIPE;
	v->a[37677] = anon_sym_SEMI_SEMI;
	v->a[37678] = anon_sym_AMP_AMP;
	v->a[37679] = anon_sym_PIPE_PIPE;
	small_parse_table_1884(v);
}

void	small_parse_table_1884(t_small_parse_table_array *v)
{
	v->a[37680] = anon_sym_LT;
	v->a[37681] = anon_sym_GT;
	v->a[37682] = anon_sym_GT_GT;
	v->a[37683] = anon_sym_AMP_GT;
	v->a[37684] = anon_sym_AMP_GT_GT;
	v->a[37685] = anon_sym_LT_AMP;
	v->a[37686] = anon_sym_GT_AMP;
	v->a[37687] = anon_sym_GT_PIPE;
	v->a[37688] = anon_sym_LT_AMP_DASH;
	v->a[37689] = anon_sym_GT_AMP_DASH;
	v->a[37690] = anon_sym_LT_LT;
	v->a[37691] = anon_sym_LT_LT_DASH;
	v->a[37692] = aux_sym_heredoc_redirect_token1;
	v->a[37693] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37694] = anon_sym_AMP;
	v->a[37695] = anon_sym_DOLLAR;
	v->a[37696] = anon_sym_DQUOTE;
	v->a[37697] = sym_raw_string;
	v->a[37698] = sym_number;
	v->a[37699] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_1885(v);
}

/* EOF small_parse_table_376.c */
