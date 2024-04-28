/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1888.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9440(t_small_parse_table_array *v)
{
	v->a[188800] = anon_sym_GT_AMP;
	v->a[188801] = anon_sym_DOLLAR;
	v->a[188802] = aux_sym_number_token1;
	v->a[188803] = aux_sym_number_token2;
	v->a[188804] = anon_sym_DOLLAR_LPAREN;
	v->a[188805] = anon_sym_BQUOTE;
	v->a[188806] = sym_word;
	v->a[188807] = actions(1314);
	v->a[188808] = 23;
	v->a[188809] = sym_file_descriptor;
	v->a[188810] = sym__concat;
	v->a[188811] = sym_variable_name;
	v->a[188812] = sym_test_operator;
	v->a[188813] = sym__brace_start;
	v->a[188814] = anon_sym_LPAREN_LPAREN;
	v->a[188815] = anon_sym_GT_GT;
	v->a[188816] = anon_sym_AMP_GT_GT;
	v->a[188817] = anon_sym_GT_PIPE;
	v->a[188818] = anon_sym_LT_AMP_DASH;
	v->a[188819] = anon_sym_GT_AMP_DASH;
	small_parse_table_9441(v);
}

void	small_parse_table_9441(t_small_parse_table_array *v)
{
	v->a[188820] = anon_sym_LT_LT_LT;
	v->a[188821] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[188822] = anon_sym_DOLLAR_LBRACK;
	v->a[188823] = aux_sym_concatenation_token1;
	v->a[188824] = sym__special_character;
	v->a[188825] = anon_sym_DQUOTE;
	v->a[188826] = sym_raw_string;
	v->a[188827] = sym_ansi_c_string;
	v->a[188828] = anon_sym_DOLLAR_LBRACE;
	v->a[188829] = anon_sym_DOLLAR_BQUOTE;
	v->a[188830] = anon_sym_LT_LPAREN;
	v->a[188831] = anon_sym_GT_LPAREN;
	v->a[188832] = 20;
	v->a[188833] = actions(3);
	v->a[188834] = 1;
	v->a[188835] = sym_comment;
	v->a[188836] = actions(8030);
	v->a[188837] = 1;
	v->a[188838] = anon_sym_SLASH;
	v->a[188839] = actions(8032);
	small_parse_table_9442(v);
}

void	small_parse_table_9442(t_small_parse_table_array *v)
{
	v->a[188840] = 1;
	v->a[188841] = anon_sym_PERCENT;
	v->a[188842] = actions(8034);
	v->a[188843] = 1;
	v->a[188844] = anon_sym_COLON;
	v->a[188845] = actions(8038);
	v->a[188846] = 1;
	v->a[188847] = anon_sym_RBRACE3;
	v->a[188848] = actions(8040);
	v->a[188849] = 1;
	v->a[188850] = anon_sym_AT;
	v->a[188851] = actions(8042);
	v->a[188852] = 1;
	v->a[188853] = anon_sym_STAR2;
	v->a[188854] = state(6394);
	v->a[188855] = 1;
	v->a[188856] = aux_sym__expansion_body_repeat1;
	v->a[188857] = state(6972);
	v->a[188858] = 1;
	v->a[188859] = sym__expansion_operator;
	small_parse_table_9443(v);
}

void	small_parse_table_9443(t_small_parse_table_array *v)
{
	v->a[188860] = state(6973);
	v->a[188861] = 1;
	v->a[188862] = sym__expansion_max_length;
	v->a[188863] = state(6974);
	v->a[188864] = 1;
	v->a[188865] = sym__expansion_regex_removal;
	v->a[188866] = state(6978);
	v->a[188867] = 1;
	v->a[188868] = sym__expansion_regex_replacement;
	v->a[188869] = state(6979);
	v->a[188870] = 1;
	v->a[188871] = sym__expansion_regex;
	v->a[188872] = state(6980);
	v->a[188873] = 1;
	v->a[188874] = sym__expansion_expression;
	v->a[188875] = actions(8028);
	v->a[188876] = 2;
	v->a[188877] = anon_sym_COMMA;
	v->a[188878] = anon_sym_CARET;
	v->a[188879] = actions(8048);
	small_parse_table_9444(v);
}

void	small_parse_table_9444(t_small_parse_table_array *v)
{
	v->a[188880] = 2;
	v->a[188881] = anon_sym_COMMA_COMMA;
	v->a[188882] = anon_sym_CARET_CARET;
	v->a[188883] = actions(8036);
	v->a[188884] = 3;
	v->a[188885] = sym__immediate_double_hash;
	v->a[188886] = anon_sym_POUND;
	v->a[188887] = anon_sym_PERCENT_PERCENT;
	v->a[188888] = actions(8046);
	v->a[188889] = 3;
	v->a[188890] = anon_sym_SLASH_SLASH;
	v->a[188891] = anon_sym_SLASH_POUND;
	v->a[188892] = anon_sym_SLASH_PERCENT;
	v->a[188893] = actions(8050);
	v->a[188894] = 3;
	v->a[188895] = sym__external_expansion_sym_hash;
	v->a[188896] = sym__external_expansion_sym_bang;
	v->a[188897] = sym__external_expansion_sym_equal;
	v->a[188898] = actions(8044);
	v->a[188899] = 8;
	small_parse_table_9445(v);
}

/* EOF small_parse_table_1888.c */
