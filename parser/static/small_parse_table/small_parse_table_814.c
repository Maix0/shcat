/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_814.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_4070(t_small_parse_table_array *v)
{
	v->a[81400] = anon_sym_DOLLAR;
	v->a[81401] = actions(863);
	v->a[81402] = 1;
	v->a[81403] = anon_sym_DQUOTE;
	v->a[81404] = actions(865);
	v->a[81405] = 1;
	v->a[81406] = anon_sym_DOLLAR_LBRACE;
	v->a[81407] = actions(867);
	v->a[81408] = 1;
	v->a[81409] = anon_sym_DOLLAR_LPAREN;
	v->a[81410] = actions(869);
	v->a[81411] = 1;
	v->a[81412] = anon_sym_BQUOTE;
	v->a[81413] = actions(3050);
	v->a[81414] = 1;
	v->a[81415] = aux_sym_heredoc_redirect_token1;
	v->a[81416] = state(1577);
	v->a[81417] = 1;
	v->a[81418] = aux_sym__heredoc_command;
	v->a[81419] = state(1953);
	small_parse_table_4071(v);
}

void	small_parse_table_4071(t_small_parse_table_array *v)
{
	v->a[81420] = 1;
	v->a[81421] = sym_concatenation;
	v->a[81422] = actions(847);
	v->a[81423] = 3;
	v->a[81424] = sym_raw_string;
	v->a[81425] = sym_number;
	v->a[81426] = sym_word;
	v->a[81427] = state(1788);
	v->a[81428] = 5;
	v->a[81429] = sym_arithmetic_expansion;
	v->a[81430] = sym_string;
	v->a[81431] = sym_simple_expansion;
	v->a[81432] = sym_expansion;
	v->a[81433] = sym_command_substitution;
	v->a[81434] = 11;
	v->a[81435] = actions(3);
	v->a[81436] = 1;
	v->a[81437] = sym_comment;
	v->a[81438] = actions(1883);
	v->a[81439] = 1;
	small_parse_table_4072(v);
}

void	small_parse_table_4072(t_small_parse_table_array *v)
{
	v->a[81440] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81441] = actions(1885);
	v->a[81442] = 1;
	v->a[81443] = anon_sym_DOLLAR;
	v->a[81444] = actions(1887);
	v->a[81445] = 1;
	v->a[81446] = anon_sym_DQUOTE;
	v->a[81447] = actions(1889);
	v->a[81448] = 1;
	v->a[81449] = anon_sym_DOLLAR_LBRACE;
	v->a[81450] = actions(1891);
	v->a[81451] = 1;
	v->a[81452] = anon_sym_DOLLAR_LPAREN;
	v->a[81453] = actions(1893);
	v->a[81454] = 1;
	v->a[81455] = anon_sym_BQUOTE;
	v->a[81456] = actions(1895);
	v->a[81457] = 1;
	v->a[81458] = sym_extglob_pattern;
	v->a[81459] = state(2095);
	small_parse_table_4073(v);
}

void	small_parse_table_4073(t_small_parse_table_array *v)
{
	v->a[81460] = 2;
	v->a[81461] = sym_concatenation;
	v->a[81462] = sym__extglob_blob;
	v->a[81463] = actions(3052);
	v->a[81464] = 3;
	v->a[81465] = sym_raw_string;
	v->a[81466] = sym_number;
	v->a[81467] = sym_word;
	v->a[81468] = state(1992);
	v->a[81469] = 5;
	v->a[81470] = sym_arithmetic_expansion;
	v->a[81471] = sym_string;
	v->a[81472] = sym_simple_expansion;
	v->a[81473] = sym_expansion;
	v->a[81474] = sym_command_substitution;
	v->a[81475] = 10;
	v->a[81476] = actions(3);
	v->a[81477] = 1;
	v->a[81478] = sym_comment;
	v->a[81479] = actions(109);
	small_parse_table_4074(v);
}

void	small_parse_table_4074(t_small_parse_table_array *v)
{
	v->a[81480] = 1;
	v->a[81481] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[81482] = actions(111);
	v->a[81483] = 1;
	v->a[81484] = anon_sym_DOLLAR;
	v->a[81485] = actions(113);
	v->a[81486] = 1;
	v->a[81487] = anon_sym_DQUOTE;
	v->a[81488] = actions(117);
	v->a[81489] = 1;
	v->a[81490] = anon_sym_DOLLAR_LBRACE;
	v->a[81491] = actions(119);
	v->a[81492] = 1;
	v->a[81493] = anon_sym_DOLLAR_LPAREN;
	v->a[81494] = actions(121);
	v->a[81495] = 1;
	v->a[81496] = anon_sym_BQUOTE;
	v->a[81497] = actions(3056);
	v->a[81498] = 1;
	v->a[81499] = sym__bare_dollar;
	small_parse_table_4075(v);
}

/* EOF small_parse_table_814.c */
