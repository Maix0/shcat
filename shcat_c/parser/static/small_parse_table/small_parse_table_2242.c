/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2242.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_11210(t_small_parse_table_array *v)
{
	v->a[224200] = aux_sym_number_token2;
	v->a[224201] = actions(3197);
	v->a[224202] = 1;
	v->a[224203] = anon_sym_DOLLAR_LPAREN;
	v->a[224204] = actions(3209);
	v->a[224205] = 1;
	v->a[224206] = sym__brace_start;
	v->a[224207] = actions(9674);
	v->a[224208] = 1;
	v->a[224209] = sym_word;
	v->a[224210] = actions(9678);
	v->a[224211] = 1;
	v->a[224212] = anon_sym_DOLLAR_LBRACK;
	v->a[224213] = actions(9682);
	v->a[224214] = 1;
	v->a[224215] = anon_sym_DQUOTE;
	v->a[224216] = actions(9686);
	v->a[224217] = 1;
	v->a[224218] = anon_sym_DOLLAR_LBRACE;
	v->a[224219] = actions(9688);
	small_parse_table_11211(v);
}

void	small_parse_table_11211(t_small_parse_table_array *v)
{
	v->a[224220] = 1;
	v->a[224221] = anon_sym_BQUOTE;
	v->a[224222] = actions(9690);
	v->a[224223] = 1;
	v->a[224224] = anon_sym_DOLLAR_BQUOTE;
	v->a[224225] = actions(9694);
	v->a[224226] = 1;
	v->a[224227] = sym__comment_word;
	v->a[224228] = actions(10678);
	v->a[224229] = 1;
	v->a[224230] = anon_sym_DOLLAR;
	v->a[224231] = actions(9676);
	v->a[224232] = 2;
	v->a[224233] = anon_sym_LPAREN_LPAREN;
	v->a[224234] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[224235] = actions(9680);
	v->a[224236] = 2;
	v->a[224237] = sym_test_operator;
	v->a[224238] = sym__special_character;
	v->a[224239] = actions(9692);
	small_parse_table_11212(v);
}

void	small_parse_table_11212(t_small_parse_table_array *v)
{
	v->a[224240] = 2;
	v->a[224241] = anon_sym_LT_LPAREN;
	v->a[224242] = anon_sym_GT_LPAREN;
	v->a[224243] = actions(9684);
	v->a[224244] = 3;
	v->a[224245] = sym__bare_dollar;
	v->a[224246] = sym_raw_string;
	v->a[224247] = sym_ansi_c_string;
	v->a[224248] = state(1733);
	v->a[224249] = 9;
	v->a[224250] = sym_arithmetic_expansion;
	v->a[224251] = sym_brace_expression;
	v->a[224252] = sym_string;
	v->a[224253] = sym_translated_string;
	v->a[224254] = sym_number;
	v->a[224255] = sym_simple_expansion;
	v->a[224256] = sym_expansion;
	v->a[224257] = sym_command_substitution;
	v->a[224258] = sym_process_substitution;
	v->a[224259] = 18;
	small_parse_table_11213(v);
}

void	small_parse_table_11213(t_small_parse_table_array *v)
{
	v->a[224260] = actions(3);
	v->a[224261] = 1;
	v->a[224262] = sym_comment;
	v->a[224263] = actions(3191);
	v->a[224264] = 1;
	v->a[224265] = aux_sym_number_token1;
	v->a[224266] = actions(3193);
	v->a[224267] = 1;
	v->a[224268] = aux_sym_number_token2;
	v->a[224269] = actions(3197);
	v->a[224270] = 1;
	v->a[224271] = anon_sym_DOLLAR_LPAREN;
	v->a[224272] = actions(3209);
	v->a[224273] = 1;
	v->a[224274] = sym__brace_start;
	v->a[224275] = actions(9674);
	v->a[224276] = 1;
	v->a[224277] = sym_word;
	v->a[224278] = actions(9678);
	v->a[224279] = 1;
	small_parse_table_11214(v);
}

void	small_parse_table_11214(t_small_parse_table_array *v)
{
	v->a[224280] = anon_sym_DOLLAR_LBRACK;
	v->a[224281] = actions(9682);
	v->a[224282] = 1;
	v->a[224283] = anon_sym_DQUOTE;
	v->a[224284] = actions(9686);
	v->a[224285] = 1;
	v->a[224286] = anon_sym_DOLLAR_LBRACE;
	v->a[224287] = actions(9688);
	v->a[224288] = 1;
	v->a[224289] = anon_sym_BQUOTE;
	v->a[224290] = actions(9690);
	v->a[224291] = 1;
	v->a[224292] = anon_sym_DOLLAR_BQUOTE;
	v->a[224293] = actions(9694);
	v->a[224294] = 1;
	v->a[224295] = sym__comment_word;
	v->a[224296] = actions(10680);
	v->a[224297] = 1;
	v->a[224298] = anon_sym_DOLLAR;
	v->a[224299] = actions(9676);
	small_parse_table_11215(v);
}

/* EOF small_parse_table_2242.c */
