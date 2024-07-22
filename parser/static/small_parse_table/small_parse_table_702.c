/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_702.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3510(t_small_parse_table_array *v)
{
	v->a[70200] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70201] = actions(905);
	v->a[70202] = 1;
	v->a[70203] = anon_sym_DOLLAR;
	v->a[70204] = actions(907);
	v->a[70205] = 1;
	v->a[70206] = anon_sym_DQUOTE;
	v->a[70207] = actions(909);
	v->a[70208] = 1;
	v->a[70209] = anon_sym_DOLLAR_LBRACE;
	v->a[70210] = actions(911);
	v->a[70211] = 1;
	v->a[70212] = anon_sym_DOLLAR_LPAREN;
	v->a[70213] = actions(913);
	v->a[70214] = 1;
	v->a[70215] = anon_sym_BQUOTE;
	v->a[70216] = state(279);
	v->a[70217] = 2;
	v->a[70218] = sym_concatenation;
	v->a[70219] = aux_sym_for_statement_repeat1;
	small_parse_table_3511(v);
}

void	small_parse_table_3511(t_small_parse_table_array *v)
{
	v->a[70220] = actions(901);
	v->a[70221] = 3;
	v->a[70222] = sym_raw_string;
	v->a[70223] = sym_number;
	v->a[70224] = sym_word;
	v->a[70225] = state(492);
	v->a[70226] = 5;
	v->a[70227] = sym_arithmetic_expansion;
	v->a[70228] = sym_string;
	v->a[70229] = sym_simple_expansion;
	v->a[70230] = sym_expansion;
	v->a[70231] = sym_command_substitution;
	v->a[70232] = 10;
	v->a[70233] = actions(3);
	v->a[70234] = 1;
	v->a[70235] = sym_comment;
	v->a[70236] = actions(2520);
	v->a[70237] = 1;
	v->a[70238] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70239] = actions(2522);
	small_parse_table_3512(v);
}

void	small_parse_table_3512(t_small_parse_table_array *v)
{
	v->a[70240] = 1;
	v->a[70241] = anon_sym_DOLLAR;
	v->a[70242] = actions(2524);
	v->a[70243] = 1;
	v->a[70244] = anon_sym_DQUOTE;
	v->a[70245] = actions(2526);
	v->a[70246] = 1;
	v->a[70247] = anon_sym_DOLLAR_LBRACE;
	v->a[70248] = actions(2528);
	v->a[70249] = 1;
	v->a[70250] = anon_sym_DOLLAR_LPAREN;
	v->a[70251] = actions(2530);
	v->a[70252] = 1;
	v->a[70253] = anon_sym_BQUOTE;
	v->a[70254] = state(871);
	v->a[70255] = 2;
	v->a[70256] = sym_concatenation;
	v->a[70257] = aux_sym_for_statement_repeat1;
	v->a[70258] = actions(2785);
	v->a[70259] = 3;
	small_parse_table_3513(v);
}

void	small_parse_table_3513(t_small_parse_table_array *v)
{
	v->a[70260] = sym_raw_string;
	v->a[70261] = sym_number;
	v->a[70262] = sym_word;
	v->a[70263] = state(959);
	v->a[70264] = 5;
	v->a[70265] = sym_arithmetic_expansion;
	v->a[70266] = sym_string;
	v->a[70267] = sym_simple_expansion;
	v->a[70268] = sym_expansion;
	v->a[70269] = sym_command_substitution;
	v->a[70270] = 10;
	v->a[70271] = actions(3);
	v->a[70272] = 1;
	v->a[70273] = sym_comment;
	v->a[70274] = actions(2349);
	v->a[70275] = 1;
	v->a[70276] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70277] = actions(2351);
	v->a[70278] = 1;
	v->a[70279] = anon_sym_DOLLAR;
	small_parse_table_3514(v);
}

void	small_parse_table_3514(t_small_parse_table_array *v)
{
	v->a[70280] = actions(2353);
	v->a[70281] = 1;
	v->a[70282] = anon_sym_DQUOTE;
	v->a[70283] = actions(2355);
	v->a[70284] = 1;
	v->a[70285] = anon_sym_DOLLAR_LBRACE;
	v->a[70286] = actions(2357);
	v->a[70287] = 1;
	v->a[70288] = anon_sym_DOLLAR_LPAREN;
	v->a[70289] = actions(2359);
	v->a[70290] = 1;
	v->a[70291] = anon_sym_BQUOTE;
	v->a[70292] = state(214);
	v->a[70293] = 2;
	v->a[70294] = sym_concatenation;
	v->a[70295] = aux_sym_for_statement_repeat1;
	v->a[70296] = actions(2787);
	v->a[70297] = 3;
	v->a[70298] = sym_raw_string;
	v->a[70299] = sym_number;
	small_parse_table_3515(v);
}

/* EOF small_parse_table_702.c */
