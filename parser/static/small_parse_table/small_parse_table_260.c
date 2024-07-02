/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_260.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1300(t_small_parse_table_array *v)
{
	v->a[26000] = 3;
	v->a[26001] = aux_sym_heredoc_redirect_token1;
	v->a[26002] = anon_sym_AMP;
	v->a[26003] = anon_sym_SEMI;
	v->a[26004] = state(1134);
	v->a[26005] = 3;
	v->a[26006] = sym_file_redirect;
	v->a[26007] = sym_heredoc_redirect;
	v->a[26008] = aux_sym_redirected_statement_repeat1;
	v->a[26009] = actions(690);
	v->a[26010] = 16;
	v->a[26011] = anon_sym_LT;
	v->a[26012] = anon_sym_GT;
	v->a[26013] = anon_sym_GT_GT;
	v->a[26014] = anon_sym_LT_AMP;
	v->a[26015] = anon_sym_GT_AMP;
	v->a[26016] = anon_sym_GT_PIPE;
	v->a[26017] = anon_sym_LT_GT;
	v->a[26018] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[26019] = anon_sym_DOLLAR;
	small_parse_table_1301(v);
}

void	small_parse_table_1301(t_small_parse_table_array *v)
{
	v->a[26020] = anon_sym_DQUOTE;
	v->a[26021] = sym_raw_string;
	v->a[26022] = sym_number;
	v->a[26023] = anon_sym_DOLLAR_LBRACE;
	v->a[26024] = anon_sym_DOLLAR_LPAREN;
	v->a[26025] = anon_sym_BQUOTE;
	v->a[26026] = sym_word;
	v->a[26027] = 15;
	v->a[26028] = actions(680);
	v->a[26029] = 1;
	v->a[26030] = sym_comment;
	v->a[26031] = actions(844);
	v->a[26032] = 1;
	v->a[26033] = anon_sym_EQ;
	v->a[26034] = actions(971);
	v->a[26035] = 1;
	v->a[26036] = anon_sym_PIPE;
	v->a[26037] = actions(973);
	v->a[26038] = 1;
	v->a[26039] = anon_sym_AMP_AMP;
	small_parse_table_1302(v);
}

void	small_parse_table_1302(t_small_parse_table_array *v)
{
	v->a[26040] = actions(975);
	v->a[26041] = 1;
	v->a[26042] = anon_sym_PIPE_PIPE;
	v->a[26043] = actions(979);
	v->a[26044] = 1;
	v->a[26045] = anon_sym_CARET;
	v->a[26046] = actions(981);
	v->a[26047] = 1;
	v->a[26048] = anon_sym_AMP;
	v->a[26049] = actions(947);
	v->a[26050] = 2;
	v->a[26051] = anon_sym_GT_GT;
	v->a[26052] = anon_sym_LT_LT;
	v->a[26053] = actions(949);
	v->a[26054] = 2;
	v->a[26055] = anon_sym_PLUS;
	v->a[26056] = anon_sym_DASH;
	v->a[26057] = actions(953);
	v->a[26058] = 2;
	v->a[26059] = anon_sym_PLUS_PLUS2;
	small_parse_table_1303(v);
}

void	small_parse_table_1303(t_small_parse_table_array *v)
{
	v->a[26060] = anon_sym_DASH_DASH2;
	v->a[26061] = actions(977);
	v->a[26062] = 2;
	v->a[26063] = anon_sym_LT;
	v->a[26064] = anon_sym_GT;
	v->a[26065] = actions(983);
	v->a[26066] = 2;
	v->a[26067] = anon_sym_EQ_EQ;
	v->a[26068] = anon_sym_BANG_EQ;
	v->a[26069] = actions(985);
	v->a[26070] = 2;
	v->a[26071] = anon_sym_LT_EQ;
	v->a[26072] = anon_sym_GT_EQ;
	v->a[26073] = actions(951);
	v->a[26074] = 3;
	v->a[26075] = anon_sym_STAR;
	v->a[26076] = anon_sym_SLASH;
	v->a[26077] = anon_sym_PERCENT;
	v->a[26078] = actions(846);
	v->a[26079] = 12;
	small_parse_table_1304(v);
}

void	small_parse_table_1304(t_small_parse_table_array *v)
{
	v->a[26080] = anon_sym_RPAREN;
	v->a[26081] = anon_sym_PLUS_EQ;
	v->a[26082] = anon_sym_DASH_EQ;
	v->a[26083] = anon_sym_STAR_EQ;
	v->a[26084] = anon_sym_SLASH_EQ;
	v->a[26085] = anon_sym_PERCENT_EQ;
	v->a[26086] = anon_sym_LT_LT_EQ;
	v->a[26087] = anon_sym_GT_GT_EQ;
	v->a[26088] = anon_sym_AMP_EQ;
	v->a[26089] = anon_sym_CARET_EQ;
	v->a[26090] = anon_sym_PIPE_EQ;
	v->a[26091] = anon_sym_QMARK;
	v->a[26092] = 17;
	v->a[26093] = actions(668);
	v->a[26094] = 1;
	v->a[26095] = anon_sym_AMP;
	v->a[26096] = actions(680);
	v->a[26097] = 1;
	v->a[26098] = sym_comment;
	v->a[26099] = actions(730);
	small_parse_table_1305(v);
}

/* EOF small_parse_table_260.c */
