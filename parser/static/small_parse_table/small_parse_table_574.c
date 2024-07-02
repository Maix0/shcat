/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_574.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2870(t_small_parse_table_array *v)
{
	v->a[57400] = anon_sym_LT_LT;
	v->a[57401] = anon_sym_LT_LT_DASH;
	v->a[57402] = actions(696);
	v->a[57403] = 3;
	v->a[57404] = anon_sym_SEMI_SEMI;
	v->a[57405] = anon_sym_AMP;
	v->a[57406] = anon_sym_SEMI;
	v->a[57407] = state(1031);
	v->a[57408] = 3;
	v->a[57409] = sym_file_redirect;
	v->a[57410] = sym_heredoc_redirect;
	v->a[57411] = aux_sym_redirected_statement_repeat1;
	v->a[57412] = actions(1855);
	v->a[57413] = 7;
	v->a[57414] = anon_sym_LT;
	v->a[57415] = anon_sym_GT;
	v->a[57416] = anon_sym_GT_GT;
	v->a[57417] = anon_sym_LT_AMP;
	v->a[57418] = anon_sym_GT_AMP;
	v->a[57419] = anon_sym_GT_PIPE;
	small_parse_table_2871(v);
}

void	small_parse_table_2871(t_small_parse_table_array *v)
{
	v->a[57420] = anon_sym_LT_GT;
	v->a[57421] = 5;
	v->a[57422] = actions(3);
	v->a[57423] = 1;
	v->a[57424] = sym_comment;
	v->a[57425] = actions(692);
	v->a[57426] = 1;
	v->a[57427] = anon_sym_PIPE;
	v->a[57428] = actions(995);
	v->a[57429] = 2;
	v->a[57430] = sym_file_descriptor;
	v->a[57431] = aux_sym_heredoc_redirect_token1;
	v->a[57432] = state(1059);
	v->a[57433] = 3;
	v->a[57434] = sym_file_redirect;
	v->a[57435] = sym_heredoc_redirect;
	v->a[57436] = aux_sym_redirected_statement_repeat1;
	v->a[57437] = actions(997);
	v->a[57438] = 15;
	v->a[57439] = anon_sym_esac;
	small_parse_table_2872(v);
}

void	small_parse_table_2872(t_small_parse_table_array *v)
{
	v->a[57440] = anon_sym_SEMI_SEMI;
	v->a[57441] = anon_sym_AMP_AMP;
	v->a[57442] = anon_sym_PIPE_PIPE;
	v->a[57443] = anon_sym_LT;
	v->a[57444] = anon_sym_GT;
	v->a[57445] = anon_sym_GT_GT;
	v->a[57446] = anon_sym_LT_AMP;
	v->a[57447] = anon_sym_GT_AMP;
	v->a[57448] = anon_sym_GT_PIPE;
	v->a[57449] = anon_sym_LT_GT;
	v->a[57450] = anon_sym_LT_LT;
	v->a[57451] = anon_sym_LT_LT_DASH;
	v->a[57452] = anon_sym_AMP;
	v->a[57453] = anon_sym_SEMI;
	v->a[57454] = 15;
	v->a[57455] = actions(3);
	v->a[57456] = 1;
	v->a[57457] = sym_comment;
	v->a[57458] = actions(1637);
	v->a[57459] = 1;
	small_parse_table_2873(v);
}

void	small_parse_table_2873(t_small_parse_table_array *v)
{
	v->a[57460] = anon_sym_LPAREN;
	v->a[57461] = actions(1641);
	v->a[57462] = 1;
	v->a[57463] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[57464] = actions(1643);
	v->a[57465] = 1;
	v->a[57466] = anon_sym_DOLLAR;
	v->a[57467] = actions(1645);
	v->a[57468] = 1;
	v->a[57469] = anon_sym_DQUOTE;
	v->a[57470] = actions(1647);
	v->a[57471] = 1;
	v->a[57472] = anon_sym_DOLLAR_LBRACE;
	v->a[57473] = actions(1649);
	v->a[57474] = 1;
	v->a[57475] = anon_sym_DOLLAR_LPAREN;
	v->a[57476] = actions(1651);
	v->a[57477] = 1;
	v->a[57478] = anon_sym_BQUOTE;
	v->a[57479] = actions(1653);
	small_parse_table_2874(v);
}

void	small_parse_table_2874(t_small_parse_table_array *v)
{
	v->a[57480] = 1;
	v->a[57481] = sym_extglob_pattern;
	v->a[57482] = state(1123);
	v->a[57483] = 1;
	v->a[57484] = aux_sym_case_statement_repeat1;
	v->a[57485] = state(1713);
	v->a[57486] = 1;
	v->a[57487] = sym_case_item;
	v->a[57488] = state(2129);
	v->a[57489] = 1;
	v->a[57490] = sym__case_item_last;
	v->a[57491] = state(1873);
	v->a[57492] = 2;
	v->a[57493] = sym_concatenation;
	v->a[57494] = sym__extglob_blob;
	v->a[57495] = actions(1633);
	v->a[57496] = 3;
	v->a[57497] = sym_raw_string;
	v->a[57498] = sym_number;
	v->a[57499] = sym_word;
	small_parse_table_2875(v);
}

/* EOF small_parse_table_574.c */
