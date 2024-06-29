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
	v->a[89700] = actions(3426);
	v->a[89701] = 1;
	v->a[89702] = anon_sym_BQUOTE;
	v->a[89703] = actions(3550);
	v->a[89704] = 1;
	v->a[89705] = anon_sym_DOLLAR;
	v->a[89706] = actions(3552);
	v->a[89707] = 1;
	v->a[89708] = anon_sym_DQUOTE;
	v->a[89709] = state(1848);
	v->a[89710] = 1;
	v->a[89711] = aux_sym_string_repeat1;
	v->a[89712] = state(1963);
	v->a[89713] = 4;
	v->a[89714] = sym_arithmetic_expansion;
	v->a[89715] = sym_simple_expansion;
	v->a[89716] = sym_expansion;
	v->a[89717] = sym_command_substitution;
	v->a[89718] = 10;
	v->a[89719] = actions(3);
	small_parse_table_4486(v);
}

void	small_parse_table_4486(t_small_parse_table_array *v)
{
	v->a[89720] = 1;
	v->a[89721] = sym_comment;
	v->a[89722] = actions(3414);
	v->a[89723] = 1;
	v->a[89724] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[89725] = actions(3420);
	v->a[89726] = 1;
	v->a[89727] = sym_string_content;
	v->a[89728] = actions(3422);
	v->a[89729] = 1;
	v->a[89730] = anon_sym_DOLLAR_LBRACE;
	v->a[89731] = actions(3424);
	v->a[89732] = 1;
	v->a[89733] = anon_sym_DOLLAR_LPAREN;
	v->a[89734] = actions(3426);
	v->a[89735] = 1;
	v->a[89736] = anon_sym_BQUOTE;
	v->a[89737] = actions(3554);
	v->a[89738] = 1;
	v->a[89739] = anon_sym_DOLLAR;
	small_parse_table_4487(v);
}

void	small_parse_table_4487(t_small_parse_table_array *v)
{
	v->a[89740] = actions(3556);
	v->a[89741] = 1;
	v->a[89742] = anon_sym_DQUOTE;
	v->a[89743] = state(1863);
	v->a[89744] = 1;
	v->a[89745] = aux_sym_string_repeat1;
	v->a[89746] = state(1963);
	v->a[89747] = 4;
	v->a[89748] = sym_arithmetic_expansion;
	v->a[89749] = sym_simple_expansion;
	v->a[89750] = sym_expansion;
	v->a[89751] = sym_command_substitution;
	v->a[89752] = 10;
	v->a[89753] = actions(3);
	v->a[89754] = 1;
	v->a[89755] = sym_comment;
	v->a[89756] = actions(3414);
	v->a[89757] = 1;
	v->a[89758] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[89759] = actions(3420);
	small_parse_table_4488(v);
}

void	small_parse_table_4488(t_small_parse_table_array *v)
{
	v->a[89760] = 1;
	v->a[89761] = sym_string_content;
	v->a[89762] = actions(3422);
	v->a[89763] = 1;
	v->a[89764] = anon_sym_DOLLAR_LBRACE;
	v->a[89765] = actions(3424);
	v->a[89766] = 1;
	v->a[89767] = anon_sym_DOLLAR_LPAREN;
	v->a[89768] = actions(3426);
	v->a[89769] = 1;
	v->a[89770] = anon_sym_BQUOTE;
	v->a[89771] = actions(3558);
	v->a[89772] = 1;
	v->a[89773] = anon_sym_DOLLAR;
	v->a[89774] = actions(3560);
	v->a[89775] = 1;
	v->a[89776] = anon_sym_DQUOTE;
	v->a[89777] = state(1863);
	v->a[89778] = 1;
	v->a[89779] = aux_sym_string_repeat1;
	small_parse_table_4489(v);
}

void	small_parse_table_4489(t_small_parse_table_array *v)
{
	v->a[89780] = state(1963);
	v->a[89781] = 4;
	v->a[89782] = sym_arithmetic_expansion;
	v->a[89783] = sym_simple_expansion;
	v->a[89784] = sym_expansion;
	v->a[89785] = sym_command_substitution;
	v->a[89786] = 6;
	v->a[89787] = actions(1074);
	v->a[89788] = 1;
	v->a[89789] = sym_comment;
	v->a[89790] = actions(3440);
	v->a[89791] = 1;
	v->a[89792] = anon_sym_LT_LT;
	v->a[89793] = actions(3442);
	v->a[89794] = 1;
	v->a[89795] = anon_sym_LT_LT_DASH;
	v->a[89796] = actions(3566);
	v->a[89797] = 2;
	v->a[89798] = anon_sym_LT_AMP_DASH;
	v->a[89799] = anon_sym_GT_AMP_DASH;
	small_parse_table_4490(v);
}

/* EOF small_parse_table_897.c */
