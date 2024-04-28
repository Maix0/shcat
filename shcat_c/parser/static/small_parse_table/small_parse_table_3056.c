/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_3056.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_15280(t_small_parse_table_array *v)
{
	v->a[305600] = sym_string;
	v->a[305601] = actions(3284);
	v->a[305602] = 2;
	v->a[305603] = aux_sym__simple_variable_name_token1;
	v->a[305604] = aux_sym__multiline_variable_name_token1;
	v->a[305605] = actions(3280);
	v->a[305606] = 9;
	v->a[305607] = anon_sym_DASH;
	v->a[305608] = anon_sym_STAR;
	v->a[305609] = anon_sym_BANG;
	v->a[305610] = anon_sym_QMARK;
	v->a[305611] = anon_sym_DOLLAR;
	v->a[305612] = anon_sym_POUND;
	v->a[305613] = anon_sym_AT2;
	v->a[305614] = anon_sym_0;
	v->a[305615] = anon_sym__;
	v->a[305616] = 6;
	v->a[305617] = actions(3);
	v->a[305618] = 1;
	v->a[305619] = sym_comment;
	small_parse_table_15281(v);
}

void	small_parse_table_15281(t_small_parse_table_array *v)
{
	v->a[305620] = actions(3115);
	v->a[305621] = 1;
	v->a[305622] = anon_sym_DQUOTE;
	v->a[305623] = actions(3119);
	v->a[305624] = 1;
	v->a[305625] = sym_variable_name;
	v->a[305626] = state(1864);
	v->a[305627] = 1;
	v->a[305628] = sym_string;
	v->a[305629] = actions(3117);
	v->a[305630] = 2;
	v->a[305631] = aux_sym__simple_variable_name_token1;
	v->a[305632] = aux_sym__multiline_variable_name_token1;
	v->a[305633] = actions(3113);
	v->a[305634] = 9;
	v->a[305635] = anon_sym_DASH;
	v->a[305636] = anon_sym_STAR;
	v->a[305637] = anon_sym_BANG;
	v->a[305638] = anon_sym_QMARK;
	v->a[305639] = anon_sym_DOLLAR;
	small_parse_table_15282(v);
}

void	small_parse_table_15282(t_small_parse_table_array *v)
{
	v->a[305640] = anon_sym_POUND;
	v->a[305641] = anon_sym_AT2;
	v->a[305642] = anon_sym_0;
	v->a[305643] = anon_sym__;
	v->a[305644] = 6;
	v->a[305645] = actions(3);
	v->a[305646] = 1;
	v->a[305647] = sym_comment;
	v->a[305648] = actions(13732);
	v->a[305649] = 1;
	v->a[305650] = sym_string_content;
	v->a[305651] = actions(13736);
	v->a[305652] = 1;
	v->a[305653] = sym_variable_name;
	v->a[305654] = actions(13872);
	v->a[305655] = 1;
	v->a[305656] = anon_sym_DQUOTE;
	v->a[305657] = actions(13734);
	v->a[305658] = 2;
	v->a[305659] = aux_sym__simple_variable_name_token1;
	small_parse_table_15283(v);
}

void	small_parse_table_15283(t_small_parse_table_array *v)
{
	v->a[305660] = aux_sym__multiline_variable_name_token1;
	v->a[305661] = actions(13730);
	v->a[305662] = 9;
	v->a[305663] = anon_sym_DASH;
	v->a[305664] = anon_sym_STAR;
	v->a[305665] = anon_sym_BANG;
	v->a[305666] = anon_sym_QMARK;
	v->a[305667] = anon_sym_DOLLAR;
	v->a[305668] = anon_sym_POUND;
	v->a[305669] = anon_sym_AT2;
	v->a[305670] = anon_sym_0;
	v->a[305671] = anon_sym__;
	v->a[305672] = 6;
	v->a[305673] = actions(3);
	v->a[305674] = 1;
	v->a[305675] = sym_comment;
	v->a[305676] = actions(13544);
	v->a[305677] = 1;
	v->a[305678] = anon_sym_DQUOTE;
	v->a[305679] = actions(13732);
	small_parse_table_15284(v);
}

void	small_parse_table_15284(t_small_parse_table_array *v)
{
	v->a[305680] = 1;
	v->a[305681] = sym_string_content;
	v->a[305682] = actions(13736);
	v->a[305683] = 1;
	v->a[305684] = sym_variable_name;
	v->a[305685] = actions(13734);
	v->a[305686] = 2;
	v->a[305687] = aux_sym__simple_variable_name_token1;
	v->a[305688] = aux_sym__multiline_variable_name_token1;
	v->a[305689] = actions(13730);
	v->a[305690] = 9;
	v->a[305691] = anon_sym_DASH;
	v->a[305692] = anon_sym_STAR;
	v->a[305693] = anon_sym_BANG;
	v->a[305694] = anon_sym_QMARK;
	v->a[305695] = anon_sym_DOLLAR;
	v->a[305696] = anon_sym_POUND;
	v->a[305697] = anon_sym_AT2;
	v->a[305698] = anon_sym_0;
	v->a[305699] = anon_sym__;
	small_parse_table_15285(v);
}

/* EOF small_parse_table_3056.c */
