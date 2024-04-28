/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_377.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1885(t_small_parse_table_array *v)
{
	v->a[37700] = anon_sym_LT_AMP_DASH;
	v->a[37701] = anon_sym_GT_AMP_DASH;
	v->a[37702] = anon_sym_LT_LT_DASH;
	v->a[37703] = 21;
	v->a[37704] = actions(3);
	v->a[37705] = 1;
	v->a[37706] = sym_comment;
	v->a[37707] = actions(3580);
	v->a[37708] = 1;
	v->a[37709] = anon_sym_DQUOTE;
	v->a[37710] = actions(3610);
	v->a[37711] = 1;
	v->a[37712] = anon_sym_DOLLAR_LBRACK;
	v->a[37713] = actions(3612);
	v->a[37714] = 1;
	v->a[37715] = anon_sym_DOLLAR;
	v->a[37716] = actions(3616);
	v->a[37717] = 1;
	v->a[37718] = aux_sym_number_token1;
	v->a[37719] = actions(3618);
	small_parse_table_1886(v);
}

void	small_parse_table_1886(t_small_parse_table_array *v)
{
	v->a[37720] = 1;
	v->a[37721] = aux_sym_number_token2;
	v->a[37722] = actions(3620);
	v->a[37723] = 1;
	v->a[37724] = anon_sym_DOLLAR_LBRACE;
	v->a[37725] = actions(3622);
	v->a[37726] = 1;
	v->a[37727] = anon_sym_DOLLAR_LPAREN;
	v->a[37728] = actions(3624);
	v->a[37729] = 1;
	v->a[37730] = anon_sym_BQUOTE;
	v->a[37731] = actions(3626);
	v->a[37732] = 1;
	v->a[37733] = anon_sym_DOLLAR_BQUOTE;
	v->a[37734] = actions(3632);
	v->a[37735] = 1;
	v->a[37736] = sym__brace_start;
	v->a[37737] = actions(4977);
	v->a[37738] = 1;
	v->a[37739] = sym__special_character;
	small_parse_table_1887(v);
}

void	small_parse_table_1887(t_small_parse_table_array *v)
{
	v->a[37740] = actions(4979);
	v->a[37741] = 1;
	v->a[37742] = sym_test_operator;
	v->a[37743] = state(2270);
	v->a[37744] = 1;
	v->a[37745] = aux_sym__literal_repeat1;
	v->a[37746] = actions(2096);
	v->a[37747] = 2;
	v->a[37748] = sym_file_descriptor;
	v->a[37749] = aux_sym_heredoc_redirect_token1;
	v->a[37750] = actions(3608);
	v->a[37751] = 2;
	v->a[37752] = anon_sym_LPAREN_LPAREN;
	v->a[37753] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[37754] = actions(3628);
	v->a[37755] = 2;
	v->a[37756] = anon_sym_LT_LPAREN;
	v->a[37757] = anon_sym_GT_LPAREN;
	v->a[37758] = state(976);
	v->a[37759] = 2;
	small_parse_table_1888(v);
}

void	small_parse_table_1888(t_small_parse_table_array *v)
{
	v->a[37760] = sym_concatenation;
	v->a[37761] = aux_sym_for_statement_repeat1;
	v->a[37762] = actions(4975);
	v->a[37763] = 3;
	v->a[37764] = sym_raw_string;
	v->a[37765] = sym_ansi_c_string;
	v->a[37766] = sym_word;
	v->a[37767] = state(2572);
	v->a[37768] = 9;
	v->a[37769] = sym_arithmetic_expansion;
	v->a[37770] = sym_brace_expression;
	v->a[37771] = sym_string;
	v->a[37772] = sym_translated_string;
	v->a[37773] = sym_number;
	v->a[37774] = sym_simple_expansion;
	v->a[37775] = sym_expansion;
	v->a[37776] = sym_command_substitution;
	v->a[37777] = sym_process_substitution;
	v->a[37778] = actions(2094);
	v->a[37779] = 16;
	small_parse_table_1889(v);
}

void	small_parse_table_1889(t_small_parse_table_array *v)
{
	v->a[37780] = anon_sym_PIPE_PIPE;
	v->a[37781] = anon_sym_AMP_AMP;
	v->a[37782] = anon_sym_PIPE;
	v->a[37783] = anon_sym_LT;
	v->a[37784] = anon_sym_GT;
	v->a[37785] = anon_sym_LT_LT;
	v->a[37786] = anon_sym_GT_GT;
	v->a[37787] = anon_sym_PIPE_AMP;
	v->a[37788] = anon_sym_AMP_GT;
	v->a[37789] = anon_sym_AMP_GT_GT;
	v->a[37790] = anon_sym_LT_AMP;
	v->a[37791] = anon_sym_GT_AMP;
	v->a[37792] = anon_sym_GT_PIPE;
	v->a[37793] = anon_sym_LT_AMP_DASH;
	v->a[37794] = anon_sym_GT_AMP_DASH;
	v->a[37795] = anon_sym_LT_LT_DASH;
	v->a[37796] = 21;
	v->a[37797] = actions(3);
	v->a[37798] = 1;
	v->a[37799] = sym_comment;
	small_parse_table_1890(v);
}

/* EOF small_parse_table_377.c */
