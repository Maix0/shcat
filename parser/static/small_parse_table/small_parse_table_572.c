/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_572.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2860(t_small_parse_table_array *v)
{
	v->a[57200] = 5;
	v->a[57201] = sym_arithmetic_expansion;
	v->a[57202] = sym_string;
	v->a[57203] = sym_simple_expansion;
	v->a[57204] = sym_expansion;
	v->a[57205] = sym_command_substitution;
	v->a[57206] = 15;
	v->a[57207] = actions(3);
	v->a[57208] = 1;
	v->a[57209] = sym_comment;
	v->a[57210] = actions(1720);
	v->a[57211] = 1;
	v->a[57212] = anon_sym_LPAREN;
	v->a[57213] = actions(1724);
	v->a[57214] = 1;
	v->a[57215] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[57216] = actions(1726);
	v->a[57217] = 1;
	v->a[57218] = anon_sym_DOLLAR;
	v->a[57219] = actions(1728);
	small_parse_table_2861(v);
}

void	small_parse_table_2861(t_small_parse_table_array *v)
{
	v->a[57220] = 1;
	v->a[57221] = anon_sym_DQUOTE;
	v->a[57222] = actions(1730);
	v->a[57223] = 1;
	v->a[57224] = anon_sym_DOLLAR_LBRACE;
	v->a[57225] = actions(1732);
	v->a[57226] = 1;
	v->a[57227] = anon_sym_DOLLAR_LPAREN;
	v->a[57228] = actions(1734);
	v->a[57229] = 1;
	v->a[57230] = anon_sym_BQUOTE;
	v->a[57231] = actions(1736);
	v->a[57232] = 1;
	v->a[57233] = sym_extglob_pattern;
	v->a[57234] = state(1050);
	v->a[57235] = 1;
	v->a[57236] = aux_sym_case_statement_repeat1;
	v->a[57237] = state(1682);
	v->a[57238] = 1;
	v->a[57239] = sym_case_item;
	small_parse_table_2862(v);
}

void	small_parse_table_2862(t_small_parse_table_array *v)
{
	v->a[57240] = state(2064);
	v->a[57241] = 1;
	v->a[57242] = sym__case_item_last;
	v->a[57243] = state(1877);
	v->a[57244] = 2;
	v->a[57245] = sym_concatenation;
	v->a[57246] = sym__extglob_blob;
	v->a[57247] = actions(1716);
	v->a[57248] = 3;
	v->a[57249] = sym_raw_string;
	v->a[57250] = sym_number;
	v->a[57251] = sym_word;
	v->a[57252] = state(1772);
	v->a[57253] = 5;
	v->a[57254] = sym_arithmetic_expansion;
	v->a[57255] = sym_string;
	v->a[57256] = sym_simple_expansion;
	v->a[57257] = sym_expansion;
	v->a[57258] = sym_command_substitution;
	v->a[57259] = 15;
	small_parse_table_2863(v);
}

void	small_parse_table_2863(t_small_parse_table_array *v)
{
	v->a[57260] = actions(3);
	v->a[57261] = 1;
	v->a[57262] = sym_comment;
	v->a[57263] = actions(1720);
	v->a[57264] = 1;
	v->a[57265] = anon_sym_LPAREN;
	v->a[57266] = actions(1724);
	v->a[57267] = 1;
	v->a[57268] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[57269] = actions(1726);
	v->a[57270] = 1;
	v->a[57271] = anon_sym_DOLLAR;
	v->a[57272] = actions(1728);
	v->a[57273] = 1;
	v->a[57274] = anon_sym_DQUOTE;
	v->a[57275] = actions(1730);
	v->a[57276] = 1;
	v->a[57277] = anon_sym_DOLLAR_LBRACE;
	v->a[57278] = actions(1732);
	v->a[57279] = 1;
	small_parse_table_2864(v);
}

void	small_parse_table_2864(t_small_parse_table_array *v)
{
	v->a[57280] = anon_sym_DOLLAR_LPAREN;
	v->a[57281] = actions(1734);
	v->a[57282] = 1;
	v->a[57283] = anon_sym_BQUOTE;
	v->a[57284] = actions(1736);
	v->a[57285] = 1;
	v->a[57286] = sym_extglob_pattern;
	v->a[57287] = state(1050);
	v->a[57288] = 1;
	v->a[57289] = aux_sym_case_statement_repeat1;
	v->a[57290] = state(1682);
	v->a[57291] = 1;
	v->a[57292] = sym_case_item;
	v->a[57293] = state(1942);
	v->a[57294] = 1;
	v->a[57295] = sym__case_item_last;
	v->a[57296] = state(1877);
	v->a[57297] = 2;
	v->a[57298] = sym_concatenation;
	v->a[57299] = sym__extglob_blob;
	small_parse_table_2865(v);
}

/* EOF small_parse_table_572.c */
