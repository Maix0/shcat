/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_54.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_270(t_small_parse_table_array *v)
{
	v->a[5400] = actions(1392);
	v->a[5401] = 2;
	v->a[5402] = sym_raw_string;
	v->a[5403] = sym_word;
	v->a[5404] = state(307);
	v->a[5405] = 2;
	v->a[5406] = sym_concatenation;
	v->a[5407] = aux_sym_unset_command_repeat1;
	v->a[5408] = state(742);
	v->a[5409] = 7;
	v->a[5410] = sym_arithmetic_expansion;
	v->a[5411] = sym_brace_expression;
	v->a[5412] = sym_string;
	v->a[5413] = sym_number;
	v->a[5414] = sym_simple_expansion;
	v->a[5415] = sym_expansion;
	v->a[5416] = sym_command_substitution;
	v->a[5417] = actions(1244);
	v->a[5418] = 21;
	v->a[5419] = anon_sym_PIPE;
	small_parse_table_271(v);
}

void	small_parse_table_271(t_small_parse_table_array *v)
{
	v->a[5420] = anon_sym_SEMI_SEMI;
	v->a[5421] = anon_sym_SEMI_AMP;
	v->a[5422] = anon_sym_SEMI_SEMI_AMP;
	v->a[5423] = anon_sym_PIPE_AMP;
	v->a[5424] = anon_sym_AMP_AMP;
	v->a[5425] = anon_sym_PIPE_PIPE;
	v->a[5426] = anon_sym_LT;
	v->a[5427] = anon_sym_GT;
	v->a[5428] = anon_sym_GT_GT;
	v->a[5429] = anon_sym_AMP_GT;
	v->a[5430] = anon_sym_AMP_GT_GT;
	v->a[5431] = anon_sym_LT_AMP;
	v->a[5432] = anon_sym_GT_AMP;
	v->a[5433] = anon_sym_GT_PIPE;
	v->a[5434] = anon_sym_LT_AMP_DASH;
	v->a[5435] = anon_sym_GT_AMP_DASH;
	v->a[5436] = anon_sym_LT_LT;
	v->a[5437] = anon_sym_LT_LT_DASH;
	v->a[5438] = anon_sym_AMP;
	v->a[5439] = anon_sym_SEMI;
	small_parse_table_272(v);
}

void	small_parse_table_272(t_small_parse_table_array *v)
{
	v->a[5440] = 21;
	v->a[5441] = actions(3);
	v->a[5442] = 1;
	v->a[5443] = sym_comment;
	v->a[5444] = actions(921);
	v->a[5445] = 1;
	v->a[5446] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[5447] = actions(923);
	v->a[5448] = 1;
	v->a[5449] = anon_sym_DOLLAR;
	v->a[5450] = actions(925);
	v->a[5451] = 1;
	v->a[5452] = sym__special_character;
	v->a[5453] = actions(927);
	v->a[5454] = 1;
	v->a[5455] = anon_sym_DQUOTE;
	v->a[5456] = actions(929);
	v->a[5457] = 1;
	v->a[5458] = aux_sym_number_token1;
	v->a[5459] = actions(931);
	small_parse_table_273(v);
}

void	small_parse_table_273(t_small_parse_table_array *v)
{
	v->a[5460] = 1;
	v->a[5461] = aux_sym_number_token2;
	v->a[5462] = actions(933);
	v->a[5463] = 1;
	v->a[5464] = anon_sym_DOLLAR_LBRACE;
	v->a[5465] = actions(935);
	v->a[5466] = 1;
	v->a[5467] = anon_sym_DOLLAR_LPAREN;
	v->a[5468] = actions(937);
	v->a[5469] = 1;
	v->a[5470] = anon_sym_BQUOTE;
	v->a[5471] = actions(939);
	v->a[5472] = 1;
	v->a[5473] = anon_sym_DOLLAR_BQUOTE;
	v->a[5474] = actions(941);
	v->a[5475] = 1;
	v->a[5476] = sym_test_operator;
	v->a[5477] = actions(943);
	v->a[5478] = 1;
	v->a[5479] = sym__bare_dollar;
	small_parse_table_274(v);
}

void	small_parse_table_274(t_small_parse_table_array *v)
{
	v->a[5480] = actions(945);
	v->a[5481] = 1;
	v->a[5482] = sym__brace_start;
	v->a[5483] = state(311);
	v->a[5484] = 1;
	v->a[5485] = aux_sym_command_repeat2;
	v->a[5486] = state(1039);
	v->a[5487] = 1;
	v->a[5488] = aux_sym__literal_repeat1;
	v->a[5489] = state(1193);
	v->a[5490] = 1;
	v->a[5491] = sym_concatenation;
	v->a[5492] = actions(917);
	v->a[5493] = 2;
	v->a[5494] = sym_raw_string;
	v->a[5495] = sym_word;
	v->a[5496] = actions(1339);
	v->a[5497] = 2;
	v->a[5498] = sym_file_descriptor;
	v->a[5499] = aux_sym_heredoc_redirect_token1;
	small_parse_table_275(v);
}

/* EOF small_parse_table_54.c */
