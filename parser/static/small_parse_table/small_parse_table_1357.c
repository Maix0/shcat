/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1357.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_6785(t_small_parse_table_array *v)
{
	v->a[135700] = anon_sym_STAR;
	v->a[135701] = anon_sym_QMARK;
	v->a[135702] = anon_sym_DOLLAR;
	v->a[135703] = anon_sym_POUND;
	v->a[135704] = anon_sym_AT;
	v->a[135705] = 11;
	v->a[135706] = actions(3);
	v->a[135707] = 1;
	v->a[135708] = sym_comment;
	v->a[135709] = actions(7760);
	v->a[135710] = 1;
	v->a[135711] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[135712] = actions(7766);
	v->a[135713] = 1;
	v->a[135714] = sym_string_content;
	v->a[135715] = actions(7768);
	v->a[135716] = 1;
	v->a[135717] = anon_sym_DOLLAR_LBRACE;
	v->a[135718] = actions(7770);
	v->a[135719] = 1;
	small_parse_table_6786(v);
}

void	small_parse_table_6786(t_small_parse_table_array *v)
{
	v->a[135720] = anon_sym_DOLLAR_LPAREN;
	v->a[135721] = actions(7772);
	v->a[135722] = 1;
	v->a[135723] = anon_sym_BQUOTE;
	v->a[135724] = actions(7774);
	v->a[135725] = 1;
	v->a[135726] = anon_sym_DOLLAR_BQUOTE;
	v->a[135727] = actions(7870);
	v->a[135728] = 1;
	v->a[135729] = anon_sym_DOLLAR;
	v->a[135730] = actions(7872);
	v->a[135731] = 1;
	v->a[135732] = anon_sym_DQUOTE;
	v->a[135733] = state(3022);
	v->a[135734] = 1;
	v->a[135735] = aux_sym_string_repeat1;
	v->a[135736] = state(3218);
	v->a[135737] = 4;
	v->a[135738] = sym_arithmetic_expansion;
	v->a[135739] = sym_simple_expansion;
	small_parse_table_6787(v);
}

void	small_parse_table_6787(t_small_parse_table_array *v)
{
	v->a[135740] = sym_expansion;
	v->a[135741] = sym_command_substitution;
	v->a[135742] = 11;
	v->a[135743] = actions(3);
	v->a[135744] = 1;
	v->a[135745] = sym_comment;
	v->a[135746] = actions(7760);
	v->a[135747] = 1;
	v->a[135748] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[135749] = actions(7766);
	v->a[135750] = 1;
	v->a[135751] = sym_string_content;
	v->a[135752] = actions(7768);
	v->a[135753] = 1;
	v->a[135754] = anon_sym_DOLLAR_LBRACE;
	v->a[135755] = actions(7770);
	v->a[135756] = 1;
	v->a[135757] = anon_sym_DOLLAR_LPAREN;
	v->a[135758] = actions(7772);
	v->a[135759] = 1;
	small_parse_table_6788(v);
}

void	small_parse_table_6788(t_small_parse_table_array *v)
{
	v->a[135760] = anon_sym_BQUOTE;
	v->a[135761] = actions(7774);
	v->a[135762] = 1;
	v->a[135763] = anon_sym_DOLLAR_BQUOTE;
	v->a[135764] = actions(7874);
	v->a[135765] = 1;
	v->a[135766] = anon_sym_DOLLAR;
	v->a[135767] = actions(7876);
	v->a[135768] = 1;
	v->a[135769] = anon_sym_DQUOTE;
	v->a[135770] = state(3049);
	v->a[135771] = 1;
	v->a[135772] = aux_sym_string_repeat1;
	v->a[135773] = state(3218);
	v->a[135774] = 4;
	v->a[135775] = sym_arithmetic_expansion;
	v->a[135776] = sym_simple_expansion;
	v->a[135777] = sym_expansion;
	v->a[135778] = sym_command_substitution;
	v->a[135779] = 11;
	small_parse_table_6789(v);
}

void	small_parse_table_6789(t_small_parse_table_array *v)
{
	v->a[135780] = actions(3);
	v->a[135781] = 1;
	v->a[135782] = sym_comment;
	v->a[135783] = actions(7598);
	v->a[135784] = 1;
	v->a[135785] = anon_sym_DQUOTE;
	v->a[135786] = actions(7760);
	v->a[135787] = 1;
	v->a[135788] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[135789] = actions(7766);
	v->a[135790] = 1;
	v->a[135791] = sym_string_content;
	v->a[135792] = actions(7768);
	v->a[135793] = 1;
	v->a[135794] = anon_sym_DOLLAR_LBRACE;
	v->a[135795] = actions(7770);
	v->a[135796] = 1;
	v->a[135797] = anon_sym_DOLLAR_LPAREN;
	v->a[135798] = actions(7772);
	v->a[135799] = 1;
	small_parse_table_6790(v);
}

/* EOF small_parse_table_1357.c */
