/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_124.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_620(t_small_parse_table_array *v)
{
	v->a[12400] = sym_raw_string;
	v->a[12401] = sym_word;
	v->a[12402] = state(393);
	v->a[12403] = 2;
	v->a[12404] = sym_concatenation;
	v->a[12405] = aux_sym_for_statement_repeat1;
	v->a[12406] = state(1069);
	v->a[12407] = 7;
	v->a[12408] = sym_arithmetic_expansion;
	v->a[12409] = sym_brace_expression;
	v->a[12410] = sym_string;
	v->a[12411] = sym_number;
	v->a[12412] = sym_simple_expansion;
	v->a[12413] = sym_expansion;
	v->a[12414] = sym_command_substitution;
	v->a[12415] = actions(1388);
	v->a[12416] = 20;
	v->a[12417] = anon_sym_PIPE;
	v->a[12418] = anon_sym_RPAREN;
	v->a[12419] = anon_sym_SEMI_SEMI;
	small_parse_table_621(v);
}

void	small_parse_table_621(t_small_parse_table_array *v)
{
	v->a[12420] = anon_sym_PIPE_AMP;
	v->a[12421] = anon_sym_AMP_AMP;
	v->a[12422] = anon_sym_PIPE_PIPE;
	v->a[12423] = anon_sym_LT;
	v->a[12424] = anon_sym_GT;
	v->a[12425] = anon_sym_GT_GT;
	v->a[12426] = anon_sym_AMP_GT;
	v->a[12427] = anon_sym_AMP_GT_GT;
	v->a[12428] = anon_sym_LT_AMP;
	v->a[12429] = anon_sym_GT_AMP;
	v->a[12430] = anon_sym_GT_PIPE;
	v->a[12431] = anon_sym_LT_AMP_DASH;
	v->a[12432] = anon_sym_GT_AMP_DASH;
	v->a[12433] = anon_sym_LT_LT;
	v->a[12434] = anon_sym_LT_LT_DASH;
	v->a[12435] = anon_sym_AMP;
	v->a[12436] = anon_sym_SEMI;
	v->a[12437] = 20;
	v->a[12438] = actions(3);
	v->a[12439] = 1;
	small_parse_table_622(v);
}

void	small_parse_table_622(t_small_parse_table_array *v)
{
	v->a[12440] = sym_comment;
	v->a[12441] = actions(1252);
	v->a[12442] = 1;
	v->a[12443] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[12444] = actions(1254);
	v->a[12445] = 1;
	v->a[12446] = anon_sym_DOLLAR;
	v->a[12447] = actions(1258);
	v->a[12448] = 1;
	v->a[12449] = anon_sym_DQUOTE;
	v->a[12450] = actions(1260);
	v->a[12451] = 1;
	v->a[12452] = aux_sym_number_token1;
	v->a[12453] = actions(1262);
	v->a[12454] = 1;
	v->a[12455] = aux_sym_number_token2;
	v->a[12456] = actions(1264);
	v->a[12457] = 1;
	v->a[12458] = anon_sym_DOLLAR_LBRACE;
	v->a[12459] = actions(1266);
	small_parse_table_623(v);
}

void	small_parse_table_623(t_small_parse_table_array *v)
{
	v->a[12460] = 1;
	v->a[12461] = anon_sym_DOLLAR_LPAREN;
	v->a[12462] = actions(1270);
	v->a[12463] = 1;
	v->a[12464] = anon_sym_DOLLAR_BQUOTE;
	v->a[12465] = actions(1274);
	v->a[12466] = 1;
	v->a[12467] = sym__bare_dollar;
	v->a[12468] = actions(1276);
	v->a[12469] = 1;
	v->a[12470] = sym__brace_start;
	v->a[12471] = actions(1428);
	v->a[12472] = 1;
	v->a[12473] = sym__special_character;
	v->a[12474] = actions(1430);
	v->a[12475] = 1;
	v->a[12476] = sym_test_operator;
	v->a[12477] = state(406);
	v->a[12478] = 1;
	v->a[12479] = aux_sym_command_repeat2;
	small_parse_table_624(v);
}

void	small_parse_table_624(t_small_parse_table_array *v)
{
	v->a[12480] = state(1232);
	v->a[12481] = 1;
	v->a[12482] = aux_sym__literal_repeat1;
	v->a[12483] = state(1293);
	v->a[12484] = 1;
	v->a[12485] = sym_concatenation;
	v->a[12486] = actions(1280);
	v->a[12487] = 2;
	v->a[12488] = sym_file_descriptor;
	v->a[12489] = aux_sym_heredoc_redirect_token1;
	v->a[12490] = actions(1426);
	v->a[12491] = 2;
	v->a[12492] = sym_raw_string;
	v->a[12493] = sym_word;
	v->a[12494] = state(1146);
	v->a[12495] = 7;
	v->a[12496] = sym_arithmetic_expansion;
	v->a[12497] = sym_brace_expression;
	v->a[12498] = sym_string;
	v->a[12499] = sym_number;
	small_parse_table_625(v);
}

/* EOF small_parse_table_124.c */
