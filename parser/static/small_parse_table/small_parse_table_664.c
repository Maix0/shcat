/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_664.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_3320(t_small_parse_table_array *v)
{
	v->a[66400] = actions(2993);
	v->a[66401] = 1;
	v->a[66402] = anon_sym_else;
	v->a[66403] = actions(3011);
	v->a[66404] = 1;
	v->a[66405] = anon_sym_fi;
	v->a[66406] = state(1705);
	v->a[66407] = 1;
	v->a[66408] = sym_else_clause;
	v->a[66409] = state(1529);
	v->a[66410] = 2;
	v->a[66411] = sym_elif_clause;
	v->a[66412] = aux_sym_if_statement_repeat1;
	v->a[66413] = 3;
	v->a[66414] = actions(407);
	v->a[66415] = 1;
	v->a[66416] = sym_comment;
	v->a[66417] = actions(1169);
	v->a[66418] = 1;
	v->a[66419] = anon_sym_DOLLAR;
	small_parse_table_3321(v);
}

void	small_parse_table_3321(t_small_parse_table_array *v)
{
	v->a[66420] = actions(1167);
	v->a[66421] = 5;
	v->a[66422] = sym_heredoc_content;
	v->a[66423] = sym_heredoc_end;
	v->a[66424] = anon_sym_DOLLAR_LBRACE;
	v->a[66425] = anon_sym_DOLLAR_LPAREN;
	v->a[66426] = anon_sym_BQUOTE;
	v->a[66427] = 3;
	v->a[66428] = actions(3);
	v->a[66429] = 1;
	v->a[66430] = sym_comment;
	v->a[66431] = actions(1147);
	v->a[66432] = 2;
	v->a[66433] = sym__concat;
	v->a[66434] = aux_sym_heredoc_redirect_token1;
	v->a[66435] = actions(1145);
	v->a[66436] = 4;
	v->a[66437] = anon_sym_in;
	v->a[66438] = anon_sym_SEMI_SEMI;
	v->a[66439] = aux_sym_concatenation_token1;
	small_parse_table_3322(v);
}

void	small_parse_table_3322(t_small_parse_table_array *v)
{
	v->a[66440] = anon_sym_SEMI;
	v->a[66441] = 6;
	v->a[66442] = actions(407);
	v->a[66443] = 1;
	v->a[66444] = sym_comment;
	v->a[66445] = actions(2991);
	v->a[66446] = 1;
	v->a[66447] = anon_sym_elif;
	v->a[66448] = actions(2993);
	v->a[66449] = 1;
	v->a[66450] = anon_sym_else;
	v->a[66451] = actions(3013);
	v->a[66452] = 1;
	v->a[66453] = anon_sym_fi;
	v->a[66454] = state(1733);
	v->a[66455] = 1;
	v->a[66456] = sym_else_clause;
	v->a[66457] = state(1529);
	v->a[66458] = 2;
	v->a[66459] = sym_elif_clause;
	small_parse_table_3323(v);
}

void	small_parse_table_3323(t_small_parse_table_array *v)
{
	v->a[66460] = aux_sym_if_statement_repeat1;
	v->a[66461] = 6;
	v->a[66462] = actions(407);
	v->a[66463] = 1;
	v->a[66464] = sym_comment;
	v->a[66465] = actions(2999);
	v->a[66466] = 1;
	v->a[66467] = anon_sym_PIPE;
	v->a[66468] = actions(3015);
	v->a[66469] = 1;
	v->a[66470] = anon_sym_RPAREN;
	v->a[66471] = state(1536);
	v->a[66472] = 1;
	v->a[66473] = aux_sym_concatenation_repeat1;
	v->a[66474] = state(1586);
	v->a[66475] = 1;
	v->a[66476] = aux_sym__case_item_last_repeat1;
	v->a[66477] = actions(3003);
	v->a[66478] = 2;
	v->a[66479] = sym__concat;
	small_parse_table_3324(v);
}

void	small_parse_table_3324(t_small_parse_table_array *v)
{
	v->a[66480] = aux_sym_concatenation_token1;
	v->a[66481] = 3;
	v->a[66482] = actions(407);
	v->a[66483] = 1;
	v->a[66484] = sym_comment;
	v->a[66485] = actions(455);
	v->a[66486] = 1;
	v->a[66487] = anon_sym_DOLLAR;
	v->a[66488] = actions(457);
	v->a[66489] = 5;
	v->a[66490] = sym_heredoc_content;
	v->a[66491] = sym_heredoc_end;
	v->a[66492] = anon_sym_DOLLAR_LBRACE;
	v->a[66493] = anon_sym_DOLLAR_LPAREN;
	v->a[66494] = anon_sym_BQUOTE;
	v->a[66495] = 3;
	v->a[66496] = actions(3);
	v->a[66497] = 1;
	v->a[66498] = sym_comment;
	v->a[66499] = actions(3019);
	small_parse_table_3325(v);
}

/* EOF small_parse_table_664.c */
