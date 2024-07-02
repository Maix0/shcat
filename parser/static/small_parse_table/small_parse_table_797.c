/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_797.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3985(t_small_parse_table_array *v)
{
	v->a[79700] = 1;
	v->a[79701] = aux_sym_concatenation_repeat1;
	v->a[79702] = state(2125);
	v->a[79703] = 1;
	v->a[79704] = sym_terminator;
	v->a[79705] = actions(1966);
	v->a[79706] = 3;
	v->a[79707] = anon_sym_SEMI_SEMI;
	v->a[79708] = anon_sym_AMP;
	v->a[79709] = anon_sym_SEMI;
	v->a[79710] = 5;
	v->a[79711] = actions(680);
	v->a[79712] = 1;
	v->a[79713] = sym_comment;
	v->a[79714] = actions(3465);
	v->a[79715] = 1;
	v->a[79716] = anon_sym_LT_LT;
	v->a[79717] = actions(3467);
	v->a[79718] = 1;
	v->a[79719] = anon_sym_LT_LT_DASH;
	small_parse_table_3986(v);
}

void	small_parse_table_3986(t_small_parse_table_array *v)
{
	v->a[79720] = actions(3497);
	v->a[79721] = 2;
	v->a[79722] = anon_sym_LT;
	v->a[79723] = anon_sym_GT;
	v->a[79724] = actions(3499);
	v->a[79725] = 5;
	v->a[79726] = anon_sym_GT_GT;
	v->a[79727] = anon_sym_LT_AMP;
	v->a[79728] = anon_sym_GT_AMP;
	v->a[79729] = anon_sym_GT_PIPE;
	v->a[79730] = anon_sym_LT_GT;
	v->a[79731] = 5;
	v->a[79732] = actions(680);
	v->a[79733] = 1;
	v->a[79734] = sym_comment;
	v->a[79735] = actions(3465);
	v->a[79736] = 1;
	v->a[79737] = anon_sym_LT_LT;
	v->a[79738] = actions(3467);
	v->a[79739] = 1;
	small_parse_table_3987(v);
}

void	small_parse_table_3987(t_small_parse_table_array *v)
{
	v->a[79740] = anon_sym_LT_LT_DASH;
	v->a[79741] = actions(3501);
	v->a[79742] = 2;
	v->a[79743] = anon_sym_LT;
	v->a[79744] = anon_sym_GT;
	v->a[79745] = actions(3503);
	v->a[79746] = 5;
	v->a[79747] = anon_sym_GT_GT;
	v->a[79748] = anon_sym_LT_AMP;
	v->a[79749] = anon_sym_GT_AMP;
	v->a[79750] = anon_sym_GT_PIPE;
	v->a[79751] = anon_sym_LT_GT;
	v->a[79752] = 5;
	v->a[79753] = actions(680);
	v->a[79754] = 1;
	v->a[79755] = sym_comment;
	v->a[79756] = actions(3509);
	v->a[79757] = 1;
	v->a[79758] = anon_sym_LT_LT;
	v->a[79759] = actions(3511);
	small_parse_table_3988(v);
}

void	small_parse_table_3988(t_small_parse_table_array *v)
{
	v->a[79760] = 1;
	v->a[79761] = anon_sym_LT_LT_DASH;
	v->a[79762] = actions(3505);
	v->a[79763] = 2;
	v->a[79764] = anon_sym_LT;
	v->a[79765] = anon_sym_GT;
	v->a[79766] = actions(3507);
	v->a[79767] = 5;
	v->a[79768] = anon_sym_GT_GT;
	v->a[79769] = anon_sym_LT_AMP;
	v->a[79770] = anon_sym_GT_AMP;
	v->a[79771] = anon_sym_GT_PIPE;
	v->a[79772] = anon_sym_LT_GT;
	v->a[79773] = 7;
	v->a[79774] = actions(680);
	v->a[79775] = 1;
	v->a[79776] = sym_comment;
	v->a[79777] = actions(3515);
	v->a[79778] = 1;
	v->a[79779] = anon_sym_DQUOTE;
	small_parse_table_3989(v);
}

void	small_parse_table_3989(t_small_parse_table_array *v)
{
	v->a[79780] = actions(3517);
	v->a[79781] = 1;
	v->a[79782] = anon_sym_DOLLAR_LBRACE;
	v->a[79783] = actions(3519);
	v->a[79784] = 1;
	v->a[79785] = anon_sym_DOLLAR_LPAREN;
	v->a[79786] = actions(3521);
	v->a[79787] = 1;
	v->a[79788] = anon_sym_BQUOTE;
	v->a[79789] = actions(3513);
	v->a[79790] = 2;
	v->a[79791] = anon_sym_PIPE;
	v->a[79792] = anon_sym_RPAREN;
	v->a[79793] = state(1880);
	v->a[79794] = 3;
	v->a[79795] = sym_string;
	v->a[79796] = sym_expansion;
	v->a[79797] = sym_command_substitution;
	v->a[79798] = 3;
	v->a[79799] = actions(3);
	small_parse_table_3990(v);
}

/* EOF small_parse_table_797.c */
