/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2408.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12040(t_small_parse_table_array *v)
{
	v->a[240800] = aux_sym_heredoc_redirect_token1;
	v->a[240801] = actions(4370);
	v->a[240802] = 23;
	v->a[240803] = anon_sym_SEMI;
	v->a[240804] = anon_sym_PIPE_PIPE;
	v->a[240805] = anon_sym_AMP_AMP;
	v->a[240806] = anon_sym_PIPE;
	v->a[240807] = anon_sym_AMP;
	v->a[240808] = anon_sym_LT;
	v->a[240809] = anon_sym_GT;
	v->a[240810] = anon_sym_LT_LT;
	v->a[240811] = anon_sym_GT_GT;
	v->a[240812] = anon_sym_esac;
	v->a[240813] = anon_sym_SEMI_SEMI;
	v->a[240814] = anon_sym_SEMI_AMP;
	v->a[240815] = anon_sym_SEMI_SEMI_AMP;
	v->a[240816] = anon_sym_PIPE_AMP;
	v->a[240817] = anon_sym_AMP_GT;
	v->a[240818] = anon_sym_AMP_GT_GT;
	v->a[240819] = anon_sym_LT_AMP;
	small_parse_table_12041(v);
}

void	small_parse_table_12041(t_small_parse_table_array *v)
{
	v->a[240820] = anon_sym_GT_AMP;
	v->a[240821] = anon_sym_GT_PIPE;
	v->a[240822] = anon_sym_LT_AMP_DASH;
	v->a[240823] = anon_sym_GT_AMP_DASH;
	v->a[240824] = anon_sym_LT_LT_DASH;
	v->a[240825] = anon_sym_LT_LT_LT;
	v->a[240826] = 21;
	v->a[240827] = actions(3);
	v->a[240828] = 1;
	v->a[240829] = sym_comment;
	v->a[240830] = actions(11250);
	v->a[240831] = 1;
	v->a[240832] = anon_sym_LPAREN;
	v->a[240833] = actions(11252);
	v->a[240834] = 1;
	v->a[240835] = aux_sym__c_word_token1;
	v->a[240836] = actions(11256);
	v->a[240837] = 1;
	v->a[240838] = anon_sym_DOLLAR;
	v->a[240839] = actions(11258);
	small_parse_table_12042(v);
}

void	small_parse_table_12042(t_small_parse_table_array *v)
{
	v->a[240840] = 1;
	v->a[240841] = anon_sym_DQUOTE;
	v->a[240842] = actions(11260);
	v->a[240843] = 1;
	v->a[240844] = aux_sym_number_token1;
	v->a[240845] = actions(11262);
	v->a[240846] = 1;
	v->a[240847] = aux_sym_number_token2;
	v->a[240848] = actions(11264);
	v->a[240849] = 1;
	v->a[240850] = anon_sym_DOLLAR_LBRACE;
	v->a[240851] = actions(11266);
	v->a[240852] = 1;
	v->a[240853] = anon_sym_DOLLAR_LPAREN;
	v->a[240854] = actions(11268);
	v->a[240855] = 1;
	v->a[240856] = anon_sym_BQUOTE;
	v->a[240857] = actions(11270);
	v->a[240858] = 1;
	v->a[240859] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_12043(v);
}

void	small_parse_table_12043(t_small_parse_table_array *v)
{
	v->a[240860] = actions(11345);
	v->a[240861] = 1;
	v->a[240862] = aux_sym_heredoc_redirect_token1;
	v->a[240863] = state(3113);
	v->a[240864] = 1;
	v->a[240865] = sym__c_postfix_expression;
	v->a[240866] = state(3116);
	v->a[240867] = 1;
	v->a[240868] = sym__c_binary_expression;
	v->a[240869] = state(3118);
	v->a[240870] = 1;
	v->a[240871] = sym__c_unary_expression;
	v->a[240872] = state(4757);
	v->a[240873] = 1;
	v->a[240874] = sym__c_terminator;
	v->a[240875] = state(6330);
	v->a[240876] = 1;
	v->a[240877] = sym__c_expression;
	v->a[240878] = state(6493);
	v->a[240879] = 1;
	small_parse_table_12044(v);
}

void	small_parse_table_12044(t_small_parse_table_array *v)
{
	v->a[240880] = sym__c_variable_assignment;
	v->a[240881] = actions(11248);
	v->a[240882] = 2;
	v->a[240883] = anon_sym_PLUS_PLUS;
	v->a[240884] = anon_sym_DASH_DASH;
	v->a[240885] = actions(11343);
	v->a[240886] = 2;
	v->a[240887] = anon_sym_SEMI;
	v->a[240888] = anon_sym_AMP;
	v->a[240889] = state(3119);
	v->a[240890] = 7;
	v->a[240891] = sym__c_expression_not_assignment;
	v->a[240892] = sym__c_parenthesized_expression;
	v->a[240893] = sym_string;
	v->a[240894] = sym_number;
	v->a[240895] = sym_simple_expansion;
	v->a[240896] = sym_expansion;
	v->a[240897] = sym_command_substitution;
	v->a[240898] = 6;
	v->a[240899] = actions(3);
	small_parse_table_12045(v);
}

/* EOF small_parse_table_2408.c */
