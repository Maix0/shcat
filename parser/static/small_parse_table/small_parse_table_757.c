/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_757.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3785(t_small_parse_table_array *v)
{
	v->a[75700] = actions(3038);
	v->a[75701] = 6;
	v->a[75702] = anon_sym_BANG;
	v->a[75703] = anon_sym_DASH;
	v->a[75704] = anon_sym_STAR;
	v->a[75705] = anon_sym_QMARK;
	v->a[75706] = anon_sym_DOLLAR;
	v->a[75707] = anon_sym_AT;
	v->a[75708] = 10;
	v->a[75709] = actions(3);
	v->a[75710] = 1;
	v->a[75711] = sym_comment;
	v->a[75712] = actions(3058);
	v->a[75713] = 1;
	v->a[75714] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[75715] = actions(3064);
	v->a[75716] = 1;
	v->a[75717] = sym_string_content;
	v->a[75718] = actions(3066);
	v->a[75719] = 1;
	small_parse_table_3786(v);
}

void	small_parse_table_3786(t_small_parse_table_array *v)
{
	v->a[75720] = anon_sym_DOLLAR_LBRACE;
	v->a[75721] = actions(3068);
	v->a[75722] = 1;
	v->a[75723] = anon_sym_DOLLAR_LPAREN;
	v->a[75724] = actions(3070);
	v->a[75725] = 1;
	v->a[75726] = anon_sym_BQUOTE;
	v->a[75727] = actions(3184);
	v->a[75728] = 1;
	v->a[75729] = anon_sym_DOLLAR;
	v->a[75730] = actions(3186);
	v->a[75731] = 1;
	v->a[75732] = anon_sym_DQUOTE;
	v->a[75733] = state(1610);
	v->a[75734] = 1;
	v->a[75735] = aux_sym_string_repeat1;
	v->a[75736] = state(1748);
	v->a[75737] = 4;
	v->a[75738] = sym_arithmetic_expansion;
	v->a[75739] = sym_simple_expansion;
	small_parse_table_3787(v);
}

void	small_parse_table_3787(t_small_parse_table_array *v)
{
	v->a[75740] = sym_expansion;
	v->a[75741] = sym_command_substitution;
	v->a[75742] = 10;
	v->a[75743] = actions(3);
	v->a[75744] = 1;
	v->a[75745] = sym_comment;
	v->a[75746] = actions(3058);
	v->a[75747] = 1;
	v->a[75748] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[75749] = actions(3064);
	v->a[75750] = 1;
	v->a[75751] = sym_string_content;
	v->a[75752] = actions(3066);
	v->a[75753] = 1;
	v->a[75754] = anon_sym_DOLLAR_LBRACE;
	v->a[75755] = actions(3068);
	v->a[75756] = 1;
	v->a[75757] = anon_sym_DOLLAR_LPAREN;
	v->a[75758] = actions(3070);
	v->a[75759] = 1;
	small_parse_table_3788(v);
}

void	small_parse_table_3788(t_small_parse_table_array *v)
{
	v->a[75760] = anon_sym_BQUOTE;
	v->a[75761] = actions(3188);
	v->a[75762] = 1;
	v->a[75763] = anon_sym_DOLLAR;
	v->a[75764] = actions(3190);
	v->a[75765] = 1;
	v->a[75766] = anon_sym_DQUOTE;
	v->a[75767] = state(1623);
	v->a[75768] = 1;
	v->a[75769] = aux_sym_string_repeat1;
	v->a[75770] = state(1748);
	v->a[75771] = 4;
	v->a[75772] = sym_arithmetic_expansion;
	v->a[75773] = sym_simple_expansion;
	v->a[75774] = sym_expansion;
	v->a[75775] = sym_command_substitution;
	v->a[75776] = 8;
	v->a[75777] = actions(3);
	v->a[75778] = 1;
	v->a[75779] = sym_comment;
	small_parse_table_3789(v);
}

void	small_parse_table_3789(t_small_parse_table_array *v)
{
	v->a[75780] = actions(3040);
	v->a[75781] = 1;
	v->a[75782] = anon_sym_POUND;
	v->a[75783] = actions(3042);
	v->a[75784] = 1;
	v->a[75785] = aux_sym__simple_variable_name_token1;
	v->a[75786] = actions(3044);
	v->a[75787] = 1;
	v->a[75788] = anon_sym_0;
	v->a[75789] = actions(3046);
	v->a[75790] = 1;
	v->a[75791] = sym_variable_name;
	v->a[75792] = actions(3192);
	v->a[75793] = 1;
	v->a[75794] = anon_sym_RBRACE;
	v->a[75795] = state(2069);
	v->a[75796] = 1;
	v->a[75797] = sym__expansion_body;
	v->a[75798] = actions(3038);
	v->a[75799] = 6;
	small_parse_table_3790(v);
}

/* EOF small_parse_table_757.c */
