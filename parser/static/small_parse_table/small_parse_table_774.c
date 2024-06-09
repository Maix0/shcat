/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_774.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3870(t_small_parse_table_array *v)
{
	v->a[77400] = actions(3107);
	v->a[77401] = 1;
	v->a[77402] = anon_sym_LT_LT_DASH;
	v->a[77403] = actions(3142);
	v->a[77404] = 2;
	v->a[77405] = anon_sym_AMP_AMP;
	v->a[77406] = anon_sym_PIPE_PIPE;
	v->a[77407] = actions(3146);
	v->a[77408] = 2;
	v->a[77409] = anon_sym_LT_AMP_DASH;
	v->a[77410] = anon_sym_GT_AMP_DASH;
	v->a[77411] = actions(3144);
	v->a[77412] = 3;
	v->a[77413] = anon_sym_GT_GT;
	v->a[77414] = anon_sym_AMP_GT_GT;
	v->a[77415] = anon_sym_GT_PIPE;
	v->a[77416] = state(1050);
	v->a[77417] = 3;
	v->a[77418] = sym_file_redirect;
	v->a[77419] = sym_heredoc_redirect;
	small_parse_table_3871(v);
}

void	small_parse_table_3871(t_small_parse_table_array *v)
{
	v->a[77420] = aux_sym_redirected_statement_repeat1;
	v->a[77421] = actions(2284);
	v->a[77422] = 5;
	v->a[77423] = anon_sym_LT;
	v->a[77424] = anon_sym_GT;
	v->a[77425] = anon_sym_AMP_GT;
	v->a[77426] = anon_sym_LT_AMP;
	v->a[77427] = anon_sym_GT_AMP;
	v->a[77428] = 12;
	v->a[77429] = actions(3);
	v->a[77430] = 1;
	v->a[77431] = sym_comment;
	v->a[77432] = actions(761);
	v->a[77433] = 1;
	v->a[77434] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77435] = actions(763);
	v->a[77436] = 1;
	v->a[77437] = anon_sym_DOLLAR;
	v->a[77438] = actions(765);
	v->a[77439] = 1;
	small_parse_table_3872(v);
}

void	small_parse_table_3872(t_small_parse_table_array *v)
{
	v->a[77440] = anon_sym_DQUOTE;
	v->a[77441] = actions(767);
	v->a[77442] = 1;
	v->a[77443] = aux_sym_number_token1;
	v->a[77444] = actions(769);
	v->a[77445] = 1;
	v->a[77446] = aux_sym_number_token2;
	v->a[77447] = actions(771);
	v->a[77448] = 1;
	v->a[77449] = anon_sym_DOLLAR_LBRACE;
	v->a[77450] = actions(773);
	v->a[77451] = 1;
	v->a[77452] = anon_sym_DOLLAR_LPAREN;
	v->a[77453] = actions(775);
	v->a[77454] = 1;
	v->a[77455] = anon_sym_BQUOTE;
	v->a[77456] = actions(955);
	v->a[77457] = 2;
	v->a[77458] = sym_raw_string;
	v->a[77459] = sym_word;
	small_parse_table_3873(v);
}

void	small_parse_table_3873(t_small_parse_table_array *v)
{
	v->a[77460] = state(248);
	v->a[77461] = 2;
	v->a[77462] = sym_concatenation;
	v->a[77463] = aux_sym_for_statement_repeat1;
	v->a[77464] = state(566);
	v->a[77465] = 6;
	v->a[77466] = sym_arithmetic_expansion;
	v->a[77467] = sym_string;
	v->a[77468] = sym_number;
	v->a[77469] = sym_simple_expansion;
	v->a[77470] = sym_expansion;
	v->a[77471] = sym_command_substitution;
	v->a[77472] = 12;
	v->a[77473] = actions(3);
	v->a[77474] = 1;
	v->a[77475] = sym_comment;
	v->a[77476] = actions(933);
	v->a[77477] = 1;
	v->a[77478] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[77479] = actions(935);
	small_parse_table_3874(v);
}

void	small_parse_table_3874(t_small_parse_table_array *v)
{
	v->a[77480] = 1;
	v->a[77481] = anon_sym_DOLLAR;
	v->a[77482] = actions(937);
	v->a[77483] = 1;
	v->a[77484] = anon_sym_DQUOTE;
	v->a[77485] = actions(939);
	v->a[77486] = 1;
	v->a[77487] = aux_sym_number_token1;
	v->a[77488] = actions(941);
	v->a[77489] = 1;
	v->a[77490] = aux_sym_number_token2;
	v->a[77491] = actions(943);
	v->a[77492] = 1;
	v->a[77493] = anon_sym_DOLLAR_LBRACE;
	v->a[77494] = actions(945);
	v->a[77495] = 1;
	v->a[77496] = anon_sym_DOLLAR_LPAREN;
	v->a[77497] = actions(947);
	v->a[77498] = 1;
	v->a[77499] = anon_sym_BQUOTE;
	small_parse_table_3875(v);
}

/* EOF small_parse_table_774.c */
