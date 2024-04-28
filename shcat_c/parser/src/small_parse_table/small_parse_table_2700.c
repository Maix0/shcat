/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2700.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13500(t_small_parse_table_array *v)
{
	v->a[270000] = sym_comment;
	v->a[270001] = actions(11808);
	v->a[270002] = 1;
	v->a[270003] = anon_sym_LPAREN;
	v->a[270004] = actions(11810);
	v->a[270005] = 1;
	v->a[270006] = aux_sym__c_word_token1;
	v->a[270007] = actions(11812);
	v->a[270008] = 1;
	v->a[270009] = anon_sym_DOLLAR;
	v->a[270010] = actions(11814);
	v->a[270011] = 1;
	v->a[270012] = anon_sym_DQUOTE;
	v->a[270013] = actions(11816);
	v->a[270014] = 1;
	v->a[270015] = aux_sym_number_token1;
	v->a[270016] = actions(11818);
	v->a[270017] = 1;
	v->a[270018] = aux_sym_number_token2;
	v->a[270019] = actions(11820);
	small_parse_table_13501(v);
}

void	small_parse_table_13501(t_small_parse_table_array *v)
{
	v->a[270020] = 1;
	v->a[270021] = anon_sym_DOLLAR_LBRACE;
	v->a[270022] = actions(11822);
	v->a[270023] = 1;
	v->a[270024] = anon_sym_DOLLAR_LPAREN;
	v->a[270025] = actions(11824);
	v->a[270026] = 1;
	v->a[270027] = anon_sym_BQUOTE;
	v->a[270028] = actions(11826);
	v->a[270029] = 1;
	v->a[270030] = anon_sym_DOLLAR_BQUOTE;
	v->a[270031] = state(3285);
	v->a[270032] = 1;
	v->a[270033] = sym__c_postfix_expression;
	v->a[270034] = state(3286);
	v->a[270035] = 1;
	v->a[270036] = sym__c_binary_expression;
	v->a[270037] = state(3290);
	v->a[270038] = 1;
	v->a[270039] = sym__c_unary_expression;
	small_parse_table_13502(v);
}

void	small_parse_table_13502(t_small_parse_table_array *v)
{
	v->a[270040] = state(6741);
	v->a[270041] = 1;
	v->a[270042] = sym__c_expression;
	v->a[270043] = state(6768);
	v->a[270044] = 1;
	v->a[270045] = sym__c_variable_assignment;
	v->a[270046] = actions(11806);
	v->a[270047] = 2;
	v->a[270048] = anon_sym_PLUS_PLUS;
	v->a[270049] = anon_sym_DASH_DASH;
	v->a[270050] = state(3292);
	v->a[270051] = 7;
	v->a[270052] = sym__c_expression_not_assignment;
	v->a[270053] = sym__c_parenthesized_expression;
	v->a[270054] = sym_string;
	v->a[270055] = sym_number;
	v->a[270056] = sym_simple_expansion;
	v->a[270057] = sym_expansion;
	v->a[270058] = sym_command_substitution;
	v->a[270059] = 3;
	small_parse_table_13503(v);
}

void	small_parse_table_13503(t_small_parse_table_array *v)
{
	v->a[270060] = actions(3);
	v->a[270061] = 1;
	v->a[270062] = sym_comment;
	v->a[270063] = actions(12119);
	v->a[270064] = 3;
	v->a[270065] = sym_file_descriptor;
	v->a[270066] = ts_builtin_sym_end;
	v->a[270067] = aux_sym_heredoc_redirect_token1;
	v->a[270068] = actions(12117);
	v->a[270069] = 21;
	v->a[270070] = anon_sym_SEMI;
	v->a[270071] = anon_sym_PIPE_PIPE;
	v->a[270072] = anon_sym_AMP_AMP;
	v->a[270073] = anon_sym_PIPE;
	v->a[270074] = anon_sym_AMP;
	v->a[270075] = anon_sym_LT;
	v->a[270076] = anon_sym_GT;
	v->a[270077] = anon_sym_LT_LT;
	v->a[270078] = anon_sym_GT_GT;
	v->a[270079] = anon_sym_RPAREN;
	small_parse_table_13504(v);
}

void	small_parse_table_13504(t_small_parse_table_array *v)
{
	v->a[270080] = anon_sym_SEMI_SEMI;
	v->a[270081] = anon_sym_PIPE_AMP;
	v->a[270082] = anon_sym_AMP_GT;
	v->a[270083] = anon_sym_AMP_GT_GT;
	v->a[270084] = anon_sym_LT_AMP;
	v->a[270085] = anon_sym_GT_AMP;
	v->a[270086] = anon_sym_GT_PIPE;
	v->a[270087] = anon_sym_LT_AMP_DASH;
	v->a[270088] = anon_sym_GT_AMP_DASH;
	v->a[270089] = anon_sym_LT_LT_DASH;
	v->a[270090] = anon_sym_BQUOTE;
	v->a[270091] = 18;
	v->a[270092] = actions(71);
	v->a[270093] = 1;
	v->a[270094] = sym_comment;
	v->a[270095] = actions(11808);
	v->a[270096] = 1;
	v->a[270097] = anon_sym_LPAREN;
	v->a[270098] = actions(11810);
	v->a[270099] = 1;
	small_parse_table_13505(v);
}

/* EOF small_parse_table_2700.c */
