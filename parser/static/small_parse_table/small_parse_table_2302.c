/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2302.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11510(t_small_parse_table_array *v)
{
	v->a[230200] = actions(9758);
	v->a[230201] = 1;
	v->a[230202] = anon_sym_DOLLAR_LBRACK;
	v->a[230203] = actions(9764);
	v->a[230204] = 1;
	v->a[230205] = anon_sym_DQUOTE;
	v->a[230206] = actions(9768);
	v->a[230207] = 1;
	v->a[230208] = aux_sym_number_token1;
	v->a[230209] = actions(9770);
	v->a[230210] = 1;
	v->a[230211] = aux_sym_number_token2;
	v->a[230212] = actions(9772);
	v->a[230213] = 1;
	v->a[230214] = anon_sym_DOLLAR_LBRACE;
	v->a[230215] = actions(9774);
	v->a[230216] = 1;
	v->a[230217] = anon_sym_DOLLAR_LPAREN;
	v->a[230218] = actions(9776);
	v->a[230219] = 1;
	small_parse_table_11511(v);
}

void	small_parse_table_11511(t_small_parse_table_array *v)
{
	v->a[230220] = anon_sym_BQUOTE;
	v->a[230221] = actions(9778);
	v->a[230222] = 1;
	v->a[230223] = anon_sym_DOLLAR_BQUOTE;
	v->a[230224] = actions(9782);
	v->a[230225] = 1;
	v->a[230226] = sym__comment_word;
	v->a[230227] = actions(9784);
	v->a[230228] = 1;
	v->a[230229] = sym__brace_start;
	v->a[230230] = actions(10896);
	v->a[230231] = 1;
	v->a[230232] = anon_sym_DOLLAR;
	v->a[230233] = actions(9756);
	v->a[230234] = 2;
	v->a[230235] = anon_sym_LPAREN_LPAREN;
	v->a[230236] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[230237] = actions(9762);
	v->a[230238] = 2;
	v->a[230239] = sym_test_operator;
	small_parse_table_11512(v);
}

void	small_parse_table_11512(t_small_parse_table_array *v)
{
	v->a[230240] = sym__special_character;
	v->a[230241] = actions(9780);
	v->a[230242] = 2;
	v->a[230243] = anon_sym_LT_LPAREN;
	v->a[230244] = anon_sym_GT_LPAREN;
	v->a[230245] = actions(9766);
	v->a[230246] = 3;
	v->a[230247] = sym__bare_dollar;
	v->a[230248] = sym_raw_string;
	v->a[230249] = sym_ansi_c_string;
	v->a[230250] = state(6225);
	v->a[230251] = 9;
	v->a[230252] = sym_arithmetic_expansion;
	v->a[230253] = sym_brace_expression;
	v->a[230254] = sym_string;
	v->a[230255] = sym_translated_string;
	v->a[230256] = sym_number;
	v->a[230257] = sym_simple_expansion;
	v->a[230258] = sym_expansion;
	v->a[230259] = sym_command_substitution;
	small_parse_table_11513(v);
}

void	small_parse_table_11513(t_small_parse_table_array *v)
{
	v->a[230260] = sym_process_substitution;
	v->a[230261] = 18;
	v->a[230262] = actions(3);
	v->a[230263] = 1;
	v->a[230264] = sym_comment;
	v->a[230265] = actions(5876);
	v->a[230266] = 1;
	v->a[230267] = aux_sym_number_token1;
	v->a[230268] = actions(5878);
	v->a[230269] = 1;
	v->a[230270] = aux_sym_number_token2;
	v->a[230271] = actions(5882);
	v->a[230272] = 1;
	v->a[230273] = anon_sym_DOLLAR_LPAREN;
	v->a[230274] = actions(5892);
	v->a[230275] = 1;
	v->a[230276] = sym__brace_start;
	v->a[230277] = actions(9546);
	v->a[230278] = 1;
	v->a[230279] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_11514(v);
}

void	small_parse_table_11514(t_small_parse_table_array *v)
{
	v->a[230280] = actions(9550);
	v->a[230281] = 1;
	v->a[230282] = anon_sym_DQUOTE;
	v->a[230283] = actions(9554);
	v->a[230284] = 1;
	v->a[230285] = anon_sym_DOLLAR_LBRACE;
	v->a[230286] = actions(9556);
	v->a[230287] = 1;
	v->a[230288] = anon_sym_BQUOTE;
	v->a[230289] = actions(9558);
	v->a[230290] = 1;
	v->a[230291] = anon_sym_DOLLAR_BQUOTE;
	v->a[230292] = actions(10300);
	v->a[230293] = 1;
	v->a[230294] = sym_word;
	v->a[230295] = actions(10306);
	v->a[230296] = 1;
	v->a[230297] = sym__comment_word;
	v->a[230298] = actions(10898);
	v->a[230299] = 1;
	small_parse_table_11515(v);
}

/* EOF small_parse_table_2302.c */
