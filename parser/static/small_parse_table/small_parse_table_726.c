/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_726.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3630(t_small_parse_table_array *v)
{
	v->a[72600] = 1;
	v->a[72601] = sym_variable_name;
	v->a[72602] = actions(2899);
	v->a[72603] = 1;
	v->a[72604] = anon_sym_DQUOTE;
	v->a[72605] = actions(2883);
	v->a[72606] = 2;
	v->a[72607] = aux_sym__simple_variable_name_token1;
	v->a[72608] = aux_sym__multiline_variable_name_token1;
	v->a[72609] = actions(2877);
	v->a[72610] = 9;
	v->a[72611] = anon_sym_BANG;
	v->a[72612] = anon_sym_DASH;
	v->a[72613] = anon_sym_STAR;
	v->a[72614] = anon_sym_QMARK;
	v->a[72615] = anon_sym_DOLLAR;
	v->a[72616] = anon_sym_POUND;
	v->a[72617] = anon_sym_AT;
	v->a[72618] = anon_sym_0;
	v->a[72619] = anon_sym__;
	small_parse_table_3631(v);
}

void	small_parse_table_3631(t_small_parse_table_array *v)
{
	v->a[72620] = 6;
	v->a[72621] = actions(3);
	v->a[72622] = 1;
	v->a[72623] = sym_comment;
	v->a[72624] = actions(2881);
	v->a[72625] = 1;
	v->a[72626] = sym_string_content;
	v->a[72627] = actions(2885);
	v->a[72628] = 1;
	v->a[72629] = sym_variable_name;
	v->a[72630] = actions(2901);
	v->a[72631] = 1;
	v->a[72632] = anon_sym_DQUOTE;
	v->a[72633] = actions(2883);
	v->a[72634] = 2;
	v->a[72635] = aux_sym__simple_variable_name_token1;
	v->a[72636] = aux_sym__multiline_variable_name_token1;
	v->a[72637] = actions(2877);
	v->a[72638] = 9;
	v->a[72639] = anon_sym_BANG;
	small_parse_table_3632(v);
}

void	small_parse_table_3632(t_small_parse_table_array *v)
{
	v->a[72640] = anon_sym_DASH;
	v->a[72641] = anon_sym_STAR;
	v->a[72642] = anon_sym_QMARK;
	v->a[72643] = anon_sym_DOLLAR;
	v->a[72644] = anon_sym_POUND;
	v->a[72645] = anon_sym_AT;
	v->a[72646] = anon_sym_0;
	v->a[72647] = anon_sym__;
	v->a[72648] = 12;
	v->a[72649] = actions(3);
	v->a[72650] = 1;
	v->a[72651] = sym_comment;
	v->a[72652] = actions(1643);
	v->a[72653] = 1;
	v->a[72654] = anon_sym_DOLLAR;
	v->a[72655] = actions(1645);
	v->a[72656] = 1;
	v->a[72657] = anon_sym_DQUOTE;
	v->a[72658] = actions(1647);
	v->a[72659] = 1;
	small_parse_table_3633(v);
}

void	small_parse_table_3633(t_small_parse_table_array *v)
{
	v->a[72660] = anon_sym_DOLLAR_LBRACE;
	v->a[72661] = actions(1649);
	v->a[72662] = 1;
	v->a[72663] = anon_sym_DOLLAR_LPAREN;
	v->a[72664] = actions(1651);
	v->a[72665] = 1;
	v->a[72666] = anon_sym_BQUOTE;
	v->a[72667] = actions(2755);
	v->a[72668] = 1;
	v->a[72669] = aux_sym__word_no_brace_token1;
	v->a[72670] = actions(2903);
	v->a[72671] = 1;
	v->a[72672] = sym_raw_string;
	v->a[72673] = actions(2905);
	v->a[72674] = 1;
	v->a[72675] = sym_variable_name;
	v->a[72676] = actions(2907);
	v->a[72677] = 1;
	v->a[72678] = sym__expansion_word;
	v->a[72679] = state(1884);
	small_parse_table_3634(v);
}

void	small_parse_table_3634(t_small_parse_table_array *v)
{
	v->a[72680] = 1;
	v->a[72681] = sym__word_no_brace;
	v->a[72682] = state(1898);
	v->a[72683] = 4;
	v->a[72684] = sym_string;
	v->a[72685] = sym_simple_expansion;
	v->a[72686] = sym_expansion;
	v->a[72687] = sym_command_substitution;
	v->a[72688] = 6;
	v->a[72689] = actions(3);
	v->a[72690] = 1;
	v->a[72691] = sym_comment;
	v->a[72692] = actions(2881);
	v->a[72693] = 1;
	v->a[72694] = sym_string_content;
	v->a[72695] = actions(2885);
	v->a[72696] = 1;
	v->a[72697] = sym_variable_name;
	v->a[72698] = actions(2909);
	v->a[72699] = 1;
	small_parse_table_3635(v);
}

/* EOF small_parse_table_726.c */
