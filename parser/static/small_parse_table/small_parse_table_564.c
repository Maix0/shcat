/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_564.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2820(t_small_parse_table_array *v)
{
	v->a[56400] = 7;
	v->a[56401] = anon_sym_LT;
	v->a[56402] = anon_sym_GT;
	v->a[56403] = anon_sym_GT_GT;
	v->a[56404] = anon_sym_LT_AMP;
	v->a[56405] = anon_sym_GT_AMP;
	v->a[56406] = anon_sym_GT_PIPE;
	v->a[56407] = anon_sym_LT_GT;
	v->a[56408] = 11;
	v->a[56409] = actions(3);
	v->a[56410] = 1;
	v->a[56411] = sym_comment;
	v->a[56412] = actions(736);
	v->a[56413] = 1;
	v->a[56414] = anon_sym_PIPE;
	v->a[56415] = actions(842);
	v->a[56416] = 1;
	v->a[56417] = anon_sym_RPAREN;
	v->a[56418] = actions(1865);
	v->a[56419] = 1;
	small_parse_table_2821(v);
}

void	small_parse_table_2821(t_small_parse_table_array *v)
{
	v->a[56420] = aux_sym_heredoc_redirect_token1;
	v->a[56421] = actions(1881);
	v->a[56422] = 1;
	v->a[56423] = sym_file_descriptor;
	v->a[56424] = state(682);
	v->a[56425] = 1;
	v->a[56426] = sym_terminator;
	v->a[56427] = actions(742);
	v->a[56428] = 2;
	v->a[56429] = anon_sym_AMP_AMP;
	v->a[56430] = anon_sym_PIPE_PIPE;
	v->a[56431] = actions(744);
	v->a[56432] = 2;
	v->a[56433] = anon_sym_LT_LT;
	v->a[56434] = anon_sym_LT_LT_DASH;
	v->a[56435] = actions(740);
	v->a[56436] = 3;
	v->a[56437] = anon_sym_SEMI_SEMI;
	v->a[56438] = anon_sym_AMP;
	v->a[56439] = anon_sym_SEMI;
	small_parse_table_2822(v);
}

void	small_parse_table_2822(t_small_parse_table_array *v)
{
	v->a[56440] = state(1080);
	v->a[56441] = 3;
	v->a[56442] = sym_file_redirect;
	v->a[56443] = sym_heredoc_redirect;
	v->a[56444] = aux_sym_redirected_statement_repeat1;
	v->a[56445] = actions(1879);
	v->a[56446] = 7;
	v->a[56447] = anon_sym_LT;
	v->a[56448] = anon_sym_GT;
	v->a[56449] = anon_sym_GT_GT;
	v->a[56450] = anon_sym_LT_AMP;
	v->a[56451] = anon_sym_GT_AMP;
	v->a[56452] = anon_sym_GT_PIPE;
	v->a[56453] = anon_sym_LT_GT;
	v->a[56454] = 16;
	v->a[56455] = actions(3);
	v->a[56456] = 1;
	v->a[56457] = sym_comment;
	v->a[56458] = actions(1634);
	v->a[56459] = 1;
	small_parse_table_2823(v);
}

void	small_parse_table_2823(t_small_parse_table_array *v)
{
	v->a[56460] = anon_sym_LPAREN;
	v->a[56461] = actions(1638);
	v->a[56462] = 1;
	v->a[56463] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[56464] = actions(1640);
	v->a[56465] = 1;
	v->a[56466] = anon_sym_DOLLAR;
	v->a[56467] = actions(1642);
	v->a[56468] = 1;
	v->a[56469] = anon_sym_DQUOTE;
	v->a[56470] = actions(1644);
	v->a[56471] = 1;
	v->a[56472] = anon_sym_DOLLAR_LBRACE;
	v->a[56473] = actions(1646);
	v->a[56474] = 1;
	v->a[56475] = anon_sym_DOLLAR_LPAREN;
	v->a[56476] = actions(1648);
	v->a[56477] = 1;
	v->a[56478] = anon_sym_BQUOTE;
	v->a[56479] = actions(1650);
	small_parse_table_2824(v);
}

void	small_parse_table_2824(t_small_parse_table_array *v)
{
	v->a[56480] = 1;
	v->a[56481] = sym_extglob_pattern;
	v->a[56482] = actions(1885);
	v->a[56483] = 1;
	v->a[56484] = anon_sym_esac;
	v->a[56485] = state(1085);
	v->a[56486] = 1;
	v->a[56487] = aux_sym_case_statement_repeat1;
	v->a[56488] = state(1713);
	v->a[56489] = 1;
	v->a[56490] = sym_case_item;
	v->a[56491] = state(1952);
	v->a[56492] = 1;
	v->a[56493] = sym__case_item_last;
	v->a[56494] = state(1871);
	v->a[56495] = 2;
	v->a[56496] = sym_concatenation;
	v->a[56497] = sym__extglob_blob;
	v->a[56498] = actions(1630);
	v->a[56499] = 3;
	small_parse_table_2825(v);
}

/* EOF small_parse_table_564.c */
