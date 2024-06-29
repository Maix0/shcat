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
	v->a[29000] = anon_sym_LT_AMP_DASH;
	v->a[29001] = anon_sym_GT_AMP_DASH;
	v->a[29002] = anon_sym_LT_LT;
	v->a[29003] = anon_sym_LT_LT_DASH;
	v->a[29004] = aux_sym_heredoc_redirect_token1;
	v->a[29005] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29006] = anon_sym_AMP;
	v->a[29007] = anon_sym_DOLLAR;
	v->a[29008] = anon_sym_DQUOTE;
	v->a[29009] = sym_raw_string;
	v->a[29010] = sym_number;
	v->a[29011] = anon_sym_DOLLAR_LBRACE;
	v->a[29012] = anon_sym_DOLLAR_LPAREN;
	v->a[29013] = anon_sym_BQUOTE;
	v->a[29014] = sym_word;
	v->a[29015] = anon_sym_SEMI;
	v->a[29016] = 3;
	v->a[29017] = actions(1074);
	v->a[29018] = 1;
	v->a[29019] = sym_comment;
	small_parse_table_1451(v);
}

void	small_parse_table_1451(t_small_parse_table_array *v)
{
	v->a[29020] = actions(1086);
	v->a[29021] = 13;
	v->a[29022] = anon_sym_PIPE;
	v->a[29023] = anon_sym_EQ;
	v->a[29024] = anon_sym_LT;
	v->a[29025] = anon_sym_GT;
	v->a[29026] = anon_sym_GT_GT;
	v->a[29027] = anon_sym_LT_LT;
	v->a[29028] = anon_sym_CARET;
	v->a[29029] = anon_sym_AMP;
	v->a[29030] = anon_sym_PLUS;
	v->a[29031] = anon_sym_DASH;
	v->a[29032] = anon_sym_STAR;
	v->a[29033] = anon_sym_SLASH;
	v->a[29034] = anon_sym_PERCENT;
	v->a[29035] = actions(1088);
	v->a[29036] = 21;
	v->a[29037] = anon_sym_AMP_AMP;
	v->a[29038] = anon_sym_PIPE_PIPE;
	v->a[29039] = anon_sym_RPAREN_RPAREN;
	small_parse_table_1452(v);
}

void	small_parse_table_1452(t_small_parse_table_array *v)
{
	v->a[29040] = anon_sym_PLUS_EQ;
	v->a[29041] = anon_sym_DASH_EQ;
	v->a[29042] = anon_sym_STAR_EQ;
	v->a[29043] = anon_sym_SLASH_EQ;
	v->a[29044] = anon_sym_PERCENT_EQ;
	v->a[29045] = anon_sym_LT_LT_EQ;
	v->a[29046] = anon_sym_GT_GT_EQ;
	v->a[29047] = anon_sym_AMP_EQ;
	v->a[29048] = anon_sym_CARET_EQ;
	v->a[29049] = anon_sym_PIPE_EQ;
	v->a[29050] = anon_sym_EQ_EQ;
	v->a[29051] = anon_sym_BANG_EQ;
	v->a[29052] = anon_sym_LT_EQ;
	v->a[29053] = anon_sym_GT_EQ;
	v->a[29054] = anon_sym_QMARK;
	v->a[29055] = anon_sym_COLON;
	v->a[29056] = anon_sym_PLUS_PLUS2;
	v->a[29057] = anon_sym_DASH_DASH2;
	v->a[29058] = 6;
	v->a[29059] = actions(3);
	small_parse_table_1453(v);
}

void	small_parse_table_1453(t_small_parse_table_array *v)
{
	v->a[29060] = 1;
	v->a[29061] = sym_comment;
	v->a[29062] = actions(1092);
	v->a[29063] = 1;
	v->a[29064] = aux_sym_concatenation_token1;
	v->a[29065] = actions(1096);
	v->a[29066] = 1;
	v->a[29067] = sym__concat;
	v->a[29068] = state(351);
	v->a[29069] = 1;
	v->a[29070] = aux_sym_concatenation_repeat1;
	v->a[29071] = actions(1094);
	v->a[29072] = 2;
	v->a[29073] = sym_file_descriptor;
	v->a[29074] = sym_variable_name;
	v->a[29075] = actions(1090);
	v->a[29076] = 29;
	v->a[29077] = anon_sym_PIPE;
	v->a[29078] = anon_sym_RPAREN;
	v->a[29079] = anon_sym_SEMI_SEMI;
	small_parse_table_1454(v);
}

void	small_parse_table_1454(t_small_parse_table_array *v)
{
	v->a[29080] = anon_sym_AMP_AMP;
	v->a[29081] = anon_sym_PIPE_PIPE;
	v->a[29082] = anon_sym_LT;
	v->a[29083] = anon_sym_GT;
	v->a[29084] = anon_sym_GT_GT;
	v->a[29085] = anon_sym_AMP_GT;
	v->a[29086] = anon_sym_AMP_GT_GT;
	v->a[29087] = anon_sym_LT_AMP;
	v->a[29088] = anon_sym_GT_AMP;
	v->a[29089] = anon_sym_GT_PIPE;
	v->a[29090] = anon_sym_LT_AMP_DASH;
	v->a[29091] = anon_sym_GT_AMP_DASH;
	v->a[29092] = anon_sym_LT_LT;
	v->a[29093] = anon_sym_LT_LT_DASH;
	v->a[29094] = aux_sym_heredoc_redirect_token1;
	v->a[29095] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[29096] = anon_sym_AMP;
	v->a[29097] = anon_sym_DOLLAR;
	v->a[29098] = anon_sym_DQUOTE;
	v->a[29099] = sym_raw_string;
	small_parse_table_1455(v);
}

/* EOF small_parse_table_290.c */
