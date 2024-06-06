/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_57.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_285(t_small_parse_table_array *v)
{
	v->a[5700] = anon_sym_AMP_AMP;
	v->a[5701] = anon_sym_PIPE_PIPE;
	v->a[5702] = anon_sym_LT;
	v->a[5703] = anon_sym_GT;
	v->a[5704] = anon_sym_GT_GT;
	v->a[5705] = anon_sym_AMP_GT;
	v->a[5706] = anon_sym_AMP_GT_GT;
	v->a[5707] = anon_sym_LT_AMP;
	v->a[5708] = anon_sym_GT_AMP;
	v->a[5709] = anon_sym_GT_PIPE;
	v->a[5710] = anon_sym_LT_AMP_DASH;
	v->a[5711] = anon_sym_GT_AMP_DASH;
	v->a[5712] = anon_sym_LT_LT;
	v->a[5713] = anon_sym_LT_LT_DASH;
	v->a[5714] = anon_sym_AMP;
	v->a[5715] = anon_sym_SEMI;
	v->a[5716] = 20;
	v->a[5717] = actions(3);
	v->a[5718] = 1;
	v->a[5719] = sym_comment;
	small_parse_table_286(v);
}

void	small_parse_table_286(t_small_parse_table_array *v)
{
	v->a[5720] = actions(1009);
	v->a[5721] = 1;
	v->a[5722] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[5723] = actions(1011);
	v->a[5724] = 1;
	v->a[5725] = anon_sym_DOLLAR;
	v->a[5726] = actions(1015);
	v->a[5727] = 1;
	v->a[5728] = anon_sym_DQUOTE;
	v->a[5729] = actions(1017);
	v->a[5730] = 1;
	v->a[5731] = aux_sym_number_token1;
	v->a[5732] = actions(1019);
	v->a[5733] = 1;
	v->a[5734] = aux_sym_number_token2;
	v->a[5735] = actions(1021);
	v->a[5736] = 1;
	v->a[5737] = anon_sym_DOLLAR_LBRACE;
	v->a[5738] = actions(1023);
	v->a[5739] = 1;
	small_parse_table_287(v);
}

void	small_parse_table_287(t_small_parse_table_array *v)
{
	v->a[5740] = anon_sym_DOLLAR_LPAREN;
	v->a[5741] = actions(1027);
	v->a[5742] = 1;
	v->a[5743] = anon_sym_DOLLAR_BQUOTE;
	v->a[5744] = actions(1035);
	v->a[5745] = 1;
	v->a[5746] = sym__brace_start;
	v->a[5747] = actions(1564);
	v->a[5748] = 1;
	v->a[5749] = sym__special_character;
	v->a[5750] = actions(1568);
	v->a[5751] = 1;
	v->a[5752] = sym_variable_name;
	v->a[5753] = actions(1570);
	v->a[5754] = 1;
	v->a[5755] = sym_test_operator;
	v->a[5756] = actions(1589);
	v->a[5757] = 1;
	v->a[5758] = aux_sym__simple_variable_name_token1;
	v->a[5759] = state(1024);
	small_parse_table_288(v);
}

void	small_parse_table_288(t_small_parse_table_array *v)
{
	v->a[5760] = 1;
	v->a[5761] = aux_sym__literal_repeat1;
	v->a[5762] = actions(727);
	v->a[5763] = 2;
	v->a[5764] = sym_file_descriptor;
	v->a[5765] = aux_sym_heredoc_redirect_token1;
	v->a[5766] = actions(1562);
	v->a[5767] = 2;
	v->a[5768] = sym_raw_string;
	v->a[5769] = sym_word;
	v->a[5770] = state(328);
	v->a[5771] = 3;
	v->a[5772] = sym_variable_assignment;
	v->a[5773] = sym_concatenation;
	v->a[5774] = aux_sym_declaration_command_repeat1;
	v->a[5775] = state(906);
	v->a[5776] = 7;
	v->a[5777] = sym_arithmetic_expansion;
	v->a[5778] = sym_brace_expression;
	v->a[5779] = sym_string;
	small_parse_table_289(v);
}

void	small_parse_table_289(t_small_parse_table_array *v)
{
	v->a[5780] = sym_number;
	v->a[5781] = sym_simple_expansion;
	v->a[5782] = sym_expansion;
	v->a[5783] = sym_command_substitution;
	v->a[5784] = actions(725);
	v->a[5785] = 20;
	v->a[5786] = anon_sym_PIPE;
	v->a[5787] = anon_sym_SEMI_SEMI;
	v->a[5788] = anon_sym_PIPE_AMP;
	v->a[5789] = anon_sym_AMP_AMP;
	v->a[5790] = anon_sym_PIPE_PIPE;
	v->a[5791] = anon_sym_LT;
	v->a[5792] = anon_sym_GT;
	v->a[5793] = anon_sym_GT_GT;
	v->a[5794] = anon_sym_AMP_GT;
	v->a[5795] = anon_sym_AMP_GT_GT;
	v->a[5796] = anon_sym_LT_AMP;
	v->a[5797] = anon_sym_GT_AMP;
	v->a[5798] = anon_sym_GT_PIPE;
	v->a[5799] = anon_sym_LT_AMP_DASH;
	small_parse_table_290(v);
}

/* EOF small_parse_table_57.c */
