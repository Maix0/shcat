/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_867.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4335(t_small_parse_table_array *v)
{
	v->a[86700] = sym_expansion;
	v->a[86701] = sym_command_substitution;
	v->a[86702] = 10;
	v->a[86703] = actions(3);
	v->a[86704] = 1;
	v->a[86705] = sym_comment;
	v->a[86706] = actions(3414);
	v->a[86707] = 1;
	v->a[86708] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[86709] = actions(3420);
	v->a[86710] = 1;
	v->a[86711] = sym_string_content;
	v->a[86712] = actions(3422);
	v->a[86713] = 1;
	v->a[86714] = anon_sym_DOLLAR_LBRACE;
	v->a[86715] = actions(3424);
	v->a[86716] = 1;
	v->a[86717] = anon_sym_DOLLAR_LPAREN;
	v->a[86718] = actions(3426);
	v->a[86719] = 1;
	small_parse_table_4336(v);
}

void	small_parse_table_4336(t_small_parse_table_array *v)
{
	v->a[86720] = anon_sym_BQUOTE;
	v->a[86721] = actions(3496);
	v->a[86722] = 1;
	v->a[86723] = anon_sym_DOLLAR;
	v->a[86724] = actions(3498);
	v->a[86725] = 1;
	v->a[86726] = anon_sym_DQUOTE;
	v->a[86727] = state(1906);
	v->a[86728] = 1;
	v->a[86729] = aux_sym_string_repeat1;
	v->a[86730] = state(1959);
	v->a[86731] = 4;
	v->a[86732] = sym_arithmetic_expansion;
	v->a[86733] = sym_simple_expansion;
	v->a[86734] = sym_expansion;
	v->a[86735] = sym_command_substitution;
	v->a[86736] = 10;
	v->a[86737] = actions(3);
	v->a[86738] = 1;
	v->a[86739] = sym_comment;
	small_parse_table_4337(v);
}

void	small_parse_table_4337(t_small_parse_table_array *v)
{
	v->a[86740] = actions(3414);
	v->a[86741] = 1;
	v->a[86742] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[86743] = actions(3420);
	v->a[86744] = 1;
	v->a[86745] = sym_string_content;
	v->a[86746] = actions(3422);
	v->a[86747] = 1;
	v->a[86748] = anon_sym_DOLLAR_LBRACE;
	v->a[86749] = actions(3424);
	v->a[86750] = 1;
	v->a[86751] = anon_sym_DOLLAR_LPAREN;
	v->a[86752] = actions(3426);
	v->a[86753] = 1;
	v->a[86754] = anon_sym_BQUOTE;
	v->a[86755] = actions(3500);
	v->a[86756] = 1;
	v->a[86757] = anon_sym_DOLLAR;
	v->a[86758] = actions(3502);
	v->a[86759] = 1;
	small_parse_table_4338(v);
}

void	small_parse_table_4338(t_small_parse_table_array *v)
{
	v->a[86760] = anon_sym_DQUOTE;
	v->a[86761] = state(1828);
	v->a[86762] = 1;
	v->a[86763] = aux_sym_string_repeat1;
	v->a[86764] = state(1959);
	v->a[86765] = 4;
	v->a[86766] = sym_arithmetic_expansion;
	v->a[86767] = sym_simple_expansion;
	v->a[86768] = sym_expansion;
	v->a[86769] = sym_command_substitution;
	v->a[86770] = 4;
	v->a[86771] = actions(3);
	v->a[86772] = 1;
	v->a[86773] = sym_comment;
	v->a[86774] = actions(880);
	v->a[86775] = 1;
	v->a[86776] = sym_variable_name;
	v->a[86777] = actions(878);
	v->a[86778] = 2;
	v->a[86779] = aux_sym__simple_variable_name_token1;
	small_parse_table_4339(v);
}

void	small_parse_table_4339(t_small_parse_table_array *v)
{
	v->a[86780] = aux_sym__multiline_variable_name_token1;
	v->a[86781] = actions(876);
	v->a[86782] = 9;
	v->a[86783] = anon_sym_BANG;
	v->a[86784] = anon_sym_DASH;
	v->a[86785] = anon_sym_STAR;
	v->a[86786] = anon_sym_QMARK;
	v->a[86787] = anon_sym_DOLLAR;
	v->a[86788] = anon_sym_POUND;
	v->a[86789] = anon_sym_AT;
	v->a[86790] = anon_sym_0;
	v->a[86791] = anon_sym__;
	v->a[86792] = 10;
	v->a[86793] = actions(3);
	v->a[86794] = 1;
	v->a[86795] = sym_comment;
	v->a[86796] = actions(3414);
	v->a[86797] = 1;
	v->a[86798] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[86799] = actions(3420);
	small_parse_table_4340(v);
}

/* EOF small_parse_table_867.c */
