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
	v->a[64200] = sym_command_substitution;
	v->a[64201] = 10;
	v->a[64202] = actions(3);
	v->a[64203] = 1;
	v->a[64204] = sym_comment;
	v->a[64205] = actions(2399);
	v->a[64206] = 1;
	v->a[64207] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[64208] = actions(2401);
	v->a[64209] = 1;
	v->a[64210] = anon_sym_DOLLAR;
	v->a[64211] = actions(2403);
	v->a[64212] = 1;
	v->a[64213] = anon_sym_DQUOTE;
	v->a[64214] = actions(2405);
	v->a[64215] = 1;
	v->a[64216] = anon_sym_DOLLAR_LBRACE;
	v->a[64217] = actions(2407);
	v->a[64218] = 1;
	v->a[64219] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3211(v);
}

void	small_parse_table_3211(t_small_parse_table_array *v)
{
	v->a[64220] = actions(2409);
	v->a[64221] = 1;
	v->a[64222] = anon_sym_BQUOTE;
	v->a[64223] = actions(2411);
	v->a[64224] = 1;
	v->a[64225] = sym__bare_dollar;
	v->a[64226] = actions(2397);
	v->a[64227] = 5;
	v->a[64228] = aux_sym_concatenation_token1;
	v->a[64229] = sym_raw_string;
	v->a[64230] = sym_number;
	v->a[64231] = sym__comment_word;
	v->a[64232] = sym_word;
	v->a[64233] = state(856);
	v->a[64234] = 5;
	v->a[64235] = sym_arithmetic_expansion;
	v->a[64236] = sym_string;
	v->a[64237] = sym_simple_expansion;
	v->a[64238] = sym_expansion;
	v->a[64239] = sym_command_substitution;
	small_parse_table_3212(v);
}

void	small_parse_table_3212(t_small_parse_table_array *v)
{
	v->a[64240] = 6;
	v->a[64241] = actions(501);
	v->a[64242] = 1;
	v->a[64243] = sym_comment;
	v->a[64244] = actions(2413);
	v->a[64245] = 1;
	v->a[64246] = aux_sym_concatenation_token1;
	v->a[64247] = actions(2415);
	v->a[64248] = 1;
	v->a[64249] = sym__concat;
	v->a[64250] = state(1243);
	v->a[64251] = 1;
	v->a[64252] = aux_sym_concatenation_repeat1;
	v->a[64253] = actions(1099);
	v->a[64254] = 4;
	v->a[64255] = anon_sym_PIPE;
	v->a[64256] = anon_sym_LT;
	v->a[64257] = anon_sym_GT;
	v->a[64258] = anon_sym_LT_LT;
	v->a[64259] = actions(1097);
	small_parse_table_3213(v);
}

void	small_parse_table_3213(t_small_parse_table_array *v)
{
	v->a[64260] = 10;
	v->a[64261] = sym_file_descriptor;
	v->a[64262] = sym_variable_name;
	v->a[64263] = anon_sym_AMP_AMP;
	v->a[64264] = anon_sym_PIPE_PIPE;
	v->a[64265] = anon_sym_GT_GT;
	v->a[64266] = anon_sym_LT_AMP;
	v->a[64267] = anon_sym_GT_AMP;
	v->a[64268] = anon_sym_GT_PIPE;
	v->a[64269] = anon_sym_LT_GT;
	v->a[64270] = anon_sym_LT_LT_DASH;
	v->a[64271] = 10;
	v->a[64272] = actions(3);
	v->a[64273] = 1;
	v->a[64274] = sym_comment;
	v->a[64275] = actions(107);
	v->a[64276] = 1;
	v->a[64277] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[64278] = actions(109);
	v->a[64279] = 1;
	small_parse_table_3214(v);
}

void	small_parse_table_3214(t_small_parse_table_array *v)
{
	v->a[64280] = anon_sym_DOLLAR;
	v->a[64281] = actions(111);
	v->a[64282] = 1;
	v->a[64283] = anon_sym_DQUOTE;
	v->a[64284] = actions(115);
	v->a[64285] = 1;
	v->a[64286] = anon_sym_DOLLAR_LBRACE;
	v->a[64287] = actions(117);
	v->a[64288] = 1;
	v->a[64289] = anon_sym_DOLLAR_LPAREN;
	v->a[64290] = actions(119);
	v->a[64291] = 1;
	v->a[64292] = anon_sym_BQUOTE;
	v->a[64293] = actions(2419);
	v->a[64294] = 1;
	v->a[64295] = sym__bare_dollar;
	v->a[64296] = actions(2417);
	v->a[64297] = 5;
	v->a[64298] = aux_sym_concatenation_token1;
	v->a[64299] = sym_raw_string;
	small_parse_table_3215(v);
}

/* EOF small_parse_table_642.c */
