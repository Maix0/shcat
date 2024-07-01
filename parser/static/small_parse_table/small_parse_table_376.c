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
	v->a[37600] = actions(3);
	v->a[37601] = 1;
	v->a[37602] = sym_comment;
	v->a[37603] = actions(662);
	v->a[37604] = 4;
	v->a[37605] = sym_file_descriptor;
	v->a[37606] = sym__concat;
	v->a[37607] = sym__bare_dollar;
	v->a[37608] = ts_builtin_sym_end;
	v->a[37609] = actions(660);
	v->a[37610] = 26;
	v->a[37611] = anon_sym_PIPE;
	v->a[37612] = anon_sym_SEMI_SEMI;
	v->a[37613] = anon_sym_AMP_AMP;
	v->a[37614] = anon_sym_PIPE_PIPE;
	v->a[37615] = anon_sym_LT;
	v->a[37616] = anon_sym_GT;
	v->a[37617] = anon_sym_GT_GT;
	v->a[37618] = anon_sym_LT_AMP;
	v->a[37619] = anon_sym_GT_AMP;
	small_parse_table_1881(v);
}

void	small_parse_table_1881(t_small_parse_table_array *v)
{
	v->a[37620] = anon_sym_GT_PIPE;
	v->a[37621] = anon_sym_LT_GT;
	v->a[37622] = anon_sym_LT_LT;
	v->a[37623] = anon_sym_LT_LT_DASH;
	v->a[37624] = aux_sym_heredoc_redirect_token1;
	v->a[37625] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37626] = anon_sym_AMP;
	v->a[37627] = aux_sym_concatenation_token1;
	v->a[37628] = anon_sym_DOLLAR;
	v->a[37629] = anon_sym_DQUOTE;
	v->a[37630] = sym_raw_string;
	v->a[37631] = sym_number;
	v->a[37632] = anon_sym_DOLLAR_LBRACE;
	v->a[37633] = anon_sym_DOLLAR_LPAREN;
	v->a[37634] = anon_sym_BQUOTE;
	v->a[37635] = sym_word;
	v->a[37636] = anon_sym_SEMI;
	v->a[37637] = 6;
	v->a[37638] = actions(3);
	v->a[37639] = 1;
	small_parse_table_1882(v);
}

void	small_parse_table_1882(t_small_parse_table_array *v)
{
	v->a[37640] = sym_comment;
	v->a[37641] = actions(1093);
	v->a[37642] = 1;
	v->a[37643] = sym_file_descriptor;
	v->a[37644] = actions(1342);
	v->a[37645] = 1;
	v->a[37646] = aux_sym_concatenation_token1;
	v->a[37647] = actions(1345);
	v->a[37648] = 1;
	v->a[37649] = sym__concat;
	v->a[37650] = state(547);
	v->a[37651] = 1;
	v->a[37652] = aux_sym_concatenation_repeat1;
	v->a[37653] = actions(1088);
	v->a[37654] = 26;
	v->a[37655] = anon_sym_esac;
	v->a[37656] = anon_sym_PIPE;
	v->a[37657] = anon_sym_SEMI_SEMI;
	v->a[37658] = anon_sym_AMP_AMP;
	v->a[37659] = anon_sym_PIPE_PIPE;
	small_parse_table_1883(v);
}

void	small_parse_table_1883(t_small_parse_table_array *v)
{
	v->a[37660] = anon_sym_LT;
	v->a[37661] = anon_sym_GT;
	v->a[37662] = anon_sym_GT_GT;
	v->a[37663] = anon_sym_LT_AMP;
	v->a[37664] = anon_sym_GT_AMP;
	v->a[37665] = anon_sym_GT_PIPE;
	v->a[37666] = anon_sym_LT_GT;
	v->a[37667] = anon_sym_LT_LT;
	v->a[37668] = anon_sym_LT_LT_DASH;
	v->a[37669] = aux_sym_heredoc_redirect_token1;
	v->a[37670] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37671] = anon_sym_AMP;
	v->a[37672] = anon_sym_DOLLAR;
	v->a[37673] = anon_sym_DQUOTE;
	v->a[37674] = sym_raw_string;
	v->a[37675] = sym_number;
	v->a[37676] = anon_sym_DOLLAR_LBRACE;
	v->a[37677] = anon_sym_DOLLAR_LPAREN;
	v->a[37678] = anon_sym_BQUOTE;
	v->a[37679] = sym_word;
	small_parse_table_1884(v);
}

void	small_parse_table_1884(t_small_parse_table_array *v)
{
	v->a[37680] = anon_sym_SEMI;
	v->a[37681] = 3;
	v->a[37682] = actions(3);
	v->a[37683] = 1;
	v->a[37684] = sym_comment;
	v->a[37685] = actions(895);
	v->a[37686] = 3;
	v->a[37687] = sym_file_descriptor;
	v->a[37688] = sym__concat;
	v->a[37689] = sym__bare_dollar;
	v->a[37690] = actions(893);
	v->a[37691] = 27;
	v->a[37692] = anon_sym_PIPE;
	v->a[37693] = anon_sym_RPAREN;
	v->a[37694] = anon_sym_SEMI_SEMI;
	v->a[37695] = anon_sym_AMP_AMP;
	v->a[37696] = anon_sym_PIPE_PIPE;
	v->a[37697] = anon_sym_LT;
	v->a[37698] = anon_sym_GT;
	v->a[37699] = anon_sym_GT_GT;
	small_parse_table_1885(v);
}

/* EOF small_parse_table_376.c */
