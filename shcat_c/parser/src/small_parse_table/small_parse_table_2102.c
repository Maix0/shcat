/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_2102.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_10510(t_small_parse_table_array *v)
{
	v->a[210200] = 1;
	v->a[210201] = aux_sym_number_token1;
	v->a[210202] = actions(3618);
	v->a[210203] = 1;
	v->a[210204] = aux_sym_number_token2;
	v->a[210205] = actions(3622);
	v->a[210206] = 1;
	v->a[210207] = anon_sym_DOLLAR_LPAREN;
	v->a[210208] = actions(3632);
	v->a[210209] = 1;
	v->a[210210] = sym__brace_start;
	v->a[210211] = actions(8850);
	v->a[210212] = 1;
	v->a[210213] = anon_sym_DOLLAR_LBRACK;
	v->a[210214] = actions(8854);
	v->a[210215] = 1;
	v->a[210216] = anon_sym_DQUOTE;
	v->a[210217] = actions(8858);
	v->a[210218] = 1;
	v->a[210219] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_10511(v);
}

void	small_parse_table_10511(t_small_parse_table_array *v)
{
	v->a[210220] = actions(8860);
	v->a[210221] = 1;
	v->a[210222] = anon_sym_BQUOTE;
	v->a[210223] = actions(8862);
	v->a[210224] = 1;
	v->a[210225] = anon_sym_DOLLAR_BQUOTE;
	v->a[210226] = actions(9516);
	v->a[210227] = 1;
	v->a[210228] = sym_word;
	v->a[210229] = actions(9524);
	v->a[210230] = 1;
	v->a[210231] = sym__comment_word;
	v->a[210232] = actions(9932);
	v->a[210233] = 1;
	v->a[210234] = anon_sym_DOLLAR;
	v->a[210235] = actions(8848);
	v->a[210236] = 2;
	v->a[210237] = anon_sym_LPAREN_LPAREN;
	v->a[210238] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[210239] = actions(8864);
	small_parse_table_10512(v);
}

void	small_parse_table_10512(t_small_parse_table_array *v)
{
	v->a[210240] = 2;
	v->a[210241] = anon_sym_LT_LPAREN;
	v->a[210242] = anon_sym_GT_LPAREN;
	v->a[210243] = actions(9520);
	v->a[210244] = 2;
	v->a[210245] = sym_test_operator;
	v->a[210246] = sym__special_character;
	v->a[210247] = actions(9522);
	v->a[210248] = 3;
	v->a[210249] = sym__bare_dollar;
	v->a[210250] = sym_raw_string;
	v->a[210251] = sym_ansi_c_string;
	v->a[210252] = state(2210);
	v->a[210253] = 9;
	v->a[210254] = sym_arithmetic_expansion;
	v->a[210255] = sym_brace_expression;
	v->a[210256] = sym_string;
	v->a[210257] = sym_translated_string;
	v->a[210258] = sym_number;
	v->a[210259] = sym_simple_expansion;
	small_parse_table_10513(v);
}

void	small_parse_table_10513(t_small_parse_table_array *v)
{
	v->a[210260] = sym_expansion;
	v->a[210261] = sym_command_substitution;
	v->a[210262] = sym_process_substitution;
	v->a[210263] = 21;
	v->a[210264] = actions(71);
	v->a[210265] = 1;
	v->a[210266] = sym_comment;
	v->a[210267] = actions(9364);
	v->a[210268] = 1;
	v->a[210269] = anon_sym_LPAREN;
	v->a[210270] = actions(9366);
	v->a[210271] = 1;
	v->a[210272] = anon_sym_BANG;
	v->a[210273] = actions(9372);
	v->a[210274] = 1;
	v->a[210275] = anon_sym_TILDE;
	v->a[210276] = actions(9374);
	v->a[210277] = 1;
	v->a[210278] = anon_sym_DOLLAR;
	v->a[210279] = actions(9376);
	small_parse_table_10514(v);
}

void	small_parse_table_10514(t_small_parse_table_array *v)
{
	v->a[210280] = 1;
	v->a[210281] = anon_sym_DQUOTE;
	v->a[210282] = actions(9378);
	v->a[210283] = 1;
	v->a[210284] = aux_sym_number_token1;
	v->a[210285] = actions(9380);
	v->a[210286] = 1;
	v->a[210287] = aux_sym_number_token2;
	v->a[210288] = actions(9382);
	v->a[210289] = 1;
	v->a[210290] = anon_sym_DOLLAR_LBRACE;
	v->a[210291] = actions(9384);
	v->a[210292] = 1;
	v->a[210293] = anon_sym_DOLLAR_LPAREN;
	v->a[210294] = actions(9386);
	v->a[210295] = 1;
	v->a[210296] = anon_sym_BQUOTE;
	v->a[210297] = actions(9388);
	v->a[210298] = 1;
	v->a[210299] = anon_sym_DOLLAR_BQUOTE;
	small_parse_table_10515(v);
}

/* EOF small_parse_table_2102.c */
