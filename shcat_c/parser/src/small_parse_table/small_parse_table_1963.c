/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1963.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9815(t_small_parse_table_array *v)
{
	v->a[196300] = actions(3);
	v->a[196301] = 1;
	v->a[196302] = sym_comment;
	v->a[196303] = actions(3729);
	v->a[196304] = 1;
	v->a[196305] = anon_sym_DOLLAR_LBRACK;
	v->a[196306] = actions(3731);
	v->a[196307] = 1;
	v->a[196308] = anon_sym_DOLLAR;
	v->a[196309] = actions(3733);
	v->a[196310] = 1;
	v->a[196311] = sym__special_character;
	v->a[196312] = actions(3735);
	v->a[196313] = 1;
	v->a[196314] = anon_sym_DQUOTE;
	v->a[196315] = actions(3737);
	v->a[196316] = 1;
	v->a[196317] = aux_sym_number_token1;
	v->a[196318] = actions(3739);
	v->a[196319] = 1;
	small_parse_table_9816(v);
}

void	small_parse_table_9816(t_small_parse_table_array *v)
{
	v->a[196320] = aux_sym_number_token2;
	v->a[196321] = actions(3741);
	v->a[196322] = 1;
	v->a[196323] = anon_sym_DOLLAR_LBRACE;
	v->a[196324] = actions(3743);
	v->a[196325] = 1;
	v->a[196326] = anon_sym_DOLLAR_LPAREN;
	v->a[196327] = actions(3745);
	v->a[196328] = 1;
	v->a[196329] = anon_sym_BQUOTE;
	v->a[196330] = actions(3747);
	v->a[196331] = 1;
	v->a[196332] = anon_sym_DOLLAR_BQUOTE;
	v->a[196333] = actions(3753);
	v->a[196334] = 1;
	v->a[196335] = sym_test_operator;
	v->a[196336] = actions(3755);
	v->a[196337] = 1;
	v->a[196338] = sym__brace_start;
	v->a[196339] = actions(8804);
	small_parse_table_9817(v);
}

void	small_parse_table_9817(t_small_parse_table_array *v)
{
	v->a[196340] = 1;
	v->a[196341] = aux_sym_heredoc_redirect_token1;
	v->a[196342] = state(3571);
	v->a[196343] = 1;
	v->a[196344] = aux_sym__heredoc_command;
	v->a[196345] = state(5351);
	v->a[196346] = 1;
	v->a[196347] = aux_sym__literal_repeat1;
	v->a[196348] = state(5456);
	v->a[196349] = 1;
	v->a[196350] = sym_concatenation;
	v->a[196351] = actions(3715);
	v->a[196352] = 2;
	v->a[196353] = anon_sym_LPAREN_LPAREN;
	v->a[196354] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[196355] = actions(3749);
	v->a[196356] = 2;
	v->a[196357] = anon_sym_LT_LPAREN;
	v->a[196358] = anon_sym_GT_LPAREN;
	v->a[196359] = actions(3713);
	small_parse_table_9818(v);
}

void	small_parse_table_9818(t_small_parse_table_array *v)
{
	v->a[196360] = 3;
	v->a[196361] = sym_raw_string;
	v->a[196362] = sym_ansi_c_string;
	v->a[196363] = sym_word;
	v->a[196364] = state(5062);
	v->a[196365] = 9;
	v->a[196366] = sym_arithmetic_expansion;
	v->a[196367] = sym_brace_expression;
	v->a[196368] = sym_string;
	v->a[196369] = sym_translated_string;
	v->a[196370] = sym_number;
	v->a[196371] = sym_simple_expansion;
	v->a[196372] = sym_expansion;
	v->a[196373] = sym_command_substitution;
	v->a[196374] = sym_process_substitution;
	v->a[196375] = 21;
	v->a[196376] = actions(71);
	v->a[196377] = 1;
	v->a[196378] = sym_comment;
	v->a[196379] = actions(6488);
	small_parse_table_9819(v);
}

void	small_parse_table_9819(t_small_parse_table_array *v)
{
	v->a[196380] = 1;
	v->a[196381] = anon_sym_DOLLAR;
	v->a[196382] = actions(6494);
	v->a[196383] = 1;
	v->a[196384] = aux_sym_number_token1;
	v->a[196385] = actions(6496);
	v->a[196386] = 1;
	v->a[196387] = aux_sym_number_token2;
	v->a[196388] = actions(6500);
	v->a[196389] = 1;
	v->a[196390] = anon_sym_DOLLAR_LPAREN;
	v->a[196391] = actions(6510);
	v->a[196392] = 1;
	v->a[196393] = sym_extglob_pattern;
	v->a[196394] = actions(6512);
	v->a[196395] = 1;
	v->a[196396] = sym__brace_start;
	v->a[196397] = actions(7226);
	v->a[196398] = 1;
	v->a[196399] = anon_sym_DOLLAR_LBRACK;
	small_parse_table_9820(v);
}

/* EOF small_parse_table_1963.c */
