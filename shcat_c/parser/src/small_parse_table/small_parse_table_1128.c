/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1128.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5640(t_small_parse_table_array *v)
{
	v->a[112800] = anon_sym_AMP_GT;
	v->a[112801] = anon_sym_AMP_GT_GT;
	v->a[112802] = anon_sym_LT_AMP;
	v->a[112803] = anon_sym_GT_AMP;
	v->a[112804] = anon_sym_GT_PIPE;
	v->a[112805] = anon_sym_LT_AMP_DASH;
	v->a[112806] = anon_sym_GT_AMP_DASH;
	v->a[112807] = anon_sym_LT_LT_DASH;
	v->a[112808] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[112809] = anon_sym_DOLLAR_LBRACK;
	v->a[112810] = anon_sym_DOLLAR;
	v->a[112811] = anon_sym_DQUOTE;
	v->a[112812] = sym_raw_string;
	v->a[112813] = sym_ansi_c_string;
	v->a[112814] = aux_sym_number_token1;
	v->a[112815] = aux_sym_number_token2;
	v->a[112816] = anon_sym_DOLLAR_LBRACE;
	v->a[112817] = anon_sym_DOLLAR_LPAREN;
	v->a[112818] = anon_sym_BQUOTE;
	v->a[112819] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_5641(v);
}

void	small_parse_table_5641(t_small_parse_table_array *v)
{
	v->a[112820] = anon_sym_LT_LPAREN;
	v->a[112821] = anon_sym_GT_LPAREN;
	v->a[112822] = aux_sym__simple_variable_name_token1;
	v->a[112823] = sym_word;
	v->a[112824] = 8;
	v->a[112825] = actions(3);
	v->a[112826] = 1;
	v->a[112827] = sym_comment;
	v->a[112828] = actions(5826);
	v->a[112829] = 1;
	v->a[112830] = aux_sym_heredoc_redirect_token1;
	v->a[112831] = actions(5828);
	v->a[112832] = 1;
	v->a[112833] = sym_file_descriptor;
	v->a[112834] = actions(6355);
	v->a[112835] = 1;
	v->a[112836] = anon_sym_RPAREN;
	v->a[112837] = actions(5831);
	v->a[112838] = 3;
	v->a[112839] = sym_variable_name;
	small_parse_table_5642(v);
}

void	small_parse_table_5642(t_small_parse_table_array *v)
{
	v->a[112840] = sym_test_operator;
	v->a[112841] = sym__brace_start;
	v->a[112842] = actions(5821);
	v->a[112843] = 9;
	v->a[112844] = anon_sym_SEMI;
	v->a[112845] = anon_sym_PIPE_PIPE;
	v->a[112846] = anon_sym_AMP_AMP;
	v->a[112847] = anon_sym_PIPE;
	v->a[112848] = anon_sym_AMP;
	v->a[112849] = anon_sym_LT_LT;
	v->a[112850] = anon_sym_SEMI_SEMI;
	v->a[112851] = anon_sym_PIPE_AMP;
	v->a[112852] = anon_sym_LT_LT_DASH;
	v->a[112853] = actions(5823);
	v->a[112854] = 11;
	v->a[112855] = anon_sym_LT;
	v->a[112856] = anon_sym_GT;
	v->a[112857] = anon_sym_GT_GT;
	v->a[112858] = anon_sym_AMP_GT;
	v->a[112859] = anon_sym_AMP_GT_GT;
	small_parse_table_5643(v);
}

void	small_parse_table_5643(t_small_parse_table_array *v)
{
	v->a[112860] = anon_sym_LT_AMP;
	v->a[112861] = anon_sym_GT_AMP;
	v->a[112862] = anon_sym_GT_PIPE;
	v->a[112863] = anon_sym_LT_AMP_DASH;
	v->a[112864] = anon_sym_GT_AMP_DASH;
	v->a[112865] = anon_sym_LT_LT_LT;
	v->a[112866] = actions(5819);
	v->a[112867] = 17;
	v->a[112868] = anon_sym_LPAREN_LPAREN;
	v->a[112869] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[112870] = anon_sym_DOLLAR_LBRACK;
	v->a[112871] = anon_sym_DOLLAR;
	v->a[112872] = sym__special_character;
	v->a[112873] = anon_sym_DQUOTE;
	v->a[112874] = sym_raw_string;
	v->a[112875] = sym_ansi_c_string;
	v->a[112876] = aux_sym_number_token1;
	v->a[112877] = aux_sym_number_token2;
	v->a[112878] = anon_sym_DOLLAR_LBRACE;
	v->a[112879] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_5644(v);
}

void	small_parse_table_5644(t_small_parse_table_array *v)
{
	v->a[112880] = anon_sym_BQUOTE;
	v->a[112881] = anon_sym_DOLLAR_BQUOTE;
	v->a[112882] = anon_sym_LT_LPAREN;
	v->a[112883] = anon_sym_GT_LPAREN;
	v->a[112884] = sym_word;
	v->a[112885] = 26;
	v->a[112886] = actions(71);
	v->a[112887] = 1;
	v->a[112888] = sym_comment;
	v->a[112889] = actions(1131);
	v->a[112890] = 1;
	v->a[112891] = anon_sym_LPAREN;
	v->a[112892] = actions(1141);
	v->a[112893] = 1;
	v->a[112894] = anon_sym_DOLLAR_LBRACK;
	v->a[112895] = actions(1145);
	v->a[112896] = 1;
	v->a[112897] = anon_sym_DOLLAR;
	v->a[112898] = actions(1149);
	v->a[112899] = 1;
	small_parse_table_5645(v);
}

/* EOF small_parse_table_1128.c */
