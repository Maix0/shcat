/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_122.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_610(t_small_parse_table_array *v)
{
	v->a[12200] = anon_sym_DOLLAR_LBRACE;
	v->a[12201] = anon_sym_BQUOTE;
	v->a[12202] = anon_sym_DOLLAR_BQUOTE;
	v->a[12203] = anon_sym_LT_LPAREN;
	v->a[12204] = anon_sym_GT_LPAREN;
	v->a[12205] = actions(2715);
	v->a[12206] = 28;
	v->a[12207] = anon_sym_for;
	v->a[12208] = anon_sym_select;
	v->a[12209] = anon_sym_LT;
	v->a[12210] = anon_sym_GT;
	v->a[12211] = anon_sym_LPAREN;
	v->a[12212] = anon_sym_while;
	v->a[12213] = anon_sym_until;
	v->a[12214] = anon_sym_if;
	v->a[12215] = anon_sym_case;
	v->a[12216] = anon_sym_function;
	v->a[12217] = anon_sym_BANG;
	v->a[12218] = anon_sym_LBRACK;
	v->a[12219] = anon_sym_declare;
	small_parse_table_611(v);
}

void	small_parse_table_611(t_small_parse_table_array *v)
{
	v->a[12220] = anon_sym_typeset;
	v->a[12221] = anon_sym_export;
	v->a[12222] = anon_sym_readonly;
	v->a[12223] = anon_sym_local;
	v->a[12224] = anon_sym_unset;
	v->a[12225] = anon_sym_unsetenv;
	v->a[12226] = anon_sym_AMP_GT;
	v->a[12227] = anon_sym_LT_AMP;
	v->a[12228] = anon_sym_GT_AMP;
	v->a[12229] = anon_sym_DOLLAR;
	v->a[12230] = sym__special_character;
	v->a[12231] = aux_sym_number_token1;
	v->a[12232] = aux_sym_number_token2;
	v->a[12233] = anon_sym_DOLLAR_LPAREN;
	v->a[12234] = sym_word;
	v->a[12235] = 37;
	v->a[12236] = actions(71);
	v->a[12237] = 1;
	v->a[12238] = sym_comment;
	v->a[12239] = actions(409);
	small_parse_table_612(v);
}

void	small_parse_table_612(t_small_parse_table_array *v)
{
	v->a[12240] = 1;
	v->a[12241] = anon_sym_LPAREN_LPAREN;
	v->a[12242] = actions(415);
	v->a[12243] = 1;
	v->a[12244] = anon_sym_LPAREN;
	v->a[12245] = actions(437);
	v->a[12246] = 1;
	v->a[12247] = anon_sym_LBRACK;
	v->a[12248] = actions(439);
	v->a[12249] = 1;
	v->a[12250] = anon_sym_LBRACK_LBRACK;
	v->a[12251] = actions(449);
	v->a[12252] = 1;
	v->a[12253] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[12254] = actions(451);
	v->a[12255] = 1;
	v->a[12256] = anon_sym_DOLLAR_LBRACK;
	v->a[12257] = actions(453);
	v->a[12258] = 1;
	v->a[12259] = anon_sym_DOLLAR;
	small_parse_table_613(v);
}

void	small_parse_table_613(t_small_parse_table_array *v)
{
	v->a[12260] = actions(455);
	v->a[12261] = 1;
	v->a[12262] = sym__special_character;
	v->a[12263] = actions(457);
	v->a[12264] = 1;
	v->a[12265] = anon_sym_DQUOTE;
	v->a[12266] = actions(461);
	v->a[12267] = 1;
	v->a[12268] = aux_sym_number_token1;
	v->a[12269] = actions(463);
	v->a[12270] = 1;
	v->a[12271] = aux_sym_number_token2;
	v->a[12272] = actions(465);
	v->a[12273] = 1;
	v->a[12274] = anon_sym_DOLLAR_LBRACE;
	v->a[12275] = actions(467);
	v->a[12276] = 1;
	v->a[12277] = anon_sym_DOLLAR_LPAREN;
	v->a[12278] = actions(469);
	v->a[12279] = 1;
	small_parse_table_614(v);
}

void	small_parse_table_614(t_small_parse_table_array *v)
{
	v->a[12280] = anon_sym_BQUOTE;
	v->a[12281] = actions(471);
	v->a[12282] = 1;
	v->a[12283] = anon_sym_DOLLAR_BQUOTE;
	v->a[12284] = actions(477);
	v->a[12285] = 1;
	v->a[12286] = sym_variable_name;
	v->a[12287] = actions(479);
	v->a[12288] = 1;
	v->a[12289] = sym_test_operator;
	v->a[12290] = actions(481);
	v->a[12291] = 1;
	v->a[12292] = sym__brace_start;
	v->a[12293] = actions(1394);
	v->a[12294] = 1;
	v->a[12295] = anon_sym_LT_LT_LT;
	v->a[12296] = actions(1396);
	v->a[12297] = 1;
	v->a[12298] = sym_file_descriptor;
	v->a[12299] = actions(3018);
	small_parse_table_615(v);
}

/* EOF small_parse_table_122.c */
