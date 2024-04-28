/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1006.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5030(t_small_parse_table_array *v)
{
	v->a[100600] = sym_test_operator;
	v->a[100601] = sym__brace_start;
	v->a[100602] = ts_builtin_sym_end;
	v->a[100603] = aux_sym_heredoc_redirect_token1;
	v->a[100604] = actions(5766);
	v->a[100605] = 37;
	v->a[100606] = anon_sym_LPAREN_LPAREN;
	v->a[100607] = anon_sym_SEMI;
	v->a[100608] = anon_sym_PIPE_PIPE;
	v->a[100609] = anon_sym_AMP_AMP;
	v->a[100610] = anon_sym_PIPE;
	v->a[100611] = anon_sym_AMP;
	v->a[100612] = anon_sym_LT;
	v->a[100613] = anon_sym_GT;
	v->a[100614] = anon_sym_LT_LT;
	v->a[100615] = anon_sym_GT_GT;
	v->a[100616] = anon_sym_SEMI_SEMI;
	v->a[100617] = anon_sym_PIPE_AMP;
	v->a[100618] = anon_sym_AMP_GT;
	v->a[100619] = anon_sym_AMP_GT_GT;
	small_parse_table_5031(v);
}

void	small_parse_table_5031(t_small_parse_table_array *v)
{
	v->a[100620] = anon_sym_LT_AMP;
	v->a[100621] = anon_sym_GT_AMP;
	v->a[100622] = anon_sym_GT_PIPE;
	v->a[100623] = anon_sym_LT_AMP_DASH;
	v->a[100624] = anon_sym_GT_AMP_DASH;
	v->a[100625] = anon_sym_LT_LT_DASH;
	v->a[100626] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[100627] = anon_sym_DOLLAR_LBRACK;
	v->a[100628] = anon_sym_DOLLAR;
	v->a[100629] = sym__special_character;
	v->a[100630] = anon_sym_DQUOTE;
	v->a[100631] = sym_raw_string;
	v->a[100632] = sym_ansi_c_string;
	v->a[100633] = aux_sym_number_token1;
	v->a[100634] = aux_sym_number_token2;
	v->a[100635] = anon_sym_DOLLAR_LBRACE;
	v->a[100636] = anon_sym_DOLLAR_LPAREN;
	v->a[100637] = anon_sym_BQUOTE;
	v->a[100638] = anon_sym_DOLLAR_BQUOTE;
	v->a[100639] = anon_sym_LT_LPAREN;
	small_parse_table_5032(v);
}

void	small_parse_table_5032(t_small_parse_table_array *v)
{
	v->a[100640] = anon_sym_GT_LPAREN;
	v->a[100641] = aux_sym__simple_variable_name_token1;
	v->a[100642] = sym_word;
	v->a[100643] = 26;
	v->a[100644] = actions(71);
	v->a[100645] = 1;
	v->a[100646] = sym_comment;
	v->a[100647] = actions(1131);
	v->a[100648] = 1;
	v->a[100649] = anon_sym_LPAREN;
	v->a[100650] = actions(1141);
	v->a[100651] = 1;
	v->a[100652] = anon_sym_DOLLAR_LBRACK;
	v->a[100653] = actions(1145);
	v->a[100654] = 1;
	v->a[100655] = anon_sym_DOLLAR;
	v->a[100656] = actions(1149);
	v->a[100657] = 1;
	v->a[100658] = anon_sym_DQUOTE;
	v->a[100659] = actions(1153);
	small_parse_table_5033(v);
}

void	small_parse_table_5033(t_small_parse_table_array *v)
{
	v->a[100660] = 1;
	v->a[100661] = aux_sym_number_token1;
	v->a[100662] = actions(1155);
	v->a[100663] = 1;
	v->a[100664] = aux_sym_number_token2;
	v->a[100665] = actions(1157);
	v->a[100666] = 1;
	v->a[100667] = anon_sym_DOLLAR_LBRACE;
	v->a[100668] = actions(1159);
	v->a[100669] = 1;
	v->a[100670] = anon_sym_DOLLAR_LPAREN;
	v->a[100671] = actions(1163);
	v->a[100672] = 1;
	v->a[100673] = anon_sym_DOLLAR_BQUOTE;
	v->a[100674] = actions(1169);
	v->a[100675] = 1;
	v->a[100676] = sym__brace_start;
	v->a[100677] = actions(1211);
	v->a[100678] = 1;
	v->a[100679] = sym_word;
	small_parse_table_5034(v);
}

void	small_parse_table_5034(t_small_parse_table_array *v)
{
	v->a[100680] = actions(1213);
	v->a[100681] = 1;
	v->a[100682] = anon_sym_BANG;
	v->a[100683] = actions(1219);
	v->a[100684] = 1;
	v->a[100685] = anon_sym_TILDE;
	v->a[100686] = actions(1221);
	v->a[100687] = 1;
	v->a[100688] = sym__special_character;
	v->a[100689] = actions(1225);
	v->a[100690] = 1;
	v->a[100691] = sym_test_operator;
	v->a[100692] = actions(3060);
	v->a[100693] = 1;
	v->a[100694] = anon_sym_BQUOTE;
	v->a[100695] = state(2484);
	v->a[100696] = 1;
	v->a[100697] = aux_sym__literal_repeat1;
	v->a[100698] = state(3345);
	v->a[100699] = 1;
	small_parse_table_5035(v);
}

/* EOF small_parse_table_1006.c */
