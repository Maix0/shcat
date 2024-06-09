/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_882.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4410(t_small_parse_table_array *v)
{
	v->a[88200] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88201] = actions(3716);
	v->a[88202] = 1;
	v->a[88203] = sym_string_content;
	v->a[88204] = actions(3718);
	v->a[88205] = 1;
	v->a[88206] = anon_sym_DOLLAR_LBRACE;
	v->a[88207] = actions(3720);
	v->a[88208] = 1;
	v->a[88209] = anon_sym_DOLLAR_LPAREN;
	v->a[88210] = actions(3722);
	v->a[88211] = 1;
	v->a[88212] = anon_sym_BQUOTE;
	v->a[88213] = actions(3788);
	v->a[88214] = 1;
	v->a[88215] = anon_sym_DOLLAR;
	v->a[88216] = state(1738);
	v->a[88217] = 1;
	v->a[88218] = aux_sym_string_repeat1;
	v->a[88219] = state(1869);
	small_parse_table_4411(v);
}

void	small_parse_table_4411(t_small_parse_table_array *v)
{
	v->a[88220] = 4;
	v->a[88221] = sym_arithmetic_expansion;
	v->a[88222] = sym_simple_expansion;
	v->a[88223] = sym_expansion;
	v->a[88224] = sym_command_substitution;
	v->a[88225] = 3;
	v->a[88226] = actions(3);
	v->a[88227] = 1;
	v->a[88228] = sym_comment;
	v->a[88229] = actions(3658);
	v->a[88230] = 1;
	v->a[88231] = sym_extglob_pattern;
	v->a[88232] = actions(3654);
	v->a[88233] = 11;
	v->a[88234] = anon_sym_LPAREN;
	v->a[88235] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88236] = anon_sym_DOLLAR;
	v->a[88237] = anon_sym_DQUOTE;
	v->a[88238] = sym_raw_string;
	v->a[88239] = aux_sym_number_token1;
	small_parse_table_4412(v);
}

void	small_parse_table_4412(t_small_parse_table_array *v)
{
	v->a[88240] = aux_sym_number_token2;
	v->a[88241] = anon_sym_DOLLAR_LBRACE;
	v->a[88242] = anon_sym_DOLLAR_LPAREN;
	v->a[88243] = anon_sym_BQUOTE;
	v->a[88244] = sym_word;
	v->a[88245] = 3;
	v->a[88246] = actions(3);
	v->a[88247] = 1;
	v->a[88248] = sym_comment;
	v->a[88249] = actions(3610);
	v->a[88250] = 1;
	v->a[88251] = sym_extglob_pattern;
	v->a[88252] = actions(3606);
	v->a[88253] = 11;
	v->a[88254] = anon_sym_LPAREN;
	v->a[88255] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88256] = anon_sym_DOLLAR;
	v->a[88257] = anon_sym_DQUOTE;
	v->a[88258] = sym_raw_string;
	v->a[88259] = aux_sym_number_token1;
	small_parse_table_4413(v);
}

void	small_parse_table_4413(t_small_parse_table_array *v)
{
	v->a[88260] = aux_sym_number_token2;
	v->a[88261] = anon_sym_DOLLAR_LBRACE;
	v->a[88262] = anon_sym_DOLLAR_LPAREN;
	v->a[88263] = anon_sym_BQUOTE;
	v->a[88264] = sym_word;
	v->a[88265] = 10;
	v->a[88266] = actions(3);
	v->a[88267] = 1;
	v->a[88268] = sym_comment;
	v->a[88269] = actions(3504);
	v->a[88270] = 1;
	v->a[88271] = anon_sym_DQUOTE;
	v->a[88272] = actions(3712);
	v->a[88273] = 1;
	v->a[88274] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[88275] = actions(3716);
	v->a[88276] = 1;
	v->a[88277] = sym_string_content;
	v->a[88278] = actions(3718);
	v->a[88279] = 1;
	small_parse_table_4414(v);
}

void	small_parse_table_4414(t_small_parse_table_array *v)
{
	v->a[88280] = anon_sym_DOLLAR_LBRACE;
	v->a[88281] = actions(3720);
	v->a[88282] = 1;
	v->a[88283] = anon_sym_DOLLAR_LPAREN;
	v->a[88284] = actions(3722);
	v->a[88285] = 1;
	v->a[88286] = anon_sym_BQUOTE;
	v->a[88287] = actions(3790);
	v->a[88288] = 1;
	v->a[88289] = anon_sym_DOLLAR;
	v->a[88290] = state(1738);
	v->a[88291] = 1;
	v->a[88292] = aux_sym_string_repeat1;
	v->a[88293] = state(1869);
	v->a[88294] = 4;
	v->a[88295] = sym_arithmetic_expansion;
	v->a[88296] = sym_simple_expansion;
	v->a[88297] = sym_expansion;
	v->a[88298] = sym_command_substitution;
	v->a[88299] = 4;
	small_parse_table_4415(v);
}

/* EOF small_parse_table_882.c */
