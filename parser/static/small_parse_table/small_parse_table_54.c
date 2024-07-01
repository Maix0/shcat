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
	v->a[5400] = 1;
	v->a[5401] = sym_comment;
	v->a[5402] = actions(9);
	v->a[5403] = 1;
	v->a[5404] = anon_sym_for;
	v->a[5405] = actions(13);
	v->a[5406] = 1;
	v->a[5407] = anon_sym_if;
	v->a[5408] = actions(15);
	v->a[5409] = 1;
	v->a[5410] = anon_sym_case;
	v->a[5411] = actions(17);
	v->a[5412] = 1;
	v->a[5413] = anon_sym_LPAREN;
	v->a[5414] = actions(19);
	v->a[5415] = 1;
	v->a[5416] = anon_sym_LBRACE;
	v->a[5417] = actions(45);
	v->a[5418] = 1;
	v->a[5419] = sym_word;
	small_parse_table_271(v);
}

void	small_parse_table_271(t_small_parse_table_array *v)
{
	v->a[5420] = actions(53);
	v->a[5421] = 1;
	v->a[5422] = anon_sym_BANG;
	v->a[5423] = actions(59);
	v->a[5424] = 1;
	v->a[5425] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[5426] = actions(61);
	v->a[5427] = 1;
	v->a[5428] = anon_sym_DOLLAR;
	v->a[5429] = actions(63);
	v->a[5430] = 1;
	v->a[5431] = anon_sym_DQUOTE;
	v->a[5432] = actions(67);
	v->a[5433] = 1;
	v->a[5434] = anon_sym_DOLLAR_LBRACE;
	v->a[5435] = actions(69);
	v->a[5436] = 1;
	v->a[5437] = anon_sym_DOLLAR_LPAREN;
	v->a[5438] = actions(71);
	v->a[5439] = 1;
	small_parse_table_272(v);
}

void	small_parse_table_272(t_small_parse_table_array *v)
{
	v->a[5440] = anon_sym_BQUOTE;
	v->a[5441] = actions(73);
	v->a[5442] = 1;
	v->a[5443] = sym_file_descriptor;
	v->a[5444] = actions(75);
	v->a[5445] = 1;
	v->a[5446] = sym_variable_name;
	v->a[5447] = actions(244);
	v->a[5448] = 1;
	v->a[5449] = anon_sym_then;
	v->a[5450] = state(35);
	v->a[5451] = 1;
	v->a[5452] = aux_sym__terminated_statement;
	v->a[5453] = state(189);
	v->a[5454] = 1;
	v->a[5455] = sym_command_name;
	v->a[5456] = state(291);
	v->a[5457] = 1;
	v->a[5458] = sym_variable_assignment;
	v->a[5459] = state(650);
	small_parse_table_273(v);
}

void	small_parse_table_273(t_small_parse_table_array *v)
{
	v->a[5460] = 1;
	v->a[5461] = sym_concatenation;
	v->a[5462] = state(712);
	v->a[5463] = 1;
	v->a[5464] = sym_file_redirect;
	v->a[5465] = state(713);
	v->a[5466] = 1;
	v->a[5467] = aux_sym_command_repeat1;
	v->a[5468] = state(1251);
	v->a[5469] = 1;
	v->a[5470] = sym_pipeline;
	v->a[5471] = state(1333);
	v->a[5472] = 1;
	v->a[5473] = aux_sym_redirected_statement_repeat2;
	v->a[5474] = state(2103);
	v->a[5475] = 1;
	v->a[5476] = sym__statement_not_pipeline;
	v->a[5477] = actions(11);
	v->a[5478] = 2;
	v->a[5479] = anon_sym_while;
	small_parse_table_274(v);
}

void	small_parse_table_274(t_small_parse_table_array *v)
{
	v->a[5480] = anon_sym_until;
	v->a[5481] = actions(57);
	v->a[5482] = 2;
	v->a[5483] = anon_sym_LT_AMP_DASH;
	v->a[5484] = anon_sym_GT_AMP_DASH;
	v->a[5485] = actions(65);
	v->a[5486] = 2;
	v->a[5487] = sym_raw_string;
	v->a[5488] = sym_number;
	v->a[5489] = state(443);
	v->a[5490] = 5;
	v->a[5491] = sym_arithmetic_expansion;
	v->a[5492] = sym_string;
	v->a[5493] = sym_simple_expansion;
	v->a[5494] = sym_expansion;
	v->a[5495] = sym_command_substitution;
	v->a[5496] = actions(55);
	v->a[5497] = 6;
	v->a[5498] = anon_sym_LT;
	v->a[5499] = anon_sym_GT;
	small_parse_table_275(v);
}

/* EOF small_parse_table_54.c */
