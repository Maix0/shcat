/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2405.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12025(t_small_parse_table_array *v)
{
	v->a[240500] = sym__c_binary_expression;
	v->a[240501] = state(3118);
	v->a[240502] = 1;
	v->a[240503] = sym__c_unary_expression;
	v->a[240504] = state(4743);
	v->a[240505] = 1;
	v->a[240506] = sym__c_terminator;
	v->a[240507] = state(6270);
	v->a[240508] = 1;
	v->a[240509] = sym__c_expression;
	v->a[240510] = state(6493);
	v->a[240511] = 1;
	v->a[240512] = sym__c_variable_assignment;
	v->a[240513] = actions(11248);
	v->a[240514] = 2;
	v->a[240515] = anon_sym_PLUS_PLUS;
	v->a[240516] = anon_sym_DASH_DASH;
	v->a[240517] = actions(11323);
	v->a[240518] = 2;
	v->a[240519] = anon_sym_SEMI;
	small_parse_table_12026(v);
}

void	small_parse_table_12026(t_small_parse_table_array *v)
{
	v->a[240520] = anon_sym_AMP;
	v->a[240521] = state(3119);
	v->a[240522] = 7;
	v->a[240523] = sym__c_expression_not_assignment;
	v->a[240524] = sym__c_parenthesized_expression;
	v->a[240525] = sym_string;
	v->a[240526] = sym_number;
	v->a[240527] = sym_simple_expansion;
	v->a[240528] = sym_expansion;
	v->a[240529] = sym_command_substitution;
	v->a[240530] = 6;
	v->a[240531] = actions(3);
	v->a[240532] = 1;
	v->a[240533] = sym_comment;
	v->a[240534] = actions(11331);
	v->a[240535] = 1;
	v->a[240536] = sym_variable_name;
	v->a[240537] = state(6726);
	v->a[240538] = 1;
	v->a[240539] = sym_subscript;
	small_parse_table_12027(v);
}

void	small_parse_table_12027(t_small_parse_table_array *v)
{
	v->a[240540] = actions(11329);
	v->a[240541] = 2;
	v->a[240542] = sym_file_descriptor;
	v->a[240543] = aux_sym_heredoc_redirect_token1;
	v->a[240544] = state(4230);
	v->a[240545] = 2;
	v->a[240546] = sym_variable_assignment;
	v->a[240547] = aux_sym_variable_assignments_repeat1;
	v->a[240548] = actions(11327);
	v->a[240549] = 22;
	v->a[240550] = anon_sym_SEMI;
	v->a[240551] = anon_sym_PIPE_PIPE;
	v->a[240552] = anon_sym_AMP_AMP;
	v->a[240553] = anon_sym_PIPE;
	v->a[240554] = anon_sym_AMP;
	v->a[240555] = anon_sym_LT;
	v->a[240556] = anon_sym_GT;
	v->a[240557] = anon_sym_LT_LT;
	v->a[240558] = anon_sym_GT_GT;
	v->a[240559] = anon_sym_esac;
	small_parse_table_12028(v);
}

void	small_parse_table_12028(t_small_parse_table_array *v)
{
	v->a[240560] = anon_sym_SEMI_SEMI;
	v->a[240561] = anon_sym_SEMI_AMP;
	v->a[240562] = anon_sym_SEMI_SEMI_AMP;
	v->a[240563] = anon_sym_PIPE_AMP;
	v->a[240564] = anon_sym_AMP_GT;
	v->a[240565] = anon_sym_AMP_GT_GT;
	v->a[240566] = anon_sym_LT_AMP;
	v->a[240567] = anon_sym_GT_AMP;
	v->a[240568] = anon_sym_GT_PIPE;
	v->a[240569] = anon_sym_LT_AMP_DASH;
	v->a[240570] = anon_sym_GT_AMP_DASH;
	v->a[240571] = anon_sym_LT_LT_DASH;
	v->a[240572] = 6;
	v->a[240573] = actions(3);
	v->a[240574] = 1;
	v->a[240575] = sym_comment;
	v->a[240576] = actions(11276);
	v->a[240577] = 1;
	v->a[240578] = aux_sym_concatenation_token1;
	v->a[240579] = actions(11278);
	small_parse_table_12029(v);
}

void	small_parse_table_12029(t_small_parse_table_array *v)
{
	v->a[240580] = 1;
	v->a[240581] = sym__concat;
	v->a[240582] = state(4258);
	v->a[240583] = 1;
	v->a[240584] = aux_sym_concatenation_repeat1;
	v->a[240585] = actions(5375);
	v->a[240586] = 3;
	v->a[240587] = sym_file_descriptor;
	v->a[240588] = sym_variable_name;
	v->a[240589] = aux_sym_heredoc_redirect_token1;
	v->a[240590] = actions(5373);
	v->a[240591] = 22;
	v->a[240592] = anon_sym_SEMI;
	v->a[240593] = anon_sym_PIPE_PIPE;
	v->a[240594] = anon_sym_AMP_AMP;
	v->a[240595] = anon_sym_PIPE;
	v->a[240596] = anon_sym_AMP;
	v->a[240597] = anon_sym_LT;
	v->a[240598] = anon_sym_GT;
	v->a[240599] = anon_sym_LT_LT;
	small_parse_table_12030(v);
}

/* EOF small_parse_table_2405.c */
