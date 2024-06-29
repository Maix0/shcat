/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_340.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1700(t_small_parse_table_array *v)
{
	v->a[34000] = 2;
	v->a[34001] = anon_sym_GT_GT;
	v->a[34002] = anon_sym_LT_LT;
	v->a[34003] = actions(1154);
	v->a[34004] = 2;
	v->a[34005] = anon_sym_EQ_EQ;
	v->a[34006] = anon_sym_BANG_EQ;
	v->a[34007] = actions(1156);
	v->a[34008] = 2;
	v->a[34009] = anon_sym_LT_EQ;
	v->a[34010] = anon_sym_GT_EQ;
	v->a[34011] = actions(1158);
	v->a[34012] = 2;
	v->a[34013] = anon_sym_PLUS;
	v->a[34014] = anon_sym_DASH;
	v->a[34015] = actions(1162);
	v->a[34016] = 2;
	v->a[34017] = anon_sym_PLUS_PLUS2;
	v->a[34018] = anon_sym_DASH_DASH2;
	v->a[34019] = actions(1160);
	small_parse_table_1701(v);
}

void	small_parse_table_1701(t_small_parse_table_array *v)
{
	v->a[34020] = 3;
	v->a[34021] = anon_sym_STAR;
	v->a[34022] = anon_sym_SLASH;
	v->a[34023] = anon_sym_PERCENT;
	v->a[34024] = actions(1252);
	v->a[34025] = 10;
	v->a[34026] = anon_sym_PLUS_EQ;
	v->a[34027] = anon_sym_DASH_EQ;
	v->a[34028] = anon_sym_STAR_EQ;
	v->a[34029] = anon_sym_SLASH_EQ;
	v->a[34030] = anon_sym_PERCENT_EQ;
	v->a[34031] = anon_sym_LT_LT_EQ;
	v->a[34032] = anon_sym_GT_GT_EQ;
	v->a[34033] = anon_sym_AMP_EQ;
	v->a[34034] = anon_sym_CARET_EQ;
	v->a[34035] = anon_sym_PIPE_EQ;
	v->a[34036] = 3;
	v->a[34037] = actions(3);
	v->a[34038] = 1;
	v->a[34039] = sym_comment;
	small_parse_table_1702(v);
}

void	small_parse_table_1702(t_small_parse_table_array *v)
{
	v->a[34040] = actions(1070);
	v->a[34041] = 3;
	v->a[34042] = sym_file_descriptor;
	v->a[34043] = sym__concat;
	v->a[34044] = sym__bare_dollar;
	v->a[34045] = actions(1072);
	v->a[34046] = 30;
	v->a[34047] = anon_sym_esac;
	v->a[34048] = anon_sym_PIPE;
	v->a[34049] = anon_sym_SEMI_SEMI;
	v->a[34050] = anon_sym_AMP_AMP;
	v->a[34051] = anon_sym_PIPE_PIPE;
	v->a[34052] = anon_sym_LT;
	v->a[34053] = anon_sym_GT;
	v->a[34054] = anon_sym_GT_GT;
	v->a[34055] = anon_sym_AMP_GT;
	v->a[34056] = anon_sym_AMP_GT_GT;
	v->a[34057] = anon_sym_LT_AMP;
	v->a[34058] = anon_sym_GT_AMP;
	v->a[34059] = anon_sym_GT_PIPE;
	small_parse_table_1703(v);
}

void	small_parse_table_1703(t_small_parse_table_array *v)
{
	v->a[34060] = anon_sym_LT_AMP_DASH;
	v->a[34061] = anon_sym_GT_AMP_DASH;
	v->a[34062] = anon_sym_LT_LT;
	v->a[34063] = anon_sym_LT_LT_DASH;
	v->a[34064] = aux_sym_heredoc_redirect_token1;
	v->a[34065] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[34066] = anon_sym_AMP;
	v->a[34067] = aux_sym_concatenation_token1;
	v->a[34068] = anon_sym_DOLLAR;
	v->a[34069] = anon_sym_DQUOTE;
	v->a[34070] = sym_raw_string;
	v->a[34071] = sym_number;
	v->a[34072] = anon_sym_DOLLAR_LBRACE;
	v->a[34073] = anon_sym_DOLLAR_LPAREN;
	v->a[34074] = anon_sym_BQUOTE;
	v->a[34075] = sym_word;
	v->a[34076] = anon_sym_SEMI;
	v->a[34077] = 3;
	v->a[34078] = actions(3);
	v->a[34079] = 1;
	small_parse_table_1704(v);
}

void	small_parse_table_1704(t_small_parse_table_array *v)
{
	v->a[34080] = sym_comment;
	v->a[34081] = actions(1044);
	v->a[34082] = 3;
	v->a[34083] = sym_file_descriptor;
	v->a[34084] = sym__concat;
	v->a[34085] = sym_variable_name;
	v->a[34086] = actions(1042);
	v->a[34087] = 30;
	v->a[34088] = anon_sym_esac;
	v->a[34089] = anon_sym_PIPE;
	v->a[34090] = anon_sym_SEMI_SEMI;
	v->a[34091] = anon_sym_AMP_AMP;
	v->a[34092] = anon_sym_PIPE_PIPE;
	v->a[34093] = anon_sym_LT;
	v->a[34094] = anon_sym_GT;
	v->a[34095] = anon_sym_GT_GT;
	v->a[34096] = anon_sym_AMP_GT;
	v->a[34097] = anon_sym_AMP_GT_GT;
	v->a[34098] = anon_sym_LT_AMP;
	v->a[34099] = anon_sym_GT_AMP;
	small_parse_table_1705(v);
}

/* EOF small_parse_table_340.c */
