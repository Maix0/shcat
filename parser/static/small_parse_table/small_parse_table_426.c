/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_426.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2130(t_small_parse_table_array *v)
{
	v->a[42600] = actions(1112);
	v->a[42601] = 30;
	v->a[42602] = anon_sym_PIPE;
	v->a[42603] = anon_sym_RPAREN;
	v->a[42604] = anon_sym_SEMI_SEMI;
	v->a[42605] = anon_sym_AMP_AMP;
	v->a[42606] = anon_sym_PIPE_PIPE;
	v->a[42607] = anon_sym_LT;
	v->a[42608] = anon_sym_GT;
	v->a[42609] = anon_sym_GT_GT;
	v->a[42610] = anon_sym_AMP_GT;
	v->a[42611] = anon_sym_AMP_GT_GT;
	v->a[42612] = anon_sym_LT_AMP;
	v->a[42613] = anon_sym_GT_AMP;
	v->a[42614] = anon_sym_GT_PIPE;
	v->a[42615] = anon_sym_LT_AMP_DASH;
	v->a[42616] = anon_sym_GT_AMP_DASH;
	v->a[42617] = anon_sym_LT_LT;
	v->a[42618] = anon_sym_LT_LT_DASH;
	v->a[42619] = aux_sym_heredoc_redirect_token1;
	small_parse_table_2131(v);
}

void	small_parse_table_2131(t_small_parse_table_array *v)
{
	v->a[42620] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42621] = anon_sym_AMP;
	v->a[42622] = aux_sym_concatenation_token1;
	v->a[42623] = anon_sym_DOLLAR;
	v->a[42624] = anon_sym_DQUOTE;
	v->a[42625] = sym_raw_string;
	v->a[42626] = sym_number;
	v->a[42627] = anon_sym_DOLLAR_LBRACE;
	v->a[42628] = anon_sym_DOLLAR_LPAREN;
	v->a[42629] = anon_sym_BQUOTE;
	v->a[42630] = sym_word;
	v->a[42631] = anon_sym_SEMI;
	v->a[42632] = 6;
	v->a[42633] = actions(3);
	v->a[42634] = 1;
	v->a[42635] = sym_comment;
	v->a[42636] = actions(1174);
	v->a[42637] = 1;
	v->a[42638] = sym_file_descriptor;
	v->a[42639] = actions(1320);
	small_parse_table_2132(v);
}

void	small_parse_table_2132(t_small_parse_table_array *v)
{
	v->a[42640] = 1;
	v->a[42641] = aux_sym_concatenation_token1;
	v->a[42642] = actions(1464);
	v->a[42643] = 1;
	v->a[42644] = sym__concat;
	v->a[42645] = state(474);
	v->a[42646] = 1;
	v->a[42647] = aux_sym_concatenation_repeat1;
	v->a[42648] = actions(1172);
	v->a[42649] = 29;
	v->a[42650] = anon_sym_PIPE;
	v->a[42651] = anon_sym_RPAREN;
	v->a[42652] = anon_sym_SEMI_SEMI;
	v->a[42653] = anon_sym_AMP_AMP;
	v->a[42654] = anon_sym_PIPE_PIPE;
	v->a[42655] = anon_sym_LT;
	v->a[42656] = anon_sym_GT;
	v->a[42657] = anon_sym_GT_GT;
	v->a[42658] = anon_sym_AMP_GT;
	v->a[42659] = anon_sym_AMP_GT_GT;
	small_parse_table_2133(v);
}

void	small_parse_table_2133(t_small_parse_table_array *v)
{
	v->a[42660] = anon_sym_LT_AMP;
	v->a[42661] = anon_sym_GT_AMP;
	v->a[42662] = anon_sym_GT_PIPE;
	v->a[42663] = anon_sym_LT_AMP_DASH;
	v->a[42664] = anon_sym_GT_AMP_DASH;
	v->a[42665] = anon_sym_LT_LT;
	v->a[42666] = anon_sym_LT_LT_DASH;
	v->a[42667] = aux_sym_heredoc_redirect_token1;
	v->a[42668] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42669] = anon_sym_AMP;
	v->a[42670] = anon_sym_DOLLAR;
	v->a[42671] = anon_sym_DQUOTE;
	v->a[42672] = sym_raw_string;
	v->a[42673] = sym_number;
	v->a[42674] = anon_sym_DOLLAR_LBRACE;
	v->a[42675] = anon_sym_DOLLAR_LPAREN;
	v->a[42676] = anon_sym_BQUOTE;
	v->a[42677] = sym_word;
	v->a[42678] = anon_sym_SEMI;
	v->a[42679] = 15;
	small_parse_table_2134(v);
}

void	small_parse_table_2134(t_small_parse_table_array *v)
{
	v->a[42680] = actions(1074);
	v->a[42681] = 1;
	v->a[42682] = sym_comment;
	v->a[42683] = actions(1142);
	v->a[42684] = 1;
	v->a[42685] = anon_sym_EQ;
	v->a[42686] = actions(1326);
	v->a[42687] = 1;
	v->a[42688] = anon_sym_PIPE;
	v->a[42689] = actions(1330);
	v->a[42690] = 1;
	v->a[42691] = anon_sym_AMP_AMP;
	v->a[42692] = actions(1332);
	v->a[42693] = 1;
	v->a[42694] = anon_sym_PIPE_PIPE;
	v->a[42695] = actions(1342);
	v->a[42696] = 1;
	v->a[42697] = anon_sym_CARET;
	v->a[42698] = actions(1344);
	v->a[42699] = 1;
	small_parse_table_2135(v);
}

/* EOF small_parse_table_426.c */
