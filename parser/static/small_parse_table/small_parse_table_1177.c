/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1177.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5885(t_small_parse_table_array *v)
{
	v->a[117700] = 1;
	v->a[117701] = anon_sym_DQUOTE;
	v->a[117702] = actions(5995);
	v->a[117703] = 1;
	v->a[117704] = anon_sym_DOLLAR_LBRACE;
	v->a[117705] = actions(5997);
	v->a[117706] = 1;
	v->a[117707] = anon_sym_BQUOTE;
	v->a[117708] = actions(5999);
	v->a[117709] = 1;
	v->a[117710] = anon_sym_DOLLAR_BQUOTE;
	v->a[117711] = actions(6432);
	v->a[117712] = 1;
	v->a[117713] = sym_word;
	v->a[117714] = actions(6436);
	v->a[117715] = 1;
	v->a[117716] = sym__special_character;
	v->a[117717] = actions(6440);
	v->a[117718] = 1;
	v->a[117719] = sym__comment_word;
	small_parse_table_5886(v);
}

void	small_parse_table_5886(t_small_parse_table_array *v)
{
	v->a[117720] = actions(6915);
	v->a[117721] = 1;
	v->a[117722] = anon_sym_DOLLAR;
	v->a[117723] = actions(6438);
	v->a[117724] = 3;
	v->a[117725] = sym_test_operator;
	v->a[117726] = sym__bare_dollar;
	v->a[117727] = sym_raw_string;
	v->a[117728] = state(1201);
	v->a[117729] = 7;
	v->a[117730] = sym_arithmetic_expansion;
	v->a[117731] = sym_brace_expression;
	v->a[117732] = sym_string;
	v->a[117733] = sym_number;
	v->a[117734] = sym_simple_expansion;
	v->a[117735] = sym_expansion;
	v->a[117736] = sym_command_substitution;
	v->a[117737] = 16;
	v->a[117738] = actions(3);
	v->a[117739] = 1;
	small_parse_table_5887(v);
}

void	small_parse_table_5887(t_small_parse_table_array *v)
{
	v->a[117740] = sym_comment;
	v->a[117741] = actions(2160);
	v->a[117742] = 1;
	v->a[117743] = aux_sym_number_token1;
	v->a[117744] = actions(2162);
	v->a[117745] = 1;
	v->a[117746] = aux_sym_number_token2;
	v->a[117747] = actions(2166);
	v->a[117748] = 1;
	v->a[117749] = anon_sym_DOLLAR_LPAREN;
	v->a[117750] = actions(2174);
	v->a[117751] = 1;
	v->a[117752] = sym__brace_start;
	v->a[117753] = actions(5989);
	v->a[117754] = 1;
	v->a[117755] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[117756] = actions(5993);
	v->a[117757] = 1;
	v->a[117758] = anon_sym_DQUOTE;
	v->a[117759] = actions(5995);
	small_parse_table_5888(v);
}

void	small_parse_table_5888(t_small_parse_table_array *v)
{
	v->a[117760] = 1;
	v->a[117761] = anon_sym_DOLLAR_LBRACE;
	v->a[117762] = actions(5997);
	v->a[117763] = 1;
	v->a[117764] = anon_sym_BQUOTE;
	v->a[117765] = actions(5999);
	v->a[117766] = 1;
	v->a[117767] = anon_sym_DOLLAR_BQUOTE;
	v->a[117768] = actions(6432);
	v->a[117769] = 1;
	v->a[117770] = sym_word;
	v->a[117771] = actions(6436);
	v->a[117772] = 1;
	v->a[117773] = sym__special_character;
	v->a[117774] = actions(6440);
	v->a[117775] = 1;
	v->a[117776] = sym__comment_word;
	v->a[117777] = actions(6917);
	v->a[117778] = 1;
	v->a[117779] = anon_sym_DOLLAR;
	small_parse_table_5889(v);
}

void	small_parse_table_5889(t_small_parse_table_array *v)
{
	v->a[117780] = actions(6438);
	v->a[117781] = 3;
	v->a[117782] = sym_test_operator;
	v->a[117783] = sym__bare_dollar;
	v->a[117784] = sym_raw_string;
	v->a[117785] = state(1201);
	v->a[117786] = 7;
	v->a[117787] = sym_arithmetic_expansion;
	v->a[117788] = sym_brace_expression;
	v->a[117789] = sym_string;
	v->a[117790] = sym_number;
	v->a[117791] = sym_simple_expansion;
	v->a[117792] = sym_expansion;
	v->a[117793] = sym_command_substitution;
	v->a[117794] = 16;
	v->a[117795] = actions(3);
	v->a[117796] = 1;
	v->a[117797] = sym_comment;
	v->a[117798] = actions(5407);
	v->a[117799] = 1;
	small_parse_table_5890(v);
}

/* EOF small_parse_table_1177.c */
