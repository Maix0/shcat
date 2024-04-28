/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_3094.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_15470(t_small_parse_table_array *v)
{
	v->a[309400] = actions(14318);
	v->a[309401] = 1;
	v->a[309402] = anon_sym_LPAREN;
	v->a[309403] = state(4995);
	v->a[309404] = 4;
	v->a[309405] = sym_if_statement;
	v->a[309406] = sym_compound_statement;
	v->a[309407] = sym_subshell;
	v->a[309408] = sym_test_command;
	v->a[309409] = 10;
	v->a[309410] = actions(71);
	v->a[309411] = 1;
	v->a[309412] = sym_comment;
	v->a[309413] = actions(14320);
	v->a[309414] = 1;
	v->a[309415] = anon_sym_SLASH;
	v->a[309416] = actions(14322);
	v->a[309417] = 1;
	v->a[309418] = anon_sym_DQUOTE;
	v->a[309419] = actions(14324);
	small_parse_table_15471(v);
}

void	small_parse_table_15471(t_small_parse_table_array *v)
{
	v->a[309420] = 1;
	v->a[309421] = anon_sym_RBRACE3;
	v->a[309422] = actions(14326);
	v->a[309423] = 1;
	v->a[309424] = anon_sym_DOLLAR_LPAREN;
	v->a[309425] = actions(14328);
	v->a[309426] = 1;
	v->a[309427] = anon_sym_BQUOTE;
	v->a[309428] = actions(14330);
	v->a[309429] = 1;
	v->a[309430] = anon_sym_DOLLAR_BQUOTE;
	v->a[309431] = actions(14332);
	v->a[309432] = 1;
	v->a[309433] = sym__regex_no_slash;
	v->a[309434] = state(6582);
	v->a[309435] = 1;
	v->a[309436] = sym_string;
	v->a[309437] = state(6749);
	v->a[309438] = 1;
	v->a[309439] = sym_command_substitution;
	small_parse_table_15472(v);
}

void	small_parse_table_15472(t_small_parse_table_array *v)
{
	v->a[309440] = 6;
	v->a[309441] = actions(3);
	v->a[309442] = 1;
	v->a[309443] = sym_comment;
	v->a[309444] = actions(1263);
	v->a[309445] = 1;
	v->a[309446] = aux_sym_heredoc_redirect_token1;
	v->a[309447] = actions(14334);
	v->a[309448] = 1;
	v->a[309449] = aux_sym_concatenation_token1;
	v->a[309450] = actions(14336);
	v->a[309451] = 1;
	v->a[309452] = sym__concat;
	v->a[309453] = state(6201);
	v->a[309454] = 1;
	v->a[309455] = aux_sym_concatenation_repeat1;
	v->a[309456] = actions(1261);
	v->a[309457] = 5;
	v->a[309458] = anon_sym_in;
	v->a[309459] = anon_sym_SEMI;
	small_parse_table_15473(v);
}

void	small_parse_table_15473(t_small_parse_table_array *v)
{
	v->a[309460] = anon_sym_AMP;
	v->a[309461] = anon_sym_SEMI_SEMI;
	v->a[309462] = sym__special_character;
	v->a[309463] = 7;
	v->a[309464] = actions(3);
	v->a[309465] = 1;
	v->a[309466] = sym_comment;
	v->a[309467] = actions(14334);
	v->a[309468] = 1;
	v->a[309469] = aux_sym_concatenation_token1;
	v->a[309470] = actions(14336);
	v->a[309471] = 1;
	v->a[309472] = sym__concat;
	v->a[309473] = actions(14338);
	v->a[309474] = 1;
	v->a[309475] = anon_sym_in;
	v->a[309476] = actions(14342);
	v->a[309477] = 1;
	v->a[309478] = aux_sym_heredoc_redirect_token1;
	v->a[309479] = state(6201);
	small_parse_table_15474(v);
}

void	small_parse_table_15474(t_small_parse_table_array *v)
{
	v->a[309480] = 1;
	v->a[309481] = aux_sym_concatenation_repeat1;
	v->a[309482] = actions(14340);
	v->a[309483] = 3;
	v->a[309484] = anon_sym_SEMI;
	v->a[309485] = anon_sym_AMP;
	v->a[309486] = anon_sym_SEMI_SEMI;
	v->a[309487] = 8;
	v->a[309488] = actions(3);
	v->a[309489] = 1;
	v->a[309490] = sym_comment;
	v->a[309491] = actions(14344);
	v->a[309492] = 1;
	v->a[309493] = anon_sym_RPAREN;
	v->a[309494] = actions(14346);
	v->a[309495] = 1;
	v->a[309496] = anon_sym_DQUOTE;
	v->a[309497] = actions(14348);
	v->a[309498] = 1;
	v->a[309499] = sym_raw_string;
	small_parse_table_15475(v);
}

/* EOF small_parse_table_3094.c */
