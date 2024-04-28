/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_588.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2940(t_small_parse_table_array *v)
{
	v->a[58800] = anon_sym_LT_LT;
	v->a[58801] = anon_sym_GT_GT;
	v->a[58802] = anon_sym_SEMI_SEMI;
	v->a[58803] = anon_sym_SEMI_AMP;
	v->a[58804] = anon_sym_SEMI_SEMI_AMP;
	v->a[58805] = anon_sym_PIPE_AMP;
	v->a[58806] = anon_sym_AMP_GT;
	v->a[58807] = anon_sym_AMP_GT_GT;
	v->a[58808] = anon_sym_LT_AMP;
	v->a[58809] = anon_sym_GT_AMP;
	v->a[58810] = anon_sym_GT_PIPE;
	v->a[58811] = anon_sym_LT_AMP_DASH;
	v->a[58812] = anon_sym_GT_AMP_DASH;
	v->a[58813] = anon_sym_LT_LT_DASH;
	v->a[58814] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[58815] = anon_sym_DOLLAR_LBRACK;
	v->a[58816] = aux_sym_concatenation_token1;
	v->a[58817] = anon_sym_DOLLAR;
	v->a[58818] = sym__special_character;
	v->a[58819] = anon_sym_DQUOTE;
	small_parse_table_2941(v);
}

void	small_parse_table_2941(t_small_parse_table_array *v)
{
	v->a[58820] = sym_raw_string;
	v->a[58821] = sym_ansi_c_string;
	v->a[58822] = aux_sym_number_token1;
	v->a[58823] = aux_sym_number_token2;
	v->a[58824] = anon_sym_DOLLAR_LBRACE;
	v->a[58825] = anon_sym_DOLLAR_LPAREN;
	v->a[58826] = anon_sym_BQUOTE;
	v->a[58827] = anon_sym_DOLLAR_BQUOTE;
	v->a[58828] = anon_sym_LT_LPAREN;
	v->a[58829] = anon_sym_GT_LPAREN;
	v->a[58830] = aux_sym__simple_variable_name_token1;
	v->a[58831] = sym_word;
	v->a[58832] = 21;
	v->a[58833] = actions(3);
	v->a[58834] = 1;
	v->a[58835] = sym_comment;
	v->a[58836] = actions(5608);
	v->a[58837] = 1;
	v->a[58838] = anon_sym_DOLLAR_LBRACK;
	v->a[58839] = actions(5610);
	small_parse_table_2942(v);
}

void	small_parse_table_2942(t_small_parse_table_array *v)
{
	v->a[58840] = 1;
	v->a[58841] = anon_sym_DOLLAR;
	v->a[58842] = actions(5612);
	v->a[58843] = 1;
	v->a[58844] = sym__special_character;
	v->a[58845] = actions(5614);
	v->a[58846] = 1;
	v->a[58847] = anon_sym_DQUOTE;
	v->a[58848] = actions(5616);
	v->a[58849] = 1;
	v->a[58850] = aux_sym_number_token1;
	v->a[58851] = actions(5618);
	v->a[58852] = 1;
	v->a[58853] = aux_sym_number_token2;
	v->a[58854] = actions(5620);
	v->a[58855] = 1;
	v->a[58856] = anon_sym_DOLLAR_LBRACE;
	v->a[58857] = actions(5622);
	v->a[58858] = 1;
	v->a[58859] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_2943(v);
}

void	small_parse_table_2943(t_small_parse_table_array *v)
{
	v->a[58860] = actions(5624);
	v->a[58861] = 1;
	v->a[58862] = anon_sym_BQUOTE;
	v->a[58863] = actions(5626);
	v->a[58864] = 1;
	v->a[58865] = anon_sym_DOLLAR_BQUOTE;
	v->a[58866] = actions(5630);
	v->a[58867] = 1;
	v->a[58868] = sym_test_operator;
	v->a[58869] = actions(5632);
	v->a[58870] = 1;
	v->a[58871] = sym__brace_start;
	v->a[58872] = state(3469);
	v->a[58873] = 1;
	v->a[58874] = aux_sym__literal_repeat1;
	v->a[58875] = actions(2074);
	v->a[58876] = 2;
	v->a[58877] = sym_file_descriptor;
	v->a[58878] = aux_sym_heredoc_redirect_token1;
	v->a[58879] = actions(5606);
	small_parse_table_2944(v);
}

void	small_parse_table_2944(t_small_parse_table_array *v)
{
	v->a[58880] = 2;
	v->a[58881] = anon_sym_LPAREN_LPAREN;
	v->a[58882] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[58883] = actions(5628);
	v->a[58884] = 2;
	v->a[58885] = anon_sym_LT_LPAREN;
	v->a[58886] = anon_sym_GT_LPAREN;
	v->a[58887] = state(1314);
	v->a[58888] = 2;
	v->a[58889] = sym_concatenation;
	v->a[58890] = aux_sym_for_statement_repeat1;
	v->a[58891] = actions(5604);
	v->a[58892] = 3;
	v->a[58893] = sym_raw_string;
	v->a[58894] = sym_ansi_c_string;
	v->a[58895] = sym_word;
	v->a[58896] = state(3093);
	v->a[58897] = 9;
	v->a[58898] = sym_arithmetic_expansion;
	v->a[58899] = sym_brace_expression;
	small_parse_table_2945(v);
}

/* EOF small_parse_table_588.c */
