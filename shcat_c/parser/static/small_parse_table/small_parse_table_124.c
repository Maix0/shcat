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
	v->a[12400] = actions(2624);
	v->a[12401] = 1;
	v->a[12402] = sym_test_operator;
	v->a[12403] = actions(2626);
	v->a[12404] = 1;
	v->a[12405] = sym__brace_start;
	v->a[12406] = state(1803);
	v->a[12407] = 1;
	v->a[12408] = aux_sym__literal_repeat1;
	v->a[12409] = actions(2096);
	v->a[12410] = 2;
	v->a[12411] = sym_file_descriptor;
	v->a[12412] = aux_sym_heredoc_redirect_token1;
	v->a[12413] = actions(2600);
	v->a[12414] = 2;
	v->a[12415] = anon_sym_LPAREN_LPAREN;
	v->a[12416] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[12417] = actions(2622);
	v->a[12418] = 2;
	v->a[12419] = anon_sym_LT_LPAREN;
	small_parse_table_621(v);
}

void	small_parse_table_621(t_small_parse_table_array *v)
{
	v->a[12420] = anon_sym_GT_LPAREN;
	v->a[12421] = state(630);
	v->a[12422] = 2;
	v->a[12423] = sym_concatenation;
	v->a[12424] = aux_sym_for_statement_repeat1;
	v->a[12425] = actions(2598);
	v->a[12426] = 3;
	v->a[12427] = sym_raw_string;
	v->a[12428] = sym_ansi_c_string;
	v->a[12429] = sym_word;
	v->a[12430] = state(1381);
	v->a[12431] = 9;
	v->a[12432] = sym_arithmetic_expansion;
	v->a[12433] = sym_brace_expression;
	v->a[12434] = sym_string;
	v->a[12435] = sym_translated_string;
	v->a[12436] = sym_number;
	v->a[12437] = sym_simple_expansion;
	v->a[12438] = sym_expansion;
	v->a[12439] = sym_command_substitution;
	small_parse_table_622(v);
}

void	small_parse_table_622(t_small_parse_table_array *v)
{
	v->a[12440] = sym_process_substitution;
	v->a[12441] = actions(2094);
	v->a[12442] = 22;
	v->a[12443] = anon_sym_SEMI;
	v->a[12444] = anon_sym_PIPE_PIPE;
	v->a[12445] = anon_sym_AMP_AMP;
	v->a[12446] = anon_sym_PIPE;
	v->a[12447] = anon_sym_AMP;
	v->a[12448] = anon_sym_LT;
	v->a[12449] = anon_sym_GT;
	v->a[12450] = anon_sym_LT_LT;
	v->a[12451] = anon_sym_GT_GT;
	v->a[12452] = anon_sym_esac;
	v->a[12453] = anon_sym_SEMI_SEMI;
	v->a[12454] = anon_sym_SEMI_AMP;
	v->a[12455] = anon_sym_SEMI_SEMI_AMP;
	v->a[12456] = anon_sym_PIPE_AMP;
	v->a[12457] = anon_sym_AMP_GT;
	v->a[12458] = anon_sym_AMP_GT_GT;
	v->a[12459] = anon_sym_LT_AMP;
	small_parse_table_623(v);
}

void	small_parse_table_623(t_small_parse_table_array *v)
{
	v->a[12460] = anon_sym_GT_AMP;
	v->a[12461] = anon_sym_GT_PIPE;
	v->a[12462] = anon_sym_LT_AMP_DASH;
	v->a[12463] = anon_sym_GT_AMP_DASH;
	v->a[12464] = anon_sym_LT_LT_DASH;
	v->a[12465] = 21;
	v->a[12466] = actions(3);
	v->a[12467] = 1;
	v->a[12468] = sym_comment;
	v->a[12469] = actions(3024);
	v->a[12470] = 1;
	v->a[12471] = anon_sym_DOLLAR_LBRACK;
	v->a[12472] = actions(3026);
	v->a[12473] = 1;
	v->a[12474] = anon_sym_DOLLAR;
	v->a[12475] = actions(3028);
	v->a[12476] = 1;
	v->a[12477] = sym__special_character;
	v->a[12478] = actions(3030);
	v->a[12479] = 1;
	small_parse_table_624(v);
}

void	small_parse_table_624(t_small_parse_table_array *v)
{
	v->a[12480] = anon_sym_DQUOTE;
	v->a[12481] = actions(3032);
	v->a[12482] = 1;
	v->a[12483] = aux_sym_number_token1;
	v->a[12484] = actions(3034);
	v->a[12485] = 1;
	v->a[12486] = aux_sym_number_token2;
	v->a[12487] = actions(3036);
	v->a[12488] = 1;
	v->a[12489] = anon_sym_DOLLAR_LBRACE;
	v->a[12490] = actions(3038);
	v->a[12491] = 1;
	v->a[12492] = anon_sym_DOLLAR_LPAREN;
	v->a[12493] = actions(3040);
	v->a[12494] = 1;
	v->a[12495] = anon_sym_BQUOTE;
	v->a[12496] = actions(3042);
	v->a[12497] = 1;
	v->a[12498] = anon_sym_DOLLAR_BQUOTE;
	v->a[12499] = actions(3046);
	small_parse_table_625(v);
}

/* EOF small_parse_table_124.c */
