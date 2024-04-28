/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2616.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13080(t_small_parse_table_array *v)
{
	v->a[261600] = sym_command_substitution;
	v->a[261601] = state(7449);
	v->a[261602] = 1;
	v->a[261603] = sym__expansion_body;
	v->a[261604] = actions(11762);
	v->a[261605] = 2;
	v->a[261606] = anon_sym_POUND2;
	v->a[261607] = anon_sym_EQ2;
	v->a[261608] = actions(8050);
	v->a[261609] = 3;
	v->a[261610] = sym__external_expansion_sym_hash;
	v->a[261611] = sym__external_expansion_sym_bang;
	v->a[261612] = sym__external_expansion_sym_equal;
	v->a[261613] = actions(11754);
	v->a[261614] = 4;
	v->a[261615] = anon_sym_DASH;
	v->a[261616] = anon_sym_STAR;
	v->a[261617] = anon_sym_QMARK;
	v->a[261618] = anon_sym_AT2;
	v->a[261619] = actions(11756);
	small_parse_table_13081(v);
}

void	small_parse_table_13081(t_small_parse_table_array *v)
{
	v->a[261620] = 5;
	v->a[261621] = anon_sym_BANG;
	v->a[261622] = anon_sym_DOLLAR;
	v->a[261623] = anon_sym_POUND;
	v->a[261624] = anon_sym_0;
	v->a[261625] = anon_sym__;
	v->a[261626] = 19;
	v->a[261627] = actions(71);
	v->a[261628] = 1;
	v->a[261629] = sym_comment;
	v->a[261630] = actions(11808);
	v->a[261631] = 1;
	v->a[261632] = anon_sym_LPAREN;
	v->a[261633] = actions(11810);
	v->a[261634] = 1;
	v->a[261635] = aux_sym__c_word_token1;
	v->a[261636] = actions(11812);
	v->a[261637] = 1;
	v->a[261638] = anon_sym_DOLLAR;
	v->a[261639] = actions(11814);
	small_parse_table_13082(v);
}

void	small_parse_table_13082(t_small_parse_table_array *v)
{
	v->a[261640] = 1;
	v->a[261641] = anon_sym_DQUOTE;
	v->a[261642] = actions(11816);
	v->a[261643] = 1;
	v->a[261644] = aux_sym_number_token1;
	v->a[261645] = actions(11818);
	v->a[261646] = 1;
	v->a[261647] = aux_sym_number_token2;
	v->a[261648] = actions(11820);
	v->a[261649] = 1;
	v->a[261650] = anon_sym_DOLLAR_LBRACE;
	v->a[261651] = actions(11822);
	v->a[261652] = 1;
	v->a[261653] = anon_sym_DOLLAR_LPAREN;
	v->a[261654] = actions(11824);
	v->a[261655] = 1;
	v->a[261656] = anon_sym_BQUOTE;
	v->a[261657] = actions(11826);
	v->a[261658] = 1;
	v->a[261659] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_13083(v);
}

void	small_parse_table_13083(t_small_parse_table_array *v)
{
	v->a[261660] = actions(12007);
	v->a[261661] = 1;
	v->a[261662] = anon_sym_RPAREN_RPAREN;
	v->a[261663] = state(3285);
	v->a[261664] = 1;
	v->a[261665] = sym__c_postfix_expression;
	v->a[261666] = state(3286);
	v->a[261667] = 1;
	v->a[261668] = sym__c_binary_expression;
	v->a[261669] = state(3290);
	v->a[261670] = 1;
	v->a[261671] = sym__c_unary_expression;
	v->a[261672] = state(6675);
	v->a[261673] = 1;
	v->a[261674] = sym__c_expression;
	v->a[261675] = state(6768);
	v->a[261676] = 1;
	v->a[261677] = sym__c_variable_assignment;
	v->a[261678] = actions(11806);
	v->a[261679] = 2;
	small_parse_table_13084(v);
}

void	small_parse_table_13084(t_small_parse_table_array *v)
{
	v->a[261680] = anon_sym_PLUS_PLUS;
	v->a[261681] = anon_sym_DASH_DASH;
	v->a[261682] = state(3292);
	v->a[261683] = 7;
	v->a[261684] = sym__c_expression_not_assignment;
	v->a[261685] = sym__c_parenthesized_expression;
	v->a[261686] = sym_string;
	v->a[261687] = sym_number;
	v->a[261688] = sym_simple_expansion;
	v->a[261689] = sym_expansion;
	v->a[261690] = sym_command_substitution;
	v->a[261691] = 8;
	v->a[261692] = actions(3);
	v->a[261693] = 1;
	v->a[261694] = sym_comment;
	v->a[261695] = actions(11410);
	v->a[261696] = 1;
	v->a[261697] = anon_sym_LT_LT_LT;
	v->a[261698] = actions(11506);
	v->a[261699] = 1;
	small_parse_table_13085(v);
}

/* EOF small_parse_table_2616.c */
