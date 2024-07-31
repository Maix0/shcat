/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_642.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3210(t_small_parse_table_array *v)
{
	v->a[64200] = sym_simple_expansion;
	v->a[64201] = sym_expansion;
	v->a[64202] = sym_command_substitution;
	v->a[64203] = 3;
	v->a[64204] = actions(407);
	v->a[64205] = 1;
	v->a[64206] = sym_comment;
	v->a[64207] = actions(1848);
	v->a[64208] = 4;
	v->a[64209] = anon_sym_PIPE;
	v->a[64210] = anon_sym_LT;
	v->a[64211] = anon_sym_GT;
	v->a[64212] = anon_sym_LT_LT;
	v->a[64213] = actions(1846);
	v->a[64214] = 8;
	v->a[64215] = anon_sym_AMP_AMP;
	v->a[64216] = anon_sym_PIPE_PIPE;
	v->a[64217] = anon_sym_GT_GT;
	v->a[64218] = anon_sym_LT_AMP;
	v->a[64219] = anon_sym_GT_AMP;
	small_parse_table_3211(v);
}

void	small_parse_table_3211(t_small_parse_table_array *v)
{
	v->a[64220] = anon_sym_GT_PIPE;
	v->a[64221] = anon_sym_LT_GT;
	v->a[64222] = anon_sym_LT_LT_DASH;
	v->a[64223] = 3;
	v->a[64224] = actions(407);
	v->a[64225] = 1;
	v->a[64226] = sym_comment;
	v->a[64227] = actions(1789);
	v->a[64228] = 4;
	v->a[64229] = anon_sym_PIPE;
	v->a[64230] = anon_sym_LT;
	v->a[64231] = anon_sym_GT;
	v->a[64232] = anon_sym_LT_LT;
	v->a[64233] = actions(1787);
	v->a[64234] = 8;
	v->a[64235] = anon_sym_AMP_AMP;
	v->a[64236] = anon_sym_PIPE_PIPE;
	v->a[64237] = anon_sym_GT_GT;
	v->a[64238] = anon_sym_LT_AMP;
	v->a[64239] = anon_sym_GT_AMP;
	small_parse_table_3212(v);
}

void	small_parse_table_3212(t_small_parse_table_array *v)
{
	v->a[64240] = anon_sym_GT_PIPE;
	v->a[64241] = anon_sym_LT_GT;
	v->a[64242] = anon_sym_LT_LT_DASH;
	v->a[64243] = 5;
	v->a[64244] = actions(3);
	v->a[64245] = 1;
	v->a[64246] = sym_comment;
	v->a[64247] = actions(2431);
	v->a[64248] = 1;
	v->a[64249] = sym_string_content;
	v->a[64250] = actions(2435);
	v->a[64251] = 1;
	v->a[64252] = sym_variable_name;
	v->a[64253] = actions(2433);
	v->a[64254] = 2;
	v->a[64255] = aux_sym__simple_variable_name_token1;
	v->a[64256] = aux_sym__multiline_variable_name_token1;
	v->a[64257] = actions(2427);
	v->a[64258] = 8;
	v->a[64259] = anon_sym_BANG;
	small_parse_table_3213(v);
}

void	small_parse_table_3213(t_small_parse_table_array *v)
{
	v->a[64260] = anon_sym_DASH;
	v->a[64261] = anon_sym_STAR;
	v->a[64262] = anon_sym_QMARK;
	v->a[64263] = anon_sym_DOLLAR;
	v->a[64264] = anon_sym_POUND;
	v->a[64265] = anon_sym_AT;
	v->a[64266] = anon_sym_0;
	v->a[64267] = 10;
	v->a[64268] = actions(3);
	v->a[64269] = 1;
	v->a[64270] = sym_comment;
	v->a[64271] = actions(2548);
	v->a[64272] = 1;
	v->a[64273] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[64274] = actions(2554);
	v->a[64275] = 1;
	v->a[64276] = sym_string_content;
	v->a[64277] = actions(2556);
	v->a[64278] = 1;
	v->a[64279] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_3214(v);
}

void	small_parse_table_3214(t_small_parse_table_array *v)
{
	v->a[64280] = actions(2558);
	v->a[64281] = 1;
	v->a[64282] = anon_sym_DOLLAR_LPAREN;
	v->a[64283] = actions(2560);
	v->a[64284] = 1;
	v->a[64285] = anon_sym_BQUOTE;
	v->a[64286] = actions(2837);
	v->a[64287] = 1;
	v->a[64288] = anon_sym_DOLLAR;
	v->a[64289] = actions(2839);
	v->a[64290] = 1;
	v->a[64291] = anon_sym_DQUOTE;
	v->a[64292] = state(1407);
	v->a[64293] = 1;
	v->a[64294] = aux_sym_string_repeat1;
	v->a[64295] = state(1477);
	v->a[64296] = 4;
	v->a[64297] = sym_arithmetic_expansion;
	v->a[64298] = sym_simple_expansion;
	v->a[64299] = sym_expansion;
	small_parse_table_3215(v);
}

/* EOF small_parse_table_642.c */
