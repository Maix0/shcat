/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2608.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13040(t_small_parse_table_array *v)
{
	v->a[260800] = 1;
	v->a[260801] = aux_sym__expansion_body_repeat1;
	v->a[260802] = state(6472);
	v->a[260803] = 1;
	v->a[260804] = sym_command_substitution;
	v->a[260805] = state(7395);
	v->a[260806] = 1;
	v->a[260807] = sym__expansion_body;
	v->a[260808] = actions(11762);
	v->a[260809] = 2;
	v->a[260810] = anon_sym_POUND2;
	v->a[260811] = anon_sym_EQ2;
	v->a[260812] = actions(8050);
	v->a[260813] = 3;
	v->a[260814] = sym__external_expansion_sym_hash;
	v->a[260815] = sym__external_expansion_sym_bang;
	v->a[260816] = sym__external_expansion_sym_equal;
	v->a[260817] = actions(11754);
	v->a[260818] = 4;
	v->a[260819] = anon_sym_DASH;
	small_parse_table_13041(v);
}

void	small_parse_table_13041(t_small_parse_table_array *v)
{
	v->a[260820] = anon_sym_STAR;
	v->a[260821] = anon_sym_QMARK;
	v->a[260822] = anon_sym_AT2;
	v->a[260823] = actions(11756);
	v->a[260824] = 5;
	v->a[260825] = anon_sym_BANG;
	v->a[260826] = anon_sym_DOLLAR;
	v->a[260827] = anon_sym_POUND;
	v->a[260828] = anon_sym_0;
	v->a[260829] = anon_sym__;
	v->a[260830] = 19;
	v->a[260831] = actions(71);
	v->a[260832] = 1;
	v->a[260833] = sym_comment;
	v->a[260834] = actions(11808);
	v->a[260835] = 1;
	v->a[260836] = anon_sym_LPAREN;
	v->a[260837] = actions(11810);
	v->a[260838] = 1;
	v->a[260839] = aux_sym__c_word_token1;
	small_parse_table_13042(v);
}

void	small_parse_table_13042(t_small_parse_table_array *v)
{
	v->a[260840] = actions(11812);
	v->a[260841] = 1;
	v->a[260842] = anon_sym_DOLLAR;
	v->a[260843] = actions(11814);
	v->a[260844] = 1;
	v->a[260845] = anon_sym_DQUOTE;
	v->a[260846] = actions(11816);
	v->a[260847] = 1;
	v->a[260848] = aux_sym_number_token1;
	v->a[260849] = actions(11818);
	v->a[260850] = 1;
	v->a[260851] = aux_sym_number_token2;
	v->a[260852] = actions(11820);
	v->a[260853] = 1;
	v->a[260854] = anon_sym_DOLLAR_LBRACE;
	v->a[260855] = actions(11822);
	v->a[260856] = 1;
	v->a[260857] = anon_sym_DOLLAR_LPAREN;
	v->a[260858] = actions(11824);
	v->a[260859] = 1;
	small_parse_table_13043(v);
}

void	small_parse_table_13043(t_small_parse_table_array *v)
{
	v->a[260860] = anon_sym_BQUOTE;
	v->a[260861] = actions(11826);
	v->a[260862] = 1;
	v->a[260863] = anon_sym_DOLLAR_BQUOTE;
	v->a[260864] = actions(11985);
	v->a[260865] = 1;
	v->a[260866] = anon_sym_RPAREN_RPAREN;
	v->a[260867] = state(3285);
	v->a[260868] = 1;
	v->a[260869] = sym__c_postfix_expression;
	v->a[260870] = state(3286);
	v->a[260871] = 1;
	v->a[260872] = sym__c_binary_expression;
	v->a[260873] = state(3290);
	v->a[260874] = 1;
	v->a[260875] = sym__c_unary_expression;
	v->a[260876] = state(6713);
	v->a[260877] = 1;
	v->a[260878] = sym__c_expression;
	v->a[260879] = state(6768);
	small_parse_table_13044(v);
}

void	small_parse_table_13044(t_small_parse_table_array *v)
{
	v->a[260880] = 1;
	v->a[260881] = sym__c_variable_assignment;
	v->a[260882] = actions(11806);
	v->a[260883] = 2;
	v->a[260884] = anon_sym_PLUS_PLUS;
	v->a[260885] = anon_sym_DASH_DASH;
	v->a[260886] = state(3292);
	v->a[260887] = 7;
	v->a[260888] = sym__c_expression_not_assignment;
	v->a[260889] = sym__c_parenthesized_expression;
	v->a[260890] = sym_string;
	v->a[260891] = sym_number;
	v->a[260892] = sym_simple_expansion;
	v->a[260893] = sym_expansion;
	v->a[260894] = sym_command_substitution;
	v->a[260895] = 19;
	v->a[260896] = actions(71);
	v->a[260897] = 1;
	v->a[260898] = sym_comment;
	v->a[260899] = actions(11808);
	small_parse_table_13045(v);
}

/* EOF small_parse_table_2608.c */
