/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1894.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_9470(t_small_parse_table_array *v)
{
	v->a[189400] = 1;
	v->a[189401] = anon_sym_DOLLAR_BQUOTE;
	v->a[189402] = actions(8164);
	v->a[189403] = 1;
	v->a[189404] = sym__comment_word;
	v->a[189405] = actions(8166);
	v->a[189406] = 1;
	v->a[189407] = sym__empty_value;
	v->a[189408] = actions(8168);
	v->a[189409] = 1;
	v->a[189410] = sym_test_operator;
	v->a[189411] = actions(8170);
	v->a[189412] = 1;
	v->a[189413] = sym__brace_start;
	v->a[189414] = state(4431);
	v->a[189415] = 1;
	v->a[189416] = aux_sym__literal_repeat1;
	v->a[189417] = actions(8136);
	v->a[189418] = 2;
	v->a[189419] = anon_sym_LPAREN_LPAREN;
	small_parse_table_9471(v);
}

void	small_parse_table_9471(t_small_parse_table_array *v)
{
	v->a[189420] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[189421] = actions(8148);
	v->a[189422] = 2;
	v->a[189423] = sym_raw_string;
	v->a[189424] = sym_ansi_c_string;
	v->a[189425] = actions(8162);
	v->a[189426] = 2;
	v->a[189427] = anon_sym_LT_LPAREN;
	v->a[189428] = anon_sym_GT_LPAREN;
	v->a[189429] = state(4925);
	v->a[189430] = 2;
	v->a[189431] = sym_concatenation;
	v->a[189432] = sym_array;
	v->a[189433] = state(4410);
	v->a[189434] = 9;
	v->a[189435] = sym_arithmetic_expansion;
	v->a[189436] = sym_brace_expression;
	v->a[189437] = sym_string;
	v->a[189438] = sym_translated_string;
	v->a[189439] = sym_number;
	small_parse_table_9472(v);
}

void	small_parse_table_9472(t_small_parse_table_array *v)
{
	v->a[189440] = sym_simple_expansion;
	v->a[189441] = sym_expansion;
	v->a[189442] = sym_command_substitution;
	v->a[189443] = sym_process_substitution;
	v->a[189444] = 23;
	v->a[189445] = actions(3);
	v->a[189446] = 1;
	v->a[189447] = sym_comment;
	v->a[189448] = actions(8172);
	v->a[189449] = 1;
	v->a[189450] = sym_word;
	v->a[189451] = actions(8176);
	v->a[189452] = 1;
	v->a[189453] = anon_sym_LPAREN;
	v->a[189454] = actions(8178);
	v->a[189455] = 1;
	v->a[189456] = anon_sym_DOLLAR_LBRACK;
	v->a[189457] = actions(8180);
	v->a[189458] = 1;
	v->a[189459] = anon_sym_DOLLAR;
	small_parse_table_9473(v);
}

void	small_parse_table_9473(t_small_parse_table_array *v)
{
	v->a[189460] = actions(8182);
	v->a[189461] = 1;
	v->a[189462] = sym__special_character;
	v->a[189463] = actions(8184);
	v->a[189464] = 1;
	v->a[189465] = anon_sym_DQUOTE;
	v->a[189466] = actions(8188);
	v->a[189467] = 1;
	v->a[189468] = aux_sym_number_token1;
	v->a[189469] = actions(8190);
	v->a[189470] = 1;
	v->a[189471] = aux_sym_number_token2;
	v->a[189472] = actions(8192);
	v->a[189473] = 1;
	v->a[189474] = anon_sym_DOLLAR_LBRACE;
	v->a[189475] = actions(8194);
	v->a[189476] = 1;
	v->a[189477] = anon_sym_DOLLAR_LPAREN;
	v->a[189478] = actions(8196);
	v->a[189479] = 1;
	small_parse_table_9474(v);
}

void	small_parse_table_9474(t_small_parse_table_array *v)
{
	v->a[189480] = anon_sym_BQUOTE;
	v->a[189481] = actions(8198);
	v->a[189482] = 1;
	v->a[189483] = anon_sym_DOLLAR_BQUOTE;
	v->a[189484] = actions(8202);
	v->a[189485] = 1;
	v->a[189486] = sym__comment_word;
	v->a[189487] = actions(8204);
	v->a[189488] = 1;
	v->a[189489] = sym__empty_value;
	v->a[189490] = actions(8206);
	v->a[189491] = 1;
	v->a[189492] = sym_test_operator;
	v->a[189493] = actions(8208);
	v->a[189494] = 1;
	v->a[189495] = sym__brace_start;
	v->a[189496] = state(1742);
	v->a[189497] = 1;
	v->a[189498] = aux_sym__literal_repeat1;
	v->a[189499] = actions(8174);
	small_parse_table_9475(v);
}

/* EOF small_parse_table_1894.c */
