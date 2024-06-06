/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1137.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5685(t_small_parse_table_array *v)
{
	v->a[113700] = sym__comment_word;
	v->a[113701] = actions(6571);
	v->a[113702] = 3;
	v->a[113703] = sym_test_operator;
	v->a[113704] = sym__bare_dollar;
	v->a[113705] = sym_raw_string;
	v->a[113706] = state(3425);
	v->a[113707] = 7;
	v->a[113708] = sym_arithmetic_expansion;
	v->a[113709] = sym_brace_expression;
	v->a[113710] = sym_string;
	v->a[113711] = sym_number;
	v->a[113712] = sym_simple_expansion;
	v->a[113713] = sym_expansion;
	v->a[113714] = sym_command_substitution;
	v->a[113715] = 3;
	v->a[113716] = actions(3);
	v->a[113717] = 1;
	v->a[113718] = sym_comment;
	v->a[113719] = actions(6081);
	small_parse_table_5686(v);
}

void	small_parse_table_5686(t_small_parse_table_array *v)
{
	v->a[113720] = 2;
	v->a[113721] = sym_file_descriptor;
	v->a[113722] = aux_sym_heredoc_redirect_token1;
	v->a[113723] = actions(6083);
	v->a[113724] = 21;
	v->a[113725] = anon_sym_PIPE;
	v->a[113726] = anon_sym_SEMI_SEMI;
	v->a[113727] = anon_sym_SEMI_AMP;
	v->a[113728] = anon_sym_SEMI_SEMI_AMP;
	v->a[113729] = anon_sym_PIPE_AMP;
	v->a[113730] = anon_sym_AMP_AMP;
	v->a[113731] = anon_sym_PIPE_PIPE;
	v->a[113732] = anon_sym_LT;
	v->a[113733] = anon_sym_GT;
	v->a[113734] = anon_sym_GT_GT;
	v->a[113735] = anon_sym_AMP_GT;
	v->a[113736] = anon_sym_AMP_GT_GT;
	v->a[113737] = anon_sym_LT_AMP;
	v->a[113738] = anon_sym_GT_AMP;
	v->a[113739] = anon_sym_GT_PIPE;
	small_parse_table_5687(v);
}

void	small_parse_table_5687(t_small_parse_table_array *v)
{
	v->a[113740] = anon_sym_LT_AMP_DASH;
	v->a[113741] = anon_sym_GT_AMP_DASH;
	v->a[113742] = anon_sym_LT_LT;
	v->a[113743] = anon_sym_LT_LT_DASH;
	v->a[113744] = anon_sym_AMP;
	v->a[113745] = anon_sym_SEMI;
	v->a[113746] = 16;
	v->a[113747] = actions(3);
	v->a[113748] = 1;
	v->a[113749] = sym_comment;
	v->a[113750] = actions(1861);
	v->a[113751] = 1;
	v->a[113752] = anon_sym_DOLLAR;
	v->a[113753] = actions(1867);
	v->a[113754] = 1;
	v->a[113755] = aux_sym_number_token1;
	v->a[113756] = actions(1869);
	v->a[113757] = 1;
	v->a[113758] = aux_sym_number_token2;
	v->a[113759] = actions(1873);
	small_parse_table_5688(v);
}

void	small_parse_table_5688(t_small_parse_table_array *v)
{
	v->a[113760] = 1;
	v->a[113761] = anon_sym_DOLLAR_LPAREN;
	v->a[113762] = actions(1883);
	v->a[113763] = 1;
	v->a[113764] = sym__brace_start;
	v->a[113765] = actions(6575);
	v->a[113766] = 1;
	v->a[113767] = sym_word;
	v->a[113768] = actions(6577);
	v->a[113769] = 1;
	v->a[113770] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[113771] = actions(6579);
	v->a[113772] = 1;
	v->a[113773] = sym__special_character;
	v->a[113774] = actions(6581);
	v->a[113775] = 1;
	v->a[113776] = anon_sym_DQUOTE;
	v->a[113777] = actions(6585);
	v->a[113778] = 1;
	v->a[113779] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_5689(v);
}

void	small_parse_table_5689(t_small_parse_table_array *v)
{
	v->a[113780] = actions(6587);
	v->a[113781] = 1;
	v->a[113782] = anon_sym_BQUOTE;
	v->a[113783] = actions(6589);
	v->a[113784] = 1;
	v->a[113785] = anon_sym_DOLLAR_BQUOTE;
	v->a[113786] = actions(6591);
	v->a[113787] = 1;
	v->a[113788] = sym__comment_word;
	v->a[113789] = actions(6583);
	v->a[113790] = 3;
	v->a[113791] = sym_test_operator;
	v->a[113792] = sym__bare_dollar;
	v->a[113793] = sym_raw_string;
	v->a[113794] = state(1054);
	v->a[113795] = 7;
	v->a[113796] = sym_arithmetic_expansion;
	v->a[113797] = sym_brace_expression;
	v->a[113798] = sym_string;
	v->a[113799] = sym_number;
	small_parse_table_5690(v);
}

/* EOF small_parse_table_1137.c */
