/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_290.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1450(t_small_parse_table_array *v)
{
	v->a[29000] = anon_sym_EQ_EQ;
	v->a[29001] = anon_sym_BANG_EQ;
	v->a[29002] = anon_sym_LT_EQ;
	v->a[29003] = anon_sym_GT_EQ;
	v->a[29004] = anon_sym_QMARK;
	v->a[29005] = anon_sym_COLON;
	v->a[29006] = 6;
	v->a[29007] = actions(3);
	v->a[29008] = 1;
	v->a[29009] = sym_comment;
	v->a[29010] = actions(379);
	v->a[29011] = 1;
	v->a[29012] = sym_file_descriptor;
	v->a[29013] = actions(1137);
	v->a[29014] = 1;
	v->a[29015] = sym_variable_name;
	v->a[29016] = actions(1135);
	v->a[29017] = 2;
	v->a[29018] = aux_sym__simple_variable_name_token1;
	v->a[29019] = aux_sym__multiline_variable_name_token1;
	small_parse_table_1451(v);
}

void	small_parse_table_1451(t_small_parse_table_array *v)
{
	v->a[29020] = actions(1133);
	v->a[29021] = 9;
	v->a[29022] = anon_sym_BANG;
	v->a[29023] = anon_sym_DASH;
	v->a[29024] = anon_sym_STAR;
	v->a[29025] = anon_sym_QMARK;
	v->a[29026] = anon_sym_DOLLAR;
	v->a[29027] = anon_sym_POUND;
	v->a[29028] = anon_sym_AT;
	v->a[29029] = anon_sym_0;
	v->a[29030] = anon_sym__;
	v->a[29031] = actions(381);
	v->a[29032] = 21;
	v->a[29033] = anon_sym_AMP_AMP;
	v->a[29034] = anon_sym_PIPE_PIPE;
	v->a[29035] = anon_sym_LT;
	v->a[29036] = anon_sym_GT;
	v->a[29037] = anon_sym_GT_GT;
	v->a[29038] = anon_sym_AMP_GT;
	v->a[29039] = anon_sym_AMP_GT_GT;
	small_parse_table_1452(v);
}

void	small_parse_table_1452(t_small_parse_table_array *v)
{
	v->a[29040] = anon_sym_LT_AMP;
	v->a[29041] = anon_sym_GT_AMP;
	v->a[29042] = anon_sym_GT_PIPE;
	v->a[29043] = anon_sym_LT_AMP_DASH;
	v->a[29044] = anon_sym_GT_AMP_DASH;
	v->a[29045] = aux_sym_heredoc_redirect_token1;
	v->a[29046] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29047] = anon_sym_DQUOTE;
	v->a[29048] = sym_raw_string;
	v->a[29049] = sym_number;
	v->a[29050] = anon_sym_DOLLAR_LBRACE;
	v->a[29051] = anon_sym_DOLLAR_LPAREN;
	v->a[29052] = anon_sym_BQUOTE;
	v->a[29053] = sym_word;
	v->a[29054] = 3;
	v->a[29055] = actions(3);
	v->a[29056] = 1;
	v->a[29057] = sym_comment;
	v->a[29058] = actions(1076);
	v->a[29059] = 3;
	small_parse_table_1453(v);
}

void	small_parse_table_1453(t_small_parse_table_array *v)
{
	v->a[29060] = sym_file_descriptor;
	v->a[29061] = sym__concat;
	v->a[29062] = sym__bare_dollar;
	v->a[29063] = actions(1074);
	v->a[29064] = 31;
	v->a[29065] = anon_sym_LPAREN;
	v->a[29066] = anon_sym_PIPE;
	v->a[29067] = anon_sym_RPAREN;
	v->a[29068] = anon_sym_SEMI_SEMI;
	v->a[29069] = anon_sym_AMP_AMP;
	v->a[29070] = anon_sym_PIPE_PIPE;
	v->a[29071] = anon_sym_LT;
	v->a[29072] = anon_sym_GT;
	v->a[29073] = anon_sym_GT_GT;
	v->a[29074] = anon_sym_AMP_GT;
	v->a[29075] = anon_sym_AMP_GT_GT;
	v->a[29076] = anon_sym_LT_AMP;
	v->a[29077] = anon_sym_GT_AMP;
	v->a[29078] = anon_sym_GT_PIPE;
	v->a[29079] = anon_sym_LT_AMP_DASH;
	small_parse_table_1454(v);
}

void	small_parse_table_1454(t_small_parse_table_array *v)
{
	v->a[29080] = anon_sym_GT_AMP_DASH;
	v->a[29081] = anon_sym_LT_LT;
	v->a[29082] = anon_sym_LT_LT_DASH;
	v->a[29083] = aux_sym_heredoc_redirect_token1;
	v->a[29084] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29085] = anon_sym_AMP;
	v->a[29086] = aux_sym_concatenation_token1;
	v->a[29087] = anon_sym_DOLLAR;
	v->a[29088] = anon_sym_DQUOTE;
	v->a[29089] = sym_raw_string;
	v->a[29090] = sym_number;
	v->a[29091] = anon_sym_DOLLAR_LBRACE;
	v->a[29092] = anon_sym_DOLLAR_LPAREN;
	v->a[29093] = anon_sym_BQUOTE;
	v->a[29094] = sym_word;
	v->a[29095] = anon_sym_SEMI;
	v->a[29096] = 3;
	v->a[29097] = actions(3);
	v->a[29098] = 1;
	v->a[29099] = sym_comment;
	small_parse_table_1455(v);
}

/* EOF small_parse_table_290.c */
