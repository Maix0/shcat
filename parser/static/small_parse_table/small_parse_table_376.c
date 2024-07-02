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
	v->a[37603] = actions(511);
	v->a[37604] = 2;
	v->a[37605] = sym_file_descriptor;
	v->a[37606] = sym_variable_name;
	v->a[37607] = state(555);
	v->a[37608] = 2;
	v->a[37609] = sym_concatenation;
	v->a[37610] = aux_sym_for_statement_repeat1;
	v->a[37611] = state(802);
	v->a[37612] = 5;
	v->a[37613] = sym_arithmetic_expansion;
	v->a[37614] = sym_string;
	v->a[37615] = sym_simple_expansion;
	v->a[37616] = sym_expansion;
	v->a[37617] = sym_command_substitution;
	v->a[37618] = actions(509);
	v->a[37619] = 21;
	small_parse_table_1881(v);
}

void	small_parse_table_1881(t_small_parse_table_array *v)
{
	v->a[37620] = anon_sym_PIPE;
	v->a[37621] = anon_sym_AMP_AMP;
	v->a[37622] = anon_sym_PIPE_PIPE;
	v->a[37623] = anon_sym_LT;
	v->a[37624] = anon_sym_GT;
	v->a[37625] = anon_sym_GT_GT;
	v->a[37626] = anon_sym_LT_AMP;
	v->a[37627] = anon_sym_GT_AMP;
	v->a[37628] = anon_sym_GT_PIPE;
	v->a[37629] = anon_sym_LT_GT;
	v->a[37630] = anon_sym_LT_LT;
	v->a[37631] = anon_sym_LT_LT_DASH;
	v->a[37632] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37633] = anon_sym_DOLLAR;
	v->a[37634] = anon_sym_DQUOTE;
	v->a[37635] = sym_raw_string;
	v->a[37636] = sym_number;
	v->a[37637] = anon_sym_DOLLAR_LBRACE;
	v->a[37638] = anon_sym_DOLLAR_LPAREN;
	v->a[37639] = anon_sym_BQUOTE;
	small_parse_table_1882(v);
}

void	small_parse_table_1882(t_small_parse_table_array *v)
{
	v->a[37640] = sym_word;
	v->a[37641] = 3;
	v->a[37642] = actions(3);
	v->a[37643] = 1;
	v->a[37644] = sym_comment;
	v->a[37645] = actions(1178);
	v->a[37646] = 3;
	v->a[37647] = sym_file_descriptor;
	v->a[37648] = sym__concat;
	v->a[37649] = sym__bare_dollar;
	v->a[37650] = actions(1180);
	v->a[37651] = 27;
	v->a[37652] = anon_sym_PIPE;
	v->a[37653] = anon_sym_RPAREN;
	v->a[37654] = anon_sym_SEMI_SEMI;
	v->a[37655] = anon_sym_AMP_AMP;
	v->a[37656] = anon_sym_PIPE_PIPE;
	v->a[37657] = anon_sym_LT;
	v->a[37658] = anon_sym_GT;
	v->a[37659] = anon_sym_GT_GT;
	small_parse_table_1883(v);
}

void	small_parse_table_1883(t_small_parse_table_array *v)
{
	v->a[37660] = anon_sym_LT_AMP;
	v->a[37661] = anon_sym_GT_AMP;
	v->a[37662] = anon_sym_GT_PIPE;
	v->a[37663] = anon_sym_LT_GT;
	v->a[37664] = anon_sym_LT_LT;
	v->a[37665] = anon_sym_LT_LT_DASH;
	v->a[37666] = aux_sym_heredoc_redirect_token1;
	v->a[37667] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37668] = anon_sym_AMP;
	v->a[37669] = aux_sym_concatenation_token1;
	v->a[37670] = anon_sym_DOLLAR;
	v->a[37671] = anon_sym_DQUOTE;
	v->a[37672] = sym_raw_string;
	v->a[37673] = sym_number;
	v->a[37674] = anon_sym_DOLLAR_LBRACE;
	v->a[37675] = anon_sym_DOLLAR_LPAREN;
	v->a[37676] = anon_sym_BQUOTE;
	v->a[37677] = sym_word;
	v->a[37678] = anon_sym_SEMI;
	v->a[37679] = 3;
	small_parse_table_1884(v);
}

void	small_parse_table_1884(t_small_parse_table_array *v)
{
	v->a[37680] = actions(3);
	v->a[37681] = 1;
	v->a[37682] = sym_comment;
	v->a[37683] = actions(839);
	v->a[37684] = 3;
	v->a[37685] = sym_file_descriptor;
	v->a[37686] = sym__concat;
	v->a[37687] = sym_variable_name;
	v->a[37688] = actions(837);
	v->a[37689] = 27;
	v->a[37690] = anon_sym_PIPE;
	v->a[37691] = anon_sym_RPAREN;
	v->a[37692] = anon_sym_SEMI_SEMI;
	v->a[37693] = anon_sym_AMP_AMP;
	v->a[37694] = anon_sym_PIPE_PIPE;
	v->a[37695] = anon_sym_LT;
	v->a[37696] = anon_sym_GT;
	v->a[37697] = anon_sym_GT_GT;
	v->a[37698] = anon_sym_LT_AMP;
	v->a[37699] = anon_sym_GT_AMP;
	small_parse_table_1885(v);
}

/* EOF small_parse_table_376.c */
