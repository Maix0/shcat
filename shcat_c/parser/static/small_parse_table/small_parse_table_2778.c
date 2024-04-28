/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2778.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_13890(t_small_parse_table_array *v)
{
	v->a[277800] = actions(12185);
	v->a[277801] = 1;
	v->a[277802] = anon_sym_DOLLAR_BQUOTE;
	v->a[277803] = actions(12496);
	v->a[277804] = 1;
	v->a[277805] = aux_sym__c_word_token1;
	v->a[277806] = state(3442);
	v->a[277807] = 1;
	v->a[277808] = sym__c_unary_expression;
	v->a[277809] = state(3443);
	v->a[277810] = 1;
	v->a[277811] = sym__c_binary_expression;
	v->a[277812] = state(3444);
	v->a[277813] = 1;
	v->a[277814] = sym__c_postfix_expression;
	v->a[277815] = actions(12165);
	v->a[277816] = 2;
	v->a[277817] = anon_sym_PLUS_PLUS;
	v->a[277818] = anon_sym_DASH_DASH;
	v->a[277819] = state(3394);
	small_parse_table_13891(v);
}

void	small_parse_table_13891(t_small_parse_table_array *v)
{
	v->a[277820] = 7;
	v->a[277821] = sym__c_expression_not_assignment;
	v->a[277822] = sym__c_parenthesized_expression;
	v->a[277823] = sym_string;
	v->a[277824] = sym_number;
	v->a[277825] = sym_simple_expansion;
	v->a[277826] = sym_expansion;
	v->a[277827] = sym_command_substitution;
	v->a[277828] = 13;
	v->a[277829] = actions(71);
	v->a[277830] = 1;
	v->a[277831] = sym_comment;
	v->a[277832] = actions(4253);
	v->a[277833] = 1;
	v->a[277834] = anon_sym_PIPE;
	v->a[277835] = actions(4348);
	v->a[277836] = 1;
	v->a[277837] = anon_sym_PIPE_AMP;
	v->a[277838] = actions(5994);
	v->a[277839] = 1;
	small_parse_table_13892(v);
}

void	small_parse_table_13892(t_small_parse_table_array *v)
{
	v->a[277840] = anon_sym_LT_LT;
	v->a[277841] = actions(5996);
	v->a[277842] = 1;
	v->a[277843] = anon_sym_LT_LT_DASH;
	v->a[277844] = actions(12504);
	v->a[277845] = 1;
	v->a[277846] = anon_sym_LT_LT_LT;
	v->a[277847] = actions(12506);
	v->a[277848] = 1;
	v->a[277849] = sym_file_descriptor;
	v->a[277850] = state(5556);
	v->a[277851] = 1;
	v->a[277852] = sym_herestring_redirect;
	v->a[277853] = actions(5992);
	v->a[277854] = 2;
	v->a[277855] = anon_sym_PIPE_PIPE;
	v->a[277856] = anon_sym_AMP_AMP;
	v->a[277857] = actions(12502);
	v->a[277858] = 2;
	v->a[277859] = anon_sym_LT_AMP_DASH;
	small_parse_table_13893(v);
}

void	small_parse_table_13893(t_small_parse_table_array *v)
{
	v->a[277860] = anon_sym_GT_AMP_DASH;
	v->a[277861] = actions(12500);
	v->a[277862] = 3;
	v->a[277863] = anon_sym_GT_GT;
	v->a[277864] = anon_sym_AMP_GT_GT;
	v->a[277865] = anon_sym_GT_PIPE;
	v->a[277866] = state(5350);
	v->a[277867] = 3;
	v->a[277868] = sym_file_redirect;
	v->a[277869] = sym_heredoc_redirect;
	v->a[277870] = aux_sym_redirected_statement_repeat1;
	v->a[277871] = actions(12498);
	v->a[277872] = 5;
	v->a[277873] = anon_sym_LT;
	v->a[277874] = anon_sym_GT;
	v->a[277875] = anon_sym_AMP_GT;
	v->a[277876] = anon_sym_LT_AMP;
	v->a[277877] = anon_sym_GT_AMP;
	v->a[277878] = 16;
	v->a[277879] = actions(71);
	small_parse_table_13894(v);
}

void	small_parse_table_13894(t_small_parse_table_array *v)
{
	v->a[277880] = 1;
	v->a[277881] = sym_comment;
	v->a[277882] = actions(12167);
	v->a[277883] = 1;
	v->a[277884] = anon_sym_LPAREN;
	v->a[277885] = actions(12171);
	v->a[277886] = 1;
	v->a[277887] = anon_sym_DOLLAR;
	v->a[277888] = actions(12173);
	v->a[277889] = 1;
	v->a[277890] = anon_sym_DQUOTE;
	v->a[277891] = actions(12175);
	v->a[277892] = 1;
	v->a[277893] = aux_sym_number_token1;
	v->a[277894] = actions(12177);
	v->a[277895] = 1;
	v->a[277896] = aux_sym_number_token2;
	v->a[277897] = actions(12179);
	v->a[277898] = 1;
	v->a[277899] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_13895(v);
}

/* EOF small_parse_table_2778.c */
