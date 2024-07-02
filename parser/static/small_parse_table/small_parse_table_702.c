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
	v->a[70200] = 1;
	v->a[70201] = anon_sym_BQUOTE;
	v->a[70202] = actions(2715);
	v->a[70203] = 1;
	v->a[70204] = anon_sym_DOLLAR;
	v->a[70205] = state(190);
	v->a[70206] = 2;
	v->a[70207] = sym_concatenation;
	v->a[70208] = aux_sym_for_statement_repeat1;
	v->a[70209] = actions(2747);
	v->a[70210] = 3;
	v->a[70211] = sym_raw_string;
	v->a[70212] = sym_number;
	v->a[70213] = sym_word;
	v->a[70214] = state(394);
	v->a[70215] = 5;
	v->a[70216] = sym_arithmetic_expansion;
	v->a[70217] = sym_string;
	v->a[70218] = sym_simple_expansion;
	v->a[70219] = sym_expansion;
	small_parse_table_3511(v);
}

void	small_parse_table_3511(t_small_parse_table_array *v)
{
	v->a[70220] = sym_command_substitution;
	v->a[70221] = 10;
	v->a[70222] = actions(3);
	v->a[70223] = 1;
	v->a[70224] = sym_comment;
	v->a[70225] = actions(1381);
	v->a[70226] = 1;
	v->a[70227] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70228] = actions(1383);
	v->a[70229] = 1;
	v->a[70230] = anon_sym_DOLLAR;
	v->a[70231] = actions(1385);
	v->a[70232] = 1;
	v->a[70233] = anon_sym_DQUOTE;
	v->a[70234] = actions(1387);
	v->a[70235] = 1;
	v->a[70236] = anon_sym_DOLLAR_LBRACE;
	v->a[70237] = actions(1389);
	v->a[70238] = 1;
	v->a[70239] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3512(v);
}

void	small_parse_table_3512(t_small_parse_table_array *v)
{
	v->a[70240] = actions(1391);
	v->a[70241] = 1;
	v->a[70242] = anon_sym_BQUOTE;
	v->a[70243] = state(578);
	v->a[70244] = 2;
	v->a[70245] = sym_concatenation;
	v->a[70246] = aux_sym_for_statement_repeat1;
	v->a[70247] = actions(1379);
	v->a[70248] = 3;
	v->a[70249] = sym_raw_string;
	v->a[70250] = sym_number;
	v->a[70251] = sym_word;
	v->a[70252] = state(884);
	v->a[70253] = 5;
	v->a[70254] = sym_arithmetic_expansion;
	v->a[70255] = sym_string;
	v->a[70256] = sym_simple_expansion;
	v->a[70257] = sym_expansion;
	v->a[70258] = sym_command_substitution;
	v->a[70259] = 10;
	small_parse_table_3513(v);
}

void	small_parse_table_3513(t_small_parse_table_array *v)
{
	v->a[70260] = actions(3);
	v->a[70261] = 1;
	v->a[70262] = sym_comment;
	v->a[70263] = actions(2444);
	v->a[70264] = 1;
	v->a[70265] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[70266] = actions(2448);
	v->a[70267] = 1;
	v->a[70268] = anon_sym_DQUOTE;
	v->a[70269] = actions(2450);
	v->a[70270] = 1;
	v->a[70271] = anon_sym_DOLLAR_LBRACE;
	v->a[70272] = actions(2452);
	v->a[70273] = 1;
	v->a[70274] = anon_sym_DOLLAR_LPAREN;
	v->a[70275] = actions(2454);
	v->a[70276] = 1;
	v->a[70277] = anon_sym_BQUOTE;
	v->a[70278] = actions(2553);
	v->a[70279] = 1;
	small_parse_table_3514(v);
}

void	small_parse_table_3514(t_small_parse_table_array *v)
{
	v->a[70280] = anon_sym_DOLLAR;
	v->a[70281] = state(211);
	v->a[70282] = 2;
	v->a[70283] = sym_concatenation;
	v->a[70284] = aux_sym_for_statement_repeat1;
	v->a[70285] = actions(2761);
	v->a[70286] = 3;
	v->a[70287] = sym_raw_string;
	v->a[70288] = sym_number;
	v->a[70289] = sym_word;
	v->a[70290] = state(481);
	v->a[70291] = 5;
	v->a[70292] = sym_arithmetic_expansion;
	v->a[70293] = sym_string;
	v->a[70294] = sym_simple_expansion;
	v->a[70295] = sym_expansion;
	v->a[70296] = sym_command_substitution;
	v->a[70297] = 10;
	v->a[70298] = actions(3);
	v->a[70299] = 1;
	small_parse_table_3515(v);
}

/* EOF small_parse_table_702.c */
