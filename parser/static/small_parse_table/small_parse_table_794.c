/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_794.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3970(t_small_parse_table_array *v)
{
	v->a[79400] = anon_sym_DQUOTE;
	v->a[79401] = sym_raw_string;
	v->a[79402] = sym_number;
	v->a[79403] = anon_sym_DOLLAR_LBRACE;
	v->a[79404] = anon_sym_DOLLAR_LPAREN;
	v->a[79405] = anon_sym_BQUOTE;
	v->a[79406] = sym_word;
	v->a[79407] = 3;
	v->a[79408] = actions(3);
	v->a[79409] = 1;
	v->a[79410] = sym_comment;
	v->a[79411] = actions(3182);
	v->a[79412] = 1;
	v->a[79413] = sym_extglob_pattern;
	v->a[79414] = actions(3178);
	v->a[79415] = 10;
	v->a[79416] = anon_sym_LPAREN;
	v->a[79417] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79418] = anon_sym_DOLLAR;
	v->a[79419] = anon_sym_DQUOTE;
	small_parse_table_3971(v);
}

void	small_parse_table_3971(t_small_parse_table_array *v)
{
	v->a[79420] = sym_raw_string;
	v->a[79421] = sym_number;
	v->a[79422] = anon_sym_DOLLAR_LBRACE;
	v->a[79423] = anon_sym_DOLLAR_LPAREN;
	v->a[79424] = anon_sym_BQUOTE;
	v->a[79425] = sym_word;
	v->a[79426] = 3;
	v->a[79427] = actions(3);
	v->a[79428] = 1;
	v->a[79429] = sym_comment;
	v->a[79430] = actions(3366);
	v->a[79431] = 1;
	v->a[79432] = sym_extglob_pattern;
	v->a[79433] = actions(3362);
	v->a[79434] = 10;
	v->a[79435] = anon_sym_LPAREN;
	v->a[79436] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[79437] = anon_sym_DOLLAR;
	v->a[79438] = anon_sym_DQUOTE;
	v->a[79439] = sym_raw_string;
	small_parse_table_3972(v);
}

void	small_parse_table_3972(t_small_parse_table_array *v)
{
	v->a[79440] = sym_number;
	v->a[79441] = anon_sym_DOLLAR_LBRACE;
	v->a[79442] = anon_sym_DOLLAR_LPAREN;
	v->a[79443] = anon_sym_BQUOTE;
	v->a[79444] = sym_word;
	v->a[79445] = 8;
	v->a[79446] = actions(680);
	v->a[79447] = 1;
	v->a[79448] = sym_comment;
	v->a[79449] = actions(3428);
	v->a[79450] = 1;
	v->a[79451] = anon_sym_DOLLAR;
	v->a[79452] = actions(3430);
	v->a[79453] = 1;
	v->a[79454] = anon_sym_DOLLAR_LBRACE;
	v->a[79455] = actions(3432);
	v->a[79456] = 1;
	v->a[79457] = anon_sym_DOLLAR_LPAREN;
	v->a[79458] = actions(3434);
	v->a[79459] = 1;
	small_parse_table_3973(v);
}

void	small_parse_table_3973(t_small_parse_table_array *v)
{
	v->a[79460] = anon_sym_BQUOTE;
	v->a[79461] = actions(3436);
	v->a[79462] = 1;
	v->a[79463] = sym_heredoc_content;
	v->a[79464] = actions(3438);
	v->a[79465] = 1;
	v->a[79466] = sym_heredoc_end;
	v->a[79467] = state(1723);
	v->a[79468] = 4;
	v->a[79469] = sym_simple_expansion;
	v->a[79470] = sym_expansion;
	v->a[79471] = sym_command_substitution;
	v->a[79472] = aux_sym_heredoc_body_repeat1;
	v->a[79473] = 8;
	v->a[79474] = actions(680);
	v->a[79475] = 1;
	v->a[79476] = sym_comment;
	v->a[79477] = actions(3428);
	v->a[79478] = 1;
	v->a[79479] = anon_sym_DOLLAR;
	small_parse_table_3974(v);
}

void	small_parse_table_3974(t_small_parse_table_array *v)
{
	v->a[79480] = actions(3430);
	v->a[79481] = 1;
	v->a[79482] = anon_sym_DOLLAR_LBRACE;
	v->a[79483] = actions(3432);
	v->a[79484] = 1;
	v->a[79485] = anon_sym_DOLLAR_LPAREN;
	v->a[79486] = actions(3434);
	v->a[79487] = 1;
	v->a[79488] = anon_sym_BQUOTE;
	v->a[79489] = actions(3440);
	v->a[79490] = 1;
	v->a[79491] = sym_heredoc_content;
	v->a[79492] = actions(3442);
	v->a[79493] = 1;
	v->a[79494] = sym_heredoc_end;
	v->a[79495] = state(1724);
	v->a[79496] = 4;
	v->a[79497] = sym_simple_expansion;
	v->a[79498] = sym_expansion;
	v->a[79499] = sym_command_substitution;
	small_parse_table_3975(v);
}

/* EOF small_parse_table_794.c */
