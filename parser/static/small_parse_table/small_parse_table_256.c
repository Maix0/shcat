/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_256.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1280(t_small_parse_table_array *v)
{
	v->a[25600] = sym_number;
	v->a[25601] = anon_sym_DOLLAR_LBRACE;
	v->a[25602] = anon_sym_DOLLAR_LPAREN;
	v->a[25603] = anon_sym_BQUOTE;
	v->a[25604] = sym_word;
	v->a[25605] = anon_sym_SEMI;
	v->a[25606] = 4;
	v->a[25607] = actions(3);
	v->a[25608] = 1;
	v->a[25609] = sym_comment;
	v->a[25610] = actions(1044);
	v->a[25611] = 1;
	v->a[25612] = sym_variable_name;
	v->a[25613] = actions(1042);
	v->a[25614] = 2;
	v->a[25615] = anon_sym_RPAREN;
	v->a[25616] = anon_sym_SEMI_SEMI;
	v->a[25617] = actions(1040);
	v->a[25618] = 20;
	v->a[25619] = anon_sym_for;
	small_parse_table_1281(v);
}

void	small_parse_table_1281(t_small_parse_table_array *v)
{
	v->a[25620] = anon_sym_while;
	v->a[25621] = anon_sym_until;
	v->a[25622] = anon_sym_if;
	v->a[25623] = anon_sym_case;
	v->a[25624] = anon_sym_LPAREN;
	v->a[25625] = anon_sym_LBRACE;
	v->a[25626] = anon_sym_BANG;
	v->a[25627] = anon_sym_LT;
	v->a[25628] = anon_sym_GT;
	v->a[25629] = anon_sym_GT_GT;
	v->a[25630] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25631] = anon_sym_DOLLAR;
	v->a[25632] = anon_sym_DQUOTE;
	v->a[25633] = sym_raw_string;
	v->a[25634] = sym_number;
	v->a[25635] = anon_sym_DOLLAR_LBRACE;
	v->a[25636] = anon_sym_DOLLAR_LPAREN;
	v->a[25637] = anon_sym_BQUOTE;
	v->a[25638] = sym_word;
	v->a[25639] = 4;
	small_parse_table_1282(v);
}

void	small_parse_table_1282(t_small_parse_table_array *v)
{
	v->a[25640] = actions(3);
	v->a[25641] = 1;
	v->a[25642] = sym_comment;
	v->a[25643] = actions(1044);
	v->a[25644] = 1;
	v->a[25645] = sym_variable_name;
	v->a[25646] = actions(1042);
	v->a[25647] = 2;
	v->a[25648] = anon_sym_RPAREN;
	v->a[25649] = anon_sym_SEMI_SEMI;
	v->a[25650] = actions(1040);
	v->a[25651] = 20;
	v->a[25652] = anon_sym_for;
	v->a[25653] = anon_sym_while;
	v->a[25654] = anon_sym_until;
	v->a[25655] = anon_sym_if;
	v->a[25656] = anon_sym_case;
	v->a[25657] = anon_sym_LPAREN;
	v->a[25658] = anon_sym_LBRACE;
	v->a[25659] = anon_sym_BANG;
	small_parse_table_1283(v);
}

void	small_parse_table_1283(t_small_parse_table_array *v)
{
	v->a[25660] = anon_sym_LT;
	v->a[25661] = anon_sym_GT;
	v->a[25662] = anon_sym_GT_GT;
	v->a[25663] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25664] = anon_sym_DOLLAR;
	v->a[25665] = anon_sym_DQUOTE;
	v->a[25666] = sym_raw_string;
	v->a[25667] = sym_number;
	v->a[25668] = anon_sym_DOLLAR_LBRACE;
	v->a[25669] = anon_sym_DOLLAR_LPAREN;
	v->a[25670] = anon_sym_BQUOTE;
	v->a[25671] = sym_word;
	v->a[25672] = 4;
	v->a[25673] = actions(3);
	v->a[25674] = 1;
	v->a[25675] = sym_comment;
	v->a[25676] = actions(1044);
	v->a[25677] = 1;
	v->a[25678] = sym_variable_name;
	v->a[25679] = actions(1160);
	small_parse_table_1284(v);
}

void	small_parse_table_1284(t_small_parse_table_array *v)
{
	v->a[25680] = 2;
	v->a[25681] = anon_sym_esac;
	v->a[25682] = anon_sym_SEMI_SEMI;
	v->a[25683] = actions(1040);
	v->a[25684] = 20;
	v->a[25685] = anon_sym_for;
	v->a[25686] = anon_sym_while;
	v->a[25687] = anon_sym_until;
	v->a[25688] = anon_sym_if;
	v->a[25689] = anon_sym_case;
	v->a[25690] = anon_sym_LPAREN;
	v->a[25691] = anon_sym_LBRACE;
	v->a[25692] = anon_sym_BANG;
	v->a[25693] = anon_sym_LT;
	v->a[25694] = anon_sym_GT;
	v->a[25695] = anon_sym_GT_GT;
	v->a[25696] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[25697] = anon_sym_DOLLAR;
	v->a[25698] = anon_sym_DQUOTE;
	v->a[25699] = sym_raw_string;
	small_parse_table_1285(v);
}

/* EOF small_parse_table_256.c */
