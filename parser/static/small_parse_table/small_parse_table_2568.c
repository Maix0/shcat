/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2568.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12840(t_small_parse_table_array *v)
{
	v->a[256800] = actions(1300);
	v->a[256801] = 22;
	v->a[256802] = anon_sym_SEMI;
	v->a[256803] = anon_sym_PIPE_PIPE;
	v->a[256804] = anon_sym_AMP_AMP;
	v->a[256805] = anon_sym_PIPE;
	v->a[256806] = anon_sym_AMP;
	v->a[256807] = anon_sym_LT;
	v->a[256808] = anon_sym_GT;
	v->a[256809] = anon_sym_LT_LT;
	v->a[256810] = anon_sym_GT_GT;
	v->a[256811] = anon_sym_SEMI_SEMI;
	v->a[256812] = anon_sym_SEMI_AMP;
	v->a[256813] = anon_sym_SEMI_SEMI_AMP;
	v->a[256814] = anon_sym_PIPE_AMP;
	v->a[256815] = anon_sym_AMP_GT;
	v->a[256816] = anon_sym_AMP_GT_GT;
	v->a[256817] = anon_sym_LT_AMP;
	v->a[256818] = anon_sym_GT_AMP;
	v->a[256819] = anon_sym_GT_PIPE;
	small_parse_table_12841(v);
}

void	small_parse_table_12841(t_small_parse_table_array *v)
{
	v->a[256820] = anon_sym_LT_AMP_DASH;
	v->a[256821] = anon_sym_GT_AMP_DASH;
	v->a[256822] = anon_sym_LT_LT_DASH;
	v->a[256823] = aux_sym_concatenation_token1;
	v->a[256824] = 16;
	v->a[256825] = actions(3);
	v->a[256826] = 1;
	v->a[256827] = sym_comment;
	v->a[256828] = actions(11760);
	v->a[256829] = 1;
	v->a[256830] = anon_sym_BANG2;
	v->a[256831] = actions(11764);
	v->a[256832] = 1;
	v->a[256833] = anon_sym_DOLLAR_LPAREN;
	v->a[256834] = actions(11766);
	v->a[256835] = 1;
	v->a[256836] = anon_sym_BQUOTE;
	v->a[256837] = actions(11768);
	v->a[256838] = 1;
	v->a[256839] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_12842(v);
}

void	small_parse_table_12842(t_small_parse_table_array *v)
{
	v->a[256840] = actions(11770);
	v->a[256841] = 1;
	v->a[256842] = aux_sym__simple_variable_name_token1;
	v->a[256843] = actions(11772);
	v->a[256844] = 1;
	v->a[256845] = sym_variable_name;
	v->a[256846] = actions(11846);
	v->a[256847] = 1;
	v->a[256848] = anon_sym_RBRACE3;
	v->a[256849] = state(3532);
	v->a[256850] = 1;
	v->a[256851] = sym_subscript;
	v->a[256852] = state(6428);
	v->a[256853] = 1;
	v->a[256854] = aux_sym__expansion_body_repeat1;
	v->a[256855] = state(6472);
	v->a[256856] = 1;
	v->a[256857] = sym_command_substitution;
	v->a[256858] = state(7089);
	v->a[256859] = 1;
	small_parse_table_12843(v);
}

void	small_parse_table_12843(t_small_parse_table_array *v)
{
	v->a[256860] = sym__expansion_body;
	v->a[256861] = actions(11762);
	v->a[256862] = 2;
	v->a[256863] = anon_sym_POUND2;
	v->a[256864] = anon_sym_EQ2;
	v->a[256865] = actions(8050);
	v->a[256866] = 3;
	v->a[256867] = sym__external_expansion_sym_hash;
	v->a[256868] = sym__external_expansion_sym_bang;
	v->a[256869] = sym__external_expansion_sym_equal;
	v->a[256870] = actions(11754);
	v->a[256871] = 4;
	v->a[256872] = anon_sym_DASH;
	v->a[256873] = anon_sym_STAR;
	v->a[256874] = anon_sym_QMARK;
	v->a[256875] = anon_sym_AT2;
	v->a[256876] = actions(11756);
	v->a[256877] = 5;
	v->a[256878] = anon_sym_BANG;
	v->a[256879] = anon_sym_DOLLAR;
	small_parse_table_12844(v);
}

void	small_parse_table_12844(t_small_parse_table_array *v)
{
	v->a[256880] = anon_sym_POUND;
	v->a[256881] = anon_sym_0;
	v->a[256882] = anon_sym__;
	v->a[256883] = 16;
	v->a[256884] = actions(3);
	v->a[256885] = 1;
	v->a[256886] = sym_comment;
	v->a[256887] = actions(11760);
	v->a[256888] = 1;
	v->a[256889] = anon_sym_BANG2;
	v->a[256890] = actions(11764);
	v->a[256891] = 1;
	v->a[256892] = anon_sym_DOLLAR_LPAREN;
	v->a[256893] = actions(11766);
	v->a[256894] = 1;
	v->a[256895] = anon_sym_BQUOTE;
	v->a[256896] = actions(11768);
	v->a[256897] = 1;
	v->a[256898] = anon_sym_DOLLAR_BQUOTE;
	v->a[256899] = actions(11770);
	small_parse_table_12845(v);
}

/* EOF small_parse_table_2568.c */
