/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2072.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10360(t_small_parse_table_array *v)
{
	v->a[207200] = sym_word;
	v->a[207201] = actions(8840);
	v->a[207202] = 1;
	v->a[207203] = sym__comment_word;
	v->a[207204] = actions(9630);
	v->a[207205] = 1;
	v->a[207206] = anon_sym_DOLLAR;
	v->a[207207] = actions(352);
	v->a[207208] = 2;
	v->a[207209] = anon_sym_LPAREN_LPAREN;
	v->a[207210] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[207211] = actions(387);
	v->a[207212] = 2;
	v->a[207213] = anon_sym_LT_LPAREN;
	v->a[207214] = anon_sym_GT_LPAREN;
	v->a[207215] = actions(8844);
	v->a[207216] = 2;
	v->a[207217] = sym_test_operator;
	v->a[207218] = sym__special_character;
	v->a[207219] = actions(8842);
	small_parse_table_10361(v);
}

void	small_parse_table_10361(t_small_parse_table_array *v)
{
	v->a[207220] = 3;
	v->a[207221] = sym__bare_dollar;
	v->a[207222] = sym_raw_string;
	v->a[207223] = sym_ansi_c_string;
	v->a[207224] = state(2730);
	v->a[207225] = 9;
	v->a[207226] = sym_arithmetic_expansion;
	v->a[207227] = sym_brace_expression;
	v->a[207228] = sym_string;
	v->a[207229] = sym_translated_string;
	v->a[207230] = sym_number;
	v->a[207231] = sym_simple_expansion;
	v->a[207232] = sym_expansion;
	v->a[207233] = sym_command_substitution;
	v->a[207234] = sym_process_substitution;
	v->a[207235] = 20;
	v->a[207236] = actions(71);
	v->a[207237] = 1;
	v->a[207238] = sym_comment;
	v->a[207239] = actions(3787);
	small_parse_table_10362(v);
}

void	small_parse_table_10362(t_small_parse_table_array *v)
{
	v->a[207240] = 1;
	v->a[207241] = anon_sym_DOLLAR;
	v->a[207242] = actions(3793);
	v->a[207243] = 1;
	v->a[207244] = aux_sym_number_token1;
	v->a[207245] = actions(3795);
	v->a[207246] = 1;
	v->a[207247] = aux_sym_number_token2;
	v->a[207248] = actions(3799);
	v->a[207249] = 1;
	v->a[207250] = anon_sym_DOLLAR_LPAREN;
	v->a[207251] = actions(3809);
	v->a[207252] = 1;
	v->a[207253] = sym__brace_start;
	v->a[207254] = actions(9632);
	v->a[207255] = 1;
	v->a[207256] = sym_word;
	v->a[207257] = actions(9636);
	v->a[207258] = 1;
	v->a[207259] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_10363(v);
}

void	small_parse_table_10363(t_small_parse_table_array *v)
{
	v->a[207260] = actions(9638);
	v->a[207261] = 1;
	v->a[207262] = sym__special_character;
	v->a[207263] = actions(9640);
	v->a[207264] = 1;
	v->a[207265] = anon_sym_DQUOTE;
	v->a[207266] = actions(9644);
	v->a[207267] = 1;
	v->a[207268] = anon_sym_DOLLAR_LBRACE;
	v->a[207269] = actions(9646);
	v->a[207270] = 1;
	v->a[207271] = anon_sym_BQUOTE;
	v->a[207272] = actions(9648);
	v->a[207273] = 1;
	v->a[207274] = anon_sym_DOLLAR_BQUOTE;
	v->a[207275] = actions(9652);
	v->a[207276] = 1;
	v->a[207277] = sym_test_operator;
	v->a[207278] = state(4347);
	v->a[207279] = 1;
	small_parse_table_10364(v);
}

void	small_parse_table_10364(t_small_parse_table_array *v)
{
	v->a[207280] = aux_sym__literal_repeat1;
	v->a[207281] = state(4617);
	v->a[207282] = 1;
	v->a[207283] = sym_concatenation;
	v->a[207284] = actions(9634);
	v->a[207285] = 2;
	v->a[207286] = anon_sym_LPAREN_LPAREN;
	v->a[207287] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[207288] = actions(9642);
	v->a[207289] = 2;
	v->a[207290] = sym_raw_string;
	v->a[207291] = sym_ansi_c_string;
	v->a[207292] = actions(9650);
	v->a[207293] = 2;
	v->a[207294] = anon_sym_LT_LPAREN;
	v->a[207295] = anon_sym_GT_LPAREN;
	v->a[207296] = state(4604);
	v->a[207297] = 9;
	v->a[207298] = sym_arithmetic_expansion;
	v->a[207299] = sym_brace_expression;
	small_parse_table_10365(v);
}

/* EOF small_parse_table_2072.c */
