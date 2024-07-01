/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_592.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2960(t_small_parse_table_array *v)
{
	v->a[59200] = actions(1642);
	v->a[59201] = 1;
	v->a[59202] = anon_sym_DQUOTE;
	v->a[59203] = actions(1644);
	v->a[59204] = 1;
	v->a[59205] = anon_sym_DOLLAR_LBRACE;
	v->a[59206] = actions(1646);
	v->a[59207] = 1;
	v->a[59208] = anon_sym_DOLLAR_LPAREN;
	v->a[59209] = actions(1648);
	v->a[59210] = 1;
	v->a[59211] = anon_sym_BQUOTE;
	v->a[59212] = actions(1650);
	v->a[59213] = 1;
	v->a[59214] = sym_extglob_pattern;
	v->a[59215] = state(1139);
	v->a[59216] = 1;
	v->a[59217] = aux_sym_case_statement_repeat1;
	v->a[59218] = state(1713);
	v->a[59219] = 1;
	small_parse_table_2961(v);
}

void	small_parse_table_2961(t_small_parse_table_array *v)
{
	v->a[59220] = sym_case_item;
	v->a[59221] = state(2017);
	v->a[59222] = 1;
	v->a[59223] = sym__case_item_last;
	v->a[59224] = state(1871);
	v->a[59225] = 2;
	v->a[59226] = sym_concatenation;
	v->a[59227] = sym__extglob_blob;
	v->a[59228] = actions(1630);
	v->a[59229] = 3;
	v->a[59230] = sym_raw_string;
	v->a[59231] = sym_number;
	v->a[59232] = sym_word;
	v->a[59233] = state(1804);
	v->a[59234] = 5;
	v->a[59235] = sym_arithmetic_expansion;
	v->a[59236] = sym_string;
	v->a[59237] = sym_simple_expansion;
	v->a[59238] = sym_expansion;
	v->a[59239] = sym_command_substitution;
	small_parse_table_2962(v);
}

void	small_parse_table_2962(t_small_parse_table_array *v)
{
	v->a[59240] = 15;
	v->a[59241] = actions(3);
	v->a[59242] = 1;
	v->a[59243] = sym_comment;
	v->a[59244] = actions(1634);
	v->a[59245] = 1;
	v->a[59246] = anon_sym_LPAREN;
	v->a[59247] = actions(1638);
	v->a[59248] = 1;
	v->a[59249] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[59250] = actions(1640);
	v->a[59251] = 1;
	v->a[59252] = anon_sym_DOLLAR;
	v->a[59253] = actions(1642);
	v->a[59254] = 1;
	v->a[59255] = anon_sym_DQUOTE;
	v->a[59256] = actions(1644);
	v->a[59257] = 1;
	v->a[59258] = anon_sym_DOLLAR_LBRACE;
	v->a[59259] = actions(1646);
	small_parse_table_2963(v);
}

void	small_parse_table_2963(t_small_parse_table_array *v)
{
	v->a[59260] = 1;
	v->a[59261] = anon_sym_DOLLAR_LPAREN;
	v->a[59262] = actions(1648);
	v->a[59263] = 1;
	v->a[59264] = anon_sym_BQUOTE;
	v->a[59265] = actions(1650);
	v->a[59266] = 1;
	v->a[59267] = sym_extglob_pattern;
	v->a[59268] = state(1139);
	v->a[59269] = 1;
	v->a[59270] = aux_sym_case_statement_repeat1;
	v->a[59271] = state(1713);
	v->a[59272] = 1;
	v->a[59273] = sym_case_item;
	v->a[59274] = state(1921);
	v->a[59275] = 1;
	v->a[59276] = sym__case_item_last;
	v->a[59277] = state(1871);
	v->a[59278] = 2;
	v->a[59279] = sym_concatenation;
	small_parse_table_2964(v);
}

void	small_parse_table_2964(t_small_parse_table_array *v)
{
	v->a[59280] = sym__extglob_blob;
	v->a[59281] = actions(1630);
	v->a[59282] = 3;
	v->a[59283] = sym_raw_string;
	v->a[59284] = sym_number;
	v->a[59285] = sym_word;
	v->a[59286] = state(1804);
	v->a[59287] = 5;
	v->a[59288] = sym_arithmetic_expansion;
	v->a[59289] = sym_string;
	v->a[59290] = sym_simple_expansion;
	v->a[59291] = sym_expansion;
	v->a[59292] = sym_command_substitution;
	v->a[59293] = 5;
	v->a[59294] = actions(3);
	v->a[59295] = 1;
	v->a[59296] = sym_comment;
	v->a[59297] = actions(1960);
	v->a[59298] = 1;
	v->a[59299] = sym_variable_name;
	small_parse_table_2965(v);
}

/* EOF small_parse_table_592.c */
