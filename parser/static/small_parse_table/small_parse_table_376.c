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
	v->a[37600] = 1;
	v->a[37601] = sym_comment;
	v->a[37602] = actions(1337);
	v->a[37603] = 1;
	v->a[37604] = anon_sym_LPAREN;
	v->a[37605] = actions(1341);
	v->a[37606] = 1;
	v->a[37607] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37608] = actions(1343);
	v->a[37609] = 1;
	v->a[37610] = anon_sym_DOLLAR;
	v->a[37611] = actions(1345);
	v->a[37612] = 1;
	v->a[37613] = anon_sym_DQUOTE;
	v->a[37614] = actions(1347);
	v->a[37615] = 1;
	v->a[37616] = anon_sym_DOLLAR_LBRACE;
	v->a[37617] = actions(1349);
	v->a[37618] = 1;
	v->a[37619] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_1881(v);
}

void	small_parse_table_1881(t_small_parse_table_array *v)
{
	v->a[37620] = actions(1351);
	v->a[37621] = 1;
	v->a[37622] = anon_sym_BQUOTE;
	v->a[37623] = actions(1353);
	v->a[37624] = 1;
	v->a[37625] = sym_extglob_pattern;
	v->a[37626] = actions(1425);
	v->a[37627] = 1;
	v->a[37628] = anon_sym_esac;
	v->a[37629] = state(718);
	v->a[37630] = 1;
	v->a[37631] = sym_terminator;
	v->a[37632] = state(791);
	v->a[37633] = 1;
	v->a[37634] = aux_sym_case_statement_repeat1;
	v->a[37635] = state(1432);
	v->a[37636] = 1;
	v->a[37637] = sym_case_item;
	v->a[37638] = state(1737);
	v->a[37639] = 1;
	small_parse_table_1882(v);
}

void	small_parse_table_1882(t_small_parse_table_array *v)
{
	v->a[37640] = sym__case_item_last;
	v->a[37641] = state(1594);
	v->a[37642] = 2;
	v->a[37643] = sym_concatenation;
	v->a[37644] = sym__extglob_blob;
	v->a[37645] = actions(1333);
	v->a[37646] = 3;
	v->a[37647] = sym_raw_string;
	v->a[37648] = sym_number;
	v->a[37649] = sym_word;
	v->a[37650] = actions(1339);
	v->a[37651] = 3;
	v->a[37652] = anon_sym_SEMI_SEMI;
	v->a[37653] = aux_sym_heredoc_redirect_token1;
	v->a[37654] = anon_sym_SEMI;
	v->a[37655] = state(1520);
	v->a[37656] = 5;
	v->a[37657] = sym_arithmetic_expansion;
	v->a[37658] = sym_string;
	v->a[37659] = sym_simple_expansion;
	small_parse_table_1883(v);
}

void	small_parse_table_1883(t_small_parse_table_array *v)
{
	v->a[37660] = sym_expansion;
	v->a[37661] = sym_command_substitution;
	v->a[37662] = 3;
	v->a[37663] = actions(3);
	v->a[37664] = 1;
	v->a[37665] = sym_comment;
	v->a[37666] = actions(1177);
	v->a[37667] = 1;
	v->a[37668] = sym_variable_name;
	v->a[37669] = actions(1175);
	v->a[37670] = 25;
	v->a[37671] = anon_sym_for;
	v->a[37672] = anon_sym_while;
	v->a[37673] = anon_sym_until;
	v->a[37674] = anon_sym_if;
	v->a[37675] = anon_sym_case;
	v->a[37676] = anon_sym_LPAREN;
	v->a[37677] = anon_sym_LBRACE;
	v->a[37678] = anon_sym_RBRACE;
	v->a[37679] = anon_sym_BANG;
	small_parse_table_1884(v);
}

void	small_parse_table_1884(t_small_parse_table_array *v)
{
	v->a[37680] = anon_sym_LT;
	v->a[37681] = anon_sym_GT;
	v->a[37682] = anon_sym_GT_GT;
	v->a[37683] = anon_sym_LT_AMP;
	v->a[37684] = anon_sym_GT_AMP;
	v->a[37685] = anon_sym_GT_PIPE;
	v->a[37686] = anon_sym_LT_GT;
	v->a[37687] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37688] = anon_sym_DOLLAR;
	v->a[37689] = anon_sym_DQUOTE;
	v->a[37690] = sym_raw_string;
	v->a[37691] = sym_number;
	v->a[37692] = anon_sym_DOLLAR_LBRACE;
	v->a[37693] = anon_sym_DOLLAR_LPAREN;
	v->a[37694] = anon_sym_BQUOTE;
	v->a[37695] = sym_word;
	v->a[37696] = 6;
	v->a[37697] = actions(3);
	v->a[37698] = 1;
	v->a[37699] = sym_comment;
	small_parse_table_1885(v);
}

/* EOF small_parse_table_376.c */
