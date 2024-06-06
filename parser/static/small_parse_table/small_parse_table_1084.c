/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1084.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_5420(t_small_parse_table_array *v)
{
	v->a[108400] = sym__brace_start;
	v->a[108401] = actions(6246);
	v->a[108402] = 1;
	v->a[108403] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[108404] = actions(6248);
	v->a[108405] = 1;
	v->a[108406] = sym__special_character;
	v->a[108407] = actions(6250);
	v->a[108408] = 1;
	v->a[108409] = anon_sym_DQUOTE;
	v->a[108410] = actions(6252);
	v->a[108411] = 1;
	v->a[108412] = anon_sym_DOLLAR_LBRACE;
	v->a[108413] = actions(6254);
	v->a[108414] = 1;
	v->a[108415] = anon_sym_BQUOTE;
	v->a[108416] = actions(6256);
	v->a[108417] = 1;
	v->a[108418] = anon_sym_DOLLAR_BQUOTE;
	v->a[108419] = state(1205);
	small_parse_table_5421(v);
}

void	small_parse_table_5421(t_small_parse_table_array *v)
{
	v->a[108420] = 1;
	v->a[108421] = aux_sym__literal_repeat1;
	v->a[108422] = actions(1991);
	v->a[108423] = 2;
	v->a[108424] = sym_test_operator;
	v->a[108425] = sym_raw_string;
	v->a[108426] = state(369);
	v->a[108427] = 2;
	v->a[108428] = sym_concatenation;
	v->a[108429] = aux_sym_for_statement_repeat1;
	v->a[108430] = state(791);
	v->a[108431] = 7;
	v->a[108432] = sym_arithmetic_expansion;
	v->a[108433] = sym_brace_expression;
	v->a[108434] = sym_string;
	v->a[108435] = sym_number;
	v->a[108436] = sym_simple_expansion;
	v->a[108437] = sym_expansion;
	v->a[108438] = sym_command_substitution;
	v->a[108439] = 3;
	small_parse_table_5422(v);
}

void	small_parse_table_5422(t_small_parse_table_array *v)
{
	v->a[108440] = actions(3);
	v->a[108441] = 1;
	v->a[108442] = sym_comment;
	v->a[108443] = actions(6215);
	v->a[108444] = 3;
	v->a[108445] = sym_file_descriptor;
	v->a[108446] = ts_builtin_sym_end;
	v->a[108447] = aux_sym_heredoc_redirect_token1;
	v->a[108448] = actions(6213);
	v->a[108449] = 21;
	v->a[108450] = anon_sym_PIPE;
	v->a[108451] = anon_sym_RPAREN;
	v->a[108452] = anon_sym_SEMI_SEMI;
	v->a[108453] = anon_sym_PIPE_AMP;
	v->a[108454] = anon_sym_AMP_AMP;
	v->a[108455] = anon_sym_PIPE_PIPE;
	v->a[108456] = anon_sym_LT;
	v->a[108457] = anon_sym_GT;
	v->a[108458] = anon_sym_GT_GT;
	v->a[108459] = anon_sym_AMP_GT;
	small_parse_table_5423(v);
}

void	small_parse_table_5423(t_small_parse_table_array *v)
{
	v->a[108460] = anon_sym_AMP_GT_GT;
	v->a[108461] = anon_sym_LT_AMP;
	v->a[108462] = anon_sym_GT_AMP;
	v->a[108463] = anon_sym_GT_PIPE;
	v->a[108464] = anon_sym_LT_AMP_DASH;
	v->a[108465] = anon_sym_GT_AMP_DASH;
	v->a[108466] = anon_sym_LT_LT;
	v->a[108467] = anon_sym_LT_LT_DASH;
	v->a[108468] = anon_sym_AMP;
	v->a[108469] = anon_sym_BQUOTE;
	v->a[108470] = anon_sym_SEMI;
	v->a[108471] = 3;
	v->a[108472] = actions(3);
	v->a[108473] = 1;
	v->a[108474] = sym_comment;
	v->a[108475] = actions(6211);
	v->a[108476] = 3;
	v->a[108477] = sym_file_descriptor;
	v->a[108478] = ts_builtin_sym_end;
	v->a[108479] = aux_sym_heredoc_redirect_token1;
	small_parse_table_5424(v);
}

void	small_parse_table_5424(t_small_parse_table_array *v)
{
	v->a[108480] = actions(6209);
	v->a[108481] = 21;
	v->a[108482] = anon_sym_PIPE;
	v->a[108483] = anon_sym_RPAREN;
	v->a[108484] = anon_sym_SEMI_SEMI;
	v->a[108485] = anon_sym_PIPE_AMP;
	v->a[108486] = anon_sym_AMP_AMP;
	v->a[108487] = anon_sym_PIPE_PIPE;
	v->a[108488] = anon_sym_LT;
	v->a[108489] = anon_sym_GT;
	v->a[108490] = anon_sym_GT_GT;
	v->a[108491] = anon_sym_AMP_GT;
	v->a[108492] = anon_sym_AMP_GT_GT;
	v->a[108493] = anon_sym_LT_AMP;
	v->a[108494] = anon_sym_GT_AMP;
	v->a[108495] = anon_sym_GT_PIPE;
	v->a[108496] = anon_sym_LT_AMP_DASH;
	v->a[108497] = anon_sym_GT_AMP_DASH;
	v->a[108498] = anon_sym_LT_LT;
	v->a[108499] = anon_sym_LT_LT_DASH;
	small_parse_table_5425(v);
}

/* EOF small_parse_table_1084.c */
