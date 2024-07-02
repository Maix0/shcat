/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_parse_table_230.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maiboyer <maiboyer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/14 19:17:54 by maiboyer          #+#    #+#             */
/*   Updated: 2024/04/14 19:18:20 by maiboyer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./small_parse_table.h"

void	small_parse_table_1150(t_small_parse_table_array *v)
{
	v->a[23000] = anon_sym_PLUS_EQ;
	v->a[23001] = anon_sym_DASH_EQ;
	v->a[23002] = anon_sym_STAR_EQ;
	v->a[23003] = anon_sym_SLASH_EQ;
	v->a[23004] = anon_sym_PERCENT_EQ;
	v->a[23005] = anon_sym_LT_LT_EQ;
	v->a[23006] = anon_sym_GT_GT_EQ;
	v->a[23007] = anon_sym_AMP_EQ;
	v->a[23008] = anon_sym_CARET_EQ;
	v->a[23009] = anon_sym_PIPE_EQ;
	v->a[23010] = anon_sym_EQ_EQ;
	v->a[23011] = anon_sym_BANG_EQ;
	v->a[23012] = anon_sym_LT_EQ;
	v->a[23013] = anon_sym_GT_EQ;
	v->a[23014] = anon_sym_QMARK;
	v->a[23015] = anon_sym_COLON;
	v->a[23016] = anon_sym_PLUS_PLUS2;
	v->a[23017] = anon_sym_DASH_DASH2;
	v->a[23018] = 3;
	v->a[23019] = actions(680);
	small_parse_table_1151(v);
}

void	small_parse_table_1151(t_small_parse_table_array *v)
{
	v->a[23020] = 1;
	v->a[23021] = sym_comment;
	v->a[23022] = actions(837);
	v->a[23023] = 13;
	v->a[23024] = anon_sym_PIPE;
	v->a[23025] = anon_sym_EQ;
	v->a[23026] = anon_sym_LT;
	v->a[23027] = anon_sym_GT;
	v->a[23028] = anon_sym_GT_GT;
	v->a[23029] = anon_sym_LT_LT;
	v->a[23030] = anon_sym_CARET;
	v->a[23031] = anon_sym_AMP;
	v->a[23032] = anon_sym_PLUS;
	v->a[23033] = anon_sym_DASH;
	v->a[23034] = anon_sym_STAR;
	v->a[23035] = anon_sym_SLASH;
	v->a[23036] = anon_sym_PERCENT;
	v->a[23037] = actions(839);
	v->a[23038] = 21;
	v->a[23039] = anon_sym_AMP_AMP;
	small_parse_table_1152(v);
}

void	small_parse_table_1152(t_small_parse_table_array *v)
{
	v->a[23040] = anon_sym_PIPE_PIPE;
	v->a[23041] = anon_sym_RPAREN_RPAREN;
	v->a[23042] = anon_sym_PLUS_EQ;
	v->a[23043] = anon_sym_DASH_EQ;
	v->a[23044] = anon_sym_STAR_EQ;
	v->a[23045] = anon_sym_SLASH_EQ;
	v->a[23046] = anon_sym_PERCENT_EQ;
	v->a[23047] = anon_sym_LT_LT_EQ;
	v->a[23048] = anon_sym_GT_GT_EQ;
	v->a[23049] = anon_sym_AMP_EQ;
	v->a[23050] = anon_sym_CARET_EQ;
	v->a[23051] = anon_sym_PIPE_EQ;
	v->a[23052] = anon_sym_EQ_EQ;
	v->a[23053] = anon_sym_BANG_EQ;
	v->a[23054] = anon_sym_LT_EQ;
	v->a[23055] = anon_sym_GT_EQ;
	v->a[23056] = anon_sym_QMARK;
	v->a[23057] = anon_sym_COLON;
	v->a[23058] = anon_sym_PLUS_PLUS2;
	v->a[23059] = anon_sym_DASH_DASH2;
	small_parse_table_1153(v);
}

void	small_parse_table_1153(t_small_parse_table_array *v)
{
	v->a[23060] = 14;
	v->a[23061] = actions(3);
	v->a[23062] = 1;
	v->a[23063] = sym_comment;
	v->a[23064] = actions(547);
	v->a[23065] = 1;
	v->a[23066] = anon_sym_DOLLAR_LPAREN_LPAREN;
	v->a[23067] = actions(550);
	v->a[23068] = 1;
	v->a[23069] = anon_sym_DOLLAR;
	v->a[23070] = actions(553);
	v->a[23071] = 1;
	v->a[23072] = anon_sym_DQUOTE;
	v->a[23073] = actions(556);
	v->a[23074] = 1;
	v->a[23075] = anon_sym_DOLLAR_LBRACE;
	v->a[23076] = actions(559);
	v->a[23077] = 1;
	v->a[23078] = anon_sym_DOLLAR_LPAREN;
	v->a[23079] = actions(562);
	small_parse_table_1154(v);
}

void	small_parse_table_1154(t_small_parse_table_array *v)
{
	v->a[23080] = 1;
	v->a[23081] = anon_sym_BQUOTE;
	v->a[23082] = actions(565);
	v->a[23083] = 1;
	v->a[23084] = sym_file_descriptor;
	v->a[23085] = actions(567);
	v->a[23086] = 1;
	v->a[23087] = sym__bare_dollar;
	v->a[23088] = state(246);
	v->a[23089] = 1;
	v->a[23090] = aux_sym_command_repeat2;
	v->a[23091] = state(662);
	v->a[23092] = 1;
	v->a[23093] = sym_concatenation;
	v->a[23094] = actions(841);
	v->a[23095] = 3;
	v->a[23096] = sym_raw_string;
	v->a[23097] = sym_number;
	v->a[23098] = sym_word;
	v->a[23099] = state(490);
	small_parse_table_1155(v);
}

/* EOF small_parse_table_230.c */
