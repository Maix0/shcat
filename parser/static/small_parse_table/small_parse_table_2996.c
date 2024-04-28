/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2996.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14980(t_small_parse_table_array *v)
{
	v->a[299600] = actions(13060);
	v->a[299601] = 1;
	v->a[299602] = anon_sym_DOLLAR_LBRACK;
	v->a[299603] = actions(13066);
	v->a[299604] = 1;
	v->a[299605] = sym_string_content;
	v->a[299606] = actions(13068);
	v->a[299607] = 1;
	v->a[299608] = anon_sym_DOLLAR_LBRACE;
	v->a[299609] = actions(13070);
	v->a[299610] = 1;
	v->a[299611] = anon_sym_DOLLAR_LPAREN;
	v->a[299612] = actions(13072);
	v->a[299613] = 1;
	v->a[299614] = anon_sym_BQUOTE;
	v->a[299615] = actions(13074);
	v->a[299616] = 1;
	v->a[299617] = anon_sym_DOLLAR_BQUOTE;
	v->a[299618] = actions(13618);
	v->a[299619] = 1;
	small_parse_table_14981(v);
}

void	small_parse_table_14981(t_small_parse_table_array *v)
{
	v->a[299620] = anon_sym_DOLLAR;
	v->a[299621] = actions(13620);
	v->a[299622] = 1;
	v->a[299623] = anon_sym_DQUOTE;
	v->a[299624] = state(5836);
	v->a[299625] = 1;
	v->a[299626] = aux_sym_string_repeat1;
	v->a[299627] = actions(13058);
	v->a[299628] = 2;
	v->a[299629] = anon_sym_LPAREN_LPAREN;
	v->a[299630] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[299631] = state(6127);
	v->a[299632] = 4;
	v->a[299633] = sym_arithmetic_expansion;
	v->a[299634] = sym_simple_expansion;
	v->a[299635] = sym_expansion;
	v->a[299636] = sym_command_substitution;
	v->a[299637] = 12;
	v->a[299638] = actions(3);
	v->a[299639] = 1;
	small_parse_table_14982(v);
}

void	small_parse_table_14982(t_small_parse_table_array *v)
{
	v->a[299640] = sym_comment;
	v->a[299641] = actions(13060);
	v->a[299642] = 1;
	v->a[299643] = anon_sym_DOLLAR_LBRACK;
	v->a[299644] = actions(13066);
	v->a[299645] = 1;
	v->a[299646] = sym_string_content;
	v->a[299647] = actions(13068);
	v->a[299648] = 1;
	v->a[299649] = anon_sym_DOLLAR_LBRACE;
	v->a[299650] = actions(13070);
	v->a[299651] = 1;
	v->a[299652] = anon_sym_DOLLAR_LPAREN;
	v->a[299653] = actions(13072);
	v->a[299654] = 1;
	v->a[299655] = anon_sym_BQUOTE;
	v->a[299656] = actions(13074);
	v->a[299657] = 1;
	v->a[299658] = anon_sym_DOLLAR_BQUOTE;
	v->a[299659] = actions(13622);
	small_parse_table_14983(v);
}

void	small_parse_table_14983(t_small_parse_table_array *v)
{
	v->a[299660] = 1;
	v->a[299661] = anon_sym_DOLLAR;
	v->a[299662] = actions(13624);
	v->a[299663] = 1;
	v->a[299664] = anon_sym_DQUOTE;
	v->a[299665] = state(5768);
	v->a[299666] = 1;
	v->a[299667] = aux_sym_string_repeat1;
	v->a[299668] = actions(13058);
	v->a[299669] = 2;
	v->a[299670] = anon_sym_LPAREN_LPAREN;
	v->a[299671] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[299672] = state(6127);
	v->a[299673] = 4;
	v->a[299674] = sym_arithmetic_expansion;
	v->a[299675] = sym_simple_expansion;
	v->a[299676] = sym_expansion;
	v->a[299677] = sym_command_substitution;
	v->a[299678] = 12;
	v->a[299679] = actions(3);
	small_parse_table_14984(v);
}

void	small_parse_table_14984(t_small_parse_table_array *v)
{
	v->a[299680] = 1;
	v->a[299681] = sym_comment;
	v->a[299682] = actions(13060);
	v->a[299683] = 1;
	v->a[299684] = anon_sym_DOLLAR_LBRACK;
	v->a[299685] = actions(13066);
	v->a[299686] = 1;
	v->a[299687] = sym_string_content;
	v->a[299688] = actions(13068);
	v->a[299689] = 1;
	v->a[299690] = anon_sym_DOLLAR_LBRACE;
	v->a[299691] = actions(13070);
	v->a[299692] = 1;
	v->a[299693] = anon_sym_DOLLAR_LPAREN;
	v->a[299694] = actions(13072);
	v->a[299695] = 1;
	v->a[299696] = anon_sym_BQUOTE;
	v->a[299697] = actions(13074);
	v->a[299698] = 1;
	v->a[299699] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_14985(v);
}

/* EOF small_parse_table_2996.c */
