/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_922.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4610(t_small_parse_table_array *v)
{
	v->a[92200] = actions(4210);
	v->a[92201] = 1;
	v->a[92202] = anon_sym_DOLLAR_LBRACE;
	v->a[92203] = actions(4212);
	v->a[92204] = 1;
	v->a[92205] = anon_sym_DOLLAR_LPAREN;
	v->a[92206] = actions(4214);
	v->a[92207] = 1;
	v->a[92208] = anon_sym_BQUOTE;
	v->a[92209] = state(1397);
	v->a[92210] = 2;
	v->a[92211] = sym_expansion;
	v->a[92212] = sym_command_substitution;
	v->a[92213] = 5;
	v->a[92214] = actions(1404);
	v->a[92215] = 1;
	v->a[92216] = sym_comment;
	v->a[92217] = actions(4208);
	v->a[92218] = 1;
	v->a[92219] = sym__heredoc_body_beginning;
	small_parse_table_4611(v);
}

void	small_parse_table_4611(t_small_parse_table_array *v)
{
	v->a[92220] = actions(4216);
	v->a[92221] = 1;
	v->a[92222] = sym_simple_heredoc_body;
	v->a[92223] = state(2119);
	v->a[92224] = 1;
	v->a[92225] = sym_heredoc_body;
	v->a[92226] = state(1560);
	v->a[92227] = 2;
	v->a[92228] = sym__heredoc_body;
	v->a[92229] = sym__simple_heredoc_body;
	v->a[92230] = 5;
	v->a[92231] = actions(1404);
	v->a[92232] = 1;
	v->a[92233] = sym_comment;
	v->a[92234] = actions(4218);
	v->a[92235] = 1;
	v->a[92236] = anon_sym_DOLLAR_LBRACE;
	v->a[92237] = actions(4220);
	v->a[92238] = 1;
	v->a[92239] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_4612(v);
}

void	small_parse_table_4612(t_small_parse_table_array *v)
{
	v->a[92240] = actions(4222);
	v->a[92241] = 1;
	v->a[92242] = anon_sym_BQUOTE;
	v->a[92243] = state(978);
	v->a[92244] = 2;
	v->a[92245] = sym_expansion;
	v->a[92246] = sym_command_substitution;
	v->a[92247] = 5;
	v->a[92248] = actions(1404);
	v->a[92249] = 1;
	v->a[92250] = sym_comment;
	v->a[92251] = actions(4206);
	v->a[92252] = 1;
	v->a[92253] = sym_simple_heredoc_body;
	v->a[92254] = actions(4208);
	v->a[92255] = 1;
	v->a[92256] = sym__heredoc_body_beginning;
	v->a[92257] = state(2151);
	v->a[92258] = 1;
	v->a[92259] = sym_heredoc_body;
	small_parse_table_4613(v);
}

void	small_parse_table_4613(t_small_parse_table_array *v)
{
	v->a[92260] = state(1210);
	v->a[92261] = 2;
	v->a[92262] = sym__heredoc_body;
	v->a[92263] = sym__simple_heredoc_body;
	v->a[92264] = 5;
	v->a[92265] = actions(1404);
	v->a[92266] = 1;
	v->a[92267] = sym_comment;
	v->a[92268] = actions(4224);
	v->a[92269] = 1;
	v->a[92270] = anon_sym_DOLLAR_LBRACE;
	v->a[92271] = actions(4226);
	v->a[92272] = 1;
	v->a[92273] = anon_sym_DOLLAR_LPAREN;
	v->a[92274] = actions(4228);
	v->a[92275] = 1;
	v->a[92276] = anon_sym_BQUOTE;
	v->a[92277] = state(1585);
	v->a[92278] = 2;
	v->a[92279] = sym_expansion;
	small_parse_table_4614(v);
}

void	small_parse_table_4614(t_small_parse_table_array *v)
{
	v->a[92280] = sym_command_substitution;
	v->a[92281] = 5;
	v->a[92282] = actions(1404);
	v->a[92283] = 1;
	v->a[92284] = sym_comment;
	v->a[92285] = actions(4230);
	v->a[92286] = 1;
	v->a[92287] = anon_sym_DOLLAR_LBRACE;
	v->a[92288] = actions(4232);
	v->a[92289] = 1;
	v->a[92290] = anon_sym_DOLLAR_LPAREN;
	v->a[92291] = actions(4234);
	v->a[92292] = 1;
	v->a[92293] = anon_sym_BQUOTE;
	v->a[92294] = state(584);
	v->a[92295] = 2;
	v->a[92296] = sym_expansion;
	v->a[92297] = sym_command_substitution;
	v->a[92298] = 5;
	v->a[92299] = actions(1404);
	small_parse_table_4615(v);
}

/* EOF small_parse_table_922.c */
