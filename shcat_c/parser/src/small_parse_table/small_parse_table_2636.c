/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2636.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13180(t_small_parse_table_array *v)
{
	v->a[263600] = anon_sym_LT;
	v->a[263601] = anon_sym_GT;
	v->a[263602] = anon_sym_LT_LT;
	v->a[263603] = anon_sym_GT_GT;
	v->a[263604] = anon_sym_SEMI_SEMI;
	v->a[263605] = anon_sym_PIPE_AMP;
	v->a[263606] = anon_sym_AMP_GT;
	v->a[263607] = anon_sym_AMP_GT_GT;
	v->a[263608] = anon_sym_LT_AMP;
	v->a[263609] = anon_sym_GT_AMP;
	v->a[263610] = anon_sym_GT_PIPE;
	v->a[263611] = anon_sym_LT_AMP_DASH;
	v->a[263612] = anon_sym_GT_AMP_DASH;
	v->a[263613] = anon_sym_LT_LT_DASH;
	v->a[263614] = 19;
	v->a[263615] = actions(71);
	v->a[263616] = 1;
	v->a[263617] = sym_comment;
	v->a[263618] = actions(11808);
	v->a[263619] = 1;
	small_parse_table_13181(v);
}

void	small_parse_table_13181(t_small_parse_table_array *v)
{
	v->a[263620] = anon_sym_LPAREN;
	v->a[263621] = actions(11810);
	v->a[263622] = 1;
	v->a[263623] = aux_sym__c_word_token1;
	v->a[263624] = actions(11812);
	v->a[263625] = 1;
	v->a[263626] = anon_sym_DOLLAR;
	v->a[263627] = actions(11814);
	v->a[263628] = 1;
	v->a[263629] = anon_sym_DQUOTE;
	v->a[263630] = actions(11816);
	v->a[263631] = 1;
	v->a[263632] = aux_sym_number_token1;
	v->a[263633] = actions(11818);
	v->a[263634] = 1;
	v->a[263635] = aux_sym_number_token2;
	v->a[263636] = actions(11820);
	v->a[263637] = 1;
	v->a[263638] = anon_sym_DOLLAR_LBRACE;
	v->a[263639] = actions(11822);
	small_parse_table_13182(v);
}

void	small_parse_table_13182(t_small_parse_table_array *v)
{
	v->a[263640] = 1;
	v->a[263641] = anon_sym_DOLLAR_LPAREN;
	v->a[263642] = actions(11824);
	v->a[263643] = 1;
	v->a[263644] = anon_sym_BQUOTE;
	v->a[263645] = actions(11826);
	v->a[263646] = 1;
	v->a[263647] = anon_sym_DOLLAR_BQUOTE;
	v->a[263648] = actions(12048);
	v->a[263649] = 1;
	v->a[263650] = anon_sym_RPAREN_RPAREN;
	v->a[263651] = state(3285);
	v->a[263652] = 1;
	v->a[263653] = sym__c_postfix_expression;
	v->a[263654] = state(3286);
	v->a[263655] = 1;
	v->a[263656] = sym__c_binary_expression;
	v->a[263657] = state(3290);
	v->a[263658] = 1;
	v->a[263659] = sym__c_unary_expression;
	small_parse_table_13183(v);
}

void	small_parse_table_13183(t_small_parse_table_array *v)
{
	v->a[263660] = state(6648);
	v->a[263661] = 1;
	v->a[263662] = sym__c_expression;
	v->a[263663] = state(6768);
	v->a[263664] = 1;
	v->a[263665] = sym__c_variable_assignment;
	v->a[263666] = actions(11806);
	v->a[263667] = 2;
	v->a[263668] = anon_sym_PLUS_PLUS;
	v->a[263669] = anon_sym_DASH_DASH;
	v->a[263670] = state(3292);
	v->a[263671] = 7;
	v->a[263672] = sym__c_expression_not_assignment;
	v->a[263673] = sym__c_parenthesized_expression;
	v->a[263674] = sym_string;
	v->a[263675] = sym_number;
	v->a[263676] = sym_simple_expansion;
	v->a[263677] = sym_expansion;
	v->a[263678] = sym_command_substitution;
	v->a[263679] = 3;
	small_parse_table_13184(v);
}

void	small_parse_table_13184(t_small_parse_table_array *v)
{
	v->a[263680] = actions(3);
	v->a[263681] = 1;
	v->a[263682] = sym_comment;
	v->a[263683] = actions(5768);
	v->a[263684] = 3;
	v->a[263685] = sym_file_descriptor;
	v->a[263686] = sym_variable_name;
	v->a[263687] = aux_sym_heredoc_redirect_token1;
	v->a[263688] = actions(5766);
	v->a[263689] = 22;
	v->a[263690] = anon_sym_SEMI;
	v->a[263691] = anon_sym_PIPE_PIPE;
	v->a[263692] = anon_sym_AMP_AMP;
	v->a[263693] = anon_sym_PIPE;
	v->a[263694] = anon_sym_AMP;
	v->a[263695] = anon_sym_LT;
	v->a[263696] = anon_sym_GT;
	v->a[263697] = anon_sym_LT_LT;
	v->a[263698] = anon_sym_GT_GT;
	v->a[263699] = anon_sym_esac;
	small_parse_table_13185(v);
}

/* EOF small_parse_table_2636.c */
