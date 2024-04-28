/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1907.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9535(t_small_parse_table_array *v)
{
	v->a[190700] = 2;
	v->a[190701] = anon_sym_LPAREN_LPAREN;
	v->a[190702] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[190703] = actions(8080);
	v->a[190704] = 2;
	v->a[190705] = anon_sym_LT_LPAREN;
	v->a[190706] = anon_sym_GT_LPAREN;
	v->a[190707] = actions(8408);
	v->a[190708] = 2;
	v->a[190709] = sym_raw_string;
	v->a[190710] = sym_ansi_c_string;
	v->a[190711] = state(2158);
	v->a[190712] = 2;
	v->a[190713] = sym_concatenation;
	v->a[190714] = sym_array;
	v->a[190715] = state(1558);
	v->a[190716] = 9;
	v->a[190717] = sym_arithmetic_expansion;
	v->a[190718] = sym_brace_expression;
	v->a[190719] = sym_string;
	small_parse_table_9536(v);
}

void	small_parse_table_9536(t_small_parse_table_array *v)
{
	v->a[190720] = sym_translated_string;
	v->a[190721] = sym_number;
	v->a[190722] = sym_simple_expansion;
	v->a[190723] = sym_expansion;
	v->a[190724] = sym_command_substitution;
	v->a[190725] = sym_process_substitution;
	v->a[190726] = 23;
	v->a[190727] = actions(3);
	v->a[190728] = 1;
	v->a[190729] = sym_comment;
	v->a[190730] = actions(7956);
	v->a[190731] = 1;
	v->a[190732] = anon_sym_LPAREN;
	v->a[190733] = actions(7958);
	v->a[190734] = 1;
	v->a[190735] = anon_sym_DOLLAR_LBRACK;
	v->a[190736] = actions(7960);
	v->a[190737] = 1;
	v->a[190738] = anon_sym_DOLLAR;
	v->a[190739] = actions(7964);
	small_parse_table_9537(v);
}

void	small_parse_table_9537(t_small_parse_table_array *v)
{
	v->a[190740] = 1;
	v->a[190741] = anon_sym_DQUOTE;
	v->a[190742] = actions(7968);
	v->a[190743] = 1;
	v->a[190744] = aux_sym_number_token1;
	v->a[190745] = actions(7970);
	v->a[190746] = 1;
	v->a[190747] = aux_sym_number_token2;
	v->a[190748] = actions(7972);
	v->a[190749] = 1;
	v->a[190750] = anon_sym_DOLLAR_LBRACE;
	v->a[190751] = actions(7974);
	v->a[190752] = 1;
	v->a[190753] = anon_sym_DOLLAR_LPAREN;
	v->a[190754] = actions(7976);
	v->a[190755] = 1;
	v->a[190756] = anon_sym_BQUOTE;
	v->a[190757] = actions(7978);
	v->a[190758] = 1;
	v->a[190759] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_9538(v);
}

void	small_parse_table_9538(t_small_parse_table_array *v)
{
	v->a[190760] = actions(7982);
	v->a[190761] = 1;
	v->a[190762] = sym__comment_word;
	v->a[190763] = actions(7984);
	v->a[190764] = 1;
	v->a[190765] = sym__empty_value;
	v->a[190766] = actions(7988);
	v->a[190767] = 1;
	v->a[190768] = sym__brace_start;
	v->a[190769] = actions(8412);
	v->a[190770] = 1;
	v->a[190771] = sym_word;
	v->a[190772] = actions(8414);
	v->a[190773] = 1;
	v->a[190774] = sym__special_character;
	v->a[190775] = actions(8418);
	v->a[190776] = 1;
	v->a[190777] = sym_test_operator;
	v->a[190778] = state(4287);
	v->a[190779] = 1;
	small_parse_table_9539(v);
}

void	small_parse_table_9539(t_small_parse_table_array *v)
{
	v->a[190780] = aux_sym__literal_repeat1;
	v->a[190781] = actions(7954);
	v->a[190782] = 2;
	v->a[190783] = anon_sym_LPAREN_LPAREN;
	v->a[190784] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[190785] = actions(7980);
	v->a[190786] = 2;
	v->a[190787] = anon_sym_LT_LPAREN;
	v->a[190788] = anon_sym_GT_LPAREN;
	v->a[190789] = actions(8416);
	v->a[190790] = 2;
	v->a[190791] = sym_raw_string;
	v->a[190792] = sym_ansi_c_string;
	v->a[190793] = state(4759);
	v->a[190794] = 2;
	v->a[190795] = sym_concatenation;
	v->a[190796] = sym_array;
	v->a[190797] = state(4531);
	v->a[190798] = 9;
	v->a[190799] = sym_arithmetic_expansion;
	small_parse_table_9540(v);
}

/* EOF small_parse_table_1907.c */
