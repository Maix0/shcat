/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2698.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13490(t_small_parse_table_array *v)
{
	v->a[269800] = anon_sym_LT_AMP_DASH;
	v->a[269801] = anon_sym_GT_AMP_DASH;
	v->a[269802] = anon_sym_LT_LT_DASH;
	v->a[269803] = 18;
	v->a[269804] = actions(71);
	v->a[269805] = 1;
	v->a[269806] = sym_comment;
	v->a[269807] = actions(12167);
	v->a[269808] = 1;
	v->a[269809] = anon_sym_LPAREN;
	v->a[269810] = actions(12169);
	v->a[269811] = 1;
	v->a[269812] = aux_sym__c_word_token1;
	v->a[269813] = actions(12171);
	v->a[269814] = 1;
	v->a[269815] = anon_sym_DOLLAR;
	v->a[269816] = actions(12173);
	v->a[269817] = 1;
	v->a[269818] = anon_sym_DQUOTE;
	v->a[269819] = actions(12175);
	small_parse_table_13491(v);
}

void	small_parse_table_13491(t_small_parse_table_array *v)
{
	v->a[269820] = 1;
	v->a[269821] = aux_sym_number_token1;
	v->a[269822] = actions(12177);
	v->a[269823] = 1;
	v->a[269824] = aux_sym_number_token2;
	v->a[269825] = actions(12179);
	v->a[269826] = 1;
	v->a[269827] = anon_sym_DOLLAR_LBRACE;
	v->a[269828] = actions(12181);
	v->a[269829] = 1;
	v->a[269830] = anon_sym_DOLLAR_LPAREN;
	v->a[269831] = actions(12183);
	v->a[269832] = 1;
	v->a[269833] = anon_sym_BQUOTE;
	v->a[269834] = actions(12185);
	v->a[269835] = 1;
	v->a[269836] = anon_sym_DOLLAR_BQUOTE;
	v->a[269837] = state(3442);
	v->a[269838] = 1;
	v->a[269839] = sym__c_unary_expression;
	small_parse_table_13492(v);
}

void	small_parse_table_13492(t_small_parse_table_array *v)
{
	v->a[269840] = state(3443);
	v->a[269841] = 1;
	v->a[269842] = sym__c_binary_expression;
	v->a[269843] = state(3444);
	v->a[269844] = 1;
	v->a[269845] = sym__c_postfix_expression;
	v->a[269846] = state(6671);
	v->a[269847] = 1;
	v->a[269848] = sym__c_expression;
	v->a[269849] = state(6762);
	v->a[269850] = 1;
	v->a[269851] = sym__c_variable_assignment;
	v->a[269852] = actions(12165);
	v->a[269853] = 2;
	v->a[269854] = anon_sym_PLUS_PLUS;
	v->a[269855] = anon_sym_DASH_DASH;
	v->a[269856] = state(3441);
	v->a[269857] = 7;
	v->a[269858] = sym__c_expression_not_assignment;
	v->a[269859] = sym__c_parenthesized_expression;
	small_parse_table_13493(v);
}

void	small_parse_table_13493(t_small_parse_table_array *v)
{
	v->a[269860] = sym_string;
	v->a[269861] = sym_number;
	v->a[269862] = sym_simple_expansion;
	v->a[269863] = sym_expansion;
	v->a[269864] = sym_command_substitution;
	v->a[269865] = 3;
	v->a[269866] = actions(3);
	v->a[269867] = 1;
	v->a[269868] = sym_comment;
	v->a[269869] = actions(12163);
	v->a[269870] = 3;
	v->a[269871] = sym_file_descriptor;
	v->a[269872] = ts_builtin_sym_end;
	v->a[269873] = aux_sym_heredoc_redirect_token1;
	v->a[269874] = actions(12161);
	v->a[269875] = 21;
	v->a[269876] = anon_sym_SEMI;
	v->a[269877] = anon_sym_PIPE_PIPE;
	v->a[269878] = anon_sym_AMP_AMP;
	v->a[269879] = anon_sym_PIPE;
	small_parse_table_13494(v);
}

void	small_parse_table_13494(t_small_parse_table_array *v)
{
	v->a[269880] = anon_sym_AMP;
	v->a[269881] = anon_sym_LT;
	v->a[269882] = anon_sym_GT;
	v->a[269883] = anon_sym_LT_LT;
	v->a[269884] = anon_sym_GT_GT;
	v->a[269885] = anon_sym_RPAREN;
	v->a[269886] = anon_sym_SEMI_SEMI;
	v->a[269887] = anon_sym_PIPE_AMP;
	v->a[269888] = anon_sym_AMP_GT;
	v->a[269889] = anon_sym_AMP_GT_GT;
	v->a[269890] = anon_sym_LT_AMP;
	v->a[269891] = anon_sym_GT_AMP;
	v->a[269892] = anon_sym_GT_PIPE;
	v->a[269893] = anon_sym_LT_AMP_DASH;
	v->a[269894] = anon_sym_GT_AMP_DASH;
	v->a[269895] = anon_sym_LT_LT_DASH;
	v->a[269896] = anon_sym_BQUOTE;
	v->a[269897] = 3;
	v->a[269898] = actions(3);
	v->a[269899] = 1;
	small_parse_table_13495(v);
}

/* EOF small_parse_table_2698.c */
