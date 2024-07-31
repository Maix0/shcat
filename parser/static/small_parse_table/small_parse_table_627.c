/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_627.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3135(t_small_parse_table_array *v)
{
	v->a[62700] = anon_sym_LT;
	v->a[62701] = anon_sym_GT;
	v->a[62702] = anon_sym_LT_LT;
	v->a[62703] = actions(1901);
	v->a[62704] = 8;
	v->a[62705] = anon_sym_AMP_AMP;
	v->a[62706] = anon_sym_PIPE_PIPE;
	v->a[62707] = anon_sym_GT_GT;
	v->a[62708] = anon_sym_LT_AMP;
	v->a[62709] = anon_sym_GT_AMP;
	v->a[62710] = anon_sym_GT_PIPE;
	v->a[62711] = anon_sym_LT_GT;
	v->a[62712] = anon_sym_LT_LT_DASH;
	v->a[62713] = 10;
	v->a[62714] = actions(3);
	v->a[62715] = 1;
	v->a[62716] = sym_comment;
	v->a[62717] = actions(2548);
	v->a[62718] = 1;
	v->a[62719] = anon_sym_DOLLAR_LPAREN_LPAREN;
	small_parse_table_3136(v);
}

void	small_parse_table_3136(t_small_parse_table_array *v)
{
	v->a[62720] = actions(2554);
	v->a[62721] = 1;
	v->a[62722] = sym_string_content;
	v->a[62723] = actions(2556);
	v->a[62724] = 1;
	v->a[62725] = anon_sym_DOLLAR_LBRACE;
	v->a[62726] = actions(2558);
	v->a[62727] = 1;
	v->a[62728] = anon_sym_DOLLAR_LPAREN;
	v->a[62729] = actions(2560);
	v->a[62730] = 1;
	v->a[62731] = anon_sym_BQUOTE;
	v->a[62732] = actions(2707);
	v->a[62733] = 1;
	v->a[62734] = anon_sym_DOLLAR;
	v->a[62735] = actions(2709);
	v->a[62736] = 1;
	v->a[62737] = anon_sym_DQUOTE;
	v->a[62738] = state(1370);
	v->a[62739] = 1;
	small_parse_table_3137(v);
}

void	small_parse_table_3137(t_small_parse_table_array *v)
{
	v->a[62740] = aux_sym_string_repeat1;
	v->a[62741] = state(1477);
	v->a[62742] = 4;
	v->a[62743] = sym_arithmetic_expansion;
	v->a[62744] = sym_simple_expansion;
	v->a[62745] = sym_expansion;
	v->a[62746] = sym_command_substitution;
	v->a[62747] = 3;
	v->a[62748] = actions(407);
	v->a[62749] = 1;
	v->a[62750] = sym_comment;
	v->a[62751] = actions(1754);
	v->a[62752] = 4;
	v->a[62753] = anon_sym_PIPE;
	v->a[62754] = anon_sym_LT;
	v->a[62755] = anon_sym_GT;
	v->a[62756] = anon_sym_LT_LT;
	v->a[62757] = actions(1752);
	v->a[62758] = 8;
	v->a[62759] = anon_sym_AMP_AMP;
	small_parse_table_3138(v);
}

void	small_parse_table_3138(t_small_parse_table_array *v)
{
	v->a[62760] = anon_sym_PIPE_PIPE;
	v->a[62761] = anon_sym_GT_GT;
	v->a[62762] = anon_sym_LT_AMP;
	v->a[62763] = anon_sym_GT_AMP;
	v->a[62764] = anon_sym_GT_PIPE;
	v->a[62765] = anon_sym_LT_GT;
	v->a[62766] = anon_sym_LT_LT_DASH;
	v->a[62767] = 8;
	v->a[62768] = actions(3);
	v->a[62769] = 1;
	v->a[62770] = sym_comment;
	v->a[62771] = actions(2566);
	v->a[62772] = 1;
	v->a[62773] = anon_sym_POUND;
	v->a[62774] = actions(2568);
	v->a[62775] = 1;
	v->a[62776] = aux_sym__simple_variable_name_token1;
	v->a[62777] = actions(2570);
	v->a[62778] = 1;
	v->a[62779] = anon_sym_0;
	small_parse_table_3139(v);
}

void	small_parse_table_3139(t_small_parse_table_array *v)
{
	v->a[62780] = actions(2572);
	v->a[62781] = 1;
	v->a[62782] = sym_variable_name;
	v->a[62783] = actions(2711);
	v->a[62784] = 1;
	v->a[62785] = anon_sym_RBRACE;
	v->a[62786] = state(1650);
	v->a[62787] = 1;
	v->a[62788] = sym__expansion_body;
	v->a[62789] = actions(2564);
	v->a[62790] = 6;
	v->a[62791] = anon_sym_BANG;
	v->a[62792] = anon_sym_DASH;
	v->a[62793] = anon_sym_STAR;
	v->a[62794] = anon_sym_QMARK;
	v->a[62795] = anon_sym_DOLLAR;
	v->a[62796] = anon_sym_AT;
	v->a[62797] = 10;
	v->a[62798] = actions(3);
	v->a[62799] = 1;
	small_parse_table_3140(v);
}

/* EOF small_parse_table_627.c */
