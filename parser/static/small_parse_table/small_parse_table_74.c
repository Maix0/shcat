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
	v->a[7400] = 9;
	v->a[7401] = anon_sym_BANG;
	v->a[7402] = anon_sym_DASH;
	v->a[7403] = anon_sym_STAR;
	v->a[7404] = anon_sym_QMARK;
	v->a[7405] = anon_sym_DOLLAR;
	v->a[7406] = anon_sym_POUND;
	v->a[7407] = anon_sym_AT;
	v->a[7408] = anon_sym_0;
	v->a[7409] = anon_sym__;
	v->a[7410] = actions(810);
	v->a[7411] = 32;
	v->a[7412] = anon_sym_PIPE;
	v->a[7413] = anon_sym_RPAREN;
	v->a[7414] = anon_sym_SEMI_SEMI;
	v->a[7415] = anon_sym_PIPE_AMP;
	v->a[7416] = anon_sym_AMP_AMP;
	v->a[7417] = anon_sym_PIPE_PIPE;
	v->a[7418] = anon_sym_LT;
	v->a[7419] = anon_sym_GT;
	small_parse_table_371(v);
}

void	small_parse_table_371(t_small_parse_table_array *v)
{
	v->a[7420] = anon_sym_GT_GT;
	v->a[7421] = anon_sym_AMP_GT;
	v->a[7422] = anon_sym_AMP_GT_GT;
	v->a[7423] = anon_sym_LT_AMP;
	v->a[7424] = anon_sym_GT_AMP;
	v->a[7425] = anon_sym_GT_PIPE;
	v->a[7426] = anon_sym_LT_AMP_DASH;
	v->a[7427] = anon_sym_GT_AMP_DASH;
	v->a[7428] = anon_sym_LT_LT;
	v->a[7429] = anon_sym_LT_LT_DASH;
	v->a[7430] = aux_sym_heredoc_redirect_token1;
	v->a[7431] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[7432] = anon_sym_AMP;
	v->a[7433] = sym__special_character;
	v->a[7434] = anon_sym_DQUOTE;
	v->a[7435] = sym_raw_string;
	v->a[7436] = aux_sym_number_token1;
	v->a[7437] = aux_sym_number_token2;
	v->a[7438] = anon_sym_DOLLAR_LBRACE;
	v->a[7439] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_372(v);
}

void	small_parse_table_372(t_small_parse_table_array *v)
{
	v->a[7440] = anon_sym_BQUOTE;
	v->a[7441] = anon_sym_DOLLAR_BQUOTE;
	v->a[7442] = sym_word;
	v->a[7443] = anon_sym_SEMI;
	v->a[7444] = 6;
	v->a[7445] = actions(3);
	v->a[7446] = 1;
	v->a[7447] = sym_comment;
	v->a[7448] = actions(1806);
	v->a[7449] = 1;
	v->a[7450] = sym_variable_name;
	v->a[7451] = actions(1804);
	v->a[7452] = 2;
	v->a[7453] = aux_sym__simple_variable_name_token1;
	v->a[7454] = aux_sym__multiline_variable_name_token1;
	v->a[7455] = actions(816);
	v->a[7456] = 3;
	v->a[7457] = sym_file_descriptor;
	v->a[7458] = sym_test_operator;
	v->a[7459] = sym__brace_start;
	small_parse_table_373(v);
}

void	small_parse_table_373(t_small_parse_table_array *v)
{
	v->a[7460] = actions(1802);
	v->a[7461] = 9;
	v->a[7462] = anon_sym_BANG;
	v->a[7463] = anon_sym_DASH;
	v->a[7464] = anon_sym_STAR;
	v->a[7465] = anon_sym_QMARK;
	v->a[7466] = anon_sym_DOLLAR;
	v->a[7467] = anon_sym_POUND;
	v->a[7468] = anon_sym_AT;
	v->a[7469] = anon_sym_0;
	v->a[7470] = anon_sym__;
	v->a[7471] = actions(810);
	v->a[7472] = 32;
	v->a[7473] = anon_sym_PIPE;
	v->a[7474] = anon_sym_RPAREN;
	v->a[7475] = anon_sym_SEMI_SEMI;
	v->a[7476] = anon_sym_PIPE_AMP;
	v->a[7477] = anon_sym_AMP_AMP;
	v->a[7478] = anon_sym_PIPE_PIPE;
	v->a[7479] = anon_sym_LT;
	small_parse_table_374(v);
}

void	small_parse_table_374(t_small_parse_table_array *v)
{
	v->a[7480] = anon_sym_GT;
	v->a[7481] = anon_sym_GT_GT;
	v->a[7482] = anon_sym_AMP_GT;
	v->a[7483] = anon_sym_AMP_GT_GT;
	v->a[7484] = anon_sym_LT_AMP;
	v->a[7485] = anon_sym_GT_AMP;
	v->a[7486] = anon_sym_GT_PIPE;
	v->a[7487] = anon_sym_LT_AMP_DASH;
	v->a[7488] = anon_sym_GT_AMP_DASH;
	v->a[7489] = anon_sym_LT_LT;
	v->a[7490] = anon_sym_LT_LT_DASH;
	v->a[7491] = aux_sym_heredoc_redirect_token1;
	v->a[7492] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[7493] = anon_sym_AMP;
	v->a[7494] = sym__special_character;
	v->a[7495] = anon_sym_DQUOTE;
	v->a[7496] = sym_raw_string;
	v->a[7497] = aux_sym_number_token1;
	v->a[7498] = aux_sym_number_token2;
	v->a[7499] = anon_sym_DOLLAR_LBRACE;
	small_parse_table_375(v);
}

/* EOF small_parse_table_74.c */
