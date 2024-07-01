/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_604.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3020(t_small_parse_table_array *v)
{
	v->a[60400] = anon_sym_BQUOTE;
	v->a[60401] = actions(1650);
	v->a[60402] = 1;
	v->a[60403] = sym_extglob_pattern;
	v->a[60404] = state(1139);
	v->a[60405] = 1;
	v->a[60406] = aux_sym_case_statement_repeat1;
	v->a[60407] = state(1713);
	v->a[60408] = 1;
	v->a[60409] = sym_case_item;
	v->a[60410] = state(2047);
	v->a[60411] = 1;
	v->a[60412] = sym__case_item_last;
	v->a[60413] = state(1871);
	v->a[60414] = 2;
	v->a[60415] = sym_concatenation;
	v->a[60416] = sym__extglob_blob;
	v->a[60417] = actions(1630);
	v->a[60418] = 3;
	v->a[60419] = sym_raw_string;
	small_parse_table_3021(v);
}

void	small_parse_table_3021(t_small_parse_table_array *v)
{
	v->a[60420] = sym_number;
	v->a[60421] = sym_word;
	v->a[60422] = state(1804);
	v->a[60423] = 5;
	v->a[60424] = sym_arithmetic_expansion;
	v->a[60425] = sym_string;
	v->a[60426] = sym_simple_expansion;
	v->a[60427] = sym_expansion;
	v->a[60428] = sym_command_substitution;
	v->a[60429] = 6;
	v->a[60430] = actions(3);
	v->a[60431] = 1;
	v->a[60432] = sym_comment;
	v->a[60433] = actions(1941);
	v->a[60434] = 1;
	v->a[60435] = aux_sym_concatenation_token1;
	v->a[60436] = actions(1999);
	v->a[60437] = 1;
	v->a[60438] = sym__concat;
	v->a[60439] = state(1082);
	small_parse_table_3022(v);
}

void	small_parse_table_3022(t_small_parse_table_array *v)
{
	v->a[60440] = 1;
	v->a[60441] = aux_sym_concatenation_repeat1;
	v->a[60442] = actions(1047);
	v->a[60443] = 2;
	v->a[60444] = sym_file_descriptor;
	v->a[60445] = sym_variable_name;
	v->a[60446] = actions(1043);
	v->a[60447] = 16;
	v->a[60448] = anon_sym_LT;
	v->a[60449] = anon_sym_GT;
	v->a[60450] = anon_sym_GT_GT;
	v->a[60451] = anon_sym_LT_AMP;
	v->a[60452] = anon_sym_GT_AMP;
	v->a[60453] = anon_sym_GT_PIPE;
	v->a[60454] = anon_sym_LT_GT;
	v->a[60455] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[60456] = anon_sym_DOLLAR;
	v->a[60457] = anon_sym_DQUOTE;
	v->a[60458] = sym_raw_string;
	v->a[60459] = sym_number;
	small_parse_table_3023(v);
}

void	small_parse_table_3023(t_small_parse_table_array *v)
{
	v->a[60460] = anon_sym_DOLLAR_LBRACE;
	v->a[60461] = anon_sym_DOLLAR_LPAREN;
	v->a[60462] = anon_sym_BQUOTE;
	v->a[60463] = sym_word;
	v->a[60464] = 7;
	v->a[60465] = actions(3);
	v->a[60466] = 1;
	v->a[60467] = sym_comment;
	v->a[60468] = actions(1853);
	v->a[60469] = 1;
	v->a[60470] = sym_file_descriptor;
	v->a[60471] = actions(1955);
	v->a[60472] = 1;
	v->a[60473] = aux_sym_heredoc_redirect_token1;
	v->a[60474] = actions(757);
	v->a[60475] = 2;
	v->a[60476] = anon_sym_LT_LT;
	v->a[60477] = anon_sym_LT_LT_DASH;
	v->a[60478] = state(1069);
	v->a[60479] = 3;
	small_parse_table_3024(v);
}

void	small_parse_table_3024(t_small_parse_table_array *v)
{
	v->a[60480] = sym_file_redirect;
	v->a[60481] = sym_heredoc_redirect;
	v->a[60482] = aux_sym_redirected_statement_repeat1;
	v->a[60483] = actions(1849);
	v->a[60484] = 7;
	v->a[60485] = anon_sym_LT;
	v->a[60486] = anon_sym_GT;
	v->a[60487] = anon_sym_GT_GT;
	v->a[60488] = anon_sym_LT_AMP;
	v->a[60489] = anon_sym_GT_AMP;
	v->a[60490] = anon_sym_GT_PIPE;
	v->a[60491] = anon_sym_LT_GT;
	v->a[60492] = actions(1953);
	v->a[60493] = 7;
	v->a[60494] = anon_sym_esac;
	v->a[60495] = anon_sym_PIPE;
	v->a[60496] = anon_sym_SEMI_SEMI;
	v->a[60497] = anon_sym_AMP_AMP;
	v->a[60498] = anon_sym_PIPE_PIPE;
	v->a[60499] = anon_sym_AMP;
	small_parse_table_3025(v);
}

/* EOF small_parse_table_604.c */
