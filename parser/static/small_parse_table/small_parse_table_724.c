/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_724.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3620(t_small_parse_table_array *v)
{
	v->a[72400] = actions(3);
	v->a[72401] = 1;
	v->a[72402] = sym_comment;
	v->a[72403] = actions(4332);
	v->a[72404] = 1;
	v->a[72405] = anon_sym_LPAREN;
	v->a[72406] = actions(4338);
	v->a[72407] = 1;
	v->a[72408] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[72409] = actions(4340);
	v->a[72410] = 1;
	v->a[72411] = anon_sym_DOLLAR;
	v->a[72412] = actions(4342);
	v->a[72413] = 1;
	v->a[72414] = sym__special_character;
	v->a[72415] = actions(4344);
	v->a[72416] = 1;
	v->a[72417] = anon_sym_DQUOTE;
	v->a[72418] = actions(4346);
	v->a[72419] = 1;
	small_parse_table_3621(v);
}

void	small_parse_table_3621(t_small_parse_table_array *v)
{
	v->a[72420] = aux_sym_number_token1;
	v->a[72421] = actions(4348);
	v->a[72422] = 1;
	v->a[72423] = aux_sym_number_token2;
	v->a[72424] = actions(4350);
	v->a[72425] = 1;
	v->a[72426] = anon_sym_DOLLAR_LBRACE;
	v->a[72427] = actions(4352);
	v->a[72428] = 1;
	v->a[72429] = anon_sym_DOLLAR_LPAREN;
	v->a[72430] = actions(4354);
	v->a[72431] = 1;
	v->a[72432] = anon_sym_BQUOTE;
	v->a[72433] = actions(4356);
	v->a[72434] = 1;
	v->a[72435] = anon_sym_DOLLAR_BQUOTE;
	v->a[72436] = actions(4358);
	v->a[72437] = 1;
	v->a[72438] = sym_test_operator;
	v->a[72439] = actions(4360);
	small_parse_table_3622(v);
}

void	small_parse_table_3622(t_small_parse_table_array *v)
{
	v->a[72440] = 1;
	v->a[72441] = sym_extglob_pattern;
	v->a[72442] = actions(4362);
	v->a[72443] = 1;
	v->a[72444] = sym__brace_start;
	v->a[72445] = actions(4384);
	v->a[72446] = 1;
	v->a[72447] = anon_sym_esac;
	v->a[72448] = actions(4388);
	v->a[72449] = 1;
	v->a[72450] = aux_sym_heredoc_redirect_token1;
	v->a[72451] = state(3393);
	v->a[72452] = 1;
	v->a[72453] = aux_sym__literal_repeat1;
	v->a[72454] = state(3939);
	v->a[72455] = 1;
	v->a[72456] = sym_last_case_item;
	v->a[72457] = actions(4328);
	v->a[72458] = 2;
	v->a[72459] = sym_raw_string;
	small_parse_table_3623(v);
}

void	small_parse_table_3623(t_small_parse_table_array *v)
{
	v->a[72460] = sym_word;
	v->a[72461] = state(1759);
	v->a[72462] = 2;
	v->a[72463] = sym_case_item;
	v->a[72464] = aux_sym_case_statement_repeat1;
	v->a[72465] = state(3472);
	v->a[72466] = 2;
	v->a[72467] = sym_concatenation;
	v->a[72468] = sym__extglob_blob;
	v->a[72469] = actions(4386);
	v->a[72470] = 3;
	v->a[72471] = anon_sym_SEMI_SEMI;
	v->a[72472] = anon_sym_AMP;
	v->a[72473] = anon_sym_SEMI;
	v->a[72474] = state(3295);
	v->a[72475] = 7;
	v->a[72476] = sym_arithmetic_expansion;
	v->a[72477] = sym_brace_expression;
	v->a[72478] = sym_string;
	v->a[72479] = sym_number;
	small_parse_table_3624(v);
}

void	small_parse_table_3624(t_small_parse_table_array *v)
{
	v->a[72480] = sym_simple_expansion;
	v->a[72481] = sym_expansion;
	v->a[72482] = sym_command_substitution;
	v->a[72483] = 3;
	v->a[72484] = actions(57);
	v->a[72485] = 1;
	v->a[72486] = sym_comment;
	v->a[72487] = actions(3022);
	v->a[72488] = 14;
	v->a[72489] = anon_sym_PIPE;
	v->a[72490] = anon_sym_LT;
	v->a[72491] = anon_sym_GT;
	v->a[72492] = anon_sym_AMP_GT;
	v->a[72493] = anon_sym_LT_AMP;
	v->a[72494] = anon_sym_GT_AMP;
	v->a[72495] = anon_sym_LT_LT;
	v->a[72496] = anon_sym_DOLLAR;
	v->a[72497] = aux_sym_number_token1;
	v->a[72498] = aux_sym_number_token2;
	v->a[72499] = anon_sym_DOLLAR_LPAREN;
	small_parse_table_3625(v);
}

/* EOF small_parse_table_724.c */
