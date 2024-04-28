/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1822.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9110(t_small_parse_table_array *v)
{
	v->a[182200] = sym_arithmetic_expansion;
	v->a[182201] = sym_brace_expression;
	v->a[182202] = sym_string;
	v->a[182203] = sym_translated_string;
	v->a[182204] = sym_number;
	v->a[182205] = sym_simple_expansion;
	v->a[182206] = sym_expansion;
	v->a[182207] = sym_command_substitution;
	v->a[182208] = sym_process_substitution;
	v->a[182209] = 24;
	v->a[182210] = actions(71);
	v->a[182211] = 1;
	v->a[182212] = sym_comment;
	v->a[182213] = actions(6474);
	v->a[182214] = 1;
	v->a[182215] = sym_word;
	v->a[182216] = actions(6480);
	v->a[182217] = 1;
	v->a[182218] = anon_sym_LPAREN;
	v->a[182219] = actions(6488);
	small_parse_table_9111(v);
}

void	small_parse_table_9111(t_small_parse_table_array *v)
{
	v->a[182220] = 1;
	v->a[182221] = anon_sym_DOLLAR;
	v->a[182222] = actions(6494);
	v->a[182223] = 1;
	v->a[182224] = aux_sym_number_token1;
	v->a[182225] = actions(6496);
	v->a[182226] = 1;
	v->a[182227] = aux_sym_number_token2;
	v->a[182228] = actions(6500);
	v->a[182229] = 1;
	v->a[182230] = anon_sym_DOLLAR_LPAREN;
	v->a[182231] = actions(6508);
	v->a[182232] = 1;
	v->a[182233] = sym_test_operator;
	v->a[182234] = actions(6510);
	v->a[182235] = 1;
	v->a[182236] = sym_extglob_pattern;
	v->a[182237] = actions(6512);
	v->a[182238] = 1;
	v->a[182239] = sym__brace_start;
	small_parse_table_9112(v);
}

void	small_parse_table_9112(t_small_parse_table_array *v)
{
	v->a[182240] = actions(7226);
	v->a[182241] = 1;
	v->a[182242] = anon_sym_DOLLAR_LBRACK;
	v->a[182243] = actions(7228);
	v->a[182244] = 1;
	v->a[182245] = sym__special_character;
	v->a[182246] = actions(7230);
	v->a[182247] = 1;
	v->a[182248] = anon_sym_DQUOTE;
	v->a[182249] = actions(7234);
	v->a[182250] = 1;
	v->a[182251] = anon_sym_DOLLAR_LBRACE;
	v->a[182252] = actions(7236);
	v->a[182253] = 1;
	v->a[182254] = anon_sym_BQUOTE;
	v->a[182255] = actions(7238);
	v->a[182256] = 1;
	v->a[182257] = anon_sym_DOLLAR_BQUOTE;
	v->a[182258] = state(6426);
	v->a[182259] = 1;
	small_parse_table_9113(v);
}

void	small_parse_table_9113(t_small_parse_table_array *v)
{
	v->a[182260] = aux_sym__literal_repeat1;
	v->a[182261] = state(7007);
	v->a[182262] = 1;
	v->a[182263] = sym_last_case_item;
	v->a[182264] = actions(7224);
	v->a[182265] = 2;
	v->a[182266] = anon_sym_LPAREN_LPAREN;
	v->a[182267] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[182268] = actions(7232);
	v->a[182269] = 2;
	v->a[182270] = sym_raw_string;
	v->a[182271] = sym_ansi_c_string;
	v->a[182272] = actions(7240);
	v->a[182273] = 2;
	v->a[182274] = anon_sym_LT_LPAREN;
	v->a[182275] = anon_sym_GT_LPAREN;
	v->a[182276] = state(3477);
	v->a[182277] = 2;
	v->a[182278] = sym_case_item;
	v->a[182279] = aux_sym_case_statement_repeat1;
	small_parse_table_9114(v);
}

void	small_parse_table_9114(t_small_parse_table_array *v)
{
	v->a[182280] = state(6695);
	v->a[182281] = 2;
	v->a[182282] = sym_concatenation;
	v->a[182283] = sym__extglob_blob;
	v->a[182284] = state(6303);
	v->a[182285] = 9;
	v->a[182286] = sym_arithmetic_expansion;
	v->a[182287] = sym_brace_expression;
	v->a[182288] = sym_string;
	v->a[182289] = sym_translated_string;
	v->a[182290] = sym_number;
	v->a[182291] = sym_simple_expansion;
	v->a[182292] = sym_expansion;
	v->a[182293] = sym_command_substitution;
	v->a[182294] = sym_process_substitution;
	v->a[182295] = 5;
	v->a[182296] = actions(71);
	v->a[182297] = 1;
	v->a[182298] = sym_comment;
	v->a[182299] = actions(7719);
	small_parse_table_9115(v);
}

/* EOF small_parse_table_1822.c */
