/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1997.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9985(t_small_parse_table_array *v)
{
	v->a[199700] = actions(9072);
	v->a[199701] = 1;
	v->a[199702] = anon_sym_DOLLAR_LBRACE;
	v->a[199703] = actions(9074);
	v->a[199704] = 1;
	v->a[199705] = anon_sym_BQUOTE;
	v->a[199706] = actions(9076);
	v->a[199707] = 1;
	v->a[199708] = anon_sym_DOLLAR_BQUOTE;
	v->a[199709] = state(1899);
	v->a[199710] = 1;
	v->a[199711] = aux_sym__literal_repeat1;
	v->a[199712] = actions(9062);
	v->a[199713] = 2;
	v->a[199714] = anon_sym_LPAREN_LPAREN;
	v->a[199715] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[199716] = actions(9070);
	v->a[199717] = 2;
	v->a[199718] = sym_raw_string;
	v->a[199719] = sym_ansi_c_string;
	small_parse_table_9986(v);
}

void	small_parse_table_9986(t_small_parse_table_array *v)
{
	v->a[199720] = actions(9078);
	v->a[199721] = 2;
	v->a[199722] = anon_sym_LT_LPAREN;
	v->a[199723] = anon_sym_GT_LPAREN;
	v->a[199724] = state(615);
	v->a[199725] = 2;
	v->a[199726] = sym_concatenation;
	v->a[199727] = aux_sym_for_statement_repeat1;
	v->a[199728] = state(1394);
	v->a[199729] = 9;
	v->a[199730] = sym_arithmetic_expansion;
	v->a[199731] = sym_brace_expression;
	v->a[199732] = sym_string;
	v->a[199733] = sym_translated_string;
	v->a[199734] = sym_number;
	v->a[199735] = sym_simple_expansion;
	v->a[199736] = sym_expansion;
	v->a[199737] = sym_command_substitution;
	v->a[199738] = sym_process_substitution;
	v->a[199739] = 19;
	small_parse_table_9987(v);
}

void	small_parse_table_9987(t_small_parse_table_array *v)
{
	v->a[199740] = actions(3);
	v->a[199741] = 1;
	v->a[199742] = sym_comment;
	v->a[199743] = actions(363);
	v->a[199744] = 1;
	v->a[199745] = anon_sym_DOLLAR_LBRACK;
	v->a[199746] = actions(367);
	v->a[199747] = 1;
	v->a[199748] = anon_sym_DOLLAR;
	v->a[199749] = actions(371);
	v->a[199750] = 1;
	v->a[199751] = anon_sym_DQUOTE;
	v->a[199752] = actions(375);
	v->a[199753] = 1;
	v->a[199754] = aux_sym_number_token1;
	v->a[199755] = actions(377);
	v->a[199756] = 1;
	v->a[199757] = aux_sym_number_token2;
	v->a[199758] = actions(379);
	v->a[199759] = 1;
	small_parse_table_9988(v);
}

void	small_parse_table_9988(t_small_parse_table_array *v)
{
	v->a[199760] = anon_sym_DOLLAR_LBRACE;
	v->a[199761] = actions(381);
	v->a[199762] = 1;
	v->a[199763] = anon_sym_DOLLAR_LPAREN;
	v->a[199764] = actions(385);
	v->a[199765] = 1;
	v->a[199766] = anon_sym_DOLLAR_BQUOTE;
	v->a[199767] = actions(391);
	v->a[199768] = 1;
	v->a[199769] = sym__brace_start;
	v->a[199770] = actions(5809);
	v->a[199771] = 1;
	v->a[199772] = anon_sym_BQUOTE;
	v->a[199773] = actions(8836);
	v->a[199774] = 1;
	v->a[199775] = sym_word;
	v->a[199776] = actions(8844);
	v->a[199777] = 1;
	v->a[199778] = sym_test_operator;
	v->a[199779] = actions(9080);
	small_parse_table_9989(v);
}

void	small_parse_table_9989(t_small_parse_table_array *v)
{
	v->a[199780] = 1;
	v->a[199781] = anon_sym_RBRACK;
	v->a[199782] = actions(352);
	v->a[199783] = 2;
	v->a[199784] = anon_sym_LPAREN_LPAREN;
	v->a[199785] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[199786] = actions(387);
	v->a[199787] = 2;
	v->a[199788] = anon_sym_LT_LPAREN;
	v->a[199789] = anon_sym_GT_LPAREN;
	v->a[199790] = actions(8840);
	v->a[199791] = 2;
	v->a[199792] = sym__special_character;
	v->a[199793] = sym__comment_word;
	v->a[199794] = actions(8842);
	v->a[199795] = 3;
	v->a[199796] = sym__bare_dollar;
	v->a[199797] = sym_raw_string;
	v->a[199798] = sym_ansi_c_string;
	v->a[199799] = state(2730);
	small_parse_table_9990(v);
}

/* EOF small_parse_table_1997.c */
