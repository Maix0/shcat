/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2396.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11980(t_small_parse_table_array *v)
{
	v->a[239600] = actions(11262);
	v->a[239601] = 1;
	v->a[239602] = aux_sym_number_token2;
	v->a[239603] = actions(11264);
	v->a[239604] = 1;
	v->a[239605] = anon_sym_DOLLAR_LBRACE;
	v->a[239606] = actions(11266);
	v->a[239607] = 1;
	v->a[239608] = anon_sym_DOLLAR_LPAREN;
	v->a[239609] = actions(11268);
	v->a[239610] = 1;
	v->a[239611] = anon_sym_BQUOTE;
	v->a[239612] = actions(11270);
	v->a[239613] = 1;
	v->a[239614] = anon_sym_DOLLAR_BQUOTE;
	v->a[239615] = state(3113);
	v->a[239616] = 1;
	v->a[239617] = sym__c_postfix_expression;
	v->a[239618] = state(3116);
	v->a[239619] = 1;
	small_parse_table_11981(v);
}

void	small_parse_table_11981(t_small_parse_table_array *v)
{
	v->a[239620] = sym__c_binary_expression;
	v->a[239621] = state(3118);
	v->a[239622] = 1;
	v->a[239623] = sym__c_unary_expression;
	v->a[239624] = state(4243);
	v->a[239625] = 1;
	v->a[239626] = sym__c_terminator;
	v->a[239627] = state(6365);
	v->a[239628] = 1;
	v->a[239629] = sym__c_expression;
	v->a[239630] = state(6493);
	v->a[239631] = 1;
	v->a[239632] = sym__c_variable_assignment;
	v->a[239633] = state(6952);
	v->a[239634] = 1;
	v->a[239635] = sym__for_body;
	v->a[239636] = actions(11246);
	v->a[239637] = 2;
	v->a[239638] = anon_sym_SEMI;
	v->a[239639] = anon_sym_AMP;
	small_parse_table_11982(v);
}

void	small_parse_table_11982(t_small_parse_table_array *v)
{
	v->a[239640] = actions(11248);
	v->a[239641] = 2;
	v->a[239642] = anon_sym_PLUS_PLUS;
	v->a[239643] = anon_sym_DASH_DASH;
	v->a[239644] = state(3119);
	v->a[239645] = 7;
	v->a[239646] = sym__c_expression_not_assignment;
	v->a[239647] = sym__c_parenthesized_expression;
	v->a[239648] = sym_string;
	v->a[239649] = sym_number;
	v->a[239650] = sym_simple_expansion;
	v->a[239651] = sym_expansion;
	v->a[239652] = sym_command_substitution;
	v->a[239653] = 22;
	v->a[239654] = actions(3);
	v->a[239655] = 1;
	v->a[239656] = sym_comment;
	v->a[239657] = actions(11250);
	v->a[239658] = 1;
	v->a[239659] = anon_sym_LPAREN;
	small_parse_table_11983(v);
}

void	small_parse_table_11983(t_small_parse_table_array *v)
{
	v->a[239660] = actions(11252);
	v->a[239661] = 1;
	v->a[239662] = aux_sym__c_word_token1;
	v->a[239663] = actions(11254);
	v->a[239664] = 1;
	v->a[239665] = aux_sym_heredoc_redirect_token1;
	v->a[239666] = actions(11256);
	v->a[239667] = 1;
	v->a[239668] = anon_sym_DOLLAR;
	v->a[239669] = actions(11258);
	v->a[239670] = 1;
	v->a[239671] = anon_sym_DQUOTE;
	v->a[239672] = actions(11260);
	v->a[239673] = 1;
	v->a[239674] = aux_sym_number_token1;
	v->a[239675] = actions(11262);
	v->a[239676] = 1;
	v->a[239677] = aux_sym_number_token2;
	v->a[239678] = actions(11264);
	v->a[239679] = 1;
	small_parse_table_11984(v);
}

void	small_parse_table_11984(t_small_parse_table_array *v)
{
	v->a[239680] = anon_sym_DOLLAR_LBRACE;
	v->a[239681] = actions(11266);
	v->a[239682] = 1;
	v->a[239683] = anon_sym_DOLLAR_LPAREN;
	v->a[239684] = actions(11268);
	v->a[239685] = 1;
	v->a[239686] = anon_sym_BQUOTE;
	v->a[239687] = actions(11270);
	v->a[239688] = 1;
	v->a[239689] = anon_sym_DOLLAR_BQUOTE;
	v->a[239690] = state(3113);
	v->a[239691] = 1;
	v->a[239692] = sym__c_postfix_expression;
	v->a[239693] = state(3116);
	v->a[239694] = 1;
	v->a[239695] = sym__c_binary_expression;
	v->a[239696] = state(3118);
	v->a[239697] = 1;
	v->a[239698] = sym__c_unary_expression;
	v->a[239699] = state(4243);
	small_parse_table_11985(v);
}

/* EOF small_parse_table_2396.c */
