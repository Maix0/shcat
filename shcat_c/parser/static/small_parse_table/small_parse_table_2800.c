/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2800.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_14000(t_small_parse_table_array *v)
{
	v->a[280000] = state(3118);
	v->a[280001] = 1;
	v->a[280002] = sym__c_unary_expression;
	v->a[280003] = actions(12231);
	v->a[280004] = 2;
	v->a[280005] = anon_sym_PLUS_PLUS;
	v->a[280006] = anon_sym_DASH_DASH;
	v->a[280007] = state(3019);
	v->a[280008] = 7;
	v->a[280009] = sym__c_expression_not_assignment;
	v->a[280010] = sym__c_parenthesized_expression;
	v->a[280011] = sym_string;
	v->a[280012] = sym_number;
	v->a[280013] = sym_simple_expansion;
	v->a[280014] = sym_expansion;
	v->a[280015] = sym_command_substitution;
	v->a[280016] = 5;
	v->a[280017] = actions(71);
	v->a[280018] = 1;
	v->a[280019] = sym_comment;
	small_parse_table_14001(v);
}

void	small_parse_table_14001(t_small_parse_table_array *v)
{
	v->a[280020] = state(5270);
	v->a[280021] = 1;
	v->a[280022] = aux_sym_concatenation_repeat1;
	v->a[280023] = actions(12622);
	v->a[280024] = 2;
	v->a[280025] = sym__concat;
	v->a[280026] = aux_sym_concatenation_token1;
	v->a[280027] = actions(1261);
	v->a[280028] = 7;
	v->a[280029] = anon_sym_PIPE;
	v->a[280030] = anon_sym_LT;
	v->a[280031] = anon_sym_GT;
	v->a[280032] = anon_sym_LT_LT;
	v->a[280033] = anon_sym_AMP_GT;
	v->a[280034] = anon_sym_LT_AMP;
	v->a[280035] = anon_sym_GT_AMP;
	v->a[280036] = actions(1263);
	v->a[280037] = 12;
	v->a[280038] = sym_file_descriptor;
	v->a[280039] = anon_sym_PIPE_PIPE;
	small_parse_table_14002(v);
}

void	small_parse_table_14002(t_small_parse_table_array *v)
{
	v->a[280040] = anon_sym_AMP_AMP;
	v->a[280041] = anon_sym_GT_GT;
	v->a[280042] = anon_sym_PIPE_AMP;
	v->a[280043] = anon_sym_AMP_GT_GT;
	v->a[280044] = anon_sym_GT_PIPE;
	v->a[280045] = anon_sym_LT_AMP_DASH;
	v->a[280046] = anon_sym_GT_AMP_DASH;
	v->a[280047] = anon_sym_LT_LT_DASH;
	v->a[280048] = anon_sym_LT_LT_LT;
	v->a[280049] = sym__special_character;
	v->a[280050] = 16;
	v->a[280051] = actions(71);
	v->a[280052] = 1;
	v->a[280053] = sym_comment;
	v->a[280054] = actions(11256);
	v->a[280055] = 1;
	v->a[280056] = anon_sym_DOLLAR;
	v->a[280057] = actions(11262);
	v->a[280058] = 1;
	v->a[280059] = aux_sym_number_token2;
	small_parse_table_14003(v);
}

void	small_parse_table_14003(t_small_parse_table_array *v)
{
	v->a[280060] = actions(12233);
	v->a[280061] = 1;
	v->a[280062] = anon_sym_LPAREN;
	v->a[280063] = actions(12237);
	v->a[280064] = 1;
	v->a[280065] = anon_sym_DQUOTE;
	v->a[280066] = actions(12239);
	v->a[280067] = 1;
	v->a[280068] = aux_sym_number_token1;
	v->a[280069] = actions(12241);
	v->a[280070] = 1;
	v->a[280071] = anon_sym_DOLLAR_LBRACE;
	v->a[280072] = actions(12243);
	v->a[280073] = 1;
	v->a[280074] = anon_sym_DOLLAR_LPAREN;
	v->a[280075] = actions(12245);
	v->a[280076] = 1;
	v->a[280077] = anon_sym_BQUOTE;
	v->a[280078] = actions(12247);
	v->a[280079] = 1;
	small_parse_table_14004(v);
}

void	small_parse_table_14004(t_small_parse_table_array *v)
{
	v->a[280080] = anon_sym_DOLLAR_BQUOTE;
	v->a[280081] = actions(12624);
	v->a[280082] = 1;
	v->a[280083] = aux_sym__c_word_token1;
	v->a[280084] = state(3113);
	v->a[280085] = 1;
	v->a[280086] = sym__c_postfix_expression;
	v->a[280087] = state(3116);
	v->a[280088] = 1;
	v->a[280089] = sym__c_binary_expression;
	v->a[280090] = state(3118);
	v->a[280091] = 1;
	v->a[280092] = sym__c_unary_expression;
	v->a[280093] = actions(12231);
	v->a[280094] = 2;
	v->a[280095] = anon_sym_PLUS_PLUS;
	v->a[280096] = anon_sym_DASH_DASH;
	v->a[280097] = state(2965);
	v->a[280098] = 7;
	v->a[280099] = sym__c_expression_not_assignment;
	small_parse_table_14005(v);
}

/* EOF small_parse_table_2800.c */
