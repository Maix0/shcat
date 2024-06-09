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
	v->a[42600] = actions(3);
	v->a[42601] = 1;
	v->a[42602] = sym_comment;
	v->a[42603] = actions(1247);
	v->a[42604] = 2;
	v->a[42605] = sym_file_descriptor;
	v->a[42606] = sym__concat;
	v->a[42607] = actions(1249);
	v->a[42608] = 31;
	v->a[42609] = anon_sym_esac;
	v->a[42610] = anon_sym_PIPE;
	v->a[42611] = anon_sym_SEMI_SEMI;
	v->a[42612] = anon_sym_AMP_AMP;
	v->a[42613] = anon_sym_PIPE_PIPE;
	v->a[42614] = anon_sym_LT;
	v->a[42615] = anon_sym_GT;
	v->a[42616] = anon_sym_GT_GT;
	v->a[42617] = anon_sym_AMP_GT;
	v->a[42618] = anon_sym_AMP_GT_GT;
	v->a[42619] = anon_sym_LT_AMP;
	small_parse_table_2131(v);
}

void	small_parse_table_2131(t_small_parse_table_array *v)
{
	v->a[42620] = anon_sym_GT_AMP;
	v->a[42621] = anon_sym_GT_PIPE;
	v->a[42622] = anon_sym_LT_AMP_DASH;
	v->a[42623] = anon_sym_GT_AMP_DASH;
	v->a[42624] = anon_sym_LT_LT;
	v->a[42625] = anon_sym_LT_LT_DASH;
	v->a[42626] = aux_sym_heredoc_redirect_token1;
	v->a[42627] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42628] = anon_sym_AMP;
	v->a[42629] = aux_sym_concatenation_token1;
	v->a[42630] = anon_sym_DOLLAR;
	v->a[42631] = anon_sym_DQUOTE;
	v->a[42632] = sym_raw_string;
	v->a[42633] = aux_sym_number_token1;
	v->a[42634] = aux_sym_number_token2;
	v->a[42635] = anon_sym_DOLLAR_LBRACE;
	v->a[42636] = anon_sym_DOLLAR_LPAREN;
	v->a[42637] = anon_sym_BQUOTE;
	v->a[42638] = sym_word;
	v->a[42639] = anon_sym_SEMI;
	small_parse_table_2132(v);
}

void	small_parse_table_2132(t_small_parse_table_array *v)
{
	v->a[42640] = 17;
	v->a[42641] = actions(1404);
	v->a[42642] = 1;
	v->a[42643] = sym_comment;
	v->a[42644] = actions(1418);
	v->a[42645] = 1;
	v->a[42646] = anon_sym_AMP;
	v->a[42647] = actions(1420);
	v->a[42648] = 1;
	v->a[42649] = anon_sym_PIPE;
	v->a[42650] = actions(1422);
	v->a[42651] = 1;
	v->a[42652] = anon_sym_AMP_AMP;
	v->a[42653] = actions(1424);
	v->a[42654] = 1;
	v->a[42655] = anon_sym_PIPE_PIPE;
	v->a[42656] = actions(1426);
	v->a[42657] = 1;
	v->a[42658] = anon_sym_EQ;
	v->a[42659] = actions(1428);
	small_parse_table_2133(v);
}

void	small_parse_table_2133(t_small_parse_table_array *v)
{
	v->a[42660] = 1;
	v->a[42661] = anon_sym_CARET;
	v->a[42662] = actions(1430);
	v->a[42663] = 1;
	v->a[42664] = anon_sym_QMARK;
	v->a[42665] = actions(1602);
	v->a[42666] = 1;
	v->a[42667] = anon_sym_RPAREN_RPAREN;
	v->a[42668] = actions(1402);
	v->a[42669] = 2;
	v->a[42670] = anon_sym_PLUS_PLUS2;
	v->a[42671] = anon_sym_DASH_DASH2;
	v->a[42672] = actions(1408);
	v->a[42673] = 2;
	v->a[42674] = anon_sym_LT;
	v->a[42675] = anon_sym_GT;
	v->a[42676] = actions(1410);
	v->a[42677] = 2;
	v->a[42678] = anon_sym_GT_GT;
	v->a[42679] = anon_sym_LT_LT;
	small_parse_table_2134(v);
}

void	small_parse_table_2134(t_small_parse_table_array *v)
{
	v->a[42680] = actions(1412);
	v->a[42681] = 2;
	v->a[42682] = anon_sym_LT_EQ;
	v->a[42683] = anon_sym_GT_EQ;
	v->a[42684] = actions(1414);
	v->a[42685] = 2;
	v->a[42686] = anon_sym_PLUS;
	v->a[42687] = anon_sym_DASH;
	v->a[42688] = actions(1416);
	v->a[42689] = 2;
	v->a[42690] = anon_sym_EQ_EQ;
	v->a[42691] = anon_sym_BANG_EQ;
	v->a[42692] = actions(1406);
	v->a[42693] = 3;
	v->a[42694] = anon_sym_STAR;
	v->a[42695] = anon_sym_SLASH;
	v->a[42696] = anon_sym_PERCENT;
	v->a[42697] = actions(1543);
	v->a[42698] = 10;
	v->a[42699] = anon_sym_PLUS_EQ;
	small_parse_table_2135(v);
}

/* EOF small_parse_table_426.c */
