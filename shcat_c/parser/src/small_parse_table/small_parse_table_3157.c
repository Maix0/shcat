/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_3157.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_15785(t_small_parse_table_array *v)
{
	v->a[315700] = aux_sym_case_item_repeat1;
	v->a[315701] = 4;
	v->a[315702] = actions(71);
	v->a[315703] = 1;
	v->a[315704] = sym_comment;
	v->a[315705] = actions(13001);
	v->a[315706] = 1;
	v->a[315707] = anon_sym_PIPE;
	v->a[315708] = actions(13003);
	v->a[315709] = 1;
	v->a[315710] = anon_sym_PIPE_AMP;
	v->a[315711] = state(5602);
	v->a[315712] = 1;
	v->a[315713] = aux_sym_pipeline_repeat1;
	v->a[315714] = 4;
	v->a[315715] = actions(71);
	v->a[315716] = 1;
	v->a[315717] = sym_comment;
	v->a[315718] = actions(14564);
	v->a[315719] = 1;
	small_parse_table_15786(v);
}

void	small_parse_table_15786(t_small_parse_table_array *v)
{
	v->a[315720] = anon_sym_PIPE;
	v->a[315721] = actions(14566);
	v->a[315722] = 1;
	v->a[315723] = anon_sym_RPAREN;
	v->a[315724] = state(6567);
	v->a[315725] = 1;
	v->a[315726] = aux_sym_case_item_repeat1;
	v->a[315727] = 4;
	v->a[315728] = actions(71);
	v->a[315729] = 1;
	v->a[315730] = sym_comment;
	v->a[315731] = actions(14564);
	v->a[315732] = 1;
	v->a[315733] = anon_sym_PIPE;
	v->a[315734] = actions(14961);
	v->a[315735] = 1;
	v->a[315736] = anon_sym_RPAREN;
	v->a[315737] = state(6599);
	v->a[315738] = 1;
	v->a[315739] = aux_sym_case_item_repeat1;
	small_parse_table_15787(v);
}

void	small_parse_table_15787(t_small_parse_table_array *v)
{
	v->a[315740] = 2;
	v->a[315741] = actions(71);
	v->a[315742] = 1;
	v->a[315743] = sym_comment;
	v->a[315744] = actions(1338);
	v->a[315745] = 3;
	v->a[315746] = sym_extglob_pattern;
	v->a[315747] = anon_sym_PIPE;
	v->a[315748] = anon_sym_RPAREN;
	v->a[315749] = 4;
	v->a[315750] = actions(71);
	v->a[315751] = 1;
	v->a[315752] = sym_comment;
	v->a[315753] = actions(12337);
	v->a[315754] = 1;
	v->a[315755] = anon_sym_PIPE;
	v->a[315756] = actions(14963);
	v->a[315757] = 1;
	v->a[315758] = anon_sym_PIPE_AMP;
	v->a[315759] = state(5095);
	small_parse_table_15788(v);
}

void	small_parse_table_15788(t_small_parse_table_array *v)
{
	v->a[315760] = 1;
	v->a[315761] = aux_sym_pipeline_repeat1;
	v->a[315762] = 2;
	v->a[315763] = actions(71);
	v->a[315764] = 1;
	v->a[315765] = sym_comment;
	v->a[315766] = actions(1322);
	v->a[315767] = 3;
	v->a[315768] = sym_extglob_pattern;
	v->a[315769] = anon_sym_PIPE;
	v->a[315770] = anon_sym_RPAREN;
	v->a[315771] = 4;
	v->a[315772] = actions(71);
	v->a[315773] = 1;
	v->a[315774] = sym_comment;
	v->a[315775] = actions(6881);
	v->a[315776] = 1;
	v->a[315777] = anon_sym_COMMA;
	v->a[315778] = actions(14965);
	v->a[315779] = 1;
	small_parse_table_15789(v);
}

void	small_parse_table_15789(t_small_parse_table_array *v)
{
	v->a[315780] = anon_sym_RPAREN_RPAREN;
	v->a[315781] = state(6553);
	v->a[315782] = 1;
	v->a[315783] = aux_sym_arithmetic_expansion_repeat1;
	v->a[315784] = 3;
	v->a[315785] = actions(71);
	v->a[315786] = 1;
	v->a[315787] = sym_comment;
	v->a[315788] = actions(14929);
	v->a[315789] = 1;
	v->a[315790] = anon_sym_LBRACK;
	v->a[315791] = actions(14967);
	v->a[315792] = 2;
	v->a[315793] = anon_sym_EQ;
	v->a[315794] = anon_sym_PLUS_EQ;
	v->a[315795] = 4;
	v->a[315796] = actions(71);
	v->a[315797] = 1;
	v->a[315798] = sym_comment;
	v->a[315799] = actions(6881);
	small_parse_table_15790(v);
}

/* EOF small_parse_table_3157.c */
