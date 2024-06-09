/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_897.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4485(t_small_parse_table_array *v)
{
	v->a[89700] = 1;
	v->a[89701] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[89702] = actions(3716);
	v->a[89703] = 1;
	v->a[89704] = sym_string_content;
	v->a[89705] = actions(3718);
	v->a[89706] = 1;
	v->a[89707] = anon_sym_DOLLAR_LBRACE;
	v->a[89708] = actions(3720);
	v->a[89709] = 1;
	v->a[89710] = anon_sym_DOLLAR_LPAREN;
	v->a[89711] = actions(3722);
	v->a[89712] = 1;
	v->a[89713] = anon_sym_BQUOTE;
	v->a[89714] = actions(3896);
	v->a[89715] = 1;
	v->a[89716] = anon_sym_DOLLAR;
	v->a[89717] = actions(3898);
	v->a[89718] = 1;
	v->a[89719] = anon_sym_DQUOTE;
	small_parse_table_4486(v);
}

void	small_parse_table_4486(t_small_parse_table_array *v)
{
	v->a[89720] = state(1790);
	v->a[89721] = 1;
	v->a[89722] = aux_sym_string_repeat1;
	v->a[89723] = state(1869);
	v->a[89724] = 4;
	v->a[89725] = sym_arithmetic_expansion;
	v->a[89726] = sym_simple_expansion;
	v->a[89727] = sym_expansion;
	v->a[89728] = sym_command_substitution;
	v->a[89729] = 10;
	v->a[89730] = actions(3);
	v->a[89731] = 1;
	v->a[89732] = sym_comment;
	v->a[89733] = actions(3582);
	v->a[89734] = 1;
	v->a[89735] = anon_sym_DQUOTE;
	v->a[89736] = actions(3712);
	v->a[89737] = 1;
	v->a[89738] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[89739] = actions(3716);
	small_parse_table_4487(v);
}

void	small_parse_table_4487(t_small_parse_table_array *v)
{
	v->a[89740] = 1;
	v->a[89741] = sym_string_content;
	v->a[89742] = actions(3718);
	v->a[89743] = 1;
	v->a[89744] = anon_sym_DOLLAR_LBRACE;
	v->a[89745] = actions(3720);
	v->a[89746] = 1;
	v->a[89747] = anon_sym_DOLLAR_LPAREN;
	v->a[89748] = actions(3722);
	v->a[89749] = 1;
	v->a[89750] = anon_sym_BQUOTE;
	v->a[89751] = actions(3900);
	v->a[89752] = 1;
	v->a[89753] = anon_sym_DOLLAR;
	v->a[89754] = state(1738);
	v->a[89755] = 1;
	v->a[89756] = aux_sym_string_repeat1;
	v->a[89757] = state(1869);
	v->a[89758] = 4;
	v->a[89759] = sym_arithmetic_expansion;
	small_parse_table_4488(v);
}

void	small_parse_table_4488(t_small_parse_table_array *v)
{
	v->a[89760] = sym_simple_expansion;
	v->a[89761] = sym_expansion;
	v->a[89762] = sym_command_substitution;
	v->a[89763] = 4;
	v->a[89764] = actions(3);
	v->a[89765] = 1;
	v->a[89766] = sym_comment;
	v->a[89767] = actions(3906);
	v->a[89768] = 1;
	v->a[89769] = sym_variable_name;
	v->a[89770] = actions(3904);
	v->a[89771] = 2;
	v->a[89772] = aux_sym__simple_variable_name_token1;
	v->a[89773] = aux_sym__multiline_variable_name_token1;
	v->a[89774] = actions(3902);
	v->a[89775] = 9;
	v->a[89776] = anon_sym_BANG;
	v->a[89777] = anon_sym_DASH;
	v->a[89778] = anon_sym_STAR;
	v->a[89779] = anon_sym_QMARK;
	small_parse_table_4489(v);
}

void	small_parse_table_4489(t_small_parse_table_array *v)
{
	v->a[89780] = anon_sym_DOLLAR;
	v->a[89781] = anon_sym_POUND;
	v->a[89782] = anon_sym_AT;
	v->a[89783] = anon_sym_0;
	v->a[89784] = anon_sym__;
	v->a[89785] = 4;
	v->a[89786] = actions(3);
	v->a[89787] = 1;
	v->a[89788] = sym_comment;
	v->a[89789] = actions(1811);
	v->a[89790] = 1;
	v->a[89791] = sym_variable_name;
	v->a[89792] = actions(1809);
	v->a[89793] = 2;
	v->a[89794] = aux_sym__simple_variable_name_token1;
	v->a[89795] = aux_sym__multiline_variable_name_token1;
	v->a[89796] = actions(1807);
	v->a[89797] = 9;
	v->a[89798] = anon_sym_BANG;
	v->a[89799] = anon_sym_DASH;
	small_parse_table_4490(v);
}

/* EOF small_parse_table_897.c */
