/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_1750.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_8750(t_small_parse_table_array *v)
{
	v->a[175000] = actions(7571);
	v->a[175001] = 11;
	v->a[175002] = anon_sym_PLUS_EQ;
	v->a[175003] = anon_sym_DASH_EQ;
	v->a[175004] = anon_sym_STAR_EQ;
	v->a[175005] = anon_sym_SLASH_EQ;
	v->a[175006] = anon_sym_PERCENT_EQ;
	v->a[175007] = anon_sym_STAR_STAR_EQ;
	v->a[175008] = anon_sym_LT_LT_EQ;
	v->a[175009] = anon_sym_GT_GT_EQ;
	v->a[175010] = anon_sym_AMP_EQ;
	v->a[175011] = anon_sym_CARET_EQ;
	v->a[175012] = anon_sym_PIPE_EQ;
	v->a[175013] = 8;
	v->a[175014] = actions(3);
	v->a[175015] = 1;
	v->a[175016] = sym_comment;
	v->a[175017] = actions(1241);
	v->a[175018] = 1;
	v->a[175019] = sym_file_descriptor;
	small_parse_table_8751(v);
}

void	small_parse_table_8751(t_small_parse_table_array *v)
{
	v->a[175020] = actions(7673);
	v->a[175021] = 1;
	v->a[175022] = anon_sym_DQUOTE;
	v->a[175023] = actions(7677);
	v->a[175024] = 1;
	v->a[175025] = sym_variable_name;
	v->a[175026] = state(4393);
	v->a[175027] = 1;
	v->a[175028] = sym_string;
	v->a[175029] = actions(7675);
	v->a[175030] = 2;
	v->a[175031] = aux_sym__simple_variable_name_token1;
	v->a[175032] = aux_sym__multiline_variable_name_token1;
	v->a[175033] = actions(7671);
	v->a[175034] = 9;
	v->a[175035] = anon_sym_DASH;
	v->a[175036] = anon_sym_STAR;
	v->a[175037] = anon_sym_BANG;
	v->a[175038] = anon_sym_QMARK;
	v->a[175039] = anon_sym_DOLLAR;
	small_parse_table_8752(v);
}

void	small_parse_table_8752(t_small_parse_table_array *v)
{
	v->a[175040] = anon_sym_POUND;
	v->a[175041] = anon_sym_AT2;
	v->a[175042] = anon_sym_0;
	v->a[175043] = anon_sym__;
	v->a[175044] = actions(1239);
	v->a[175045] = 21;
	v->a[175046] = anon_sym_SEMI;
	v->a[175047] = anon_sym_PIPE_PIPE;
	v->a[175048] = anon_sym_AMP_AMP;
	v->a[175049] = anon_sym_PIPE;
	v->a[175050] = anon_sym_AMP;
	v->a[175051] = anon_sym_LT;
	v->a[175052] = anon_sym_GT;
	v->a[175053] = anon_sym_LT_LT;
	v->a[175054] = anon_sym_GT_GT;
	v->a[175055] = anon_sym_SEMI_SEMI;
	v->a[175056] = anon_sym_PIPE_AMP;
	v->a[175057] = anon_sym_AMP_GT;
	v->a[175058] = anon_sym_AMP_GT_GT;
	v->a[175059] = anon_sym_LT_AMP;
	small_parse_table_8753(v);
}

void	small_parse_table_8753(t_small_parse_table_array *v)
{
	v->a[175060] = anon_sym_GT_AMP;
	v->a[175061] = anon_sym_GT_PIPE;
	v->a[175062] = anon_sym_LT_AMP_DASH;
	v->a[175063] = anon_sym_GT_AMP_DASH;
	v->a[175064] = anon_sym_LT_LT_DASH;
	v->a[175065] = aux_sym_heredoc_redirect_token1;
	v->a[175066] = anon_sym_BQUOTE;
	v->a[175067] = 8;
	v->a[175068] = actions(3);
	v->a[175069] = 1;
	v->a[175070] = sym_comment;
	v->a[175071] = actions(1235);
	v->a[175072] = 1;
	v->a[175073] = sym_file_descriptor;
	v->a[175074] = actions(7673);
	v->a[175075] = 1;
	v->a[175076] = anon_sym_DQUOTE;
	v->a[175077] = actions(7677);
	v->a[175078] = 1;
	v->a[175079] = sym_variable_name;
	small_parse_table_8754(v);
}

void	small_parse_table_8754(t_small_parse_table_array *v)
{
	v->a[175080] = state(4393);
	v->a[175081] = 1;
	v->a[175082] = sym_string;
	v->a[175083] = actions(7675);
	v->a[175084] = 2;
	v->a[175085] = aux_sym__simple_variable_name_token1;
	v->a[175086] = aux_sym__multiline_variable_name_token1;
	v->a[175087] = actions(7671);
	v->a[175088] = 9;
	v->a[175089] = anon_sym_DASH;
	v->a[175090] = anon_sym_STAR;
	v->a[175091] = anon_sym_BANG;
	v->a[175092] = anon_sym_QMARK;
	v->a[175093] = anon_sym_DOLLAR;
	v->a[175094] = anon_sym_POUND;
	v->a[175095] = anon_sym_AT2;
	v->a[175096] = anon_sym_0;
	v->a[175097] = anon_sym__;
	v->a[175098] = actions(1227);
	v->a[175099] = 21;
	small_parse_table_8755(v);
}

/* EOF small_parse_table_1750.c */
