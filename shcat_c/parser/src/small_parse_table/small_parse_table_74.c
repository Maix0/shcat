/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_74.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_370(t_small_parse_table_array *v)
{
	v->a[7400] = aux_sym_number_token2;
	v->a[7401] = actions(2273);
	v->a[7402] = 1;
	v->a[7403] = anon_sym_DOLLAR_LBRACE;
	v->a[7404] = actions(2275);
	v->a[7405] = 1;
	v->a[7406] = anon_sym_DOLLAR_LPAREN;
	v->a[7407] = actions(2277);
	v->a[7408] = 1;
	v->a[7409] = anon_sym_BQUOTE;
	v->a[7410] = actions(2279);
	v->a[7411] = 1;
	v->a[7412] = anon_sym_DOLLAR_BQUOTE;
	v->a[7413] = actions(2289);
	v->a[7414] = 1;
	v->a[7415] = sym__brace_start;
	v->a[7416] = actions(2361);
	v->a[7417] = 1;
	v->a[7418] = sym__special_character;
	v->a[7419] = actions(2365);
	small_parse_table_371(v);
}

void	small_parse_table_371(t_small_parse_table_array *v)
{
	v->a[7420] = 1;
	v->a[7421] = sym_variable_name;
	v->a[7422] = actions(2367);
	v->a[7423] = 1;
	v->a[7424] = sym_test_operator;
	v->a[7425] = actions(2486);
	v->a[7426] = 1;
	v->a[7427] = aux_sym__simple_variable_name_token1;
	v->a[7428] = state(1743);
	v->a[7429] = 1;
	v->a[7430] = aux_sym__literal_repeat1;
	v->a[7431] = state(6773);
	v->a[7432] = 1;
	v->a[7433] = sym_subscript;
	v->a[7434] = actions(1757);
	v->a[7435] = 2;
	v->a[7436] = sym_file_descriptor;
	v->a[7437] = aux_sym_heredoc_redirect_token1;
	v->a[7438] = actions(2259);
	v->a[7439] = 2;
	small_parse_table_372(v);
}

void	small_parse_table_372(t_small_parse_table_array *v)
{
	v->a[7440] = anon_sym_LPAREN_LPAREN;
	v->a[7441] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[7442] = actions(2281);
	v->a[7443] = 2;
	v->a[7444] = anon_sym_LT_LPAREN;
	v->a[7445] = anon_sym_GT_LPAREN;
	v->a[7446] = actions(2359);
	v->a[7447] = 3;
	v->a[7448] = sym_raw_string;
	v->a[7449] = sym_ansi_c_string;
	v->a[7450] = sym_word;
	v->a[7451] = state(610);
	v->a[7452] = 3;
	v->a[7453] = sym_variable_assignment;
	v->a[7454] = sym_concatenation;
	v->a[7455] = aux_sym_declaration_command_repeat1;
	v->a[7456] = state(1602);
	v->a[7457] = 9;
	v->a[7458] = sym_arithmetic_expansion;
	v->a[7459] = sym_brace_expression;
	small_parse_table_373(v);
}

void	small_parse_table_373(t_small_parse_table_array *v)
{
	v->a[7460] = sym_string;
	v->a[7461] = sym_translated_string;
	v->a[7462] = sym_number;
	v->a[7463] = sym_simple_expansion;
	v->a[7464] = sym_expansion;
	v->a[7465] = sym_command_substitution;
	v->a[7466] = sym_process_substitution;
	v->a[7467] = actions(1755);
	v->a[7468] = 19;
	v->a[7469] = anon_sym_SEMI;
	v->a[7470] = anon_sym_PIPE_PIPE;
	v->a[7471] = anon_sym_AMP_AMP;
	v->a[7472] = anon_sym_PIPE;
	v->a[7473] = anon_sym_AMP;
	v->a[7474] = anon_sym_LT;
	v->a[7475] = anon_sym_GT;
	v->a[7476] = anon_sym_LT_LT;
	v->a[7477] = anon_sym_GT_GT;
	v->a[7478] = anon_sym_SEMI_SEMI;
	v->a[7479] = anon_sym_PIPE_AMP;
	small_parse_table_374(v);
}

void	small_parse_table_374(t_small_parse_table_array *v)
{
	v->a[7480] = anon_sym_AMP_GT;
	v->a[7481] = anon_sym_AMP_GT_GT;
	v->a[7482] = anon_sym_LT_AMP;
	v->a[7483] = anon_sym_GT_AMP;
	v->a[7484] = anon_sym_GT_PIPE;
	v->a[7485] = anon_sym_LT_AMP_DASH;
	v->a[7486] = anon_sym_GT_AMP_DASH;
	v->a[7487] = anon_sym_LT_LT_DASH;
	v->a[7488] = 8;
	v->a[7489] = actions(3);
	v->a[7490] = 1;
	v->a[7491] = sym_comment;
	v->a[7492] = actions(2339);
	v->a[7493] = 1;
	v->a[7494] = anon_sym_DQUOTE;
	v->a[7495] = actions(2492);
	v->a[7496] = 1;
	v->a[7497] = sym_variable_name;
	v->a[7498] = state(1463);
	v->a[7499] = 1;
	small_parse_table_375(v);
}

/* EOF small_parse_table_74.c */
