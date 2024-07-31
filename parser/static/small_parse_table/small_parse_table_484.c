/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_484.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_2420(t_small_parse_table_array *v)
{
	v->a[48400] = anon_sym_GT_PIPE;
	v->a[48401] = anon_sym_LT_GT;
	v->a[48402] = 4;
	v->a[48403] = actions(3);
	v->a[48404] = 1;
	v->a[48405] = sym_comment;
	v->a[48406] = actions(911);
	v->a[48407] = 1;
	v->a[48408] = sym_variable_name;
	v->a[48409] = state(972);
	v->a[48410] = 2;
	v->a[48411] = sym_variable_assignment;
	v->a[48412] = aux_sym__variable_assignments_repeat1;
	v->a[48413] = actions(742);
	v->a[48414] = 16;
	v->a[48415] = anon_sym_LT;
	v->a[48416] = anon_sym_GT;
	v->a[48417] = anon_sym_GT_GT;
	v->a[48418] = anon_sym_LT_AMP;
	v->a[48419] = anon_sym_GT_AMP;
	small_parse_table_2421(v);
}

void	small_parse_table_2421(t_small_parse_table_array *v)
{
	v->a[48420] = anon_sym_GT_PIPE;
	v->a[48421] = anon_sym_LT_GT;
	v->a[48422] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48423] = anon_sym_DOLLAR;
	v->a[48424] = anon_sym_DQUOTE;
	v->a[48425] = sym_raw_string;
	v->a[48426] = sym_number;
	v->a[48427] = anon_sym_DOLLAR_LBRACE;
	v->a[48428] = anon_sym_DOLLAR_LPAREN;
	v->a[48429] = anon_sym_BQUOTE;
	v->a[48430] = sym_word;
	v->a[48431] = 3;
	v->a[48432] = actions(3);
	v->a[48433] = 1;
	v->a[48434] = sym_comment;
	v->a[48435] = actions(457);
	v->a[48436] = 2;
	v->a[48437] = sym__concat;
	v->a[48438] = sym_variable_name;
	v->a[48439] = actions(455);
	small_parse_table_2422(v);
}

void	small_parse_table_2422(t_small_parse_table_array *v)
{
	v->a[48440] = 17;
	v->a[48441] = anon_sym_LT;
	v->a[48442] = anon_sym_GT;
	v->a[48443] = anon_sym_GT_GT;
	v->a[48444] = anon_sym_LT_AMP;
	v->a[48445] = anon_sym_GT_AMP;
	v->a[48446] = anon_sym_GT_PIPE;
	v->a[48447] = anon_sym_LT_GT;
	v->a[48448] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[48449] = aux_sym_concatenation_token1;
	v->a[48450] = anon_sym_DOLLAR;
	v->a[48451] = anon_sym_DQUOTE;
	v->a[48452] = sym_raw_string;
	v->a[48453] = sym_number;
	v->a[48454] = anon_sym_DOLLAR_LBRACE;
	v->a[48455] = anon_sym_DOLLAR_LPAREN;
	v->a[48456] = anon_sym_BQUOTE;
	v->a[48457] = sym_word;
	v->a[48458] = 10;
	v->a[48459] = actions(3);
	small_parse_table_2423(v);
}

void	small_parse_table_2423(t_small_parse_table_array *v)
{
	v->a[48460] = 1;
	v->a[48461] = sym_comment;
	v->a[48462] = actions(746);
	v->a[48463] = 1;
	v->a[48464] = anon_sym_PIPE;
	v->a[48465] = actions(842);
	v->a[48466] = 1;
	v->a[48467] = anon_sym_SEMI_SEMI;
	v->a[48468] = actions(858);
	v->a[48469] = 1;
	v->a[48470] = anon_sym_SEMI;
	v->a[48471] = actions(1591);
	v->a[48472] = 1;
	v->a[48473] = aux_sym_heredoc_redirect_token1;
	v->a[48474] = state(529);
	v->a[48475] = 1;
	v->a[48476] = sym_terminator;
	v->a[48477] = actions(850);
	v->a[48478] = 2;
	v->a[48479] = anon_sym_LT_LT;
	small_parse_table_2424(v);
}

void	small_parse_table_2424(t_small_parse_table_array *v)
{
	v->a[48480] = anon_sym_LT_LT_DASH;
	v->a[48481] = actions(898);
	v->a[48482] = 2;
	v->a[48483] = anon_sym_AMP_AMP;
	v->a[48484] = anon_sym_PIPE_PIPE;
	v->a[48485] = state(984);
	v->a[48486] = 3;
	v->a[48487] = sym_file_redirect;
	v->a[48488] = sym_heredoc_redirect;
	v->a[48489] = aux_sym_redirected_statement_repeat1;
	v->a[48490] = actions(1676);
	v->a[48491] = 7;
	v->a[48492] = anon_sym_LT;
	v->a[48493] = anon_sym_GT;
	v->a[48494] = anon_sym_GT_GT;
	v->a[48495] = anon_sym_LT_AMP;
	v->a[48496] = anon_sym_GT_AMP;
	v->a[48497] = anon_sym_GT_PIPE;
	v->a[48498] = anon_sym_LT_GT;
	v->a[48499] = 3;
	small_parse_table_2425(v);
}

/* EOF small_parse_table_484.c */
