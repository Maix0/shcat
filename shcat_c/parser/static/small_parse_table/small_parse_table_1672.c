/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1672.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8360(t_small_parse_table_array *v)
{
	v->a[167200] = aux_sym_number_token1;
	v->a[167201] = actions(6496);
	v->a[167202] = 1;
	v->a[167203] = aux_sym_number_token2;
	v->a[167204] = actions(6500);
	v->a[167205] = 1;
	v->a[167206] = anon_sym_DOLLAR_LPAREN;
	v->a[167207] = actions(6508);
	v->a[167208] = 1;
	v->a[167209] = sym_test_operator;
	v->a[167210] = actions(6510);
	v->a[167211] = 1;
	v->a[167212] = sym_extglob_pattern;
	v->a[167213] = actions(6512);
	v->a[167214] = 1;
	v->a[167215] = sym__brace_start;
	v->a[167216] = actions(6574);
	v->a[167217] = 1;
	v->a[167218] = anon_sym_esac;
	v->a[167219] = actions(7226);
	small_parse_table_8361(v);
}

void	small_parse_table_8361(t_small_parse_table_array *v)
{
	v->a[167220] = 1;
	v->a[167221] = anon_sym_DOLLAR_LBRACK;
	v->a[167222] = actions(7228);
	v->a[167223] = 1;
	v->a[167224] = sym__special_character;
	v->a[167225] = actions(7230);
	v->a[167226] = 1;
	v->a[167227] = anon_sym_DQUOTE;
	v->a[167228] = actions(7234);
	v->a[167229] = 1;
	v->a[167230] = anon_sym_DOLLAR_LBRACE;
	v->a[167231] = actions(7236);
	v->a[167232] = 1;
	v->a[167233] = anon_sym_BQUOTE;
	v->a[167234] = actions(7238);
	v->a[167235] = 1;
	v->a[167236] = anon_sym_DOLLAR_BQUOTE;
	v->a[167237] = state(6426);
	v->a[167238] = 1;
	v->a[167239] = aux_sym__literal_repeat1;
	small_parse_table_8362(v);
}

void	small_parse_table_8362(t_small_parse_table_array *v)
{
	v->a[167240] = state(7603);
	v->a[167241] = 1;
	v->a[167242] = sym_last_case_item;
	v->a[167243] = actions(7224);
	v->a[167244] = 2;
	v->a[167245] = anon_sym_LPAREN_LPAREN;
	v->a[167246] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[167247] = actions(7232);
	v->a[167248] = 2;
	v->a[167249] = sym_raw_string;
	v->a[167250] = sym_ansi_c_string;
	v->a[167251] = actions(7240);
	v->a[167252] = 2;
	v->a[167253] = anon_sym_LT_LPAREN;
	v->a[167254] = anon_sym_GT_LPAREN;
	v->a[167255] = state(3440);
	v->a[167256] = 2;
	v->a[167257] = sym_case_item;
	v->a[167258] = aux_sym_case_statement_repeat1;
	v->a[167259] = state(6695);
	small_parse_table_8363(v);
}

void	small_parse_table_8363(t_small_parse_table_array *v)
{
	v->a[167260] = 2;
	v->a[167261] = sym_concatenation;
	v->a[167262] = sym__extglob_blob;
	v->a[167263] = state(6303);
	v->a[167264] = 9;
	v->a[167265] = sym_arithmetic_expansion;
	v->a[167266] = sym_brace_expression;
	v->a[167267] = sym_string;
	v->a[167268] = sym_translated_string;
	v->a[167269] = sym_number;
	v->a[167270] = sym_simple_expansion;
	v->a[167271] = sym_expansion;
	v->a[167272] = sym_command_substitution;
	v->a[167273] = sym_process_substitution;
	v->a[167274] = 25;
	v->a[167275] = actions(71);
	v->a[167276] = 1;
	v->a[167277] = sym_comment;
	v->a[167278] = actions(6474);
	v->a[167279] = 1;
	small_parse_table_8364(v);
}

void	small_parse_table_8364(t_small_parse_table_array *v)
{
	v->a[167280] = sym_word;
	v->a[167281] = actions(6480);
	v->a[167282] = 1;
	v->a[167283] = anon_sym_LPAREN;
	v->a[167284] = actions(6488);
	v->a[167285] = 1;
	v->a[167286] = anon_sym_DOLLAR;
	v->a[167287] = actions(6494);
	v->a[167288] = 1;
	v->a[167289] = aux_sym_number_token1;
	v->a[167290] = actions(6496);
	v->a[167291] = 1;
	v->a[167292] = aux_sym_number_token2;
	v->a[167293] = actions(6500);
	v->a[167294] = 1;
	v->a[167295] = anon_sym_DOLLAR_LPAREN;
	v->a[167296] = actions(6508);
	v->a[167297] = 1;
	v->a[167298] = sym_test_operator;
	v->a[167299] = actions(6510);
	small_parse_table_8365(v);
}

/* EOF small_parse_table_1672.c */
