/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2566.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_12830(t_small_parse_table_array *v)
{
	v->a[256600] = sym__c_expression_not_assignment;
	v->a[256601] = sym__c_parenthesized_expression;
	v->a[256602] = sym_string;
	v->a[256603] = sym_number;
	v->a[256604] = sym_simple_expansion;
	v->a[256605] = sym_expansion;
	v->a[256606] = sym_command_substitution;
	v->a[256607] = 16;
	v->a[256608] = actions(3);
	v->a[256609] = 1;
	v->a[256610] = sym_comment;
	v->a[256611] = actions(11760);
	v->a[256612] = 1;
	v->a[256613] = anon_sym_BANG2;
	v->a[256614] = actions(11764);
	v->a[256615] = 1;
	v->a[256616] = anon_sym_DOLLAR_LPAREN;
	v->a[256617] = actions(11766);
	v->a[256618] = 1;
	v->a[256619] = anon_sym_BQUOTE;
	small_parse_table_12831(v);
}

void	small_parse_table_12831(t_small_parse_table_array *v)
{
	v->a[256620] = actions(11768);
	v->a[256621] = 1;
	v->a[256622] = anon_sym_DOLLAR_BQUOTE;
	v->a[256623] = actions(11770);
	v->a[256624] = 1;
	v->a[256625] = aux_sym__simple_variable_name_token1;
	v->a[256626] = actions(11772);
	v->a[256627] = 1;
	v->a[256628] = sym_variable_name;
	v->a[256629] = actions(11838);
	v->a[256630] = 1;
	v->a[256631] = anon_sym_RBRACE3;
	v->a[256632] = state(3532);
	v->a[256633] = 1;
	v->a[256634] = sym_subscript;
	v->a[256635] = state(6428);
	v->a[256636] = 1;
	v->a[256637] = aux_sym__expansion_body_repeat1;
	v->a[256638] = state(6472);
	v->a[256639] = 1;
	small_parse_table_12832(v);
}

void	small_parse_table_12832(t_small_parse_table_array *v)
{
	v->a[256640] = sym_command_substitution;
	v->a[256641] = state(7433);
	v->a[256642] = 1;
	v->a[256643] = sym__expansion_body;
	v->a[256644] = actions(11762);
	v->a[256645] = 2;
	v->a[256646] = anon_sym_POUND2;
	v->a[256647] = anon_sym_EQ2;
	v->a[256648] = actions(8050);
	v->a[256649] = 3;
	v->a[256650] = sym__external_expansion_sym_hash;
	v->a[256651] = sym__external_expansion_sym_bang;
	v->a[256652] = sym__external_expansion_sym_equal;
	v->a[256653] = actions(11754);
	v->a[256654] = 4;
	v->a[256655] = anon_sym_DASH;
	v->a[256656] = anon_sym_STAR;
	v->a[256657] = anon_sym_QMARK;
	v->a[256658] = anon_sym_AT2;
	v->a[256659] = actions(11756);
	small_parse_table_12833(v);
}

void	small_parse_table_12833(t_small_parse_table_array *v)
{
	v->a[256660] = 5;
	v->a[256661] = anon_sym_BANG;
	v->a[256662] = anon_sym_DOLLAR;
	v->a[256663] = anon_sym_POUND;
	v->a[256664] = anon_sym_0;
	v->a[256665] = anon_sym__;
	v->a[256666] = 3;
	v->a[256667] = actions(3);
	v->a[256668] = 1;
	v->a[256669] = sym_comment;
	v->a[256670] = actions(1310);
	v->a[256671] = 4;
	v->a[256672] = sym__concat;
	v->a[256673] = sym_test_operator;
	v->a[256674] = sym__brace_start;
	v->a[256675] = aux_sym_heredoc_redirect_token1;
	v->a[256676] = actions(1308);
	v->a[256677] = 21;
	v->a[256678] = anon_sym_LPAREN_LPAREN;
	v->a[256679] = anon_sym_SEMI;
	small_parse_table_12834(v);
}

void	small_parse_table_12834(t_small_parse_table_array *v)
{
	v->a[256680] = anon_sym_AMP;
	v->a[256681] = anon_sym_SEMI_SEMI;
	v->a[256682] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[256683] = anon_sym_DOLLAR_LBRACK;
	v->a[256684] = aux_sym_concatenation_token1;
	v->a[256685] = anon_sym_DOLLAR;
	v->a[256686] = sym__special_character;
	v->a[256687] = anon_sym_DQUOTE;
	v->a[256688] = sym_raw_string;
	v->a[256689] = sym_ansi_c_string;
	v->a[256690] = aux_sym_number_token1;
	v->a[256691] = aux_sym_number_token2;
	v->a[256692] = anon_sym_DOLLAR_LBRACE;
	v->a[256693] = anon_sym_DOLLAR_LPAREN;
	v->a[256694] = anon_sym_BQUOTE;
	v->a[256695] = anon_sym_DOLLAR_BQUOTE;
	v->a[256696] = anon_sym_LT_LPAREN;
	v->a[256697] = anon_sym_GT_LPAREN;
	v->a[256698] = sym_word;
	v->a[256699] = 16;
	small_parse_table_12835(v);
}

/* EOF small_parse_table_2566.c */
