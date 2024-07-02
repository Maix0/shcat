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
	v->a[42600] = 16;
	v->a[42601] = actions(3);
	v->a[42602] = 1;
	v->a[42603] = sym_comment;
	v->a[42604] = actions(103);
	v->a[42605] = 1;
	v->a[42606] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42607] = actions(105);
	v->a[42608] = 1;
	v->a[42609] = anon_sym_DOLLAR;
	v->a[42610] = actions(107);
	v->a[42611] = 1;
	v->a[42612] = anon_sym_DQUOTE;
	v->a[42613] = actions(111);
	v->a[42614] = 1;
	v->a[42615] = anon_sym_DOLLAR_LBRACE;
	v->a[42616] = actions(113);
	v->a[42617] = 1;
	v->a[42618] = anon_sym_DOLLAR_LPAREN;
	v->a[42619] = actions(115);
	small_parse_table_2131(v);
}

void	small_parse_table_2131(t_small_parse_table_array *v)
{
	v->a[42620] = 1;
	v->a[42621] = anon_sym_BQUOTE;
	v->a[42622] = actions(359);
	v->a[42623] = 1;
	v->a[42624] = sym_variable_name;
	v->a[42625] = actions(1164);
	v->a[42626] = 1;
	v->a[42627] = sym_file_descriptor;
	v->a[42628] = state(171);
	v->a[42629] = 1;
	v->a[42630] = sym_command_name;
	v->a[42631] = state(567);
	v->a[42632] = 1;
	v->a[42633] = sym_concatenation;
	v->a[42634] = state(1218);
	v->a[42635] = 1;
	v->a[42636] = sym_file_redirect;
	v->a[42637] = state(1055);
	v->a[42638] = 2;
	v->a[42639] = sym_variable_assignment;
	small_parse_table_2132(v);
}

void	small_parse_table_2132(t_small_parse_table_array *v)
{
	v->a[42640] = aux_sym_command_repeat1;
	v->a[42641] = actions(109);
	v->a[42642] = 3;
	v->a[42643] = sym_raw_string;
	v->a[42644] = sym_number;
	v->a[42645] = sym_word;
	v->a[42646] = state(348);
	v->a[42647] = 5;
	v->a[42648] = sym_arithmetic_expansion;
	v->a[42649] = sym_string;
	v->a[42650] = sym_simple_expansion;
	v->a[42651] = sym_expansion;
	v->a[42652] = sym_command_substitution;
	v->a[42653] = actions(1162);
	v->a[42654] = 7;
	v->a[42655] = anon_sym_LT;
	v->a[42656] = anon_sym_GT;
	v->a[42657] = anon_sym_GT_GT;
	v->a[42658] = anon_sym_LT_AMP;
	v->a[42659] = anon_sym_GT_AMP;
	small_parse_table_2133(v);
}

void	small_parse_table_2133(t_small_parse_table_array *v)
{
	v->a[42660] = anon_sym_GT_PIPE;
	v->a[42661] = anon_sym_LT_GT;
	v->a[42662] = 7;
	v->a[42663] = actions(3);
	v->a[42664] = 1;
	v->a[42665] = sym_comment;
	v->a[42666] = actions(1435);
	v->a[42667] = 1;
	v->a[42668] = sym_file_descriptor;
	v->a[42669] = actions(1438);
	v->a[42670] = 1;
	v->a[42671] = sym_variable_name;
	v->a[42672] = actions(1488);
	v->a[42673] = 1;
	v->a[42674] = anon_sym_RPAREN;
	v->a[42675] = actions(1432);
	v->a[42676] = 7;
	v->a[42677] = anon_sym_LT;
	v->a[42678] = anon_sym_GT;
	v->a[42679] = anon_sym_GT_GT;
	small_parse_table_2134(v);
}

void	small_parse_table_2134(t_small_parse_table_array *v)
{
	v->a[42680] = anon_sym_LT_AMP;
	v->a[42681] = anon_sym_GT_AMP;
	v->a[42682] = anon_sym_GT_PIPE;
	v->a[42683] = anon_sym_LT_GT;
	v->a[42684] = actions(1428);
	v->a[42685] = 9;
	v->a[42686] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[42687] = anon_sym_DOLLAR;
	v->a[42688] = anon_sym_DQUOTE;
	v->a[42689] = sym_raw_string;
	v->a[42690] = sym_number;
	v->a[42691] = anon_sym_DOLLAR_LBRACE;
	v->a[42692] = anon_sym_DOLLAR_LPAREN;
	v->a[42693] = anon_sym_BQUOTE;
	v->a[42694] = sym_word;
	v->a[42695] = actions(1430);
	v->a[42696] = 9;
	v->a[42697] = anon_sym_PIPE;
	v->a[42698] = anon_sym_SEMI_SEMI;
	v->a[42699] = anon_sym_AMP_AMP;
	small_parse_table_2135(v);
}

/* EOF small_parse_table_426.c */
